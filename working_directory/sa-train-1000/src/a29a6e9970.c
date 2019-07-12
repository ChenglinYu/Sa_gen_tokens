#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 64;            // Tag.BODY
    entity_8 = 22;            // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_3[63];        // Tag.BODY
    char entity_2[69];        // Tag.BODY
    entity_9 = 84;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 23;            // Tag.BODY
    entity_3[entity_0] = 'A'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_2[entity_8] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER