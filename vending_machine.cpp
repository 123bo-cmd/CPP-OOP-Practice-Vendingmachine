#include<iostream>
#include<string>
using namespace std;

class vendingmachine
{
	private:
		string drinkname;
		int machinemoney;
	public:
		vendingmachine(string name,int inputmoney)
		{
			drinkname=name;
			
			if(inputmoney<0)
			{
				cout<<"Warning: Invalid amount for "<<name<<"! Forced to zero."<<endl;
				machinemoney=0;
			}
			else
			{
				machinemoney=inputmoney;
			}
			
			if(machinemoney==1)
			{
				cout << "Machine " << drinkname << " initialized with $" << machinemoney << " dollar." << endl;
			}
			else
			{
				cout << "Machine " << drinkname << " initialized with $" << machinemoney << " dollars." << endl;
			}
			
		}
};
int main()
{
	int time,money;
	string name;
	
	cin>>time;
	
	while(time--)
	{
		cin>>name>>money;
		vendingmachine machine(name,money);
	}
	return 0;
}