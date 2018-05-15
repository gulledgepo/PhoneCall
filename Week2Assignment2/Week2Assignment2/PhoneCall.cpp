#include "stdafx.h"
#include "PhoneCall.h"
#include <iostream> 
#include <string> 
using namespace std;

PhoneCall::PhoneCall()
{
	phoneNumber = 0000000;
	callDurationInMinutes = 0;
	ratePerMinute = 0;
}

PhoneCall::PhoneCall(int number, int duration, float rate) 
{
	phoneNumber = number;
	callDurationInMinutes = duration;
	ratePerMinute = rate;
}

void PhoneCall::SetPhoneNumber(int number)
{
	phoneNumber = number;
}

void PhoneCall::SetCallDurationInMinutes(int callDuration)
{
	callDurationInMinutes = callDuration;
}

void PhoneCall::SetRatePerMinute(float rate)
{
	ratePerMinute = rate;
}

void PhoneCall::ShowCall()
{
	cout << endl;
	cout << "Phone call information:" << endl;
	cout << "Phone number dialed: " << phoneNumber << endl;
	cout << "Duration of call in minutes: " << callDurationInMinutes << endl;
	cout << "Cost rate per minute of call: " << ratePerMinute << endl;
}

ostream& operator<<(ostream& out, const PhoneCall& aCall)
{
	out << "Call to " << aCall.phoneNumber << " lasted " << aCall.callDurationInMinutes << " minutes at a rate of $" << aCall.ratePerMinute << " per minute." << endl;
	return out;
}

istream& operator>>(istream& in, PhoneCall& aCall)
{
	cout << endl; //to clear
	cout << "Enter the phone number dialed:";
	in >> aCall.phoneNumber;
	cout << "Enter the duration of the call (in minutes):";
	in >> aCall.callDurationInMinutes;
	cout << "Enter the cost rate per minute of the call:";
	in >> aCall.ratePerMinute;
	cout << endl;
	return in;
}

bool PhoneCall::operator==(const PhoneCall& aCall)
{
	if (this->phoneNumber == aCall.phoneNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}
PhoneCall::~PhoneCall()
{
}
