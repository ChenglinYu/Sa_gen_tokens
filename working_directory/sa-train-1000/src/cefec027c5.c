#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[6];           // Tag.BODY
    char entity_0[19];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_8 = 31;              // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_9 = 33;              // Tag.BODY
    if (entity_4 < entity_8){   // Tag.BODY
    entity_0[entity_6] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                    // Tag.BODY
    entity_4 = 12;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_9] = 'J';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER