#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_3[73];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[56];                                   // Tag.BODY
    entity_4 = 18;                                       // Tag.BODY
    entity_3[entity_4] = 'z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 96;                                       // Tag.BODY
    for(entity_6 = 48; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER