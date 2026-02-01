// i wantt create  a fucniton of 2d arrray and print it  via main()

#include <stdio.h>

void print2dArray(int row, int col, char myarry[row][col][50])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%s ", myarry[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char myarry[2][3][50] =
        {
            {"muzhgan", "saba ", "ali"},
            {"noor", "Ana ", "Negina"}

        };

    print2dArray(2, 3, myarry);
}