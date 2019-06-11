#ifndef PET_H
#define PET_H

#include "proiect.h"

struct Pet {
  char nume[20], rasa[20], tip[20];
  int ID = 0, varstaLuni = 0;
  bool esteCaine = 0, estePisica = 0, adoptat = 0, sterilizat = 0, vaccinat = 0;

} pet[100];

#endif  // PET_H
