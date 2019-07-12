#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_7 = 73;                                       // Tag.BODY
    char entity_8[28];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 19;                                       // Tag.BODY
    char entity_0[6];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 45;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 15; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[92];                                   // Tag.BODY
    entity_8[entity_4] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 27;                                       // Tag.BODY
    entity_5[entity_1] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER