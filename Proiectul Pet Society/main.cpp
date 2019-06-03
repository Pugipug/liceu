#include "proiect.h"
int main()
{
   SetConsoleTitle("Pet Society");
   system("mode con COLS=700");
   ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0 |BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
   welcomeScreen();
   loadingScreen("Se incarca meniul . . . ", 10, 2);


    ifstream f("data\\memorie.txt");
    ofstream g("data\\memorie.txt", ofstream::app);

    int n=1;



    string tempx,tempy,tempz; getline(f,tempx);
    while (f >> pet[n].ID
           >> pet[n].nume
           >> pet[n].tip
           >> pet[n].rasa
           >> pet[n].varstaLuni
           >> tempx
           >> tempy
           >> tempz)
    {
        if (tempx=="DA") pet[n].adoptat = 1;
        else pet[n].adoptat = 0;
        if (tempy=="DA") pet[n].vaccinat = 1;
        else pet[n].vaccinat = 0;
        if (tempz=="DA") pet[n].sterilizat = 1;
        else pet[n].sterilizat = 0;
        n++;
    }

    g << endl;

    do
    {
        int skip = 0;
        menu(menuText,"Meniu principal\n\n", 6, p);
        switch(p)
        {
        case 0:
            {
                system("CLS");
                int temp;
                menu(menuText1,"Alegeti tipul animalului\n\n",3,temp);
                pet[n].ID=n;
                if (temp==0)
                {
                    pet[n].esteCaine = true;
                    strcpy(pet[n].tip, "CAINE");
                    pet[n].estePisica = false;
                }
                else if (temp==1)
                {
                    pet[n].estePisica = true;
                    strcpy(pet[n].tip, "PISICA");
                    pet[n].esteCaine = false;
                }
                else if (temp==2)
                {
                    skip = 1;
                    break;
                }

                system("CLS");
                cout << "Informatiile animalului" << endl << endl;
                type("Introduceti numele (porecla) "); if (temp==0) type("catelusului: "); else if (temp==1) type("pisicutei: ");
                cin >> pet[n].nume; cin.get();

                system("CLS");
                cout << "Informatiile animalului" << endl << endl;

                type("Introduceti rasa "); if (temp==0) type("catelusului: "); else if (temp==1) type("pisicutei: ");
                cin >> pet[n].rasa; cin.get();

                system("CLS");
                cout << "Informatiile animalului" << endl << endl;

                type("Introduceti varsta "); if (temp==0) type("catelusului "); else if(temp==1) type("pisicutei "); type("in luni: ");
                cin >> pet[n].varstaLuni; cin.get();

                if (pet[n].varstaLuni > 120 || pet[n].varstaLuni < 0)
                {
                    system("CLS");
                    type ("Au fost introduse valori invalide. Veti fi redirectionat catre meniul principal in 5 secunde . . .");
                    Sleep(5000);
                    skip = 1;
                    break;
                }

                system ("CLS");

                g << pet[n].ID << " 	    "
                << left << setw(20) << pet[n].nume << " 	    "
                << left << setw(20) << pet[n].tip << " 	    "
                << left << setw(20) << pet[n].rasa << " 	    "
                << left << setw(20) << pet[n].varstaLuni << " 	    ";
                if (pet[n].adoptat==1) g << left << setw(20) << "DA" << " 	    ";
                else g << left << setw(20) << "NU" << " 	    ";
                if (pet[n].vaccinat==1) g << left << setw(20) << "DA" << " 	    ";
                else g << left << setw(20) << "NU" << " 	    ";
                if (pet[n].sterilizat==1) g << left << setw(20) << "DA" << endl;
                else g << left << setw(20) << "NU" << endl;

                type("Operatiune realizata cu succes!");
                if (temp==0)
                {
                    type(" Catelusul "); type(pet[n].nume); type(" a fost adaugat!");
                }
                else if (temp==1)
                {
                    type(" Pisicuta "); type(pet[n].nume); type(" a fost adaugata!");
                }


                n++;

                cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                g << endl;

                break;
            }
        case 1:
            {
                system("CLS");
                int temp;
                menu(menuText2,"Alegeti optiunea\n\n", 4, temp);
                switch (temp)
                {
                case 0:
                    {
                        system ("CLS");
                        cout << "ID" << " 	" << left << setw(15) << "Nume" <<
                         " " << left << setw(15) << " Rasa" << " " <<
                         left << setw(15) << "  Varsta (in luni)" << " " << left << setw(15) << "Adoptat" <<
                         left << setw(15) << "Vaccinat" << " " << left << setw(15) << "Sterilizat" << endl;
                        for (int i=1;i<=n;i++)
                        {
                            if (strcmp(pet[i].tip,"CAINE")==0)
                                {
                                    cout << pet[i].ID << " 	"
                                    << left << setw(15) << pet[i].nume << "  "
                                    << left << setw(15) << pet[i].rasa << "  "
                                    << left << setw(15) << pet[i].varstaLuni << "  ";
                                    if (pet[i].adoptat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].vaccinat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].sterilizat==1) cout << left << setw(15) << "DA" << endl;
                                    else cout << left << setw(15) << "NU" << endl;

                                }

                        }
                        cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                        break;
                    }
                case 1:
                    {

                        system ("CLS");
                        cout << "ID" << " 	" << left << setw(15) << "Nume" <<
                         " " << left << setw(15) << " Rasa" << " " <<
                         left << setw(15) << "  Varsta (in luni)" << " " << left << setw(15) << "Adoptat" <<
                         left << setw(15) << "Vaccinat" << " " << left << setw(15) << "Sterilizat" << endl;
                        for (int i=1;i<=n;i++)
                        {
                            if (strcmp(pet[i].tip,"PISICA")==0)
                                {
                                    cout << pet[i].ID << " 	"
                                    << left << setw(15) << pet[i].nume << "  "
                                    << left << setw(15) << pet[i].rasa << "  "
                                    << left << setw(15) << pet[i].varstaLuni << "  ";
                                    if (pet[i].adoptat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].vaccinat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].sterilizat==1) cout << left << setw(15) << "DA" << endl;
                                    else cout << left << setw(15) << "NU" << endl;

                                }

                        }
                        cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                        break;
                    }
                case 2:
                    {

                        system ("CLS");
                        cout << "ID" << " 	" << left << setw(15) << "Nume" <<
                         " " << left << setw(15) << " Tip" << " " <<
                         left << setw(15) << "  Rasa" << " " << left << setw(15) << "Varsta" << " " << left << setw(15) << "Adoptat" <<
                         left << setw(15) << "Vaccinat" << " " << left << setw(15) << "Sterilizat" << endl;
                        for (int i=1;i<=n;i++)
                        {
                            if (pet[i].adoptat==1)
                                {
                                   cout << pet[i].ID << " 	"
                                    << left << setw(15) << pet[i].nume << "  "
                                    << left << setw(15) << pet[i].tip << "  "
                                    << left << setw(15) << pet[i].rasa << "  "
                                    << left << setw(15) << pet[i].varstaLuni << "  ";
                                    if (pet[i].adoptat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].vaccinat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].sterilizat==1) cout << left << setw(15) << "DA" << endl;
                                    else cout << left << setw(15) << "NU" << endl;

                                }

                        }
                        cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                        break;
                    }
                case 3:
                    {
                        skip = 1;
                        break;
                    }

                }

                break;
            }
        case 2:
            {
                system("CLS");
                int IDCautat; char numeCautat[20];
                int temp;
                menu(menuText3,"Alegeti optiunea\n\n",3,temp);
                switch(temp)
                {
                case 0:
                    {
                        system("CLS");
                        type("Introduceti ID-ul animalutului: "); cin >> IDCautat; cin.get();
                        system("CLS");
                        cout << "ID" << " 	" << left << setw(15) << "Nume" <<
                         " " << left << setw(15) << " Tip" << " " <<
                         left << setw(15) << "  Rasa" << " " << left << setw(15) << "Varsta(in luni)" << " " << left << setw(15) << "Adoptat" <<
                         left << setw(15) << "Vaccinat" << " " << left << setw(15) << "Sterilizat" << endl;
                        for(int i=1;i<=n;i++)
                            if(pet[i].ID==IDCautat)
                {                      cout << pet[i].ID << " 	"
                                    << left << setw(15) << pet[i].nume << "  "
                                    << left << setw(15) << pet[i].tip << "  "
                                    << left << setw(15) << pet[i].rasa << "  "
                                    << left << setw(15) << pet[i].varstaLuni << "  ";
                                    if (pet[i].adoptat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].vaccinat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].sterilizat==1) cout << left << setw(15) << "DA" << endl;
                                    else cout << left << setw(15) << "NU" << endl;

                }

                cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                break;
                    }
                case 1:
                    {
                        system("CLS");
                        type("Introduceti numele animalutului: "); cin >> numeCautat; cin.get();
                        system("CLS");
                        cout << "ID" << " 	" << left << setw(15) << "Nume" <<
                         " " << left << setw(15) << " Tip" << " " <<
                         left << setw(15) << "  Rasa" << " " << left << setw(15) << "Varsta(in luni)" << " " << left << setw(15) << "Adoptat" <<
                         left << setw(15) << "Vaccinat" << " " << left << setw(15) << "Sterilizat" << endl;
                        for (int i=1;i<=n;i++)
                            if (strcmp(pet[i].nume,numeCautat)==0)
                        {
                                     cout << pet[i].ID << " 	"
                                    << left << setw(15) << pet[i].nume << "  "
                                    << left << setw(15) << pet[i].tip << "  "
                                    << left << setw(15) << pet[i].rasa << "  "
                                    << left << setw(15) << pet[i].varstaLuni << "  ";
                                    if (pet[i].adoptat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].vaccinat==1) cout << left << setw(15) << "DA  ";
                                    else cout << left << setw(15) << "NU  ";
                                    if (pet[i].sterilizat==1) cout << left << setw(15) << "DA" << endl;
                                    else cout << left << setw(15) << "NU" << endl;

                        }

                        cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();

                        break;
                    }
                case 2:
                    {
                        skip = 1;
                        break;
                    }
                }

                break;
            }
        case 3:
            {   system("CLS");
                type("Introduceti ID-ul animalutului: "); int IDCautat; cin >> IDCautat; cin.get();
                system("CLS");
                int temp;
                menu(menuText4,"Alegeti optiunea\n\n",4,temp);
                switch (temp)
                {
                case 0:
                    {
                        pet[IDCautat].adoptat = 1;
                        system("CLS");
                        type("Animalutul a fost marcat drept adoptat. Intoarcere catre meniu in 5 secunde . . .");
                        Sleep(5000);
                        break;
                    }
                case 1:
                    {
                        pet[IDCautat].vaccinat = 1;
                        system("CLS");
                        type("Animalutul a fost marcat drept vaccinat. Intoarcere catre meniu in 5 secunde . . .");
                        Sleep(5000);
                        break;
                    }
                case 2:
                    {
                        pet[IDCautat].sterilizat = 1;
                        system("CLS");
                        type("Animalutul a fost marcat drept sterilizat. Intoarcere catre meniu in 5 secunde . . .");
                        Sleep(5000);
                        break;
                    }
                case 3:
                    {
                        skip = 1;
                        break;
                    }
                }

                ofstream ofs;
                ofs.open("data\\memorie.txt");
                ofs.close();g<<"ID	    Nume		                 Tip                                  Rasa                                Varsta (in luni)                   Adoptat		   Vaccinat                            Sterilizat"<<endl;
                    for(int i=1;i<n;i++)
                {g << pet[i].ID << " 	    "
                << left << setw(20) << pet[i].nume << " 	    "
                << left << setw(20) << pet[i].tip << " 	    "
                << left << setw(20) << pet[i].rasa << " 	    "
                << left << setw(20) << pet[i].varstaLuni << " 	    ";
                if (pet[i].adoptat==1) g << left << setw(20) << "DA 	                               ";
                else g << left << setw(20) << "NU 	                               ";
                if (pet[i].vaccinat==1) g << left << setw(20) << "DA 	                               ";
                else g << left << setw(20) << "NU 	                               ";
                if (pet[i].sterilizat==1) g << left << setw(20) << "DA" << endl;
                else g << left << setw(20) << "NU" << endl;
                }

                break;
            }
        case 4:
            {   int nrCatelusi=0,nrPisicute=0,nrAnimaleAdoptate=0,nrAnimaleVaccinate=0,nrAnimaleSterilizate=0;
                system ("CLS");
                for (int i=1;i<=n;i++)
                {
                    if (strcmp(pet[i].tip,"CAINE")==0)
                        nrCatelusi++;
                    if (strcmp(pet[i].tip,"PISICA")==0)
                        nrPisicute++;
                    if (pet[i].adoptat==1)
                        nrAnimaleAdoptate++;
                    if (pet[i].vaccinat==1)
                        nrAnimaleVaccinate++;
                    if (pet[i].sterilizat==1)
                        nrAnimaleSterilizate++;
                }

                type ("In adapost exista: "); cout << endl;
                type ("- "); cout << n-1; type(" animalute"); cout << endl;
                type ("- "); cout << ((nrCatelusi*100)/(float)(n-1)); type("% catelusi"); cout << endl;
                type ("- "); cout << ((nrPisicute*100)/(float)(n-1)); type("% pisicute"); cout << endl;
                type ("- "); cout << ((nrAnimaleAdoptate*100)/(float)(n-1)); type("% animale adoptate"); cout << endl;
                type ("- "); cout << ((nrAnimaleVaccinate*100)/(float)(n-1)); type("% animale vaccinate"); if (((nrAnimaleVaccinate*100)/n)<50) type("(!)"); cout << endl;
                type ("- "); cout << ((nrAnimaleSterilizate*100)/(float)(n-1)); type("% animale sterilizate"); if (((nrAnimaleSterilizate*100)/n)<50) type("(!)"); cout << endl;
                cout << endl; type("! - Necesita atentie!");


                cout << endl << endl; type("Introduceti orice tasta pentru a reveni la meniul principal . . ."); getch();
                break;
            }
        case 5:
            {
                return 0;
                break;
            }
        }
    if (skip==0)
        loadingScreen("Meniul principal se incarca . . .", 0, 5);

    system("CLS");

    }while(true);

f.close();
g.close();





    return 0;
};

