//wap to find sum of element below and above the matrix
#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int arr[10][10],row,col,above=0,below=0,j;
 cout<<"Enter no. of rows:";
 cin>>row;
 cout<<"Enter no. of columns:";
 cin>>col;
 cout<<"Enter your matrix:\n";
 for(int i=0;i<row;i++)
  for(j=0;j<col;j++)
  {
   cin>>arr[i][j];
   }
 for(i=0;i<row;++i)
  for(j=0;j<col;++j)
   {
    if(j>i)
  above+=arr[i][j];
    else if(i>j)
 below+=arr[i][j];

   }
   cout<<"\nSum of element above the diagoal:"<<above;
   cout<<"\nSum of element below the diagonal:"<<below;
   getch();
   }