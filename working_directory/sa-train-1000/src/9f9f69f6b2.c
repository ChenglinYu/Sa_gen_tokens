#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_9[24];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 13;              // Tag.BODY
    entity_0 = 10;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[71];          // Tag.BODY
    char entity_4[48];          // Tag.BODY
    entity_9[entity_1] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 57;              // Tag.BODY
    entity_7[entity_8] = 'l';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_3] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER