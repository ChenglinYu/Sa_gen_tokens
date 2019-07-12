#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[46];          // Tag.BODY
    char entity_1[20];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 22;              // Tag.BODY
    entity_2 = 20;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_3 = 11;              // Tag.BODY
    if (entity_6 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 37;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'm';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_2] = 'm';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER