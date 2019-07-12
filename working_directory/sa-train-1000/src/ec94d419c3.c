#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_5[58];          // Tag.BODY
    entity_7 = 32;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 80;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 36;              // Tag.BODY
    entity_5[entity_1] = 's';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[51];          // Tag.BODY
    entity_6[entity_0] = 'j';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER