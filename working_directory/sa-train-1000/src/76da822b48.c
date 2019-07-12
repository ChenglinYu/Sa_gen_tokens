#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6 = 9;               // Tag.BODY
    entity_4 = 93;              // Tag.BODY
    char entity_1[14];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 70;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_0[3];           // Tag.BODY
    entity_1[entity_6] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[75];          // Tag.BODY
    entity_2 = 6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5[entity_2] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 12;              // Tag.BODY
    entity_0[entity_9] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER