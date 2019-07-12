#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 52;            // Tag.BODY
    char entity_1[51];        // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 53;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 67;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 20;            // Tag.BODY
    entity_1[entity_2] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[89];        // Tag.BODY
    entity_4[entity_0] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER