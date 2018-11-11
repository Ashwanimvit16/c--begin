//program to copy one file into another file replacing vowel with #
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
 void main()
 {
   clrscr();
   char ch;
   ifstream fin("conso.txt") ;
   if(!fin)
   {
    cout<<"File not found:";
    getch();
    exit(1);
  }

  ofstream fout("copy1.txt");

  while(fin.get(ch))
  {
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   fout.put('#');
   else
   fout.put(ch);
  }
   fin.close();
  fout.close();
 }