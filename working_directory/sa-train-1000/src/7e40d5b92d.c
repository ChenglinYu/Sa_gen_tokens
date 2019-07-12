#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_3[80];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1 = 83;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = 75;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 1;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[64];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3[entity_1] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 33;              // Tag.BODY
    entity_6[entity_4] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER