/*
Title: Chapter 3 exercise 10 - Days in a Month
File name: Chapter4.10.cpp
Programmer: Patrick Maloon
Date: 10/23/24

Requirements:
Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
The program should then display the number of days in that month. Use the following criteria to identify leap years:
    1.Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. 
    For example, 2000 is a leap year but 2100 is not.
    2. If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4.
    For example, 2008 is a leap year but 2009 is not.
*/


#include <iostream>
#include<string>;
using namespace std;

int main()
{
	int month = 0;
	int year = 0;
	int days = 31;
	string stringMonth = " ";

	cout << "Enteer a month (1-12): ";
	cin >> month;

	cout << "Enter a year: ";
	cin >> year;

	switch (month)
	{
	case 1:
		stringMonth = "January";
		break;
	case 2:
		stringMonth = "February";
		if ((year % 100 == 0) && (year % 400 == 0) || (year % 4 == 0))
			days = 29;
		else
			days = 28;
		break;
	case 3:
		stringMonth = "March";
		break;
	case 4:
		stringMonth = "April";
		days = 30;
		break;
	case 5:
		stringMonth = "May";
		break;
	case 6:
		stringMonth = "June";
		days = 30;
		break;
	case 7:
		stringMonth = "July";
		break;
	case 8:
		stringMonth = "August";
		break;
	case 9:
		stringMonth = "September";
		days = 30;
		break;
	case 10:
		stringMonth = "October";
		break;
	case 11:
		stringMonth = "November";
		days = 30;
		break;
	case 12:
		stringMonth = "December";
		break;
	}

	cout << "Month is: " << stringMonth << "." << endl;
	cout << "There were " << days << " days in " << stringMonth << ", " << year << "." << endl;

	return 0;
}

