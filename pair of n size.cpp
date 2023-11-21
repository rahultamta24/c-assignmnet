#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of pair:";
	cin>>n;
	pair<int,int> p[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter first value:";
		cin>>p[i].first;
		cout<<"enter second value:";
		cin>>p[i].second;		
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i].first<<" ";
		cout<<p[i].second<<" "<<endl;
	}
	return 0;
}

