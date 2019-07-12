#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6 = 98;              // Tag.BODY
    char entity_0[60];          // Tag.BODY
    entity_3 = 98;              // Tag.BODY
    if (entity_4 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 39;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_4){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER