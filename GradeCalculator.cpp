#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class GradeCalculator
{
	private:
		string id;
		int midterm,finalexam;
		
	public:
		GradeCalculator(string s,int m,int f)
		:id(s),midterm(m),finalexam(f) //可以這樣設初值
		{
			double total=midterm*0.4+finalexam*0.6;
			
			cout<<fixed<<setprecision(1);
			
			if(total>=60.0)
			{
				cout<<"The total score of ID number : ["<<id<<"] is ["<<total<<"] ， result : pass !"<<endl;
			}
			else
			{
				cout<<"The total score of ID number : ["<<id<<"] is ["<<total<<"] , result : fail !"<<endl;
			}
			
		}
};
int main()
{
	string s;
	int m,f;
	
	while(cin>>s>>m>>f)
	{
		GradeCalculator student(s,m,f);
	}
	return 0;
}