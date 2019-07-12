#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_6[41];          // Tag.BODY
    char entity_7[3];           // Tag.BODY
    entity_0 = 93;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 92;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_5 = 88;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 84;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_7[entity_5] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 77;              // Tag.BODY
    char entity_4[48];          // Tag.BODY
    entity_4[entity_8] = 'n';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_0] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER