#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_4[21];        // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_1 = 19;            // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 62;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_9[70];        // Tag.BODY
    entity_4[entity_8] = 'b'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 75;            // Tag.BODY
    entity_9[entity_0] = 'Z'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER