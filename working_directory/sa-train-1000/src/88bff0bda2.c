#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 97;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_1[84];                                   // Tag.BODY
    char entity_4[52];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = 10;                                       // Tag.BODY
    entity_7 = 44;                                       // Tag.BODY
    char entity_6[92];                                   // Tag.BODY
    for(entity_2 = 53; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_7] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_2] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER