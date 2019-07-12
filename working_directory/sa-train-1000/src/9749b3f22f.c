#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[26];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 69;              // Tag.BODY
    entity_4 = 71;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_8){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 17;              // Tag.BODY
    entity_9[entity_6] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[27];          // Tag.BODY
    char entity_3[46];          // Tag.BODY
    entity_5[entity_1] = 'm';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_2] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER