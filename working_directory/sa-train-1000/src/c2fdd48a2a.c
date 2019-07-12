#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[61];        // Tag.BODY
    entity_8 = 44;            // Tag.BODY
    entity_1 = 38;            // Tag.BODY
    if(entity_1 < entity_8){  // Tag.BODY
    entity_1 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 37;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'i'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER