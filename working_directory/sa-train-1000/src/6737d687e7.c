#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4 = 67;            // Tag.BODY
    entity_0 = 12;            // Tag.BODY
    char entity_1[40];        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    entity_0 = 35;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 21;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_0] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER