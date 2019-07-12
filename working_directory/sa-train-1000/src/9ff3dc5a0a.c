#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 21;              // Tag.BODY
    char entity_2[94];          // Tag.BODY
    entity_7 = 37;              // Tag.BODY
    while(entity_7 < entity_6){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'B';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER