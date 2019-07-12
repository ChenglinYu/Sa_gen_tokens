#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[78];          // Tag.BODY
    entity_9 = 56;              // Tag.BODY
    entity_2 = 51;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 89;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 85;              // Tag.BODY
    char entity_0[84];          // Tag.BODY
    entity_7 = 83;              // Tag.BODY
    char entity_1[30];          // Tag.BODY
    entity_0[entity_4] = 'V';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_7] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_9] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER