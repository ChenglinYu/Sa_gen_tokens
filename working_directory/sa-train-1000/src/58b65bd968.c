#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_8[23];          // Tag.BODY
    entity_0 = 39;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 47;              // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[3];           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8[entity_5] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 46;              // Tag.BODY
    entity_9[entity_3] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER