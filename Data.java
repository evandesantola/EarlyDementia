import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import org.json.JSONObject;


//Data object for NessieCaller



public class Data {
	int price;
	long date;
	String merchant;
	int balance;
	int storevispermonth;
	int storevistotal;
	
	public Data(int price_in, long date_in, String merchant_in, int balance_in, int storevispermonth_in, int storevistotal_in){
		price = price_in;
		date = date_in;
		merchant = merchant_in;
		balance = balance_in;
		storevispermonth = storevispermonth_in;
		storevistotal = storevistotal_in;
	}
	
	public JSONObject getHTML() throws Exception {
		
		//calling the API
		String urlToRead = "http://api.reimaginebanking.com/accounts/5747441a8a710f8e12324f7f/purchases?key=ef036cbe3a2bb3381f912a82a8b767b8";
		
		URL url = new URL(urlToRead);
		HttpURLConnection conn = (HttpURLConnection) url.openConnection();
		
		conn.setRequestMethod("GET");
		BufferedReader rd = new BufferedReader(new InputStreamReader(conn.getInputStream()));
		String line;
		StringBuilder response = new StringBuilder();
		
		while ((line = rd.readLine()) != null) {
            response.append(line);
        }
        rd.close();
        
        String returnLine = response.toString();
        returnLine = returnLine.substring(1, returnLine.length());
		
        JSONObject json = new JSONObject(returnLine);
        
		return json;
		
	   }

	//deleting unnecessary response attributes
	public JSONObject deleteJSONJunk(JSONObject initialBody){
		JSONObject initialJSON = initialBody;
		initialJSON.remove("payer_id");
		initialJSON.remove("merchant_id");
		initialJSON.remove("_id");
		initialJSON.remove("medium");
		initialJSON.remove("payee_id");
		initialJSON.remove("type");
		initialJSON.remove("status");
		
		return initialJSON;
	}
	
	public JSONObject determineMerchantUses(JSONObject initialObj){
		//determine total
		
		
		//determine per month
		
		return null;
		
		
	}
		
	public JSONObject determineBalance(JSONObject initialObj) {
		
		
		return null;
	}
		
		
		
		
//		int count = 0;
//		while ((line = rd.readLine()) != null) {
//	         if (count == 3)
//	         {
//	         	String tempo = "";
//	         	long unixtime;
//	         	for (int i = 0; i < line.length(); ++i)
//	         	{
//	         		if (line.charAt(i) != '-')
//	         		{
//	         			tempo += line.charAt(i);
//	         		} 
//	         	}
//	         	DateFormat dfm = new SimpleDateFormat(tempo);
//	         	unixtime = dfm.parse(tempo).getTime();
//	         	unixtime /= 1000;
//	         	temp.date = unixtime;
//	         	System.out.println(temp.date);
//	         }
//	         else if (count == 4)
//	         {
//	         	int prce = 0;
//	         	for (int i = 0; i < line.length(); ++i)
//	         	{
//	         		char cur = line.charAt(i);
//	         		if (cur == '0' || cur == '1' || cur == '2' || cur == '3' || cur == '4'
//	         			|| cur == '5' || cur == '6' || cur == '7' || cur == '8' || cur == '9')
//	         		{
//	         			prce += cur;
//	         		}
//	         	}
//	         	temp.price = prce;
//	         	temp.balance = initialbalance - prce;
//	         	initialbalance -= prce;
//	         	System.out.println(temp.price);
//	         }
//	         else if (count == 6)
//	         {
//	         	temp.merchant = line;
//	         	System.out.println(temp.merchant);
//	         }
//	      }
//	      rd.close();
//	      System.out.println(result);
//	      
//	      int initialbalance = 100000;
//
//	      
//	      
//	      return temp; 
		

	
	
	@Override
	public String toString() {
		return "Data [price=" + price + ", date=" + date + ", merchant="
				+ merchant + ", balance=" + balance + ", storevispermonth="
				+ storevispermonth + ", storevistotal=" + storevistotal + "]";
	}
	}