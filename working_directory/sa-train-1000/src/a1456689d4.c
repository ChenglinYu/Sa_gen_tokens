#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = 0;                                        // Tag.BODY
    char entity_6[56];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_6[entity_0] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 67;                                       // Tag.BODY
    char entity_2[37];                                   // Tag.BODY
    char entity_4[44];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_4[entity_1] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 88;                                       // Tag.BODY
    for(entity_5 = 89; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER