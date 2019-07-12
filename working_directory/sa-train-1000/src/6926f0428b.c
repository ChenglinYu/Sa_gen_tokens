#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[36];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_6[48];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 64;              // Tag.BODY
    entity_7 = 53;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_9 = 92;              // Tag.BODY
    entity_3[entity_9] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_0 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 72;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_4] = 'D';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER