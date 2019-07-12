#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 5;             // Tag.BODY
    char entity_0[8];         // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 24;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 2;             // Tag.BODY
    entity_0[entity_6] = 'O'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[65];        // Tag.BODY
    entity_1[entity_2] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER