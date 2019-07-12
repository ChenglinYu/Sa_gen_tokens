#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_3[14];          // Tag.BODY
    entity_7 = 45;              // Tag.BODY
    entity_0 = 45;              // Tag.BODY
    char entity_8[19];          // Tag.BODY
    entity_8[entity_7] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 86;              // Tag.BODY
    if (entity_6 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 80;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_6){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER