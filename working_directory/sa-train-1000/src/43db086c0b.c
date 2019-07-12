#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_6[71];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = 40;              // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    entity_8 = 95;              // Tag.BODY
    char entity_0[10];          // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_0[entity_3] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[89];          // Tag.BODY
    entity_6[entity_5] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;               // Tag.BODY
    entity_1 = 32;              // Tag.BODY
    entity_9[entity_1] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER