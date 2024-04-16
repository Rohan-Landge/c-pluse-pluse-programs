#include<iostream.h>
#include<conio.h>

class Student{
private:
char name[10];
int sub1,sub2,sub3;

public:
void getData()
{
cout<<"Enter your name:" ;
cin>>name;
cout<<"\nEnter the marks of the sub1,sub2 and sub3: " ;
cin>>sub1>>sub2>>sub3;
cout<<"\nYou pass or fail is depends upons your marks if you got 45 and above in all subjects so you pass if not you fail" ;
}
void print()
{
cout<<"\nYour name is :" ;
if(sub1>=45||sub2>=45,sub3>=45)
  cout<<"\nyou passed the exam congrats:";
else
  cout<<"\nyou failed the exam better luck next time" ;
}
}
void main()
{
Student s;
clrscr();
s.getData();
s.print();
getch();

}
