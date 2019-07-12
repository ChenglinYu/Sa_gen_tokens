#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = 56;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_1[10];          // Tag.BODY
    entity_7 = 56;              // Tag.BODY
    if (entity_5 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_8] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[6];           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 63;              // Tag.BODY
    entity_4[entity_2] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER