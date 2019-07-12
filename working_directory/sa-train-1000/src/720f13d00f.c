#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[4];           // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 64;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_4 = 86;              // Tag.BODY
    if (entity_8 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 22;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_1] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER