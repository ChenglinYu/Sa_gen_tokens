#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_5[69];          // Tag.BODY
    entity_4 = 13;              // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_1 = 34;              // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 58;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 88;              // Tag.BODY
    char entity_7[47];          // Tag.BODY
    entity_7[entity_8] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_4] = 'C';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER