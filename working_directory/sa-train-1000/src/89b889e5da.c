#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[76];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 51;              // Tag.BODY
    char entity_9[19];          // Tag.BODY
    entity_4 = 29;              // Tag.BODY
    entity_2 = 27;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 31;              // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_2] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_4] = 'j';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER