#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[79];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 98;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_3[68];          // Tag.BODY
    entity_9 = 37;              // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    entity_0[entity_7] = 'k';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_8 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 52;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[95];          // Tag.BODY
    entity_3[entity_9] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;               // Tag.BODY
    entity_4 = 90;              // Tag.BODY
    entity_6[entity_4] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER