#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_7[94];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = 21;            // Tag.BODY
    entity_6 = 59;            // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    entity_8 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 55;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = '9'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER