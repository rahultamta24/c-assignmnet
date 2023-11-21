#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cout<<"enter size of vector:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<"enter an element:";
		cin>>x;
		v.push_back(x);
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
