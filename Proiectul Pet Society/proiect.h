#ifndef PROIECT_H_INCLUDED
#define PROIECT_H_INCLUDED
#define _WIN32_WINNT 0x0500

#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include "Pet.h"

using namespace std;

 string menuText[6] = {"1. Introduceti un animalut", "2. Vizualizati animalutele", "3. Cautati un animalut", "4. Starea animalelor", "5. Statistici", "6. Iesire"};
 string menuText1[3] = {"1. Adaugati un catelus", "2. Adaugati o pisicuta","3. Intoarcere la meniu"};
 string menuText2[4] = {"1. Listati toti catelusii existenti in baza de date", "2. Listati toate pisicutele existente in baza de date", "3. Listati animalele date spre adoptie", "4. Intoarcere la meniu"};
 string menuText3[3] = {"1. Cautare dupa ID", "2. Cautare dupa nume", "3. Intoarcere la meniu"};
 string menuText4[4] = {"1. Marcati animalul drept adoptat", "2. Marcati animalul drept vaccinat", "3. Marcati animalul drept sterilizat", "4. Intoarcere la meniu"};
int p{};

void type (const char * p)
{
    for (int i=0;i<strlen(p);i++)
    {
        cout <<  *(p+i) << " \b"; Sleep(10);
    }
}

void type (string p)
{
    type(p.c_str());
}

void getQuote(string& linie)
{
    int random{},numarLinie{};
    srand(time(0));
    random = 1+rand()%10;
    fstream Quotes("data\\quotes.txt");
    if (Quotes.is_open())
    {
        while (getline(Quotes,linie))
        {
            ++numarLinie;
            if (numarLinie == random) break;
        }
    }

}

void welcomeScreen()
{
    int i=1,typed{};
    string citat;
    getQuote(citat);
    while(!kbhit())
{
    if (typed==0)
    {
        cout << setw(50) << "#######  ######  ########    ######  #####   ###### #### ######  ######## ###  ##" << endl;
        cout << setw(50) << "## #  ## ###  ## #  ###     ###  ## ###  ## ###  ##  ### ###  ## #  ###   ###  ##" << endl;
        cout << setw(50) << "# ##  ## ###        ###     ####    ###  ## ###      ### ###        ###   ###  ##" << endl;
        cout << setw(50) << " ######  #####      ###      #####  ###  ## ###      ### #####      ###    ##### " << endl;
        cout << setw(50) << " ###     ###        ###        #### ###  ## ###      ### ###        ###     ###  " << endl;
        cout << setw(50) << " ###     ###  ##    ###     ##  ### ###  ## ###  ##  ### ###  ##    ###     ###  " << endl;
        cout << setw(50) << " ###     ######     ###      #####   #####   #####   ### ######     ###     ###  " << endl << endl;
        type ("Versiunea 1.0"); cout << endl;
        type ("Proiect realizat de Dragos Efrem si Adina Laes");

        cout << "\n\n\n\n";

        if (typed==0)
    {
       cout << "\n\n\n\n\n\n\n";
       type(citat);
       if (strlen(citat.c_str())>80)
            cout << endl << endl << endl << endl << endl;
       else cout << endl << endl << endl << endl << endl << endl << endl;;
       type("Apasa orice tasta pentru a deschide meniul . . . ");
       typed++;
    }
    }


}
}

void loadingScreen(const char * c, int progressManipulator, int iteratorManipulator)
{
    system("CLS");
    type(c);
    Sleep(500);
     for (int i=0;i<101;i++)
     {
         system("CLS");
         cout << c << " " << i << "%"; Sleep(progressManipulator);
         i+=iteratorManipulator;
     }
 }


void menu(string menuTextValues[], string menuTextDescription, int dimensionOfMenu, int& p)
{
        int pointer = 0, stop = 0;


        while (stop==0)
        {
        system("CLS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0 |BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
        cout << menuTextDescription;
        for (int i = 0; i < dimensionOfMenu; i++)
        {
            if (i==pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4 |BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                cout << menuTextValues[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0 |BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                cout << menuTextValues[i] << endl;
            }
        }
        char a;
        while (true)
        {
            if (GetAsyncKeyState(VK_UP)!=0)
            {
                pointer--;
                Sleep(150);
                if (pointer == -1)
                    pointer = dimensionOfMenu-1;
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN)!=0)
            {
                pointer++;
                Sleep(150);
                if (pointer == dimensionOfMenu)
                    pointer = 0;
                break;
            }
            a = getch();
            if (a==13)
            {
                stop = 1;
                p = pointer;
                break;
            }
        }
        }



}



#endif // PROIECT_H_INCLUDED
