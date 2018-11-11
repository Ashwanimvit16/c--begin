#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
 void main()
 {
  clrscr();
  char st;
  int word=0,b=0,avg;
  ifstream fin("story.txt");
  if(!fin)
  {
   cout<<"invalid file";
   exit(1);
  }

 while(fin.get(st))
 { word++;
 cout<<st;
 if(st==' ')
 b++;

 }

 avg=(word-b)/b+1;
 cout<<endl<<avg;
  getch();
 }
