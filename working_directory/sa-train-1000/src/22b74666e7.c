#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_8[45];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9 = 42;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_4 = 37;              // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_4] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER