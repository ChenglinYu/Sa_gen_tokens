#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 83;              // Tag.BODY
    char entity_3[72];          // Tag.BODY
    entity_7 = 92;              // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_7] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;               // Tag.BODY
    char entity_8[88];          // Tag.BODY
    entity_1 = 47;              // Tag.BODY
    entity_8[entity_1] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER