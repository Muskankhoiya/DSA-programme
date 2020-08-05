//Wap to find length of string without  using library fucntion
#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 char string[40];
 cout<<"Enter your string:";
 cin.getline(string,40);
 for(int len=0;len[string]!='\0';len++);
 cout<<"length of string:"<<len;
 getch();
 }