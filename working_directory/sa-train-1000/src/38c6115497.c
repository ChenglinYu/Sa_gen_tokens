#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[56];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_8 = 10;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_2 = 78;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_6[21];          // Tag.BODY
    entity_0 = 30;              // Tag.BODY
    if (entity_4 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 0;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 54;              // Tag.BODY
    entity_6[entity_8] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[52];          // Tag.BODY
    entity_5[entity_2] = 'F';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_7] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER