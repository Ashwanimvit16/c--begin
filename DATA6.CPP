//program to count no of words starting with vowel
#include<fstream.h>
#include<conio.h>
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
 fin.getline(st,35,'.');
 if(st[0]=='a'||st[0]=='e'||st[0]=='i'||st[0]=='o'||st[0]=='u')
 count++;
 for(int i=0;i<strlen(st);i++)
 {
  if(st[i]==' ')
  if(st[i+1]=='a'||st[i+1]=='e'||st[i+1]=='i'||st[i+1]=='o'||st[i+1]=='u')
  count++;
 }
 fin.close();
 cout<<endl<<st<<endl<<count;
 getch();
}

