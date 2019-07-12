#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_5[79];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 46;              // Tag.BODY
    entity_9 = 30;              // Tag.BODY
    char entity_7[10];          // Tag.BODY
    entity_1 = 22;              // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_7[entity_1] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5[entity_4] = 'T';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 77;              // Tag.BODY
    char entity_6[63];          // Tag.BODY
    entity_6[entity_0] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER