#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 22;              // Tag.BODY
    entity_3 = 31;              // Tag.BODY
    char entity_9[28];          // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_7[76];          // Tag.BODY
    entity_9[entity_1] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 50;              // Tag.BODY
    entity_7[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER