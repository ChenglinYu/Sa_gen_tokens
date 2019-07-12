#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 74;              // Tag.BODY
    entity_1 = 62;              // Tag.BODY
    char entity_4[64];          // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'u';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER