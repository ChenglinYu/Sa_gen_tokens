#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    entity_3 = 56;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_8[3];                                    // Tag.BODY
    entity_1 = 96;                                       // Tag.BODY
    entity_6[entity_1] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_2 = 80; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER