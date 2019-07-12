#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_6[13];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = 89;              // Tag.BODY
    entity_3 = 29;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 73;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_4){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER