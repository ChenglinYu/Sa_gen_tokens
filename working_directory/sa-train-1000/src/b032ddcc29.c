#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_7[92];          // Tag.BODY
    entity_5 = 69;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 28;              // Tag.BODY
    entity_1 = 23;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_2[72];          // Tag.BODY
    if (entity_8 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 31;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_8){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    entity_2[entity_1] = 'L';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_7[entity_0] = 'B';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER