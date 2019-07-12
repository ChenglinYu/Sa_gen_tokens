#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_2[53];                                   // Tag.BODY
    entity_6 = 9;                                        // Tag.BODY
    char entity_0[25];                                   // Tag.BODY
    char entity_3[84];                                   // Tag.BODY
    entity_3[entity_6] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 23;                                       // Tag.BODY
    entity_4 = 57;                                       // Tag.BODY
    for(entity_7 = 96; entity_7 < entity_1; entity_7++){ // Tag.BODY
    entity_2[entity_4] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER