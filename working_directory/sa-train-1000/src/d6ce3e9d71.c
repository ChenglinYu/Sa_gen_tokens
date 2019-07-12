#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_9[1];           // Tag.BODY
    entity_1 = 1;               // Tag.BODY
    char entity_0[38];          // Tag.BODY
    entity_5 = 39;              // Tag.BODY
    entity_0[entity_5] = 'r';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 60;              // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER