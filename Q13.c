#include <stdio.h>
#include <conio.h>

int main()
{
    double bytes;

    //INPUT FROM USER
    printf("ENTER VALUE OF BYTES: ");
    scanf("%lf", &bytes);

    // CONVERSION FORMULAS
    double kb = (double)bytes / 1024.0;
    double mb = (double)bytes / (1024.0 * 1024.0);
    double gb = (double)bytes / (1024.0 * 1024.0 * 1024.0);

    // OUTPUT
    printf("Bytes: %lf\n", bytes);
    printf("KB:    %fKB\n", kb);
    printf("MB:    %fMB\n", mb);
    printf("GB:    %fGB\n", gb);

    return 0;
}

