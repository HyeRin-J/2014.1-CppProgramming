#include <iostream>
#include "RationalNumber.h"
using namespace std;

void RationalNumber::checkdata()
{
	if (den<=0)
	{
		cout << "den <= 0 --> den = 1\n" << endl;
		den=1;
	}
}

void RationalNumber::reduce()
{
	int val1=den, val2=num;

    while(val1 !=0 )  
    { 
        if(val2 > val1)          
        { 
            int temp = val1; 
            val1 = val2; 
            val2 = temp; 
        } 
        val1 = val1 - val2;    
    }

	den=den/val2;
	num=num/val2;
}

RationalNumber RationalNumber::operator+(RationalNumber &operand2) const
{
	return RationalNumber(den*operand2.den, (num*operand2.den)+(operand2.num*den));
}

RationalNumber RationalNumber::operator-(RationalNumber &operand2) const
{
	return RationalNumber(den*operand2.den, (num*operand2.den)-(operand2.num*den));
}

RationalNumber RationalNumber::operator/(RationalNumber &operand2) const
{
	return RationalNumber(den*operand2.num, num*operand2.den);
}

RationalNumber RationalNumber::operator*(RationalNumber &operand2) const
{
	return RationalNumber(den*operand2.den, num*operand2.num);
}

RationalNumber::RationalNumber(int _den, int _num)
{
	den=_den;
	num=_num;
	checkdata();
	reduce();
}
RationalNumber::RationalNumber()
{
	den=1;
	num=0;
}

void RationalNumber::print()
{
	cout << num << "/" << den;
}

bool RationalNumber::operator==(RationalNumber &right ) const  
{   
	return ( right.num == num ) && ( right.den == den )  
		? true : false;   
}  

bool RationalNumber::operator!=(RationalNumber &right ) const  
{  
	return !( *this == right );
}

bool RationalNumber::operator<=(RationalNumber &right) const
{
	double a = 0, b = 0;
	a = num/den;
	b = right.num/right.den;
	if(a<=b)
		return true;
	else return false;

}
bool RationalNumber::operator>=(RationalNumber &right) const
{
	double a = 0, b = 0;
	a = num/den;
	b = right.num/right.den;
	if(a>=b)
		return true;
	else return false;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 