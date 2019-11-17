#include<iostream.h>
#include<conio.h>
void BubbleSortAsc(int[],int);
void BubbleSortDec(int[],int);
int main()
{
   clrscr();
   int A[50],n,Item,index,ch;
   cout<<"\n Enter the no of elements:";
   cin>>n;
   cout<<"\n Enter Array elements...\n";
   for(int i=0;i<n;i++)
      cin>>A[i];
   cout<<"\n Sorting Menu";
   cout<<"\n1. Ascending Order";
   cout<<"\n2. Descending Order";
   cout<<"\n   Enter your choice:";
   cin>>ch;
   switch(ch)
   {
      case 1:BubbleSortAsc(A,n);
	     {
		cout<<"\n\n The Sorted array is as shown below...\n";
		for(i=0;i<n;i++)
		   cout<<A[i]<<" ";
		cout<<endl;
	     }
	     break;
      case 2:BubbleSortDec(A,n);
	     {
		cout<<"\n\n The Sorted array is as shown below...\n";
		for(i=0;i<n;i++)
		   cout<<A[i]<<" ";
		cout<<endl;
	     }
	     break;
      default:cout<<"\n Wrong Choice...!!!";
   }
   return 0;
}
void BubbleSortAsc(int A[],int size)
{
   int t,ctr=0;
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<(size-1)-i;j++)
      {
	 if(A[j]>A[j+1])
	 {
	    t=A[j];
	    A[j]=A[j+1];
	    A[j+1]=t;
	 }
	 cout<<" Array after iteration-"<<++ctr<<"-is:";
	 for(int k=0;k<size;k++)
	    cout<<A[k]<<" ";
	 cout<<endl;
      }
   }
   getch();
}
void BubbleSortDec(int A[],int size)
{
   int t,ctr=0;
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<(size-1)-i;j++)
      {
	 if(A[j]<A[j+1])
	 {
	    t=A[j];
	    A[j]=A[j+1];
	    A[j+1]=t;
	 }
	 cout<<" Array after iteration-"<<++ctr<<"-is:";
	 for(int k=0;k<size;k++)
	    cout<<A[k]<<" ";
	 cout<<endl;
      }
   }
   getch();
}