#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int total_follower = 2 * A + 100;
    int remaining_follower = total_follower - B;

    printf("%d", remaining_follower);

    return 0;
}
