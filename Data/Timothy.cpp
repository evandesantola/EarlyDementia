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
	//Timothy Smith
	int balance = 1000000;
	int randomnum = 0;
	int dategen = 2010;
	int dategen1 = 1; 
	int currday = 1;
	for (int i = 0; i < 500; ++i)
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
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








int ran = 0;
	for (int i = 0; i < 250; ++i)
	{
		++ran;
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
		if (ran == 1 || ran == 103)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
			cout << "\"description\": \"Kay Jewelers\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 10 || ran == 41)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 1300;
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
			cout << "\"description\": \"Gas station\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 21 || ran == 53)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 750;
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
			cout << "\"description\": \"Art store\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 35 || ran == 3)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 7000;
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
			cout << "\"description\": \"Club\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 50 || ran == 200)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 40000;
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
			cout << "\"description\": \"BMW\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 85 || ran == 4 || ran == 59)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 35000;
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
			cout << "\"description\": \"Tesla\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 103 || ran == 42)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 4000;
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
			cout << "\"description\": \"Bird\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 110 || ran == 68)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 150;
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
			cout << "\"description\": \"Dog\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 130 || ran == 178)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 800;
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
			cout << "\"description\": \"Dog food\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 145 || ran == 198)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 500;
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
			cout << "\"description\": \"Cat food\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 160 || ran == 240)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 345;
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
			cout << "\"description\": \"Xbox\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 180 || ran == 249)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 205;
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
			cout << "\"description\": \"Target\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 204 || ran == 245)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 5050;
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
			cout << "\"description\": \"Concert\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 240 || ran == 158)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 1000 + 1;
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
			cout << "\"description\": \"Redskins\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 13 || ran == 205)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 3000;
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
			cout << "\"description\": \"Nationals\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 220)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 500;
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
			cout << "\"description\": \"Bosley\"" << endl;
			cout << "}" << endl << endl;
		}
		//grocery
		if (i % 7 == 0) 
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		
		//shopping
		if (i % 30 == 14 || i % 30 == 25)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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

		//gas
		if (i % 7 == 2)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		
		//rent
		if (i % 31 == 0)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
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






ran = 0;
for (int i = 0; i < 255; ++i)
	{
		++ran;
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
		if (ran == 1 || ran == 49)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
			cout << "\"description\": \"Diamond Jewelers\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 10 || ran == 39)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 1300;
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
			cout << "\"description\": \"Guitar\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 21 || ran == 19)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 750;
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
			cout << "\"description\": \"Scam\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 35 || ran == 200)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 7000;
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
			cout << "\"description\": \"iPhone\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 50|| ran == 147)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 40000;
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
			cout << "\"description\": \"Credit card\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 85 || ran == 130)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 35000;
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
			cout << "\"description\": \"Chocolate\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 103 || ran == 90)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 4000;
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
			cout << "\"description\": \"Phone\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 110 || ran == 48)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 150;
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
			cout << "\"description\": \"Fish\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 130 || ran == 180)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 800;
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
			cout << "\"description\": \"Blender\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 145 || ran == 248)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 5030;
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
			cout << "\"description\": \"Rat\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 160 || ran == 210)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 2052;
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
			cout << "\"description\": \"PS4\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 180 || ran == 42)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 205;
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
			cout << "\"description\": \"MLB\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 204)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 5550;
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
			cout << "\"description\": \"Front row seats\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 240)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 1000 + 1;
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
			cout << "\"description\": \"Nats\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 13 || ran == 150)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 3000;
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
			cout << "\"description\": \"Home App\"" << endl;
			cout << "}" << endl << endl;
		}

		if (ran == 260)
		{
			cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
			randomnum = 500;
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
			cout << "\"description\": \"Dance\"" << endl;
			cout << "}" << endl << endl;
		}

		//restaurant
		if (i % 7 == 3 || i % 7 == 6)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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

		//bar
		if (i % 30 == 10)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		
		//amazon
		if (i % 7 == 4)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		
		//insurance
		if (i % 31 == 0)
		{
				cout << "{\n";
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
		
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
		cout << "\"merchant_id\": \"574728b28a710f8e12324ee9\"," << endl;
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