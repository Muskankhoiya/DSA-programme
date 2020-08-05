//wap to transpose a matrix
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

cout<<"enter  matrix A:\n ";
for(int i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
    cin>>arrA[i][j];
  }

 }

 for(i=0;i<row;i++)
 for(j=0;j<col;j++)
 {
   arr[j][i]=arrA[i][j];
   }
cout<<"transpose of matrix is:"<<endl;

for(i=0;i<col;i++)
{
 for(j=0;j<row;j++)
 {
 cout<<" "<<arr[i][j];

}
cout<<endl;
}

getch();
}