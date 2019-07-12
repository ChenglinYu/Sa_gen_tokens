#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[75];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    char entity_8[8];           // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 29;              // Tag.BODY
    if (entity_2 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    entity_5[entity_3] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_8[entity_6] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER