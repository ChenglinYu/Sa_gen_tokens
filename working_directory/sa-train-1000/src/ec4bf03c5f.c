#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[67];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6 = 68;              // Tag.BODY
    char entity_3[75];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 23;              // Tag.BODY
    entity_8 = 89;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    entity_3[entity_8] = 'Q';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0[entity_6] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[26];          // Tag.BODY
    entity_5 = 44;              // Tag.BODY
    entity_9[entity_5] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER