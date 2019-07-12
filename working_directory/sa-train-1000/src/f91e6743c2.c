#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    entity_4 = 11;            // Tag.BODY
    char entity_6[84];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 92;            // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    entity_8 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_8] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER