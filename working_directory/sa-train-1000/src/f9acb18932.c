#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_7[42];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 77;            // Tag.BODY
    char entity_3[1];         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_4 = 72;            // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    entity_2 = 71;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 4;             // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_2] = '3'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_4] = 'v'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER