#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_8[54];          // Tag.BODY
    entity_1 = 73;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_4 = 24;              // Tag.BODY
    if (entity_2 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 27;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_2){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_4] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER