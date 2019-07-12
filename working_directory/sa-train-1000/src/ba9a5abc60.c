#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    char entity_2[87];          // Tag.BODY
    entity_8 = 15;              // Tag.BODY
    char entity_6[47];          // Tag.BODY
    entity_4 = 14;              // Tag.BODY
    entity_2[entity_8] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 77;              // Tag.BODY
    if (entity_1 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_1){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_4] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER