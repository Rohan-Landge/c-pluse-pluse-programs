#include<iostream.h>
#include<conio.h>

class Hospital
{
 private:
  char name[20];
  int p_id,days;
 public:
  void getinfo()
  {
  cout<<"Please enter the patient name and id:";
  cin>>name>>p_id;
  }
  void getdata(int d)
  {
  days=d;
  }
  void details()
  {
  cout<<"\nPatient name:"<<name;
  cout<<"\nPatient id:"<<p_id;
  cout<<"\nTotal billing:"<<days*100;
  }
};
void main()
{
Hospital h;
clrscr();
h.getinfo();
h.getdata(15) ;
h.details();
getch();
}