#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_2[14];          // Tag.BODY
    entity_7 = 93;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_0[67];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6 = 62;              // Tag.BODY
    entity_8 = 54;              // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_6] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_9;               // Tag.BODY
    entity_9 = 1;               // Tag.BODY
    entity_0[entity_7] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[36];          // Tag.BODY
    entity_3[entity_9] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER