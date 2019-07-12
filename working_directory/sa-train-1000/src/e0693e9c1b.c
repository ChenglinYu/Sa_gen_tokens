#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_0[43];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 92;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 47;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 20; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 40;                                       // Tag.BODY
    entity_0[entity_1] = '4';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[90];                                   // Tag.BODY
    entity_2[entity_5] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER