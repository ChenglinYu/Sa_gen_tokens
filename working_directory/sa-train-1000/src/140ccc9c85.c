#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[43];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_8 = 97;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 18;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_2] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER