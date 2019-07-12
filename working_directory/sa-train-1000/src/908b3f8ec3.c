#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 86;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 27;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_9[8];           // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 75;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[82];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_4 = 2;               // Tag.BODY
    entity_9[entity_3] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[84];          // Tag.BODY
    entity_8 = 57;              // Tag.BODY
    entity_6[entity_4] = 'd';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_8] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER