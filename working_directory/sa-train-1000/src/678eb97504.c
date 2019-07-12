#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_1[82];        // Tag.BODY
    entity_8 = 16;            // Tag.BODY
    entity_3 = 78;            // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    entity_3 = 78;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 2;             // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_9[78];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1[entity_3] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 63;            // Tag.BODY
    entity_0 = 66;            // Tag.BODY
    entity_9[entity_6] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[51];        // Tag.BODY
    entity_4[entity_0] = 'O'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER