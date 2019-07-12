#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_6 = 75;            // Tag.BODY
    char entity_8[46];        // Tag.BODY
    char entity_4[79];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_1 = 86;            // Tag.BODY
    entity_2 = 20;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[93];        // Tag.BODY
    entity_4[entity_1] = 'o'; // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_2] = 'i'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_0;             // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    entity_5[entity_0] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER