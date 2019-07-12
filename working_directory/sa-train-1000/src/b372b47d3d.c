#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[60];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_7 = 12;              // Tag.BODY
    char entity_9[44];          // Tag.BODY
    entity_8 = 8;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_4 = 49;              // Tag.BODY
    if (entity_0 < entity_8){   // Tag.BODY
    entity_5[entity_7] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_0 = 15;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER