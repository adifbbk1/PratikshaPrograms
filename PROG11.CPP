#include<iostream.h>
#include<conio.h>
int i,j,temp;

void ASC(int a[],int m)
{
  cout<<"Data after sorting: ";
  for(i=0;i<m;i++)
  {
    for(j=0;j<m-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
    }
  }
  for(j=0;j<m;j++)
     cout<<a[j]<<" ";
}

void DESC(int a[],int m)
{
  cout<<"Data after sorting: ";
  for(i=0;i<m;i++)
  {
     for(j=0;j<m-1-i;j++)
     {
	if(a[j]<a[j+1])
	{
	    temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
	}
     }
  }
  for(j=0;j<m;j++)
     cout<<a[j]<<" ";
}

void main()
{
  clrscr();
  int ar[20],m,l;
  char ch;
  cout<<"\n* * * * * * * SORTING OF ELEMENTS * * * * * * *";
  cout<<"\n  1. Ascending Order";
  cout<<"\n  2. Descending Order";
  cout<<"\n\nEnter your choice:>";
  cin>>ch;
  cout<<"\n\nEnter the number of elements you want to enter:>";
  cin>>m;
  cout<<"\nEnter elements:\n>";
  for(l=0;l<m;l++)
  {
     cin>>ar[l];
  }
  switch(ch)
  {
     case '1':ASC(ar,m);
	      break;
     case '2':DESC(ar,m);
	      break;
     default:cout<<"\nPlease enter a valid option...";
  }
  getch();
}


