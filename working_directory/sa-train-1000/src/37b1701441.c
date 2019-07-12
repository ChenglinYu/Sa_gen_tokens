#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_0[46];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_1 = 51;              // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    entity_6 = 43;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_2[70];          // Tag.BODY
    entity_0[entity_6] = 'E';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_4 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 88;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_3[69];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_2[entity_1] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 68;              // Tag.BODY
    entity_3[entity_5] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER