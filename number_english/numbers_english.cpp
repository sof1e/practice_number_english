#include "numbers.h"

int main()
{
    int n;
    printf("Enter a value :");
    scanf_s("%d", &n);
    if (sizeof(n) > (sizeof(int)))
    {
        printf("Error");
        exit(-1);
    }
    int element = rank(n);
    switch (element)
    {
    case 1:
        dig1(n);
        break;
    case 2:
        dig2(n);
        break;
    case 3:
        dig3(n);
        break;
    case 4:
        dig4(n);
        break;
    case 5:
        dig5(n);
        break;
    case 6:
        dig6(n);
        break;
    case 7:
        dig7(n);
        break;
    case 8:
        dig8(n);
        break;
    case 9:
        dig9(n);
        break;
    case 10:
        dig10(n);
        break;
    }
    return 0;
}