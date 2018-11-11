//to print alphabetical pattern
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r,c,s=1;
char k;
for(r=1;r<=5;r++)
{
k='a';
cout<<"\n\n";
for(c=1;c<=r;c++)
{
cout<<k++<<"\t";
}
cout<<endl;
}
getch();
}

