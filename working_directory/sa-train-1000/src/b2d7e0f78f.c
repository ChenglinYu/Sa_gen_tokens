#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_5 = 13;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_3[17];          // Tag.BODY
    entity_6 = 78;              // Tag.BODY
    char entity_2[17];          // Tag.BODY
    entity_1 = 2;               // Tag.BODY
    if (entity_0 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 23;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3[entity_5] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[35];          // Tag.BODY
    entity_8 = 73;              // Tag.BODY
    entity_7[entity_8] = 'J';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_1] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER