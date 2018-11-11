#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,k,i,x;
cout << "Enter a row number for Pascal's Triangle: ";
cin >> n; //the number of raws
for(i=0;i<=n;i++)
{
x=1;
for(k=0;k<=i;k++)
{
cout << x << '\t';
x = x * (i - k) / (k + 1);
}
cout << endl;
}
getch();
}