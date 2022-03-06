//
// Created by Simon on 04.02.2022.
//

#include <iostream>
#include "DatenHeader.h"

using namespace std;



eingabeDatum eingabe(){
    eingabeDatum eingegebenes;

    cout << "Tag : ";
    cin >> eingegebenes.tag;
    cout << endl << "Monat : ";
    cin >> eingegebenes.monat;
    cout << endl << "Jahr : ";
    cin >> eingegebenes.jahr;

    return eingegebenes;
}

int ermittleTag(eingabeDatum datum) {
    int h = datum.monat;
    int k = datum.jahr;
    int tag = datum.tag;

    if (datum.monat < 3)
    {
        h = datum.monat + 12 ;
        k = datum.jahr - 1 ;
    }


    return (tag+2*h + (3*h+3)/5 + k + k/4 - k/100 + k/400 + 1)%7;
}

int ermittleTagzwei(eingabeDatum datum)
{


}


#include "DatenHeader.h"
