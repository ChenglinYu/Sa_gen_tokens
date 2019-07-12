#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[74];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = 51;              // Tag.BODY
    entity_9 = 32;              // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 17;              // Tag.BODY
    entity_0[entity_9] = '9';   // Tag.BUFWRITE_COND_SAFE
    char entity_6[46];          // Tag.BODY
    entity_6[entity_2] = 'i';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER