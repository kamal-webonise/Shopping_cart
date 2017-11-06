#include <iostream>
using namespace std;

class ShopingCart
{
	public:

	char name[20];
	int code;
	int price;
	int quan;

	
	void createProduct()
	{
		cout<<"\nEnter Product name \n";
		cin>>name;
		cout<<"\nEnter Product code \n";
		cin>>code;
		cout<<"\nEnter Product price \n";
		cin>>price;
	} 
	
	int checkout()
	{
		
			if(code==1)
			{
				cout<<"\npress 1 to avail offer or any other key\n";
				int key;
				cin>>key;
				if(key==1)
				{
				int temp,cost;
				cout<<"applicable for 1+1 offer on colgate\n";
				cost=calc_bill(quan,price);
				temp=quan/3;
				cost-=temp*price;
				return cost;
				}
			}
			else
			{	
				return calc_bill(quan,price);
			}

		
		

	}
		
	int calc_bill(int quant,int price)
	{	
		return quant*price;
	}
	
}colg,pepso;


int main()
{
	char ch,key;
	int n,quant;
	cout<<"\nAdmin level priviledge. Want to contine(y/n)? \n";
	cin>>ch ;
	cout<<"To continue enter code\n";
	cin>>key;	
	if(ch=='y' && key == '3')
	{
		colg.createProduct();
		colg.quan=0;
		pepso.createProduct();
		pepso.quan=0;
	}	
	
	cout<<"want to shop(y/n)? \n";
	cin>>ch;
	
	while(ch=='y')
	{
		
		cout<<"\nPress 1 for purchasing colgate \n";
		cout<<"\nPress 2 for purchasing pepsodent \n";
		cout<<"\nPress 3 to remove colgate\n";
		cout<<"\npress 4 to remove pepsodent\n";
		cout<<"\npress 5 to move to checkout\n";
		cout<<"\nenter your choice\n";
		cin>>n;
		int bill=0 ;
		switch(n)
		{	
			case 1 : 	
				cout<<"\nenter quantity for colgate\n";
				cin>>quant;
				colg.quan+=quant;
				break;
			case 2 :
				cout<<"\nenter quantity for pesodent;\n";
				cin>>quant;
				pepso.quan+=quant;
				break;
			case 3: 
				cout<<"\nyou have "<<colg.quan<<" colgate.how many to remove?";
				cin>>quant;
				colg.quan-=quant;
				break;
			case 4: 
				cout<<"\nyou have "<<pepso.quan<<" pepsodent.how many to remove?";
				cin>>quant;
				pepso.quan-=quant;
				break;
			case 5:
				bill=colg.checkout();
				bill+=pepso.checkout();
				
				cout<<"total bill is "<<bill<<"\n";
				return 1;
							 
		}

	};
}






