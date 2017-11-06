#include <iostream>
using namespace std;

class shopingCart
{
	public: 
	int bill;
	int Calc_bill(int qty,int price);

        void firstCase(int qty,int price);
	
	

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



int main()
{
	cout<<"Welcome to Food Mart \n";
	shopingCart obj;
	obj.firstCase(1,10);	
}
