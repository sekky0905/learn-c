#include <stdio.h>

int main(void)
{
    const char HOGE = 'hoge';
    int foo = 1;
    printf("HOGE => %c\n", HOGE);
    printf("foo => %d\n", foo);

    foo = 2;
    printf("foo => %d\n", foo);
}