#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_5 = 1;               // Tag.BODY
    entity_7 = 17;              // Tag.BODY
    char entity_0[87];          // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0[entity_7] = 'H';   // Tag.BUFWRITE_COND_SAFE
    char entity_4[89];          // Tag.BODY
    entity_3 = 74;              // Tag.BODY
    entity_4[entity_3] = 'c';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER