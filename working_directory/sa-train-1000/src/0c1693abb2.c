#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_7[72];          // Tag.BODY
    entity_9 = 93;              // Tag.BODY
    entity_6 = 52;              // Tag.BODY
    char entity_3[35];          // Tag.BODY
    entity_1 = 79;              // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    entity_7[entity_6] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    char entity_2[94];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 44;              // Tag.BODY
    entity_2[entity_8] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_9] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER