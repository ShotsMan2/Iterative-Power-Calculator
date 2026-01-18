#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban, üs, i, sonuc;

    sonuc = 1;

    printf("taban: ");
    scanf("%d", &taban);

    printf("üs: ");
    scanf("%d", &üs);

    for (i = 1; i <= üs; i++)
    {
        sonuc = sonuc * taban;
    }
    printf("sonuc: %d", sonuc);

    return 0;
}
