//to count no of words starting with is
#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
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
{ st[0]=tolower(st[0]);
 cout<<st;
 if(st[0]=='i'&& st[1]=='s')
 count++;
 for(int i=0;i<strlen(st);i++)
 {
  if(st[i]==' ')
   {
    st[i+1]=tolower(st[i+1]);
    if(st[i+1]=='i'&&st[i+2]=='s')
    count++;
   }
   }}
 fin.close();
 cout<<endl<<count;
 getch();
}