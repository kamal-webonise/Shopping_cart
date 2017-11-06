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
		quan=0;
	} 
	
	int checkout()
	{
			
			if(quan<0)
				quan=0;

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
				else	
					return calc_bill(quan,price);
			
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


void addItem(int id,int quant)
{
	if(id==1)
	{
		cout<<"\nenter quantity for colgate\n";
		cin>>quant;
		colg.quan+=quant;
	}
	else
	{
		cout<<"\nenter quantity for pesodent;\n";
		cin>>quant;
		pepso.quan+=quant;
	}
}

void removeItem(int id,int quant)
{
	if(id==1)
	{
		cout<<"\nyou have "<<colg.quan<<" colgate.how many to remove?";
		cin>>quant;
		colg.quan-=quant;
	}
	else
	{
		cout<<"\nyou have "<<pepso.quan<<" pepsodent.how many to remove?";
		cin>>quant;
		pepso.quan-=quant;
	}
}

void final_bill(int colg_bill,int pepso_bill)
{
	
	cout<<"\n\nNo of Colgate "<<colg.quan<<" for rupees "<<colg_bill<<"\n\n";

	cout<<"\nNo of pepsodent "<<pepso.quan<<" for rupees "<<pepso_bill<<"\n";
	
	cout<<"\n\nTOTAL BILL "<<colg_bill+pepso_bill<<"\n";
}


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
	
	cout<<"\n\nWant to shop(y/n)? \n";
	cin>>ch;
	
	while(ch=='y')
	{
		
		cout<<"\nPress 1 for adding colgate \n";
		cout<<"\nPress 2 for adding pepsodent \n";
		cout<<"\nPress 3 to remove colgate\n";
		cout<<"\npress 4 to remove pepsodent\n";
		cout<<"\npress 5 to move to checkout\n";
		cout<<"\nenter your choice\n";
		cin>>n;
		int colg_bill=0 ;
		int pepso_bill=0;
		switch(n)
		{	
			case 1 : 	
				addItem(colg.code,quant);
				break;
			case 2 :
				addItem(pepso.code,quant);
				break;
			case 3: 
				removeItem(colg.code,quant);
				break;
			case 4: 
				removeItem(colg.code,quant);
				break;
			case 5:
				colg_bill = colg.checkout();
				pepso_bill = pepso.checkout();

				final_bill(colg_bill,pepso_bill);
				return 1;
							 
		}

	};
}






