//Wap to check if a string is palindrome or not
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char string[30],ch[30];
int i,len=0,j;
cout<<"enter your line\n";
cin.getline(string,30);
 for( len=0;string[len]!='\0';len++);
 for( i=0,j=len-1;i<len/2;i++,j--)
  {
  if(string[i]!=string[j])
  {
    break;
   }
 }
 if(i==len/2)
  {
 cout<<"string is palindrome";
   }
 else{
 cout<<"string is not palindrome";
 }
  getch();
  }