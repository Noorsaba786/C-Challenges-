// soit un tableau de deux dimensions contenat les notes de n  etudiants  pour m matieres , n et m sont des donnes par l'utilisateur  ecrivez un programme qui fait appe a des sous programmes calculat  :
// 1 les moyennes generales de chaque etudiant
// 2 les moyennes par matiere
// la meilleure note d'une matiere donne
// la meilleure note du semestre avec l'etudiant et la matiere correspondante
/*
#include <stdio.h>

void moyenneEtudiant(int notes[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += notes[i][j];
        }
        printf("Moyenne de l'etudiant %d : %.2f\n", i + 1, (float)sum / m);
    }
}

void moyenneMatiere(int notes[][100], int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += notes[i][j];
        }
        printf("Moyenne de la matiere %d : %.2f\n", j + 1, (float)sum / n);
    }
}

void meilleureNoteMatiere(int notes[][100], int n, int m, int matiere)
{
    int maxNote = notes[0][matiere];
    for (int i = 1; i < n; i++)
    {
        if (notes[i][matiere] > maxNote)
        {
            maxNote = notes[i][matiere];
        }
    }
    printf("Meilleure note de la matiere %d : %d\n", matiere + 1, maxNote);
}

void meilleureNoteSemestre(int notes[][100], int n, int m)
{
    int maxNote = notes[0][0];
    int etudiantIndex = 0;
    int matiereIndex = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (notes[i][j] > maxNote)
            {
                maxNote = notes[i][j];
                etudiantIndex = i;
                matiereIndex = j;
            }
        }
    }
    printf("Meilleure note du semestre : %d par l'etudiant %d en matiere %d\n", maxNote, etudiantIndex + 1, matiereIndex + 1);
}

int main()
{
    int n, m;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &n);
    printf("Entrez le nombre de matieres : ");
    scanf("%d", &m);

    int notes[100][100];

    // Saisie des notes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Entrez la note de l'etudiant %d pour la matiere %d : ", i + 1, j + 1);
            scanf("%d", &notes[i][j]);
        }
    }

    moyenneEtudiant(notes, n, m);
    moyenneMatiere(notes, n, m);

    int matiere;
    printf("Entrez le numero de la matiere pour trouver la meilleure note : ");
    scanf("%d", &matiere);
    meilleureNoteMatiere(notes, n, m, matiere - 1);

    meilleureNoteSemestre(notes, n, m);

    return 0;
}

*/

#include <stdio.h>

float moyenneEtudiant(int i, int n, int m, float notes[n][m])
{
    float sum = 0;
    for (int j = 0; j < m; j++)
    {
        sum += notes[i][j];
    }
    return sum / m;
}

float moyenneMatiere(int j, int n, int m, float notes[n][m])
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += notes[i][j];
    }
    return sum / n;
}

float MilleurNoteMatiere(int j, int n, int m, float notes[n][m])
{
    float max = notes[0][j];
    for (int i = 0; i < n; i++)
    {
        if (notes[i][j] > max)
        {
            max = notes[i][j];
        }
    }
    return max;
}

float milleureNoteSem(int n, int m, float notes[n][m], int *bestStudent, int *bestSubject)
{

    float max = notes[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (notes[i][j] > max)
            {
                max = notes[i][j];
                *bestStudent = i;
                *bestSubject = j;
            }
        }
    }
    return max;
}

int main()
{
    int n, m;

    printf("Saisir le nombre des etudiants:\n");
    scanf("%d", &n);

    printf("Saisir le nombre des matieres:\n");
    scanf("%d", &m);

    float notes[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Saisir la note pour l'etudiant %d, matiere %d : ",
                   i + 1, j + 1);
            scanf("%f", &notes[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        float avg = moyenneEtudiant(i, n, m, notes);
        printf("Moyenne de l'etudiant %d = %.2f\n", i + 1, avg);
    }

    return 0;
}
