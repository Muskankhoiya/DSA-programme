//Wa[ to multiple two matrices
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int mat1[3][3],mat2[3][3],j,prod[3][3],k;
cout<<"Enter first matrix:\n";
for(int i=0;i<3;i++)
 for(j=0;j<3;j++)
cin>>mat1[i][j];

cout<<"Enter second matrix:\n";
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 cin>>mat2[i][j];

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {

     prod[i][j]=0;
for(int k=0;k<3;k++)
{
 prod[i][j]+=mat1[i][k]*mat2[k][j];
 }
 }
 }
 cout<<"product of matrix:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cout<<prod[i][j]<<" ";
   cout<<endl;
 }
getch();
}