#include <stdio.h>
#include <math.h>

// Niveau 1

int ex1(void) 
{
    int reel1;
    int reel2;

    scanf("%d", &reel1);
    scanf("%d", &reel2);
    printf("%d", reel1 * reel2);
}

int ex2(void)
{
    int reel1;
    int reel2;
    int res;
    
    scanf("%d", &reel1);
    scanf("%d", &reel2);
    res = reel1 + reel2;
    
    if (res > 0)
        printf("%d", res);
    else
        printf("Résultat négatif");
}

int ex3(void)
{
    int compteur = 1;
    while (compteur < 11)
    {
        printf("%d\n", compteur);
        compteur++;
    }
}

int ex5(void)
{
    printf("Entrer une valeur entière positive :");
    int reel;
    scanf("%d", &reel);

    while (reel < 0)
    {
        printf("Entrer une valeur entière positive :");
        scanf("%d", &reel);
    }
        
    printf("Le carré de %d", reel);
    printf(" est égal à %d", reel * reel);
}

// Niveau 2

int multiplication(void)
{
    printf("Quelles sont les valeurs de a et b ?");
    int reel1;
    int reel2;

    scanf("%d", &reel1);
    scanf("%d", &reel2);
    int compteur = reel1;
    printf("%d", reel1);
    printf(" * %d", reel2);
    printf(" = ");
    printf("%d", reel2);
    while (compteur != 1)
    {
        printf(" + %d", reel2);
        compteur--;
    }
    printf(" = %d", reel1 * reel2);
}

int resistance(void)
{
    int choix;

    while (choix != 0)
    {
        printf("Calcul de résistance : (1) en série, (2) en parallele, (0) pour quitter. Faites votre choix:");
        scanf("%d", &choix);
        if (choix != 0)
        {
            int res1;
            int res2;
    
            printf("Valeur de R1 :");
            scanf("%d", &res1);
            printf("Valeur de R2 :");
            scanf("%d", &res2);
    
            if (choix == 1)
            {
                int resEnSerie = res1 + res2; 
                printf("%d\n", resEnSerie);
            }
            else
            {
                int resEnSerie = res1 + res2;
                int resEnParallele = (res1 * res2) / resEnSerie;
                printf("%d\n", resEnParallele);
            }    
        }
            
    }
}

int main(void)
{
    resistance();
}