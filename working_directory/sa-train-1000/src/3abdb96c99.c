#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 98;              // Tag.BODY
    entity_5 = 22;              // Tag.BODY
    char entity_4[77];          // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 5;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_1){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[96];          // Tag.BODY
    entity_3 = 18;              // Tag.BODY
    char entity_7[38];          // Tag.BODY
    entity_4[entity_5] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_3] = 'S';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 82;              // Tag.BODY
    entity_7[entity_0] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER