#include <iostream>
#include <math.h>

using namespace std;

class AreaShape
{
    float area;

  public:
    AreaShape(float radius)
    {
        area = 3.14 * radius * radius;
    }
    AreaShape(int length, int breadth)/l
    {
        area = length * breadth;
    }
    AreaShape(float base, float height)
    {
        area = 0.5 * (base * height);
    }
    void display()
    {
        cout << "Area:\t" << area << endl;
    }
};
int main()
{
    int ch;
    float radius, height, base;
    int length, breadth;
    do
    {
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of Triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice:\t";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "Enter Radius of the Circle:\t";
            cin >> radius;
            AreaShape area(radius);
            area.display();
        }
        break;

        case 2:
        {
            cout << "Enter Length and Breadth of the Rectangle:\t";
            cin >> length >> breadth;
            AreaShape area(length, breadth);
            area.display();
        }
        break;

        case 3:
        {
            cout << "Enter Base and Height of the Triangle:\t";
            cin >> base >> height;
            AreaShape area(base, height);
            area.display();
        }
        break;

        case 4:
            exit(0);

        default:
            cout << "Invalid Choice";
        }
    } while (ch != 4);
    return 0;
}
  
	
