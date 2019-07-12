#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 99;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9 = 47;              // Tag.BODY
    char entity_2[92];          // Tag.BODY
    entity_2[entity_3] = 'j';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_6;               // Tag.BODY
    char entity_0[27];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_6 = 27;              // Tag.BODY
    if (entity_7 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_6] = '3';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER