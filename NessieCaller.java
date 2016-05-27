import org.json.JSONObject;

public class NessieCaller {
	
	public static void main(String[] args) throws Exception{
		Data derrick = new Data(100, 014514, "coolBeans", 2000, 5, 63);
		JSONObject resultsFromAPI = derrick.getHTML();
		resultsFromAPI = derrick.deleteJSONJunk(resultsFromAPI);
		resultsFromAPI = derrick.determineMerchantUses(resultsFromAPI);
		resultsFromAPI = derrick.determineBalance(resultsFromAPI);
		
		System.out.println(resultsFromAPI);
		
		//send to Evan
	}
	
	
}