#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_9 = 22;              // Tag.BODY
    char entity_4[11];          // Tag.BODY
    entity_0 = 7;               // Tag.BODY
    char entity_1[3];           // Tag.BODY
    entity_5 = 28;              // Tag.BODY
    entity_1[entity_9] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER