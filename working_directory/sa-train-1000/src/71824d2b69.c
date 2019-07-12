#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_7[10];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 80;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_3[47];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    entity_6 = 32;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_8){   // Tag.BODY
    entity_7[entity_6] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                    // Tag.BODY
    entity_0 = 98;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3[entity_5] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[53];          // Tag.BODY
    entity_2 = 70;              // Tag.BODY
    entity_9[entity_2] = 'g';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER