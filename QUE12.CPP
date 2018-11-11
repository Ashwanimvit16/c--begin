#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char p, q;
for(p='A';p<='F';p++)
{
cout<<endl;
for(q='A';q<=p;q++)
cout<<q<<"\t";
}
getch();
}
