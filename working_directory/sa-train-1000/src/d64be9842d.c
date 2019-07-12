#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[16];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    entity_5 = 11;              // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER