#include <iostream>
using namespace std;

int main(){
	int num=0;
	int i=0;
	char name[20];
	float hourlyrate=0;
	int hour=0;
	float grosspay=0;

	cout << "Number of employees : ";
	cin >> num;

	while(i<num){
	cout << "Name : ";
	cin >> name;
	cout << "The hourly rate : ";
	cin >> hourlyrate;
	cout << "The number of hours worked last week : ";
	cin >> hour;

	grosspay=hourlyrate*hour;

	if(hour>40){
		hourlyrate=hourlyrate*0.5;
		hour-=40;
		grosspay+=hourlyrate*hour;
	}

	cout << name << "'s gross pay : " << grosspay << "\n" << endl;
	
	i++;
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    