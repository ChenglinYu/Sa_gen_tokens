#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[71];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 22;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_9 = 15;              // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 13;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[44];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5[entity_2] = '5';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 63;              // Tag.BODY
    entity_1[entity_3] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER