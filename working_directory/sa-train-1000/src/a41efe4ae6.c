#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_8[58];        // Tag.BODY
    entity_5 = 72;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_9[29];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_1 = 77;            // Tag.BODY
    if(entity_3 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_5] = 'D'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 29;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_3] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER