#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[39];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 7;               // Tag.BODY
    entity_7 = 35;              // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_7] = 'd';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER