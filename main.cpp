#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
void title();
void game();
char stop;
int main()
{
    srand(time(NULL));
    while(EOF)
    {
        system("cls");
        title();
        stop = getch();
        if(stop == 32)
            game();
    }
    system("pause");
    return 0;
}
void game()//game
{
    system("cls");
    int x, y, mines;
    int m_coordinate_x, m_coordinate_y;
    /*
    -------> X AXIS
    |
    |
    | Y AXIS
    |
    V
    */
    cin>>x>>y>>mines;
    int map[x][y];
    //initialize(id = 0)
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            map[i][j] = 0;
        }
    }
    //set mines(id = 9)
    for (int i = 1; i <= mines; i++)
    {
        m_coordinate_x = rand() % 9;
        m_coordinate_y = rand() % 9;
        map[m_coordinate_x][m_coordinate_y] = 9;
        //set number around mines.
        map[m_coordinate_x-1][m_coordinate_y-1]++;//up-left
        map[m_coordinate_x][m_coordinate_y-1]++;//up-mid
        map[m_coordinate_x+1][m_coordinate_y-1]++;//up-right
        map[m_coordinate_x-1][m_coordinate_y]++;//mid-left
        map[m_coordinate_x][m_coordinate_y]++;//mid-mid
        map[m_coordinate_x+1][m_coordinate_y]++;//mid-right
        map[m_coordinate_x-1][m_coordinate_y+1]++;//down-left
        map[m_coordinate_x][m_coordinate_y+1]++;//down-mid
        map[m_coordinate_x+1][m_coordinate_y+1]++;//down-right
        //conflict between mines still unfix. ---LOG_210109.
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
}
void title()
{
    printf("VER: INDEV_PROG_210109A\n\n");
    printf("  _                   _  _\n");
    printf(" | |__   _   _  _ __ (_)| | __ _   _  ___ __      __ ___   ___  _ __    ___  _ __\n");
    printf(" | '_ \\ | | | || '__|| || |/ /| | | |/ __|\\ \\ /\\ / // _ \\ / _ \\| '_ \\  / _ \\| '__|\n");
    printf(" | |_) || |_| || |   | ||   < | |_| |\\__ \\ \\ V  V /|  __/|  __/| |_) ||  __/| |   \n");
    printf(" |_.__/  \\__,_||_|   |_||_|\\_\\ \\__,_||___/  \\_/\\_/  \\___| \\___|| .__/  \\___||_| .EXE\n");
    printf("                                                               |_|                \n\n");
    printf("==PRESS SPACE TO START ==");
}