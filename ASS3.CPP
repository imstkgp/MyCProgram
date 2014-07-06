#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],s[100];
 int f,i,j,k;
 clrscr();
 cout<<"\nEnter the text:";
 gets(a);
 fflush(stdin);
 cout<<"\nEnter the text to be searched:";
 fflush(stdin);
 gets(s);
 for(i=0;a[i]!='\0';i++)
 if(a[i]==s[0])
 {
  f=0;
  for(j=1,k=i+1;s[j]!='\0'&&a[k]!='\0';j++,k++)
  if(s[j]!=a[k])
  {
   f=1;
   break;
  }
  if(!f)
  {
   cout<<"\The substring is found from "<<i+1<<" position";
   exit(1);
  }
 }
 cout<<"\nThe substring is not found";
 getch();
}
