#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_7[79];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = 72;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[43];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = 22;              // Tag.BODY
    entity_9 = 51;              // Tag.BODY
    if (entity_6 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 50;              // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_9] = 'G';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_2] = 'T';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER