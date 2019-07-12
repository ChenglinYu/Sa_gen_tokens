#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_3[2];           // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = 33;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_2 = 44;              // Tag.BODY
    if (entity_0 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[32];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3[entity_4] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 57;              // Tag.BODY
    entity_7[entity_8] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER