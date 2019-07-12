#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    entity_0 = 30;            // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_7[68];        // Tag.BODY
    entity_8 = 36;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    entity_8 = 38;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 42;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = 'F'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER