#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[24];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 77;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_7[1];           // Tag.BODY
    entity_2 = 33;              // Tag.BODY
    entity_9 = 84;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_7[entity_0] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER