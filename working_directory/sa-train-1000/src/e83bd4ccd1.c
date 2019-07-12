#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[81];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_7[75];          // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_2 = 21;              // Tag.BODY
    entity_0 = 90;              // Tag.BODY
    entity_4 = 84;              // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_5){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7[entity_2] = '9';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_4] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 96;              // Tag.BODY
    char entity_8[94];          // Tag.BODY
    entity_8[entity_6] = 'L';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER