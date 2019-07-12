#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[57];                                   // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    entity_2 = 78;                                       // Tag.BODY
    entity_4 = 82;                                       // Tag.BODY
    entity_7[entity_2] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 10;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[38];                                   // Tag.BODY
    entity_6[entity_8] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_3 = 61; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_3] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER