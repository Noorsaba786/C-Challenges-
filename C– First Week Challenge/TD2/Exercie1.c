// on  doit utiliser la structure suivante pour définir une cellule

typedef struc T_cell
{
    struct T_cell *suiv;
    int data;
}
T_celluleInt;
typedef T_celluleInt *T_listeInt;

//