#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[89];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 61;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_3] = '6'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER