#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    char entity_9[48];          // Tag.BODY
    char entity_2[49];          // Tag.BODY
    entity_8 = 15;              // Tag.BODY
    entity_0 = 51;              // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[64];          // Tag.BODY
    entity_5 = 5;               // Tag.BODY
    entity_1[entity_5] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_0] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_8] = '9';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER