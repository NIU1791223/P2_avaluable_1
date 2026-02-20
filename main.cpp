#include "cerca_substitueix.h"

int main(){
    char str[MAX_STRING] = "Hola";
    char original[MAX_STRING] = "ola";
    char nou[MAX_STRING] = "aaaaaaaaaa";

    substitueixString(str, 1, original, nou);

    cout << str << endl;
}