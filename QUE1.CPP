//WaP to read marks of 10 students and store thenm under an array
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float arr[10];

 for(int i=0;i<10;i++)
 {
 cout<<"Enter marks of student "<<i+1<<":";
cin>>arr[i];
cout<<endl;
}

for( i=0;i<10;i++)
 cout<<"Marks of student"<<i+1<<": "<<arr[i]<<"\n";
 getch();
 }
