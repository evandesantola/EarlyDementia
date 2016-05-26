/*
{
  "merchant_id": "string",
  "medium": "balance",
  "purchase_date": "2016-05-26",
  "amount": 0,
  "status": "pending",
  "description": "string"
}
*/


#include <iostream>
#include <stdlib.h>

using namespace std;

//grocery once a week 
//restaurant twice a week 
//shopping twice a month
//bar once a month
//gas once a week
//amazon once a week 
//music once every two weeks
//rent once a month
//electric once a month
//insurance once a month
//water once a month


int main()
{
	//Bob Jones
	int balance = 100000;
	int randomnum = 0;
	int dategen = 2010;
	int dategen1 = 1; 
	int currday = 1;
	for (int i = 0; i < 1000; ++i)
	{
		if (i % 365 == 0)
		{
			dategen++;
		}
		++currday;
		if (currday == 30)
		{
			dategen1++;
			if (dategen1 > 12)
				dategen1 = 1;
			currday = 1;
		}
		//grocery
		if (i % 7 == 0) 
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 100 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Walmart\"" << endl;
			cout << "}" << endl << endl;
		}
		//restaurant
		if (i % 7 == 3 || i % 7 == 6)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 50 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			randomnum = rand() % 5 + 1;
			if (randomnum == 0)
			{
				cout << "\"description\": \"McDonalds\"" << endl;
			}
			else if (randomnum == 1)
			{
				cout << "\"description\": \"Burger King\"" << endl;
			}
			else if (randomnum == 2)
			{
				cout << "\"description\": \"Taco Bell\"" << endl;
			}
			else if (randomnum == 3)
			{
				cout << "\"description\": \"Del Taco\"" << endl;
			}
			else if (randomnum == 4)
			{
				cout << "\"description\": \"Coldstone\"" << endl;
			}
			else
			{
				cout << "\"description\": \"Wendy's\"" << endl;
			}
cout << "}" << endl << endl;
		}
		//shopping
		if (i % 30 == 14 || i % 30 == 25)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 150 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Tysons Mall\"" << endl;
			cout << "}" << endl << endl;
		}
		//bar
		if (i % 30 == 10)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 40 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Bar\"" << endl;
			cout << "}" << endl << endl;
		}
		//gas
		if (i % 7 == 2)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = 40; 
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Costco gas\"" << endl;
			cout << "}" << endl << endl;
		}
		//amazon
		if (i % 7 == 4)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 30 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Amazon\"" << endl;
			cout << "}" << endl << endl;
		}
		//music
		if (i % 14 == 9)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = rand() % 5 + 1;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"iTunes\"" << endl;
			cout << "}" << endl << endl;
		}
		//rent
		if (i % 31 == 0)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = 1000;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Rent\"" << endl;
			cout << "}" << endl << endl;
		}
		//electric
		if (i % 31 == 0)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = 40;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Edison\"" << endl;
			cout << "}" << endl << endl;
		}
		//insurance
		if (i % 31 == 0)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		
			randomnum = 100;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Geico\"" << endl;
			cout << "}" << endl;
		
cout << endl;
}
		//water
		if (i % 30 == 0)
		{
			
				cout << "{\n";
		cout << "\"merchant_id\": \"574728178a710f8e12324ee7\"," << endl;
		randomnum = 80;
			cout << "\"medium\": \"" << balance << "\"," << endl;
			balance -= randomnum;
			if (currday < 10)
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << '0' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << '0' << currday << "\"," << endl;
			}
			else
			{
				if (dategen1 < 10)
		    		cout << "\"purchase_date\": \"" << dategen << '-' << '0' << dategen1 <<  '-' << currday << "\"," << endl;
		    	else
		    		cout << "\"purchase_date\": \"" << dategen << '-' << dategen1 << '-' << currday << "\"," << endl;
			}
			cout << "\"amount\": \"" << randomnum << "\"," << endl;
			cout << "\"status\": \"pending\"," << endl;
			cout << "\"description\": \"Water bill\"" << endl;
			cout << "}" << endl << endl;
		}
	}
}