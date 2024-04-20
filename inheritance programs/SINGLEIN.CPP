#include<iostream.h>
#include<conio.h>

class Student
{
 private:
   int rno;
   char name;
 public:
   void getinfo()
   {
   cout<<"Enter student name:" ;
   cin>>name;
   cout<<"\nEnter the Roll no. : " ;
   cin>>rno;
   }
   void printinfo()
   {
   cout<<"\nStudent name:"<<name;
   cout<<"\nStuudent Roll no. :" <<rno;
   }
};
class Marks:public Student
{
 private:
   int sub1,sub2,sub3;
 public:
   void getmarks()
   {
   cout<<"\nEnter the Three Subjects Marks :" ;
   cin>>sub1>>sub2>>sub3;
   }
   void result()
   {
   if(sub1<34||sub2<34||sub3<34)
    cout<<"\nfail"  ;
   else
    cout<<"\nCongrats you pass the Exam" ;
   }
};

void main()
{
 Marks m;
 clrscr();
 m.getinfo();
 m.getmarks();
 m.printinfo();
 m.result();
 getch();
}