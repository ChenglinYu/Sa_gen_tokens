#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2 = 48;            // Tag.BODY
    char entity_4[77];        // Tag.BODY
    entity_8 = 47;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_2 = 85;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 26;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[68];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_4[entity_2] = 'k'; // Tag.BUFWRITE_COND_SAFE
    entity_1 = 72;            // Tag.BODY
    entity_7[entity_1] = '3'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER