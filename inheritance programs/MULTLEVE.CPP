#include<iostream.h>
#include<conio.h>

class Grandfather
{
char name1[20];
public:
void grandfather()
{
cout<<"\nEnter your GrandFather name:";
cin>>name1;
}
void print1()
{
cout<<"\nYour grandfather "<<name1<<" is present in first class";
}
};
class Father: public Grandfather
{
char name2[20];
public:
 void father()
 {
  cout<<"\nEnter the name of your father:" ;
  cin>>name2;
 }
 void print2()
 {
  cout<<"\nYour father "<<name2<<" is present in second class";
 }
};
class Child:public Father
{
 char name3[20];
 public:
  void child()
  {
   cout<<"\n Enter your name:";
   cin>>name3;
  }
  void print3()
  {
   cout<<"\nYou "<<name3<<" present in third class";
  }
};
void main()
{
 clrscr();
 Child c;
 c.child();
 c.father();
 c.grandfather();
 c.print3();
 c.print2();
 c.print1();
 getch();
}
