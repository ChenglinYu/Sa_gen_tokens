#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[87];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 13;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 58;              // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9[entity_3] = '9';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 67;              // Tag.BODY
    char entity_7[10];          // Tag.BODY
    entity_7[entity_0] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER