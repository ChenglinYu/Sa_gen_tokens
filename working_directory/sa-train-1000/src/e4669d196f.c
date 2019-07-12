#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_9 = 31;              // Tag.BODY
    char entity_3[3];           // Tag.BODY
    entity_6 = 0;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 12;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_9] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER