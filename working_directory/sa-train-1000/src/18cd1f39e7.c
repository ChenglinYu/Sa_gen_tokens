#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[25];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_4 = 62;              // Tag.BODY
    entity_3 = 97;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 23;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_3] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER