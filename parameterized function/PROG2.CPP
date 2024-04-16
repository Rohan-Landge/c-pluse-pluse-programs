#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
public:
int rno;
char name[20];
void insert(int i, char n[])
{
rno=i;
strcpy(name,n);
}
void display()
{
cout<<rno<<" "<<name;
cout<<"\n";
}
};
void main()
{
Student s;
clrscr();
s.insert(65,"rho");
s.display();
s.insert(68,"roh");
s.display();
getch();
}
