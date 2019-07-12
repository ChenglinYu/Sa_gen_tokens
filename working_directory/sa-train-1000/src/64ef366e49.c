#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_5[22];                                   // Tag.BODY
    char entity_8[5];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = 77;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 17;                                       // Tag.BODY
    for(entity_3 = 73; entity_3 < entity_2; entity_3++){ // Tag.BODY
    entity_8[entity_4] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER