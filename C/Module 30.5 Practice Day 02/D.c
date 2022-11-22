#include<stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);

    char p4[] = "Tetrahedron";
    char p6[] = "Cube";
    char p8[] = "Octahedron";
    char p12[] = "Dodecahedron";
    char p20[] = "Icosahedron";

    int faces = 0;
    for (int i = 0; i < n; i++)
    {
       char str[30];
       gets(str);
       if (strcmp(str, p4) == 0)
       {
           faces += 4;
       }
       else if (strcmp(str, p6) == 0)
       {
           faces += 6;
       }
       else if (strcmp(str, p8) == 0)
       {
           faces += 8;
       }
       else if (strcmp(str, p12) == 0)
       {
           faces += 12;
       }
       else if (strcmp(str, p20) == 0)
       {
           faces += 20;
       }
    }

    printf("%d", faces);

    return 0;
}
