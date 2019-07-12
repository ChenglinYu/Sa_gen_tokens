#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_5[32];        // Tag.BODY
    entity_7 = 57;            // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 87;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_9[36];        // Tag.BODY
    entity_5[entity_0] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 31;            // Tag.BODY
    entity_9[entity_4] = 'q'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER