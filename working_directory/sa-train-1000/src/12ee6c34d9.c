#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 13;              // Tag.BODY
    char entity_4[75];          // Tag.BODY
    entity_6 = 16;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    if (entity_9 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 4;               // Tag.BODY
    char entity_0[43];          // Tag.BODY
    entity_4[entity_1] = 'p';   // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_2] = 'm';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER