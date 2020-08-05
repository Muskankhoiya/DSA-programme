/*an array EMP[20] contains the no. of employees joined in different years
wap to find a no. of years in which no emp join */
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int EMP[5],i;
int  count=0;
for( i=0;i<5;i++)
{
 cout<<"Enter no. of employee join in year 200"<<i+1<<":";
 cin>>EMP[i];

 if(EMP[i]==0)
 {
 count++;
 }
 }
 cout<<"No of years in which no employe join:"<<count;


getch();

}