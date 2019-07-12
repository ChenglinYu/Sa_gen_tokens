#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[69];          // Tag.BODY
    entity_9 = 80;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_8 = 28;              // Tag.BODY
    entity_2 = 75;              // Tag.BODY
    char entity_0[70];          // Tag.BODY
    if (entity_7 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0[entity_9] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 80;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER