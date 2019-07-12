#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_6[91];          // Tag.BODY
    entity_0 = 42;              // Tag.BODY
    entity_8 = 53;              // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 99;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_8] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER