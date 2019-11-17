#include<iostream.h>
#include<conio.h>
void Product(int X[3][3],int Y[3][3],int a=0)      //function definition for Product function;
{
   void Transpose(int T[3][3]);
   int Z[3][3],i,j,z;
   for(i=0;i<3;i++)
   {
      for(z=0;z<3;z++)
      {
	 Z[i][z] =0;
	 for(j=0;j<3;j++)
	 {
	   Z[i][z]+=X[i][j]*Y[j][z];
	 }
       }
   }
   cout<<"\n The product of the two matrices is:";
   cout<<"\n";
   for(i=0;i<3;i++)                           //display of the product matrix
   {
      for(j=0;j<3;j++)
      {
	 cout<<Z[i][j]<<"\t";
      }
      cout<<"\n";
   }
   if(a!=0)
   {
      Transpose(Z);              //call to transpose function
   }
}
void Transpose(int X[3][3])     //function definition of transpose function
{
  int C[3][3],i,j;
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
	C[i][j]=X[j][i];        //transpose logic
     }
  }
  cout<<"\n The transpose of the product matrix is:";
  cout<<"\n";                                  //display of transpose matrix
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
	cout<<C[i][j]<<"\t";
     }
     cout<<"\n";
  }
}
void main()
{
   clrscr();
   int A[3][3],B[3][3],i,j;
   cout<<"\n Enter the elements of matrix A:";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {                             //for loop to enter the elements of matrix A
	cin>>A[i][j];
     }
   }
   cout<<"\n Enter the elements of matrx B:";
   for(i=0;i<3;i++)
   {                        //for loop to enter the elements of matrix B
     for(j=0;j<3;j++)
     {
       cin>>B[i][j];
     }
   }
   cout<<"\n\n Matrix A is:";
   cout<<"\n";
   for(i=0;i<3;i++)
   {                       //for loop to display the elements of matrix A
     for(j=0;j<3;j++)
     {
	cout<<A[i][j]<<"\t";
     }
     cout<<"\n";
   }
   cout<<"\n\n Matrix B is:";
   cout<<"\n";                 //for loop to dislpay the elements of matrix B
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<B[i][j]<<"\t";
     }
     cout<<"\n";
   }
   cout<<"\n------------";
   cout<<"\n  M E N U ";       //menu
   cout<<"\n------------";
   cout<<"\n\n 1.Product ";
   cout<<"\n 2.Transpose";
   cout<<"\n\n Enter your choice";
   int ch;
   cin>>ch;
   switch(ch)
   {
      case 1: Product(A,B); //function call to Product function
	      break;

      case 2: Product(A,B,1);  //function call to Product function
	      break;
   }
   getch();
}



