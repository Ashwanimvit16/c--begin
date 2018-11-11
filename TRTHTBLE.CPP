//truth table
#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	cout<<"X\tY\tZ\tXY+Z";


	for(x=0;x<=1;++x)
	for(y=0;y<=1;++y)
	for(z=0;z<=1;++z)
	{
		if(x*y+z==2)
			cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
		else
			cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
	}
	getch();
}