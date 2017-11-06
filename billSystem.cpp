#include <iostream>
using namespace std;

class shopingCart
{
	public: 
	
	int Calc_bill(int qty,int price);

        void firstCase(int qty,int price);

	void secondCase(int qty,int price);
	
	void thirdCase();

	void fourthCase();

};

int shopingCart :: Calc_bill(int qty,int price)
{
	int amt_paid; 
	amt_paid=qty*price;
	return amt_paid;
	
}


void shopingCart :: firstCase(int qty,int price)
{
	cout<<"\nTotal Amount "<<Calc_bill(qty,price)<<"\n";
		
}


void shopingCart :: secondCase(int qty,int price)
{
	cout<<"\nTotal Amount "<<Calc_bill(qty,price)<<"\n";
		
}


void shopingCart :: thirdCase()
{
	
	int bill = 0;
	bill+=Calc_bill(5,10);
	bill+=Calc_bill(2,15);
	cout<<"\nTotal Amount "<<bill;
	
}

void shopingCart :: fourthCase()
{
        int col_qty,temp,bill=0;
	cout << "\n OFFER : Buy 2 Get 1 Free \n";
	cout<<"\n quantity for Colgate \n";
	cin>>col_qty;
	
	bill+=Calc_bill(col_qty,10); 
	temp = col_qty/3;
	bill-=Calc_bill(temp,10);

	cout<<"\nTotal Amount "<<bill<<"\n";
}


int main()
{
	cout<<"Welcome to Food Mart \n";
	shopingCart obj;
	obj.firstCase(1,10);
	obj.secondCase(10,10);	
	obj.thirdCase();
	obj.fourthCase();
	
}
