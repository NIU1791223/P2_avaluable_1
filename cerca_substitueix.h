#ifndef CERCA_SUBSTITUEIX_H
#define CERCA_SUBSTITUEIX_H

const int MAX_STRING = 100;

int cercaSubstitueix(char text[], char stringCerca[], char nouString[]);

#endif

#include <iostream>

using namespace std;

bool cercaString(char text[], char subStr[], int &posicio);
void substitueixString(char text[], int posicio, char stringOriginal[], char nouString[]);