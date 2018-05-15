#include <iostream>
#include <string>
using namespace std;


class PhoneCall
{
	friend ostream& operator<<(ostream&, const PhoneCall&);
	friend istream& operator>>(istream&, PhoneCall&);
public:
	PhoneCall();
	PhoneCall(int, int, float);
	void SetPhoneNumber(int);
	void SetCallDurationInMinutes(int);
	void SetRatePerMinute(float);
	void ShowCall();
	bool operator==(const PhoneCall& aCall);
	~PhoneCall();

private:
	int phoneNumber;
	int callDurationInMinutes;
	float ratePerMinute;
};

