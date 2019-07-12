#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_3[65];                                   // Tag.BODY
    entity_4 = 5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 69; entity_6 < entity_4; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_3[entity_6] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[3];                                    // Tag.BODY
    entity_7 = 78;                                       // Tag.BODY
    entity_0[entity_7] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER