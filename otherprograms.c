//usage of getch and putch
#include <stdio.h>

int main()
{
    int c;
    while((c=getchar())!=EOF)
    putchar(c);

    return 0;
}


//verifying EOF
#include<stdio.h>

int main()
{
    int c,eof='\n';
    while (c = getchar() != eof)
    {
        printf("%d\t", c != eof);
        putchar(c);
    }
    printf("\n%d\n", c != eof);
}


//counting blanks and lines
#include <stdio.h>

int main()
{
    int nc=0,c,b=0,nl=0,eof='\n';
    while((c=getchar())!=eof)
    {
    ++nc;
    if(c=='\n')
    ++nl;
    if(c==' ')
        ++b;
    }
   printf("no of blanks:%d\nno of newlines:%d\nno of char:%d",b,t,nl,nc);
return 0;
}

//replacing two or more blanks with single blank
#include<stdio.h>
main()
{
int c=0;
int lastc=0;
while((c=getchar())!=EOF)
{
if(c!=' ')
putchar(c);

if(c==' ')
if(lastc!=' ')
putchar(c);
