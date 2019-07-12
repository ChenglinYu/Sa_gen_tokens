#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[38];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    entity_8 = 55;            // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    entity_8 = 13;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 23;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[11];        // Tag.BODY
    entity_3[entity_8] = 'P'; // Tag.BUFWRITE_COND_SAFE
    int entity_9;             // Tag.BODY
    entity_9 = 77;            // Tag.BODY
    entity_6[entity_9] = 'p'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER