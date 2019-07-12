#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    char entity_4[76];        // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 98;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4[entity_1] = 'v'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 67;            // Tag.BODY
    char entity_3[25];        // Tag.BODY
    entity_3[entity_0] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER