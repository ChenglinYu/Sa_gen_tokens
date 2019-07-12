#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_7[74];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_6[95];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    entity_1 = 3;               // Tag.BODY
    entity_4 = 92;              // Tag.BODY
    if (entity_3 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 1;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_6[entity_9] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_1] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER