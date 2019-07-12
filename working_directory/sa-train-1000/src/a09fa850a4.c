#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_9 = 30;                                       // Tag.BODY
    char entity_3[70];                                   // Tag.BODY
    for(entity_8 = 83; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[53];                                   // Tag.BODY
    entity_6 = 19;                                       // Tag.BODY
    entity_3[entity_8] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 26;                                       // Tag.BODY
    char entity_2[65];                                   // Tag.BODY
    entity_0[entity_6] = 'l';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_7] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER