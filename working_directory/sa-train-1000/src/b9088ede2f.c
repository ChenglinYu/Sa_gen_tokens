#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[95];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_1[23];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 24;                                       // Tag.BODY
    entity_9 = 96;                                       // Tag.BODY
    for(entity_8 = 38; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;                                        // Tag.BODY
    char entity_5[94];                                   // Tag.BODY
    entity_2 = 7;                                        // Tag.BODY
    entity_3[entity_9] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER