//Wap to find the smallest and largest element in a vector
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float arr[30],n,max,min;
cout<<"enter the size of array:";
cin>>n;
cout<<"enter elements of array:\n";
for(int i=0;i<n;i++)
cin>>arr[i];
max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{
 if(max<arr[i])
    max=arr[i];

 else if (min>arr[i])
    min=arr[i];
}
/*min=arr[0];
for(i=0;i<n;i++)
{
 if(min>arr[i])
   min=arr[i];
   } */
   cout<<"\nlargest element in array:"<<max;
   cout<<"\nsmallest element in array:"<<min;

getch();
}