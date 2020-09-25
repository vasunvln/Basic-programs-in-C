//replacing blanks and tabs with slashes
#include<stdio.h>
int main()
{
int c;

while((c=getchar())!=EOF)
{
if(c=='\t')
printf("\\t");
if(c==' ')
printf("\\b");
if(c=='\\')
printf("\\");
else
putchar(c);
}
}


//printing each word of an input string
#include<stdio.h>

int main() {
    int c;
    c = getchar();
    while (c != EOF) {
        if (c == ' ') {
            putchar('\n');
        }
        else {
            putchar(c);
        }
        c = getchar();
    }
}


//horizontal histogram
#include<stdio.h>
int main(void)
{
  int c;

  while((c=getchar())!=EOF)
  {

    if( c == ' ' || c == '\n' || c == '\t')
      putchar('\n');
    else
      putchar('*');
  }
return 0;
}


//temperature conversion using functions
#include <stdio.h>
void temperature()
{

    printf("temperature conversion table\n");
        float fahrenheit=0;
    for(fahrenheit=0;fahrenheit<=300;fahrenheit=fahrenheit+20)

    printf("%3.0f %6.1f\n",fahrenheit,(5.0/9.0)*(fahrenheit-32));
}
void main(void)
{
    
temperature();
    
}

