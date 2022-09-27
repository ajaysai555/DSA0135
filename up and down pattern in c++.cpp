#include <iostream>
using namespace std;
void printPattern(int n)
{
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
cout << i;
cout << "\n";
}
for (int i = n - 1; i > 0; i--)
{
for (int j = i; j > 0; j--)
cout << i;
cout << "\n";
}
}
int main()
{
int n;
cout<<"ENTER THE MAXIMUM NUMBER => ";
cin>>n;
printPattern(n);
return 0;
}
