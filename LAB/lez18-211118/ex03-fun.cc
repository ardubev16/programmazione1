#include "ex03-fun.h"

bool isEmail(char word[]) {
    bool result = true;
    int i;

    //check for <utente>@<dominio> form
    for (i=0; word[i] != '\0'; i++)
        if (word[i] == '@')
            int at_symbol = i;
    result = result && !(at_symbol == 0 || at_symbol == i);

    //check for a-z A-Z 0-9 . _
    for (i=0; word[i] != '\0'; i++)
        result = result && ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= '0' && word[i] <= '9') || word[i] == '.' || word == '_');

    //check . not at start or end
    result = result &&
}
