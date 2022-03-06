//
// Created by Simon on 04.02.2022.
//


#ifndef WOCHENTAGBESTIMMUNG_DATENHEADER_H
#define WOCHENTAGBESTIMMUNG_DATENHEADER_H

using namespace std;

static const char *wochentage[] ={"Sontag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"};

struct eingabeDatum{
    int tag;
    int monat;
    int jahr;
};

eingabeDatum eingabe();

int ermittleTag(eingabeDatum datum);

int ermittleTagzwei(eingabeDatum datum);


#endif //WOCHENTAGBESTIMMUNG_DATENHEADER_H
