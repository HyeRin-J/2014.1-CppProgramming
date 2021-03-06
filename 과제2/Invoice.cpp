#include <iostream>
#include <string>
using namespace std;

class Invoice
{
private:
	std::string PartNumber;
	std::string Description;
	int Purchased;
	int Price;
public:
	Invoice(std::string, std::string, int, int);
	void setPartNumber(std::string);
	void setDescription(std::string);
	void setPurchased(int);
	void setPrice(int);
	std::string getPartNumber();
	std::string getDescription();
	int getPurchased();
	int getPrice();
	int getInvoiceAmount();
};

Invoice::Invoice(string _PartNumber,string _Description,int _Purchased,int _Price)
{
	setPartNumber(_PartNumber);
	setDescription(_Description);
	setPurchased(_Purchased);
	setPrice(_Price);
}
void Invoice::setPartNumber(string _PartNumber)
{
	if (_PartNumber.length() <= 25 )
		PartNumber=_PartNumber;
	if (_PartNumber.length() > 25 )
	{
		PartNumber=_PartNumber.substr( 0, 25 );
		cout << "PartNumber \"" << _PartNumber << "\" exceeds maximum length (25).\n"
			<< "Limiting PartNumber to first 25 characters.\n" << endl;
	}
}
void Invoice::setDescription(string _Description)
{
	if (_Description.length() <= 25 )
		Description=_Description;
	if (_Description.length() > 25 )
	{
		Description=_Description.substr( 0, 25 );
		cout << "Description \"" << _Description << "\" exceeds maximum length (25).\n"
			<< "Limiting Description to first 25 characters.\n" << endl;
	}
}
void Invoice::setPurchased(int _Purchased)
{
	if(_Purchased<=0)
		Purchased=0;
	else
		Purchased=_Purchased;
}
void Invoice::setPrice(int _Price)
{
	if(_Price<=0)
		Price=0;
	else
		Price=_Price;
}
string Invoice::getPartNumber()
{
	return PartNumber;
}
string Invoice::getDescription()
{
	return Description;
}
int Invoice::getPurchased()
{
	return Purchased;
}
int Invoice::getPrice()
{
	return Price;
}
int Invoice::getInvoiceAmount()
{
	return getPurchased()*getPrice();
}

int main()
{

	Invoice invoice1("dasfedf","dtdedaf",30,5000);

	cout << "Part Number is: "
		<< invoice1.getPartNumber()
		<< "\nDescription: "
		<< invoice1.getDescription()
		<< "\nPrice : "
		<< invoice1.getPrice()
		<< "\nPurchased : "
		<< invoice1.getPurchased()
		<< endl;

	cout << "InvoiceAmount is: " << invoice1.getInvoiceAmount() << endl;

	system("pause");
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            