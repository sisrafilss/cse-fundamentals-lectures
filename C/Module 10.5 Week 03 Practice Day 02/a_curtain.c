#include<stdio.h>

int main()
{
    int room_length, curtain_length;
    scanf("%d %d", &room_length, &curtain_length);

    int un_covered_part = room_length - (curtain_length * 2);

    if (un_covered_part < 0)
    {
        un_covered_part = 0;
    }

    printf("%d", un_covered_part);

    return 0;
}
