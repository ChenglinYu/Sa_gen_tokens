#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[35];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 6;               // Tag.BODY
    entity_3 = 82;              // Tag.BODY
    char entity_5[83];          // Tag.BODY
    entity_9 = 58;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_9] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_1] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER