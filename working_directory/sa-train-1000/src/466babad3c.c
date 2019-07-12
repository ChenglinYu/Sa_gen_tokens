#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_4[91];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_8 = 72;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = '2'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER