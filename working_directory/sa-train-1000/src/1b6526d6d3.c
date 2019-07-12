#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[51];        // Tag.BODY
    entity_2 = 3;             // Tag.BODY
    entity_0 = 87;            // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 65;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_4 = 86;            // Tag.BODY
    entity_7 = 65;            // Tag.BODY
    char entity_5[80];        // Tag.BODY
    entity_1[entity_0] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_4] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[52];        // Tag.BODY
    entity_3[entity_7] = 'j'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER