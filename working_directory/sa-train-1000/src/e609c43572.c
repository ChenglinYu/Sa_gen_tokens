#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[91];          // Tag.BODY
    entity_5 = 66;              // Tag.BODY
    entity_6 = 90;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_3[32];          // Tag.BODY
    entity_8 = 68;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 29;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_8] = 'J';   // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_6] = 'w';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER