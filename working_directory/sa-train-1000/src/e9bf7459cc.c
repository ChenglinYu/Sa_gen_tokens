#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_7[11];        // Tag.BODY
    char entity_4[53];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_0 = 16;            // Tag.BODY
    entity_9 = 96;            // Tag.BODY
    entity_4[entity_9] = 'y'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_3 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 84;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER