#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[2];         // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_3 = 72;            // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 18;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER