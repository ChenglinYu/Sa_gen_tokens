#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[63];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 78;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 20; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[90];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8[entity_6] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    char entity_1[17];                                   // Tag.BODY
    entity_9 = 25;                                       // Tag.BODY
    entity_0[entity_9] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 68;                                       // Tag.BODY
    entity_1[entity_7] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER