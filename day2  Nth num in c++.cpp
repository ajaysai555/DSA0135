#include <stdio.h>
#include <math.h>
int isPerfect(long long int n) {
	long long int dsum = 0;
	long long int i;
	for (i = 1; i <= sqrt(n); ++i) {
		if (n % i == 0) {

			if (i == n / i) {
				dsum += i;
			}
			else {
				dsum += i;
				dsum += n / i;
			}
		}
}
	dsum = dsum - n;
	if (dsum == n) return 1;
	else		return 0;
}
int main() 
{
	long long int n, i, temp;
	printf("Enter n: ");
	scanf("%d", &n);
	i = 1;
    while (n > 0) 
	{
		if (isPerfect(i) == 1) {
			printf("%d ", i);
			n = n - 1;
		}
		i = i + 1;
	}
	printf("\n");
}#include<iostream>
using namespace std;
int main()
{
    int pos=0, neg=0, zer=0, i, arr[10];
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    for(i=0; i<10; i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else-
            neg++;
    }
    cout<<"\nFrequency of Positive Numbers: "<<pos;
    cout<<"\nFrequency of Zero: "<<zer;
    cout<<"\nFrequency of Negative Numbers: "<<neg;
    cout<<endl;
    return 0;
}
