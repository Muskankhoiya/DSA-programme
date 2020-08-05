//Wap to add two matrices
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arrA[5][5],arrB[5][5],sum[5][5],row,col,j;
cout<<"Enter the no. of rows:";
cin>>row;
cout<<"Enter the no. of column:";
cin>>col;
cout<<"Enter elements of matrix A:\n";
for(int i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 cin>>arrA[i][j];
 }
}
cout<<"Enter elements of matrix B:\n";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>arrB[i][j];
}
}
cout<<"matrix A";
 for(i=0;i<row;i++)
 {
  cout<<"\n";
  for(j=0;j<col;j++)
  {
  cout<<arrA[i][j]<<"\t";
  }
}
cout<<endl;
cout<<"matrix B";
 for(i=0;i<row;i++)
  {
  cout<<"\n";
  for(j=0;j<col;j++)
  {
  cout<<arrB[i][j]<<"\t";
  }
}
cout<<endl;
cout<<"Output: ";
for(i=0;i<row;i++)
{
 cout<<"\n";
for(j=0;j<col;j++)
{
sum[i][j]=arrA[i][j]+arrB[i][j];
cout<<sum[i][j]<<"\t";
}

}
getch();
}