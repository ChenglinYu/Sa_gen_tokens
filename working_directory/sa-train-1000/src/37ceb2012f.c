#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[14];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 0;               // Tag.BODY
    entity_0 = 43;              // Tag.BODY
    while(entity_0 < entity_8){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_0] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[29];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 1;               // Tag.BODY
    entity_1[entity_7] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER