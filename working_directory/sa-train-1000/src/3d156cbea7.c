#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 41;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_4 = 86;              // Tag.BODY
    char entity_1[73];          // Tag.BODY
    if (entity_3 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_3){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_4] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER