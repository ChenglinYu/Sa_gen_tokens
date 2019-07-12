#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 34;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_3[46];                                   // Tag.BODY
    if (entity_2 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 40;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 10; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[63];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[46];                                   // Tag.BODY
    entity_3[entity_9] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    entity_7 = 6;                                        // Tag.BODY
    entity_6[entity_7] = 'i';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 72;                                       // Tag.BODY
    entity_5[entity_1] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER