#include<iostream.h>
#include<conio.h>
class Student
{
private:
 char name[100];
 int roll;
 char clas[5];
 char sem[10];
 double s1,s2,s3,t,p;
public:
 void getdata()
 {
  cout<<"\nEnter the name for the student:";
  cin>>name;
  cout<<"\nEnter the student roll no.:";
  cin>>roll;
  cout<<"\nEnter the class(BCA/MCA):";
  cin>>clas;
  cout<<"\nEnter the semester:";
  cin>>sem;
  cout<<"\nEnter the marks in three subjects:";
  cin>>s1>>s2>>s3;
 }
 void calculate()
 {
  t=s1+s2+s3;
  p=t/3;
 }
 void display()
 {
  cout<<"\n\nDetails of the student is:";
  cout<<"\nName:"<<name;
  cout<<"\nRoll:"<<roll;
  cout<<"\nClass:"<<clas;
  cout<<"\nSemester:"<<sem;
  cout<<"\nTotal Marks:"<<t;
  cout<<"\nPercentage:"<<p;
 }
};
void main()
{
 Student s1,s2;
 clrscr();
 cout<<"\nEnter the detail of first student:";
 s1.getdata();
 cout<<"\nEnter the detail of second student:";
 s2.getdata();
 s1.calculate();
 s2.calculate();
 cout<<"\nFirst student detail:";
 s1.display();
 cout<<"\nSecond student detail:";
 s2.display();
 getch();
}