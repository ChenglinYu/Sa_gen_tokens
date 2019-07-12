#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_6[72];          // Tag.BODY
    entity_3 = 69;              // Tag.BODY
    entity_8 = 23;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_8] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER