#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	int *p=a;
	cout<<"Enter elements:\n";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"Entered elements...\n";
	for(i=0;i<5;i++)
	cout<<p[i];
	return (0);
}
