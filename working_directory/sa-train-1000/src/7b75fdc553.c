#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 31;              // Tag.BODY
    char entity_8[69];          // Tag.BODY
    entity_1 = 19;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_4[7];           // Tag.BODY
    entity_7 = 73;              // Tag.BODY
    entity_4[entity_7] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_6){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'H';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER