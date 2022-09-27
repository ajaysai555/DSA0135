#include<iostream>
using namespace std;
int main ()
{
    int num, temp, a = 1, b, r;
    char hex[50];
    cout << " Enter a decimal number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[a++] = r + 48;
        else
            hex[a++] = r + 55;
         temp = temp / 16;
    }
    cout << "\nHexadecimal equivalent of " << num << " is : ";
    for (b = a; b > 0; b--)
        cout << hex[b];
    return 0;
}
