#include<iostream.h>
#include<conio.h>

class A
{
public:
 void printA()
 {
 cout<<"parent A " ;
 }
};
class B
{
 public:
  void printB()
  {
   cout<<"\nParent B" ;
  }
};
class C:public A, public B
{
 public:
  void printC()
  {
   cout<<"\nC it is a child of parent A and B ";
  }
};
void main()
{
 C c;
 clrscr();
 c.printA();
 c.printB();
 c.printC();
 getch();
}