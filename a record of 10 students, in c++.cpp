#include<iostream>
using namespace std;
class student
{
public:
string name;
int regno,mark1,mark2,mark3;
float avg;
void input();
void calculation();
void display();
};
void student::input()
{
cout<<"\n\nENTER THE STUDENT NAME => ";
cin>>name;
cout<<"\nENTER THE REGISTER NUMBER => ";
cin>>regno;
cout<<"\nMARK 1 => ";
cin>>mark1;
cout<<"\nMARK 2 => ";
cin>>mark2;
cout<<"\nMARK 3 => ";
cin>>mark3;
}
void student::calculation()
{
avg=(mark1+mark2+mark3)/3;
}
void student::display()
{
cout<<"\nAVERAGE SCORE IS => "<<avg;
if(avg>90)
cout<<"\nS GRADE";
if(avg>80 && avg<90)
cout<<"\nA GRADE";
if(avg>70 && avg<80)
cout<<"\nC GRADE";
if(avg>60 && avg<70)
cout<<"\nD GRADE";
if(avg>50 && avg<60)
cout<<"\nE GRADE";
if(avg<50)
cout<<"\nF GRADE";
}
int main()
{
int number;
student s[20];
cout<<"ENTER THE NUMBER OF STUDENT ENTRIES => ";
cin>>number;
for(int i=0;i<number;i++)
{
s[i].input();
s[i].calculation();
s[i].display();
}
}

