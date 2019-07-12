#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 12;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[95];                                   // Tag.BODY
    char entity_5[91];                                   // Tag.BODY
    entity_7 = 93;                                       // Tag.BODY
    for(entity_1 = 98; entity_1 < entity_7; entity_1++){ // Tag.BODY
    entity_5[entity_2] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9[entity_1] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 48;                                       // Tag.BODY
    char entity_3[7];                                    // Tag.BODY
    entity_3[entity_4] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER