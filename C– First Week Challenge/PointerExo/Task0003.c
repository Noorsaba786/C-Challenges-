// pointeur
//  Ecrivez un programme qui a che pour chacun des traitements suivants, le contenu du pointeur, son adresse, la valeur point ee et l'adresse de la valeur pointee.
// 1. declarez un pointeur p sans l'initialiser et un pointeur q initialis e  a null,
#include <stdio.h>

int main()
{

    int *p;
    int *q = 0;

    // 2.  p point maintenant sur une variable entiere a initialiser a 5
    int a = 5;
    p = &a;
    // 3. en utilisant le pointeur modifiez la valeur de la variable a en la saisissant au clavier,

    printf("Enter a new value for a: ");
    scanf("%d", &a);
    // 4. affichez le contenu du pointeur , son adresse , la valeur point ee et l'adresse de la valeur pointee
    printf("Pointer p content: %p\n", (void *)p);
    printf("Pointer p address: %p\n", (void *)&p);
    printf("Value pointed to by p: %d\n", *p);
    printf("Address of the value pointed to by p: %p\n", (void *)p);

    // 4. en utilisant le pointeur p, initialisez une valeur entiere b  a la valeur de a

    p = &a;
    int b = *p;

    // 5. a partier du clavier , modifiez la valeur de a en utilisant un nouveau pointeur  ptr point vers p.
    int *ptr = p;
    printf("Enter a new value for a using ptr: ");
    scanf("%d", &a);

    // Q2 : Declarez un tableau d'entiers et un pointeur ptr qui pointe vers le premier element. le programme doit remplir et parcourir les elements du tableau a l'aide du pointeur ptr  seulemnt . Une fois rempli , parcourez le tableau de la meme maniere avec un ponteur pour afficher le contenur et l'address de chaque case .

    int mytabl[5];
    int *ptr2 = mytabl;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for mytabl[%d]: ", i);
        scanf("%d", ptr2 + i); // Remplit le tableau en utilisant le pointeur
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Value at mytabl[%d]: %d, Address: %p\n", i, *(ptr2 + i), (void *)(ptr2 + i)); // Affiche le contenu et l'adresse de chaque case
    }

    // Q3. Ecrivez un programme qui compare les adresses de deux pointeurs p et q=p+1. p et q pointent sur deux variables di  erentes : char, int, double. Comparez les r esultats avec ceux de la fonction siezof(type) qui retourne un unsigned long.

    char c;
    int i;
    double d;

    char *p_char = &c;
    int *p_int = &i;
    double *p_double = &d;

    char *q_char = p_char + 1;
    int *q_int = p_int + 1;
    double *q_double = p_double + 1;

    printf("Address of p_char: %p, Address of q_char: %p, Size of char: %lu\n", (void *)p_char, (void *)q_char, sizeof(char));
    printf("Address of p_int: %p, Address of q_int: %p, Size of int: %lu\n", (void *)p_int, (void *)q_int, sizeof(int));
    printf("Address of p_double: %p, Address of q_double: %p, Size of double: %lu\n", (void *)p_double, (void *)q_double, sizeof(double));

    date *d1 = alloueDate();
    if (d1 != NULL)
    {
        printf("Date entered: %d/%d/%d\n", d1->day, d1->month, d1->year);
        free(d1); // N'oubliez pas de libérer la mémoire allouée
    }

    enum jours
    {
        Lundi,
        Mardi,
        Mercredi,
        Jeudi,
        Vendredi,
        Samedi,
        Dimanche
    };
    typedef enum jours T_jours;
    // typedef enum { Lundi, Mardi, Mercredi, Jeudi, Vendredi, Samedi, Dimanche } T_jours;

    enum mois
    {
        Janvier,
        Fevrier,
        Mars,
        Avril,
        Mai,
        Juin,
        Juillet,
        Aout,
        Septembre,
        Octobre,
        Novembre,
        Decembre
    };
}

// Reprenez l'exercice precedent (date) et  ecrivez une fonction date *alloueDate() qui alloue une date en memoire, et demande  a l'utilisateur de saisir chaque champ de la srtucture ( a la maniere de saisieDate).

date *alloueDate() = {
    date *d = (date *)malloc(sizeof(date));
if (d == NULL)
{
    printf("Memory allocation failed\n");
    return NULL;
}
printf("Enter day: ");
scanf("%d", &d->day);
printf("Enter month: ");
scanf("%d", &d->month);
printf("Enter year: ");
scanf("%d", &d->year);
return d;
}
