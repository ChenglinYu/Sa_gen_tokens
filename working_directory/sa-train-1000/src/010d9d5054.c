#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[8];         // Tag.BODY
    char entity_7[89];        // Tag.BODY
    entity_1 = 95;            // Tag.BODY
    entity_8 = 44;            // Tag.BODY
    entity_3 = 65;            // Tag.BODY
    if(entity_3 < entity_1){  // Tag.BODY
    entity_3 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_3] = 'U'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;             // Tag.BODY
    char entity_4[95];        // Tag.BODY
    entity_2 = 30;            // Tag.BODY
    entity_4[entity_2] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_8] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER