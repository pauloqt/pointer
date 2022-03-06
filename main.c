#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int* p;

    a=14;
    p=&a;

    printf("Hello World!\n");
    printf("Pano ba talaga to?");

    //value ni a, address ni a na di gumamit ng pointer
    printf("%d %p\n", a, &a);
    //address ni a through p, indirect operation ng variable a, and value ni a.
    printf("%p %d %d\n", p, *p, a);
}
