#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[17];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2 = 94;              // Tag.BODY
    char entity_4[38];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    entity_1 = 31;              // Tag.BODY
    if (entity_7 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 49;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_1] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER