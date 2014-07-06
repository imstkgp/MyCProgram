#include<iostream.h>
#include<conio.h>
void main()
{
 int *a,n,i,j,k,pos,ch,temp;
 clrscr();
 cout<<"\nEnter the no. of elements:";
 cin>>n;
 a=new int[n];
 cout<<"\nEnter the elements:";
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"\nEnter your choice:";
 cout<<"\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort";
 cin>>ch;
 switch(ch)
 {
  case 1:for(i=0;i<n-1;i++)
	 for(j=0;j<n-i-1;j++)
	 if(a[j]>a[j+1])
	 {
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	 }
	 break;
  case 2:for(i=0;i<n-1;i++)
	 {
	  pos=i;
	  for(j=i+1;j<n;j++)
	  if(a[j]<a[pos])
	  pos=j;
	  if(i!=pos)
	  {
	   temp=a[i];
	   a[i]=a[pos];
	   a[pos]=temp;
	  }
	 }
	 break;
  case 3:for(i=1;i<n;i++)
	 {
	  temp=a[i];
	  for(j=i-1;j>=0&&temp<a[j];j--)
	  a[j+1]=a[j];
	  a[j+1]=temp;
	 }
	 break;
  default:cout<<"\nWrong choice entred";
 }
 cout<<"\nSorted list is:";
 for(i=0;i<n;i++)
 cout<<a[i]<<"\t";
 getch();
}

