//Wap to read and check equality of two matrix
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arrA[10][10],arrB[10][10],row,col,j,equal;
cout<<"Enter no. of rows in a matrix:";
cin>>row;
cout<<"Enter no. of columns in a matrix:";
cin>>col;
cout<<"Enter element of matA:\n";
for(int i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 cin>>arrA[i][j];
 }
}
cout<<"enter element of matB:\n";
for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 cin>>arrB[i][j];
 }
}
cout<<"matrix A:\n";
 for(i=0;i<row;i++)

 {
  for(j=0;j<col;j++)
  {
  cout<<arrA[i][j]<<"  ";
   }
  cout<<endl;
  }
cout<<"matrix B:\n";
for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
  cout<<arrB[i][j]<<"  ";
  }
  cout<<endl;
}
equal=1;
for(i=0;i<row;i++)
{
 for(j=0;j<col;j++)
 {
  if(arrA[i][j] != arrB[i][j])
  {
  equal=0;
  break;
  }
}
}
if(equal==1)
{
 cout<<"matix A is equal to B";
 }
 else
 {
 cout<<"matrix A is not equal to B";
 }


getch();
}