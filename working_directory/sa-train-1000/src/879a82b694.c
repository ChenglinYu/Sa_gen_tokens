#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 81;              // Tag.BODY
    entity_1 = 11;              // Tag.BODY
    char entity_0[37];          // Tag.BODY
    while(entity_4 < entity_1){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_4] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER