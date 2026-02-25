#include "cerca_substitueix.h"

int main(){
    char str[MAX_STRING] = "No fem cap canvi";
    char original[MAX_STRING] = "ac";
    char nou[MAX_STRING] = "abc";

    int c = cercaSubstitueix(str, original, nou);

    cout << str << " | Nombre de canvis: " << c << endl;
}