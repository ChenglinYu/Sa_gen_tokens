#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_8[7];         // Tag.BODY
    entity_6 = 27;            // Tag.BODY
    if(entity_2 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 55;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_2] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER