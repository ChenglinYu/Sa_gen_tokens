#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_5[96];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 97;            // Tag.BODY
    entity_7 = 95;            // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    entity_0 = 67;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 38;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_0] = 'b'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER