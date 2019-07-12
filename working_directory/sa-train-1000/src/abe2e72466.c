#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 58;              // Tag.BODY
    char entity_6[19];          // Tag.BODY
    char entity_8[71];          // Tag.BODY
    entity_2 = 73;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_1 = 70;              // Tag.BODY
    if (entity_7 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8[entity_4] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 14;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER