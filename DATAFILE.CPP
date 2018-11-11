#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
 void main()
 {                      clrscr();
  float count=0;
  char ch;
  ifstream fin("ak.txt") ;
 if(!fin)
 {
  cout<<"File not found:";
  getch();
  exit(1);
 }
 while(fin.get(ch))
 count++;
 if(count>=1024)
 cout<<count/1024<<"  kilobytes";
 else
 cout<<count<<"\tbytes";

 getch();
}
