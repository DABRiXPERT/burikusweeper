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
        title();
        stop = getch();
        if(stop == 32)
            game();
    }
    system("pause");
    return 0;
}
void game()
{
    int x, y;
    cin>>x>>y;
    int map[x][y];

}
void title()
{
    printf("VER: INDEV_PROG_210107A\n\n");
    printf("  _                   _  _\n");
    printf(" | |__   _   _  _ __ (_)| | __ _   _  ___ __      __ ___   ___  _ __    ___  _ __\n");
    printf(" | '_ \\ | | | || '__|| || |/ /| | | |/ __|\\ \\ /\\ / // _ \\ / _ \\| '_ \\  / _ \\| '__|\n");
    printf(" | |_) || |_| || |   | ||   < | |_| |\\__ \\ \\ V  V /|  __/|  __/| |_) ||  __/| |   \n");
    printf(" |_.__/  \\__,_||_|   |_||_|\\_\\ \\__,_||___/  \\_/\\_/  \\___| \\___|| .__/  \\___||_| .EXE\n");
    printf("                                                               |_|                \n\n");
    printf("==PRESS SPACE TO START ==");
}
