#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_1[76];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_9 = 76;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 39;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_1[entity_5] = 'r'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[12];        // Tag.BODY
    entity_3 = 87;            // Tag.BODY
    entity_0[entity_3] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER