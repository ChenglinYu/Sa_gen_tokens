#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_2[86];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 99;                                       // Tag.BODY
    for(entity_4 = 26; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2[entity_4] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 48;                                       // Tag.BODY
    char entity_9[51];                                   // Tag.BODY
    entity_9[entity_7] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER