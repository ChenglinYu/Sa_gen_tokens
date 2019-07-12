#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[21];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_0[11];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_4 = 17;              // Tag.BODY
    entity_1 = 69;              // Tag.BODY
    entity_9 = 86;              // Tag.BODY
    char entity_5[13];          // Tag.BODY
    if (entity_8 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 25;              // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_1] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_4] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER