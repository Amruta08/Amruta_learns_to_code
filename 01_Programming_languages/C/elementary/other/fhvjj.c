#include <stdafx.h>
#include <Windows.h> 
 
 
int _main(int argc, _TCHAR* argv[]) 
{ 
   _COORD csrPos; 
     
   HWND hCon = (HWND) GetStdHandle(STD_OUTPUT_HANDLE); 
 
   csrPos.X=10; 
   csrPos.Y=5; 
 
   SetConsoleCursorPosition(hCon,csrPos); 
   printf("Hello World! printed at %d,%d\n\n\n\n",csrPos.X,csrPos.Y);  
   
 return 0; 
} 