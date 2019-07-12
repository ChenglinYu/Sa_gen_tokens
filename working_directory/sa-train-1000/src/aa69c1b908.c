#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_4[65];        // Tag.BODY
    entity_6 = 58;            // Tag.BODY
    entity_7 = 77;            // Tag.BODY
    if(entity_7 < entity_6){  // Tag.BODY
    entity_7 = 18;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_7] = 'U'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER