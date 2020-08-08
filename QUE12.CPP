//Wap to print square of diagonal element of a given matrix
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arrA[3][3],arr[3][3];
int j,row,col;
cout<<"enter no of rows:";
cin>>row;
cout<<"enter no of column:";
cin>>col;

cout<<"enter  matrix A:\n";
for(int i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
    cin>>arrA[i][j];
  }

 }

cout<<"Square of dia of matrix is:\n"<<endl;

for(i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
   if(i==j || i+j==col-1)
    arr[i][j]=arrA[i][j]*arrA[i][j];
    else
    arr[i][j]=arrA[i][j];
    cout<<arr[i][j]<<" \t";
    }
    cout<<endl;
    }


getch();
}
