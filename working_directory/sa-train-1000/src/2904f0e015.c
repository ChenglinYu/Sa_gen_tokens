#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[53];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = 14;              // Tag.BODY
    char entity_6[51];          // Tag.BODY
    entity_3 = 40;              // Tag.BODY
    entity_9 = 83;              // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_3] = '6';   // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_9] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER