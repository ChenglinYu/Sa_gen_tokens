#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    entity_2 = 97;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_4[29];          // Tag.BODY
    if (entity_5 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 50;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4[entity_9] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[6];           // Tag.BODY
    entity_3 = 2;               // Tag.BODY
    char entity_6[78];          // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    entity_1[entity_0] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_3] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER