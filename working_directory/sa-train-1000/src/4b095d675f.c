#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[61];          // Tag.BODY
    char entity_6[38];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 67;              // Tag.BODY
    entity_5 = 4;               // Tag.BODY
    entity_0 = 16;              // Tag.BODY
    if (entity_7 < entity_5){   // Tag.BODY
    entity_1[entity_0] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_7 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_9] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER