#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_8[97];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_2 = 1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[31];          // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7 = 95;              // Tag.BODY
    entity_6 = 13;              // Tag.BODY
    if (entity_0 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 70;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    int entity_9;               // Tag.BODY
    entity_9 = 16;              // Tag.BODY
    entity_3[entity_7] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[43];          // Tag.BODY
    entity_5[entity_9] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER