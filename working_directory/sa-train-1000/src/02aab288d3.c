#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[59];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_9 = 57;              // Tag.BODY
    entity_1 = 38;              // Tag.BODY
    entity_8 = 55;              // Tag.BODY
    char entity_2[74];          // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 56;              // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 'L';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER