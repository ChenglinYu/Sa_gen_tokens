#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 25;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 50;              // Tag.BODY
    char entity_7[76];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    char entity_9[45];          // Tag.BODY
    entity_7[entity_3] = 'l';   // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_4] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER