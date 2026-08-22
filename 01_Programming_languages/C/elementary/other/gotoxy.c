#include<stdio.h>
#include<windows.h>
COORD co = {0,0} ;
int  gotoxy(int xy , int y){
    co.X = y ;
    co.Y = y ;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),co);
}

int main()

{
    gotoxy(10,56);
    printf("am");
    return 0;
}
