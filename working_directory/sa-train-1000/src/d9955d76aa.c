#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 48;              // Tag.BODY
    char entity_9[72];          // Tag.BODY
    entity_5 = 58;              // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_0[79];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9[entity_7] = 'N';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 55;              // Tag.BODY
    entity_0[entity_3] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER