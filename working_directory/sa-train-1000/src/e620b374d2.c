#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 75;              // Tag.BODY
    entity_2 = 52;              // Tag.BODY
    char entity_0[23];          // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_3[0];           // Tag.BODY
    entity_5 = 8;               // Tag.BODY
    if (entity_4 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 45;              // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0[entity_1] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[8];           // Tag.BODY
    entity_7 = 31;              // Tag.BODY
    entity_6[entity_7] = 'D';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER