#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_0[29];          // Tag.BODY
    entity_8 = 16;              // Tag.BODY
    entity_5 = 54;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_9[96];          // Tag.BODY
    entity_0[entity_5] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 51;              // Tag.BODY
    if (entity_6 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 23;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_9[entity_8] = 'q';   // Tag.BUFWRITE_COND_SAFE
    entity_4 = 68;              // Tag.BODY
    char entity_1[83];          // Tag.BODY
    entity_1[entity_4] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER