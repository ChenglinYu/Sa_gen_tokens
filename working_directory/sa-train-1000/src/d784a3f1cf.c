#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_0[50];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 75;            // Tag.BODY
    entity_2 = 73;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_4 = 65;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 87;            // Tag.BODY
    }                         // Tag.BODY
    char entity_9[14];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_0[entity_4] = 'Y'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 12;            // Tag.BODY
    entity_9[entity_1] = 'z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER