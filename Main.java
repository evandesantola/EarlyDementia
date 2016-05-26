//nessieClient.setAPIKey("ef036cbe3a2bb3381f912a82a8b767b8");
package com.reimaginebanking.api.java;

import java.io.*;
import java.net.*;
import java.text.*;
import java.text.SimpleDateFormat;
import java.util.*;
import java.text.DateFormat;
import java.text.ParseException;
import java.util.TimeZone;
import java.lang.*;
import com.reimaginebanking.api.java.*;


public class Main {

	public class Data {
		int price;
		long date;
		String merchant;
		int balance;
		int storevispermonth;
		int storevistotal;

		public Data(int price_in, long date_in, String merchant_in, int balance_in, int storevispermonth_in, int storevistotal_in)
		{
			price = price_in;
			date = date_in;
			merchant = merchant_in;
			balance = balance_in;
			storevispermonth = storevispermonth_in;
			storevistotal = storevistotal_in;
		}
	}

   public Data getHTML() throws Exception {
      String urlToRead = "http://api.reimaginebanking.com/accounts/5747441a8a710f8e12324f7f/purchases?key=ef036cbe3a2bb3381f912a82a8b767b8";
	  int initialbalance = 100000;
      StringBuilder result = new StringBuilder();
      URL url = new URL(urlToRead);
      HttpURLConnection conn = (HttpURLConnection) url.openConnection();
      conn.setRequestMethod("GET");
      BufferedReader rd = new BufferedReader(new InputStreamReader(conn.getInputStream()));
      String line;
      Data temp = new Data(0,0,"",0,0,0);
      int count = 0;
      while ((line = rd.readLine()) != null) {
         if (count == 3)
         {
         	String tempo = "";
         	long unixtime;
         	for (int i = 0; i < line.length(); ++i)
         	{
         		if (line.charAt(i) != '-')
         		{
         			tempo += line.charAt(i);
         		} 
         	}
         	DateFormat dfm = new SimpleDateFormat(tempo);
         	unixtime = dfm.parse(tempo).getTime();
         	unixtime /= 1000;
         	temp.date = unixtime;
         	System.out.println(temp.date);
         }
         else if (count == 4)
         {
         	int prce = 0;
         	for (int i = 0; i < line.length(); ++i)
         	{
         		char cur = line.charAt(i);
         		if (cur == '0' || cur == '1' || cur == '2' || cur == '3' || cur == '4'
         			|| cur == '5' || cur == '6' || cur == '7' || cur == '8' || cur == '9')
         		{
         			prce += cur;
         		}
         	}
         	temp.price = prce;
         	temp.balance = initialbalance - prce;
         	initialbalance -= prce;
         	System.out.println(temp.price);
         }
         else if (count == 6)
         {
         	temp.merchant = line;
         	System.out.println(temp.merchant);
         }
      }
      rd.close();
      System.out.println(result);
      return temp; 
   }

  /* public static void main(String[] args) throws Exception{
     System.out.println(getHTML(args[0], 10));
   }*/
}

