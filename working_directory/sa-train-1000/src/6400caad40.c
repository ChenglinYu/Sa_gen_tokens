#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_1[46];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 5;                                        // Tag.BODY
    for(entity_2 = 87; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 57;                                       // Tag.BODY
    entity_1[entity_2] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[2];                                    // Tag.BODY
    entity_8[entity_7] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER