//wap to reverse vector without using temporary variable
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arr[10],j,size;
cout<<"Enter the size of array:";
cin>>size;
cout<<"Enter elements of arrray:\n";
for(int i=0;i<size;i++)
cin>>arr[i];
for(i=0,j=size-1;i<size/2;i++,j--)
{
arr[i]=arr[i]+arr[j];
arr[j]=arr[i]-arr[j];
arr[i]=arr[i]-arr[j];


}
cout<<"After reversing\n:";
for(i=0;i<size;i++)
cout<<arr[i]<<" ";

getch();
}