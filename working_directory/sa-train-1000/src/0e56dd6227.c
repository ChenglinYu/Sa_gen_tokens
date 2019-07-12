#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_1[80];          // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 46;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[54];          // Tag.BODY
    char entity_3[11];          // Tag.BODY
    entity_1[entity_9] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 45;              // Tag.BODY
    entity_4 = 65;              // Tag.BODY
    entity_5[entity_4] = 'q';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER