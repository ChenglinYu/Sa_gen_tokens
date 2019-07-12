#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_3[11];          // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[86];          // Tag.BODY
    entity_1 = 45;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 48;              // Tag.BODY
    entity_2 = 31;              // Tag.BODY
    entity_5[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER