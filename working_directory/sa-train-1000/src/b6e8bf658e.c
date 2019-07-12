#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_0[41];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 8;               // Tag.BODY
    char entity_9[63];          // Tag.BODY
    entity_4 = 23;              // Tag.BODY
    entity_8 = 50;              // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 'c';   // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_8] = 'm';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER