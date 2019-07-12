#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_9[23];          // Tag.BODY
    entity_0 = 27;              // Tag.BODY
    entity_1 = 12;              // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[32];          // Tag.BODY
    char entity_5[89];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_9[entity_1] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 14;              // Tag.BODY
    entity_7 = 83;              // Tag.BODY
    entity_5[entity_6] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_7] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER