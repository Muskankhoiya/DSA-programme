//wap to find sum and average of sales
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float sales[5],total=0,avg;
for(int i=0;i<5;i++)
{
cout<<"Enter sales of day"<<i+1<<":";
cin>>sales[i];

total= total+sales[i];
}
avg=total/5;
cout<<"Total is:"<<total<<endl;
cout<<"Avg is: "<<avg<<endl;
getch();
}
