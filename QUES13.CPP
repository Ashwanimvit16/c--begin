//vowel or consonant
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char alp;
cout<<"enter the alphabet:";
cin>>alp;
switch(alp)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'o':
case 'O':
case 'i':
case 'I':
case 'u':
case 'U':
cout<<"vowel";
break;
default:
cout<<"consonant";
}
getch();
}