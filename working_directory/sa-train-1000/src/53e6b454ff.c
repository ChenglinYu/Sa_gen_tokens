#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 77;              // Tag.BODY
    char entity_8[41];          // Tag.BODY
    entity_7 = 63;              // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_3[6];           // Tag.BODY
    entity_2 = 96;              // Tag.BODY
    char entity_1[13];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1[entity_2] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_9] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 3;               // Tag.BODY
    entity_3[entity_5] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER