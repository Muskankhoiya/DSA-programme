//Wap to calculate grades of 4 students from 3 test score
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float marks[4][3],sum,avg;
char grade[4];
for(int i=0;i<4;i++)
{
  sum=avg=0;
  cout<<"Enter score of student "<<i+1<<":\n";
  for(int j=0;j<3;j++)
  {
  cin>>marks[i][j];
  sum += marks[i][j];
  }
  cout<<endl;

  avg=sum/3;
if(avg < 45)
  grade[i]='D';
else if(avg<60)
 grade[i]='C';
else if(avg < 75)
 grade[i]='B';
else
 grade[i]='A';
}
for(i=0;i<4;i++)
{
cout<<"Student"<<i+1<<"\tTotal marks :"<<marks[i][0] + marks[i][1]
			+marks[i][2]<<"\tGrade = "<<grade[i]<<"\n";
}
getch();
}