//Wap to reverse words of a string individually
#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
clrscr();
char str[50],word[50],ch=0;
cout<<"enter your line:\n";
cin.getline(str,50);
for(int len=0;str[len]!='\0';len++);
for(int i=0;i<len;i++)
 {
   if(str[i]!=' ')
   {
    word[ch]=str[i];
    ch++;
    }
  else
  {
    while(ch>0)
    {
    cout<<word[--ch];
    }
    cout<<str[i];
  }
}
getch();
}