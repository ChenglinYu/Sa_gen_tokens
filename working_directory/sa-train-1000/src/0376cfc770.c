#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[76];                                   // Tag.BODY
    entity_1 = 68;                                       // Tag.BODY
    for(entity_0 = 59; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_5[93];                                   // Tag.BODY
    entity_2[entity_0] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    int entity_6;                                        // Tag.BODY
    char entity_4[71];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 81;                                       // Tag.BODY
    entity_4[entity_3] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 12;                                       // Tag.BODY
    entity_5[entity_6] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER