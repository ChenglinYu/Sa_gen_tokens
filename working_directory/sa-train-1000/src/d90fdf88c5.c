#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 56;            // Tag.BODY
    entity_3 = 7;             // Tag.BODY
    char entity_8[9];         // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = '6'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER