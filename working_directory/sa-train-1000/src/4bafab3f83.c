#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_2[33];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 10;              // Tag.BODY
    entity_9 = 94;              // Tag.BODY
    if (entity_6 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 56;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER