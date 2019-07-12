#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6 = 24;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_9[63];          // Tag.BODY
    entity_0 = 64;              // Tag.BODY
    if (entity_4 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 91;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[14];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 26;              // Tag.BODY
    entity_7 = 17;              // Tag.BODY
    entity_1[entity_2] = 'Z';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_6] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[25];          // Tag.BODY
    entity_3[entity_7] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER