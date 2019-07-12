#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_5[86];          // Tag.BODY
    entity_7 = 73;              // Tag.BODY
    entity_3 = 55;              // Tag.BODY
    if (entity_4 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_6[10];          // Tag.BODY
    entity_8 = 12;              // Tag.BODY
    entity_5[entity_7] = '5';   // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_8] = 'l';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER