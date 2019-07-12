#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = 57;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[79];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_6 = 83;              // Tag.BODY
    entity_3 = 23;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_5[33];          // Tag.BODY
    if (entity_0 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5[entity_6] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 28;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_8] = 'U';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER