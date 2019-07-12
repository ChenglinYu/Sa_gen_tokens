#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_1[31];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 16;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_8 = 94;              // Tag.BODY
    if (entity_6 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_3[42];          // Tag.BODY
    entity_2 = 55;              // Tag.BODY
    entity_3[entity_2] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_8] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER