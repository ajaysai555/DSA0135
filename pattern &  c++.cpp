#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the symbol:";
    cin >> symbol;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout<<"enter the symbol:";
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "& ";
        }
        cout << "\n";
    }
    return 0;
}
