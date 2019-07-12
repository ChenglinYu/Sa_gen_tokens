#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 44;              // Tag.BODY
    char entity_5[65];          // Tag.BODY
    entity_2 = 1;               // Tag.BODY
    char entity_0[12];          // Tag.BODY
    entity_6 = 15;              // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_7] = '5';   // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_6] = 'w';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER