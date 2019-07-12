#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_3[2];         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_4 = 30;            // Tag.BODY
    entity_7 = 57;            // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    entity_4 = 66;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 15;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 17;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[38];        // Tag.BODY
    char entity_8[0];         // Tag.BODY
    entity_1[entity_2] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_4] = 'X'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 33;            // Tag.BODY
    entity_8[entity_0] = 'o'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER