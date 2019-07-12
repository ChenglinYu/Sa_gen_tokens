#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_7[44];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[99];                                   // Tag.BODY
    entity_6 = 50;                                       // Tag.BODY
    entity_5 = 57;                                       // Tag.BODY
    entity_3 = 71;                                       // Tag.BODY
    char entity_1[29];                                   // Tag.BODY
    for(entity_0 = 37; entity_0 < entity_3; entity_0++){ // Tag.BODY
    entity_1[entity_5] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_0] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER