//wap to find row sum and column sum of matrices
#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int arr[10][10],row[10],col[10],j,rows,cols;
 cout<<"Enter no. of rows:";
 cin>>rows;
 cout<<"Enter no. of columns:";
 cin>>cols;
 cout<<"Enter your matrix:\n";
 for(int i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   cin>>arr[i][j];
   }
 }
for(i=0;i<rows;i++)
 {
   row[i]=0;
  for(j=0;j<cols;j++)
  {
   row[i]+=arr[i][j];
   }
cout<<"\nsum of elements of row "<<i+1<<"="<<row[i];
 }
 for(j=0;j<cols;j++)
 {
  col[j]=0;
  for(i=0;i<rows;i++)
  {
   col[j]+=arr[i][j];
  }
  cout<<"\nsum of elements of column "<<j+1<<"="<<col[j];
}
getch();
}