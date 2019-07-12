#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[42];        // Tag.BODY
    entity_5 = 54;            // Tag.BODY
    entity_8 = 92;            // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    entity_8 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 49;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_0[entity_8] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[3];         // Tag.BODY
    entity_6 = 33;            // Tag.BODY
    entity_4[entity_6] = 'k'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER