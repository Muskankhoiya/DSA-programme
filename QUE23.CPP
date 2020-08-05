//wap to delete duplicate element from vector
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arr[30],n,k,j;
cout<<"How many element:";
cin>>n;
cout<<"\nEnter elemenrs of array:\n";
for(int i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<n;i++) {

for(j=i+1;j<n;j++)
{
 if(arr[i]==arr[j])
 {
  for(k=j;k<n;k++)
  {
  arr[k]=arr[k+1];
  }
  n--;
  j--;
}
}
}


 cout<<"\narray element after deleting duplicate ones:";
for(i=0;i<n;i++)
 cout<<arr[i]<<" ";

 getch();
 }

