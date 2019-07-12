#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_9[5];           // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_5 = 10;              // Tag.BODY
    entity_1 = 64;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_3[51];          // Tag.BODY
    entity_2 = 14;              // Tag.BODY
    entity_7 = 28;              // Tag.BODY
    char entity_0[5];           // Tag.BODY
    if (entity_8 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 19;              // Tag.BODY
    entity_0[entity_5] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_9[entity_7] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER