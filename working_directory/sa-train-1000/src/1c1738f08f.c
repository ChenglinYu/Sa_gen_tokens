#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[91];        // Tag.BODY
    entity_1 = 9;             // Tag.BODY
    entity_7 = 13;            // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    entity_1 = 4;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 62;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'E'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER