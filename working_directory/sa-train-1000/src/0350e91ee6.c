#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1 = 72;            // Tag.BODY
    entity_5 = 75;            // Tag.BODY
    char entity_8[93];        // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 74;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 51;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = 'o'; // Tag.BUFWRITE_COND_SAFE
    char entity_2[84];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 98;            // Tag.BODY
    entity_2[entity_3] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER