#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[6];           // Tag.BODY
    char entity_0[90];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 15;              // Tag.BODY
    entity_8 = 93;              // Tag.BODY
    entity_7[entity_1] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 80;              // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER