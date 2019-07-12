#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[45];          // Tag.BODY
    entity_0 = 26;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3 = 13;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5[entity_0] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 97;              // Tag.BODY
    char entity_6[53];          // Tag.BODY
    char entity_9[79];          // Tag.BODY
    entity_6[entity_8] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 28;              // Tag.BODY
    entity_9[entity_1] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER