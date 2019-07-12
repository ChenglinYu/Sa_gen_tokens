#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    char entity_8[12];          // Tag.BODY
    char entity_2[77];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = 56;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 16;              // Tag.BODY
    entity_9 = 26;              // Tag.BODY
    if (entity_1 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 86;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_9] = 'M';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_3] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER