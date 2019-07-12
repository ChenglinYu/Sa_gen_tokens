#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[97];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 11;              // Tag.BODY
    entity_1 = 8;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 43;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_9[entity_1] = 'u';   // Tag.BUFWRITE_COND_SAFE
    char entity_4[13];          // Tag.BODY
    entity_5 = 96;              // Tag.BODY
    entity_4[entity_5] = 'W';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER