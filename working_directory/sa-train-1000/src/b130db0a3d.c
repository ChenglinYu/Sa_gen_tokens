#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_4[90];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 12;              // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 18;              // Tag.BODY
    char entity_0[19];          // Tag.BODY
    char entity_2[75];          // Tag.BODY
    entity_7 = 82;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_8 = 34;              // Tag.BODY
    if (entity_6 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 78;              // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_1] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_6){ // Tag.BODY
    entity_2[entity_5] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER