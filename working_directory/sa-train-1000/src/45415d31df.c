#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_0[63];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_2[11];                                   // Tag.BODY
    entity_9 = 27;                                       // Tag.BODY
    entity_8 = 98;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 62; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_0[entity_8] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[45];                                   // Tag.BODY
    entity_2[entity_4] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 6;                                        // Tag.BODY
    entity_3[entity_6] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER