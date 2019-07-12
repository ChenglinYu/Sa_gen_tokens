#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 13;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[21];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_3 = 63;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 86;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_2){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[1];           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1[entity_4] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;               // Tag.BODY
    char entity_6[69];          // Tag.BODY
    entity_8 = 31;              // Tag.BODY
    entity_6[entity_8] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 3;               // Tag.BODY
    entity_9[entity_0] = 'm';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER