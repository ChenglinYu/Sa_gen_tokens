#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_4[54];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1 = 62;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_6[25];          // Tag.BODY
    char entity_7[88];          // Tag.BODY
    entity_5 = 95;              // Tag.BODY
    entity_8 = 53;              // Tag.BODY
    entity_6[entity_1] = 'D';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 6;               // Tag.BODY
    if (entity_2 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    entity_7[entity_5] = 'F';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_4[entity_8] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER