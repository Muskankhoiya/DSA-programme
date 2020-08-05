//Wap to substract two matrices
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arrA[5][5],arrB[5][5],sub[5][5],row,col,j;
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
cout<<"enter elements of matrix B:\n";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>arrB[i][j];
}
}

cout<<"output:\n ";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
sub[i][j]=arrA[i][j]-arrB[i][j];
cout<<sub[i][j]<<" ";
}
cout<<endl;
}
getch();
}