/*
Ecrire un main qui déclare deux entiers "a" et "b", un pointeur sur entier "pt", utilise
la fonction "alloue" pour donner un espace mémoire d’un (seul) entier à pt. Réalise une
lecture au clavier de trois entiers pour a, b et le contenu pointé par pt. Enfin, votre main
utilisera la fonction swap pour permuter a avec b, puis a avec le contenu pointée par pt.
Pour terminer vous ferez un affichage du nom, du contenu et de l’adresse de a, b, *p et p.
*/

#include <stdio.h>
#include <stdlib.h>

int *alloue(int n)
{
    int *p = malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("allocation failed \n");
    }
    return p;
}

int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a;
    int b;
    int n;
    int *pt;

    pt = alloue(1);
    printf("enter a num for a = ");
    scanf("%d", &a);
    printf("enter a num for b = ");
    scanf("%d", &b);

    printf("enter a num for *pt= ");
    scanf("%d", pt);

    swap(&a, &b);
    swap(&a, pt);
    printf("the value of a is %d  , and the addres of a is %p", a, &a);
    printf("the value of b is %d  , and the addres of b is %p", b, &b);
    printf("the value of *pt is %d  , and the addres of *pt is %p", *pt, pt);
}
