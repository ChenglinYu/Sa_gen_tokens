#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_6[88];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[35];          // Tag.BODY
    entity_0 = 4;               // Tag.BODY
    entity_3 = 70;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 30;              // Tag.BODY
    if (entity_5 < entity_8){   // Tag.BODY
    entity_6[entity_3] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_5 = 51;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_0] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER