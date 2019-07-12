#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9 = 43;              // Tag.BODY
    entity_3 = 98;              // Tag.BODY
    char entity_2[9];           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER