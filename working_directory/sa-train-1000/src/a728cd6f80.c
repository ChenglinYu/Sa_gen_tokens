#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4 = 95;                                       // Tag.BODY
    char entity_3[56];                                   // Tag.BODY
    char entity_1[79];                                   // Tag.BODY
    entity_7 = 45;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 31; entity_6 < entity_7; entity_6++){ // Tag.BODY
    entity_1[entity_4] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_3[entity_6] = 'q';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER