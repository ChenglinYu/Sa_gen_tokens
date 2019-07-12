#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[72];          // Tag.BODY
    char entity_1[93];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    entity_2 = 46;              // Tag.BODY
    char entity_3[42];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 75;              // Tag.BODY
    entity_7 = 56;              // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_0] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_2] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER