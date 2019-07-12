#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_1[57];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 3;             // Tag.BODY
    entity_0 = 60;            // Tag.BODY
    char entity_6[88];        // Tag.BODY
    entity_6[entity_3] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 94;            // Tag.BODY
    if(entity_7 < entity_0){  // Tag.BODY
    entity_7 = 21;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 72;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER