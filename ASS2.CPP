#include<iostream.h>
#include<conio.h>
class age
{
private:
 int day;
 int month;
 int year;
public:
 void getdata()
 {
  cout<<"\nEnter day(1-30):";
  cin>>day;
  cout<<"\nEnter month(1-12):";
  cin>>month;
  cout<<"\nEnter year:";
  cin>>year;
 }
 void display()
 {
  cout<<"\nThe age is:"<<year<<" year "<<month<<" month "<<day<<" days.";
 }
 age add(age &b)
 {
  age c;
  c.day=(day+b.day)%30;
  c.month=((month+b.month)+(day+b.day)/30)%12;
  c.year=(year+b.year)+((month+b.month)+(day+b.day)/30)/12;
  return c;
 }
};
void main()
{
 age x,y,z;
 clrscr();
 x.getdata();
 y.getdata();
 z=x.add(y);
 cout<<"\n\nFor first person:";
 x.display();
 cout<<"\n\nFor second person:";
 y.display();
 cout<<"\n\nFirst person+Second person:";
 z.display();
 getch();
}