#include<stdio.h>
#include<string.h>

// when the reverse of an string is equal to the original string - is called palindrom.
// i.e -> "madam" - reverse is also "madam" so it is palindrom. on the other hand "abca" -> reverse "acba" so it is not palindrom.

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    strcpy(b, a);
    strrev(b);

    if (strcmp(a, b) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
