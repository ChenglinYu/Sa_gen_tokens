#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8 = 63;              // Tag.BODY
    entity_7 = 36;              // Tag.BODY
    char entity_5[20];          // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 26;              // Tag.BODY
    entity_5[entity_8] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[85];          // Tag.BODY
    char entity_9[87];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9[entity_6] = 'H';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 14;              // Tag.BODY
    entity_0[entity_3] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER