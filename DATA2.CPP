//program to copy one file into another file
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

  ofstream fout("copy.txt");

  while(fin.get(ch))
  {
   fout.put(ch);
  }
  fin.close();
  fout.close();
 }