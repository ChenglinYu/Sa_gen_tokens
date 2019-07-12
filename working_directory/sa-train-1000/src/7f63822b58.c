#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 89;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_4[33];        // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 10;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 12;            // Tag.BODY
    char entity_6[58];        // Tag.BODY
    entity_4[entity_0] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_7] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER