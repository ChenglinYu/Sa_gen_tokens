#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_5[34];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_0 = 82;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER