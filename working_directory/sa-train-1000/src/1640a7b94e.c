#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = 70;                                       // Tag.BODY
    entity_9 = 47;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_1[82];                                   // Tag.BODY
    char entity_4[45];                                   // Tag.BODY
    for(entity_5 = 91; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[36];                                   // Tag.BODY
    entity_1[entity_5] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_6] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_2;                                        // Tag.BODY
    entity_2 = 51;                                       // Tag.BODY
    entity_8[entity_2] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER