#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_4[56];          // Tag.BODY
    entity_9 = 9;               // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 23;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER