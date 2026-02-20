####Entrega del Exercici Avaluable 1

###Enunciat

Implementeu una funció que, donat un text d’entrada substitueixi totes les aparicions d’un string que es passa com a paràmetre per un altre string que també es passa com a paràmetre. La funció ha de tenir aquesta capçalera:

    ▪ int cercaSubstitueix(char text[], char stringOriginal[], char nouString[]);

El valor de retorn de la funció indica el nº de substitucions que s’han fet.

Feu la implementació de la funció *cercaSubstitueix* utilitzant aquestes dues funcions auxiliars que també heu d’implementar:

    ▪ bool cercaString(char text[], char str[], int& posicio)

Aquesta funció cerca la primera aparició d’un string (paràmetre str) dins d’un text (paràmetre text), començant per la posició del text indicada al paràmetre posició. La funció ha de retornar un valor booleà indicant si s’ha trobat l’string dins del text. En el cas que el trobi, al paràmetre posicio es retornarà per referència la posició on s’ha trobat.

    ▪ void substitueixString(char text[], int posicio, char stringOriginal[], char nouString[])

Aquesta funció substitueix dins d’un text (paràmetre text), l’string indicat al paràmetre *stringOriginal* per l’string del paràmetre *nouString* a la posició indicada pel paràmetre posicio. Heu de tenir en compte d’ajustar la longitud del text d’entrada depenent de si el nou string és més llarg o més curt que l’string original.