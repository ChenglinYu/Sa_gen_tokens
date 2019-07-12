#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[3];         // Tag.BODY
    char entity_8[34];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 86;            // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_2[51];        // Tag.BODY
    entity_1 = 15;            // Tag.BODY
    entity_9 = 22;            // Tag.BODY
    entity_4 = 47;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_1 = 17;            // Tag.BODY
    entity_2[entity_4] = 'O'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_1 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_1] = 'E'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER