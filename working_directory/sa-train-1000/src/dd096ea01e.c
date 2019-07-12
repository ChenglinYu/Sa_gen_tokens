#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_3 = 74;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 62;            // Tag.BODY
    char entity_4[68];        // Tag.BODY
    char entity_6[76];        // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_0] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 67;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = 'g'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER