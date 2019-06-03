#ifndef PET_H
#define PET_H

#include "proiect.h"

struct Pet
{
        char nume[20],rasa[20],numePersoanaAdoptiva[20],tip[20];
        int ID{},varstaAni{}, varstaLuni{},stare{};
        bool esteCaine,estePisica,adoptat = 0,sterilizat{},vaccinat{},deparazitat{};
        int OK();




}pet[100];




#endif // PET_H
