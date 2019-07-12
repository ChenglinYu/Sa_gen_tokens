#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_2[75];          // Tag.BODY
    char entity_5[74];          // Tag.BODY
    entity_4 = 88;              // Tag.BODY
    char entity_6[13];          // Tag.BODY
    entity_1 = 54;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_3 = 67;              // Tag.BODY
    entity_7 = 85;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    if (entity_9 < entity_7){   // Tag.BODY
    entity_6[entity_1] = 'b';   // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                    // Tag.BODY
    entity_2[entity_3] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 7;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_4] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER