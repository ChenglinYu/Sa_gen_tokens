#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = 10;              // Tag.BODY
    char entity_2[8];           // Tag.BODY
    char entity_4[62];          // Tag.BODY
    entity_3 = 69;              // Tag.BODY
    entity_9 = 47;              // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_9] = 'Y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER