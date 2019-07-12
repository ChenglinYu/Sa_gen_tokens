#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9 = 38;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 45;              // Tag.BODY
    char entity_6[31];          // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_3[99];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6[entity_9] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 86;              // Tag.BODY
    entity_4 = 25;              // Tag.BODY
    entity_3[entity_5] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[77];          // Tag.BODY
    entity_2[entity_4] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER