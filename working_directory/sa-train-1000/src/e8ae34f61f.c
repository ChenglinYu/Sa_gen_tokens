#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_9[19];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 83;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_0 = 21;              // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 83;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    char entity_4[19];          // Tag.BODY
    entity_8 = 58;              // Tag.BODY
    entity_4[entity_8] = 'Q';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER