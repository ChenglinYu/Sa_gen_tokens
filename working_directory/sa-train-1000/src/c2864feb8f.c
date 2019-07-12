#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_2[83];          // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_9 = 86;              // Tag.BODY
    entity_3 = 18;              // Tag.BODY
    char entity_8[18];          // Tag.BODY
    if (entity_4 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 44;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_4){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    entity_8[entity_9] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_2[entity_3] = 'B';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER