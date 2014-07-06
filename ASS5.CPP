#include<iostream.h>
#include<conio.h>
class person
{
 char name[100];
 float age;
 public:
 void getdata()
 {
  cout<<"\nEnter the name:";
  cin>>name;
  cout<<"\nEnter the age:";
  cin>>age;
 }
 person &elder(person &x)
 {
  if(x.age>age)
  return x;
  return *this;
 }
 void display()
 {
  cout<<"\n\nNAME:"<<name<<"\nAGE:"<<age;
 }
};
void main()
{
 person x,y,z;
 clrscr();
 cout<<"\nEnter the first person detail:\n";
 x.getdata();
 cout<<"\nEnter the second person detail:\n";
 y.getdata();
 z=x.elder(y);
 cout<<"\n\nElder one is:";
 z.display();
 getch();
}
