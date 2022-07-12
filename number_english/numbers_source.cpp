#include "numbers.h"

const char* number[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen","fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

const char* midranks[] = { "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };

const char* ranks[] = { "hundred", "thousand", "million", "billion" };

public int rank(int num)
{
    int copy = num, count = num == 0 ? 1 : 0;
    while (copy != 0)
    {
        count++;
        copy /= 10;
    }
    return count;
}

public void dig1(int num)
{
    if (num < 0)
    {
        printf("minus ");
        num = -num;
    }
    printf("%s ", number[num]);
}

public void dig2(int num)
{
    if (num < 0)
    {
        printf("minus ");
        num = -num;
    }
    int f = num / 10, s = num % 10;
    if (f < 2)
        printf("%s ", number[num]);
    else
        printf("%s %s ", midranks[f], number[s]);
}

public void dig3(int num)
{
    int h = num / 100, d = num % 100;
    if (num < 0)
        d = -d;
    dig1(h);
    printf("%s ", ranks[hundred]);
    if (!(d == 0)) dig2(d);
}

public void dig4(int num)
{
    int h = num / 1000, d = num % 1000;
    if (num < 0)
        d = -d;
    dig1(h);
    printf("%s ", ranks[thousand]);
    if (d > 0 && d < 100) dig2(d);
    else dig3(d);
}

public void dig5(int num)
{
    int h = num / 1000, d = num % 1000;
    if (num < 0)
        d = -d;
    dig2(h);
    printf("%s ", ranks[thousand]);
    if (d > 0 && d < 100) dig2(d);
    else dig3(d);
}

public void dig6(int num)
{
    int h = num / 1000, d = num % 1000;
    if (num < 0)
        d = -d;
    dig3(h);
    printf("%s ", ranks[thousand]);
    if (!(d == 0)) dig3(d);
}

public void dig7(int num)
{
    int h = num / 1000000, d = num % 1000000;
    if (num < 0)
        d = -d;
    dig1(h);
    printf("%s ", ranks[million]);
    if (!(d == 0)) dig6(d);
}

public void dig8(int num)
{
    int h = num / 1000000, d = num % 1000000;
    if (num < 0)
        d = -d;
    dig2(h);
    printf("%s ", ranks[million]);
    if (!(d == 0)) dig6(d);
}

public void dig9(int num)
{
    int h = num / 1000000, d = num % 1000000;
    if (num < 0)
        d = -d;
    dig3(h);
    printf("%s ", ranks[million]);
    if (!(d == 0)) dig6(d);
}

public void dig10(int num)
{
    int h = num / 1000000000, d = num % 1000000000;
    if (num < 0)
        d = -d;
    dig1(h);
    printf("%s ", ranks[billion]);
    if (!(d == 0)) dig9(d);
}