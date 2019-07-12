#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = 52;              // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_1[47];          // Tag.BODY
    entity_7 = 7;               // Tag.BODY
    if (entity_8 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 14;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_7] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER