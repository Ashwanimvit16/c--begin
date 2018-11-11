#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main( )
{               clrscr();
  char str[80];
  cout<<"Enter a string:";
  gets(str);
  for(int l=0; str[l]!='\0';l++);  //Loop to find length
    cout<<"The length of the string is : "<<l<<endl ;
  for(int i=l-1;i>=0;i--)    //Loop to display the string backwards
    cout<<str[i];
	  getch();
}