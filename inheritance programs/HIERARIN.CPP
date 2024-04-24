#include<iostream.h>
#include<conio.h>

class A
{
 public:
  void a()
  {
  cout<<"\nThis is inside class A";
  }
};
class B:public A
{
 public:
  void b()
  {
  cout<<"\nThis is inside class B";
  }
};
class C:public A
{
 public:
  void c()
  {
   cout<<"\nThis is inside class C";
  }
};
void main()
{
 clrscr();
 C p1;
 p1.a();
 p1.c();

 B p2;
 p2.a();
 p2.b();
 getch();
}

