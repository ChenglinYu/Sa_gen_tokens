#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_0[2];           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    char entity_6[2];           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5 = 7;               // Tag.BODY
    entity_4 = 63;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_1){ // Tag.BODY
    entity_0[entity_8] = 'A';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_5] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[42];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 98;              // Tag.BODY
    entity_7[entity_9] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER