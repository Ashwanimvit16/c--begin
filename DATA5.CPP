#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 char st[35];
 int count=0;
 ifstream fin("story.txt");
 if(!fin)
 {
  cout<<"\nFile not found";
  exit(1);
 }
 while(fin.getline(st,35,'.'))
 {  count++;
 }
   cout<<count;
   getch();
}