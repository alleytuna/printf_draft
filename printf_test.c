#include <stdio.h>

int main()
{
//attributs_flags

    int diese = 05060455;
    printf("flag diese = %#o\n", diese);
    //montre le 0 de debut;
    
    int moins = -5464654;
    printf("flag moins = %-10d\n", moins);
    
    int plus = 5464654;
    printf("flag plus = %+10d\n", plus);

    int space = 5464654;
    printf("flag space = % d\n", space);

    int zero = 5464654;
    printf("flag zero = %010d\n", zero);

//largeur de champ_width
    
    char *number = "salut";
    printf("width number = %9s\n", number);

    char *etoile = "salut";
    printf("width etoile = %*s\n", 9, etoile);
    
//precision

    char *virgule = "salut";
    printf("precision string = %*s\n", 9, etoile);
    
    // char *str = "salut";
    // printf("flag str = %s\n", str);
    
    return (0);
}