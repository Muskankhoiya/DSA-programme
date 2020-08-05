//Wap to convert a string to Upper Camel Casing
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main()
{
clrscr();

char str[30];
cout<<"Enter your string:";
cin.getline(str,30);
str[0]=toupper(str[0]);
cout<<"New string:";
for(int i=0;str[i]!='\0';i++)
 {
  if(str[i]==' ')
  {
   str[i+1]=toupper(str[i+1]);
   }
 cout<<str[i];
 }
getch();
}