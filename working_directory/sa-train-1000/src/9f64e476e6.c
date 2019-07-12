#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_0[37];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[5];           // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_6 = 1;               // Tag.BODY
    entity_1 = 28;              // Tag.BODY
    char entity_4[38];          // Tag.BODY
    entity_2 = 73;              // Tag.BODY
    entity_7 = 99;              // Tag.BODY
    entity_0[entity_6] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_1] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_3 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 27;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_2] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER