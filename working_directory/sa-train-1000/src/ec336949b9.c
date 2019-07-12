#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_1[17];          // Tag.BODY
    entity_2 = 97;              // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    if (entity_8 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 70;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_8){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_6] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER