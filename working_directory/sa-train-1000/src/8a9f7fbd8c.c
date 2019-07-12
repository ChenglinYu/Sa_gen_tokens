#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 33;              // Tag.BODY
    entity_0 = 31;              // Tag.BODY
    char entity_9[55];          // Tag.BODY
    char entity_7[87];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 12;              // Tag.BODY
    while(entity_0 < entity_1){ // Tag.BODY
    entity_9[entity_4] = 'i';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = 'F';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER