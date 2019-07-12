#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_9[4];                                    // Tag.BODY
    entity_5 = 12;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9[entity_5] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[30];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 56;                                       // Tag.BODY
    for(entity_7 = 25; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2[entity_7] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 26;                                       // Tag.BODY
    char entity_6[49];                                   // Tag.BODY
    entity_6[entity_4] = 'B';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER