#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[19];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 3;                                        // Tag.BODY
    for(entity_0 = 16; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 52;                                       // Tag.BODY
    entity_1 = 63;                                       // Tag.BODY
    entity_5[entity_0] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    char entity_2[22];                                   // Tag.BODY
    entity_2[entity_3] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[86];                                   // Tag.BODY
    entity_6[entity_1] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER