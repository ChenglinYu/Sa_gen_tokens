#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_7[75];          // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0 = 88;              // Tag.BODY
    entity_5 = 28;              // Tag.BODY
    if (entity_4 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 27;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;               // Tag.BODY
    entity_2 = 78;              // Tag.BODY
    char entity_3[26];          // Tag.BODY
    entity_3[entity_2] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER