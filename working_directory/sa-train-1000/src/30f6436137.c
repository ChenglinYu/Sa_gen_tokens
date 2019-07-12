#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 43;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_5[1];           // Tag.BODY
    entity_1 = 74;              // Tag.BODY
    if (entity_9 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 28;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_5[entity_1] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[89];          // Tag.BODY
    entity_4 = 85;              // Tag.BODY
    entity_6[entity_4] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER