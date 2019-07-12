#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_9[2];           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 30;              // Tag.BODY
    char entity_2[23];          // Tag.BODY
    entity_8 = 30;              // Tag.BODY
    entity_4 = 84;              // Tag.BODY
    char entity_0[37];          // Tag.BODY
    entity_3 = 21;              // Tag.BODY
    entity_9[entity_8] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 22;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_4] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_3] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER