//wap to delete duplicate element from vector
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arr[30],size,k,j;
cout<<"How many element:";
cin>>size;
cout<<"\nEnter elemenrs of array:\n";
for(int i=0;i<size;i++)
cin>>arr[i];
for(i=0;i<size;i++) {

for(j=i+1;j<size;j++)
{
 if(arr[i]==arr[j])
 {
  for(k=j;k<size;k++)
  {
  arr[k]=arr[k+1];
  }
  size--;
  j--;
}
}
}


 cout<<"\narray element after deleting duplicate ones:";
for(i=0;i<size;i++)
 cout<<arr[i]<<" ";

 getch();
 }

