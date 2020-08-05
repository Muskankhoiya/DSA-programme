//wap to count words ,lines and character in string
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char str[30];
int i,cha=1,st=1,li=0;
cout<<"Enter your string:";
cin.getline(str,30);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]!=' ')
 cha=cha+1;
 }
 cout<<"\nno of character in sting:"<<cha;
 for(i=0;i<=cha-1;i++)
 {
  if(str[i]==' ')
  {
   st=st+1;
   }
}
cout<<"\n no of words in a string:"<<st;


 getch();
}

