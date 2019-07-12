#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[85];          // Tag.BODY
    char entity_1[53];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8 = 90;              // Tag.BODY
    entity_1[entity_8] = 'd';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_0;               // Tag.BODY
    entity_0 = 47;              // Tag.BODY
    entity_7 = 58;              // Tag.BODY
    char entity_6[59];          // Tag.BODY
    entity_5 = 32;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 76;              // Tag.BODY
    entity_6[entity_5] = '3';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_0] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER