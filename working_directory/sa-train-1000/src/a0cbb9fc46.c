#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 36;                                       // Tag.BODY
    char entity_3[8];                                    // Tag.BODY
    entity_8 = 45;                                       // Tag.BODY
    for(entity_5 = 59; entity_5 < entity_1; entity_5++){ // Tag.BODY
    entity_0[entity_8] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER