#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_3[57];        // Tag.BODY
    char entity_9[51];        // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    entity_2 = 23;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 54;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    entity_9[entity_2] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    char entity_0[36];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3[entity_6] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 37;            // Tag.BODY
    entity_0[entity_7] = 'T'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER