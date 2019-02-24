#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int型でenum作ることができる。
    // 数字を代入しないとGoのiotaみたいな感じで数字が割り振られる。
    enum
    {
        HOGE,
        FOO,
        BAR
    };
    printf("HOGE=%d, FOO=%d, BAR=%d\n", HOGE, FOO, BAR);

    enum
    {
        HOGE2 = 5,
        FOO2,
        BAR2
    };
    printf("HOGE2=%d, FOO2=%d, BAR2=%d\n", HOGE2, FOO2, BAR2);

    enum
    {
        HOGE3 = 7,
        FOO3 = 5,
        BAR3 = 5,
    };
    printf("HOGE3=%d, FOO3=%d, BAR3=%d\n", HOGE3, FOO3, BAR3);

    return 0;
}
