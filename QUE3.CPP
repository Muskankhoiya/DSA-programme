//wap to count the no ofemployees earning more than rs 1lakh per anuum.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double salary[10],count=0;
for(int i=0;i<10;i++)
{
cout<<"Enter the monthly salary of  employe "<<i+1<<":";
cin>>salary[i];
if((salary[i])*12>100000)
count=count+1;
}
cout<<"No of employee earning more than 1 lakh : "<<count;

getch();
}