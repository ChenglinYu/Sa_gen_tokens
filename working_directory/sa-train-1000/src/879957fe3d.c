#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_6[46];          // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_9[60];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2 = 0;               // Tag.BODY
    entity_0 = 72;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_4 = 10;              // Tag.BODY
    if (entity_8 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 6;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_6[entity_0] = 'V';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9[entity_4] = '4';   // Tag.BUFWRITE_COND_SAFE
    char entity_3[85];          // Tag.BODY
    entity_7 = 5;               // Tag.BODY
    entity_3[entity_7] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER