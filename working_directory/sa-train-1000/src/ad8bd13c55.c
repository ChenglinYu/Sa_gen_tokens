#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 96;              // Tag.BODY
    char entity_7[83];          // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_1 = 53;              // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 84;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_1] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER