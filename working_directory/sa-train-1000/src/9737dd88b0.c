#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    char entity_7[73];          // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_1 = 27;              // Tag.BODY
    if (entity_4 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_6[98];          // Tag.BODY
    entity_7[entity_1] = 's';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    entity_9 = 23;              // Tag.BODY
    entity_8 = 26;              // Tag.BODY
    entity_6[entity_8] = 'j';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_3[29];          // Tag.BODY
    entity_3[entity_9] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER