#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[48];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_8 = 95;              // Tag.BODY
    entity_7 = 27;              // Tag.BODY
    if (entity_1 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 64;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_1){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_8] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER