#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
 void main()
 {
   clrscr();
   int c=0,v=0,b=0,s=0,d=0;
   char ch;
   ifstream fin("conso.txt") ;
   if(!fin)
   {
    cout<<"File not found:";
    getch();
    exit(1);
  }

  while(fin.get(ch))
  {
   ch=tolower(ch);
   cout<<ch;
   if(isalnum(ch))
   {
    if(isdigit(ch))
    d++;
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    v++;
    else c++;
   }
  else if (ch==' ')
  b++;
  else
  s++;
}

 fin.close();

 cout<<"\nvowels:"<<v<<"\nconsonant:" <<c<<"\nblank:"<<b<<"\ndigits:"<<d;
 cout<<"\nspecial character:"<<s;
 getch();
}

