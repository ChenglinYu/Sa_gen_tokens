#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_2[58];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_4 = 58;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = '6'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER