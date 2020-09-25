//printing hello world..
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}


//understanding the usage of escape sequence \c
#include <stdio.h>

int main()
{
    printf("Hello World\c");

    return 0;
}


//converting farenheit to celsius
#include <stdio.h>
int main()
{

    float i,celsius,fahrenheit;
     celsius=(5.0/9.0)*(fahrenheit-32.0);
    for(fahrenheit=0;fahrenheit<=300;fahrenheit=fahrenheit+20)
   
    printf("%3.0f %6.1f\n",fahrenheit,celsius);
    

    return 0;
}


//converting in a tabluar form
#include <stdio.h>
int main()
{
    printf("temperature conversion table\n");
    float fahrenheit;
    for(fahrenheit=0;fahrenheit<=300;fahrenheit=fahrenheit+20)

    printf("%3.0f %6.1f\n",fahrenheit,(5.0/9.0)*(fahrenheit-32));
    

    return 0;
}


//celsius to fahrenheit
#include <stdio.h>
int main()
{
    printf("temperature conversion table\n");
    float celsius,fahrenheit;
    fahrenheit=(9.0/5.0)*(celsius+32);
    for(fahrenheit=0;fahrenheit<=300;fahrenheit=fahrenheit+20)
    printf("%6.1f %3.0f\n",celsius=(5.0/9.0)*(fahrenheit-32),fahrenheit);
    return 0;
}
