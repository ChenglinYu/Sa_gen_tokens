#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[36];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_8 = 42;              // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_0[16];          // Tag.BODY
    entity_1 = 19;              // Tag.BODY
    entity_2[entity_1] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 73;              // Tag.BODY
    if (entity_7 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0[entity_3] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[59];          // Tag.BODY
    entity_5 = 88;              // Tag.BODY
    entity_6[entity_5] = 'd';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER