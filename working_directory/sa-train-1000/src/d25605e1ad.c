#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 59;              // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_0[42];          // Tag.BODY
    entity_2 = 16;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 56;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_2] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER