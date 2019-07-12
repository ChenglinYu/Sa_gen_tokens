#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_8[21];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    entity_2 = 6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_3[32];          // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_4 = 53;              // Tag.BODY
    char entity_6[27];          // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8[entity_4] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 56;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_7] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER