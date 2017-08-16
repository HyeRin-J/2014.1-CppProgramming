#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string firstname;
	string lastname;
	int salary;
public:
	Employee(std::string, std::string, int);
	void setfirstname(std::string);
	void setlastname(std::string);
	void setsalary(int);
	std::string getfirstname();
	std::string getlastname();
	int getsalary();
	int DisplayYearlySalary();
};

Employee::Employee(string _firstname,string _lastname,int _salary)
{
	setfirstname(_firstname);
	setlastname(_lastname);
	setsalary(_salary);
}
void Employee::setfirstname(string _firstname)
{
	firstname=_firstname;
}
void Employee::setlastname(string _lastname)
{
	lastname=_lastname;
}
void Employee::setsalary(int _salary)
{
	salary=_salary;
}
std::string Employee::getfirstname()
{
	return firstname;
}
std::string Employee::getlastname()
{
	return lastname;
}
int Employee::getsalary()
{
	return salary;
}
int Employee::DisplayYearlySalary()
{
	return getsalary()*12;
}

int main()
{

	Employee employee1("dasfedf","dtdedaf",30);
	Employee employee2("aefadaf","AEfaewf",50);

	cout << "name 1 : " << employee1.getfirstname() << " " << employee1.getlastname()
		<< "\n1's monthly salary : " << employee1.getsalary()
		<< "\n1's yearly salary : " << employee1.DisplayYearlySalary()
		<< endl;

	cout << "\nname 2 : " << employee2.getfirstname() << " " << employee2.getlastname()
		<< "\n1's monthly salary : " << employee2.getsalary()
		<< "\n1's yearly salary : " << employee2.DisplayYearlySalary()
		<< endl;

	system("pause");
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             