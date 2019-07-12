#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = 32;              // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_9[26];          // Tag.BODY
    entity_2 = 18;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 68;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER