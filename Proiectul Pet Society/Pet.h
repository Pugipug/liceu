#ifndef PET_H
#define PET_H

#include "proiect.h"

struct Pet
{
        char nume[20],rasa[20],tip[20];
        int ID{},varstaLuni{};
        bool esteCaine,estePisica,adoptat = 0,sterilizat = 0, vaccinat = 0;
        int OK();




}pet[100];




#endif // PET_H
