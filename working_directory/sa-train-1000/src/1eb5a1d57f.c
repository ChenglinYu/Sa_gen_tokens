#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[20];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_2[51];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_9 = 64;              // Tag.BODY
    char entity_7[53];          // Tag.BODY
    entity_8 = 63;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5 = 62;              // Tag.BODY
    entity_0 = 18;              // Tag.BODY
    if (entity_4 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6[entity_0] = 'R';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 8;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_8] = 'j';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER