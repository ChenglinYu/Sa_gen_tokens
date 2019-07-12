#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 99;              // Tag.BODY
    entity_8 = 96;              // Tag.BODY
    char entity_4[13];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 92;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_0[36];          // Tag.BODY
    entity_4[entity_1] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 96;              // Tag.BODY
    entity_0[entity_2] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER