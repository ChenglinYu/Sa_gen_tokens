#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[91];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = 45;              // Tag.BODY
    entity_1 = 55;              // Tag.BODY
    entity_4 = 59;              // Tag.BODY
    char entity_6[54];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 25;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    entity_6[entity_1] = 'F';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_9[87];          // Tag.BODY
    entity_7 = 83;              // Tag.BODY
    entity_8[entity_0] = 'v';   // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_7] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER