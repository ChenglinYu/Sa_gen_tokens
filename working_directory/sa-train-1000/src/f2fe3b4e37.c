#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_2[33];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 87;            // Tag.BODY
    entity_1 = 57;            // Tag.BODY
    if(entity_1 < entity_4){  // Tag.BODY
    entity_1 = 88;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_1] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER