#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[19];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_6[9];                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 64;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 11;                                       // Tag.BODY
    for(entity_7 = 59; entity_7 < entity_8; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_3] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER