#include "cerca_substitueix.h"
#include <cstring>


bool cercaString(char text[], char subStr[], int &posicio)
{
    int i = posicio;
    int subStrIndex = 0;
    bool strTrobat = false;

    while (text[i] != '\0' && !strTrobat)
    {
        if(text[i] == subStr[subStrIndex]) //Comprobar si la lletra actual és la que ve en el subStr
        {
            if(subStr[++subStrIndex] == '\0') //Comprobar si s'ha arribat al final i incrementar subStrIndex
            {
                strTrobat = true;
            }
        }
        else //Reset en cas de fallar
        {
            subStrIndex = 0;
            i--;//Repetir la que ha fallat per si coincideix amb la inicial, pensa que passaria amb text = "nna", subStr = "na" si no fos aquesta linea
        }

        i++;
    }
    
    posicio = i-subStrIndex;
    return strTrobat;
}

void substitueixString(char text[], int posicio, char stringOriginal[], char nouString[])
{
    bool strOriginalComplet = false;
    bool strNouComplet = false;
    int i = 0;
    int cas2Offset = 0;

    while (!strOriginalComplet || !strNouComplet) //Si no s'ha acabat de completar (recorrer sencer) cap dels dos str es continua
    {
        if(strOriginalComplet && !strNouComplet) //Cas 1: Ja no hi ha més char en el str original
        {
            //Desplacem tot a la dreta per fer espai per el nou char
            for(int j = MAX_STRING-2; j >= (i + posicio); j--){ 
                text[j+1] = text[j];
            }

            text[posicio + i] = nouString[i];
        }
        else if(!strOriginalComplet && strNouComplet) //Cas 2: Encara queden char originals a eliminar
        {
            //Desplacem tot a l'esquerra
            for(int j = (posicio + i); text[j] != '\0'; j++){
                cout << "j: " << j << " text[j]: " << text[j] << " text[j+1]: " << text[j+1] << endl;
                text[j] = text[j+1];
            }

            //La raó per la qual normalment no hauries de modificar la llista que iteres
            //El que pasa és que al desplacar-ho tot a l'esquerra és com si fes que i += 2 i acabo eliminant lletres que no hauria
            //EX.  #0#| 1 | 2 | 3  -->  0 |#1#| 2 | 3   ----> 0 | 1 |#2#| 3
            //      H   o   l   a  i++  o   l   a   \0  i++   o   a   \0  \0
            //Eliminar "Ho"             ^ la 'o' s'ha col·lat ^
            cas2Offset++; //Per a la comprobació, si i no puja (stringOriginal[i] == '\0') mai es complirà

            i--; //Contraresta el i++ del final
        }
        else //Cas 3: Encara hi ha caracters a posar/eliminar en nouString i en stringOriginal
        {
            text[posicio + i] = nouString[i];
        }

        i++;

        //Comprobacions de si queden char en nouString i en stringOriginal
        if(strNouComplet || nouString[i] == '\0')
        {
            strNouComplet = true;
        }

        if(strOriginalComplet || stringOriginal[i + cas2Offset] == '\0')
        {
            strOriginalComplet = true;
        }
    }
    

}

int cercaSubstitueix(char text[], char stringOriginal[], char nouString[])
{
    return 0;
}
