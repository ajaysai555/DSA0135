#include<iostream>
using namespace std;
int main()
{
int i,j,k,temp,n;
cout<<"enter the number of rows => ";
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
cout<<" ";
temp=1;
for(k=0;k<=i;k++)
{
cout<<temp<<" ";
temp=temp*(i-k)/(k+1);
}
cout<<"\n";
}
}
