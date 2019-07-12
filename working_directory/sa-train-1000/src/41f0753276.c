#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 38;              // Tag.BODY
    char entity_9[6];           // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_1 = 38;              // Tag.BODY
    if (entity_8 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 84;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER