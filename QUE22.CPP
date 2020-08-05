//wap to concatenate two string
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char str1[20],str2[20],str[20];
int j;
cout<<"Enter 1st string:";
cin.getline(str1,20);

cout<<"\nEnter 2nd string:";
cin.getline(str2,20);

for(int i=0;str1[i]!='\0';i++)
      str[i]=str1[i];
 for(j=0;str2[j]!='\0';j++)
      str[j+i]=str2[j];

 str[i+j]='\0';
 cout<<"\nresult:"<<str;


getch();
}