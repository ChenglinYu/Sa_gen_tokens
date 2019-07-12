#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_2[51];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 98;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[79];                                   // Tag.BODY
    entity_5 = 10;                                       // Tag.BODY
    for(entity_6 = 28; entity_6 < entity_4; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_3[entity_6] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 81;                                       // Tag.BODY
    char entity_0[36];                                   // Tag.BODY
    entity_2[entity_5] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_7] = 's';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER