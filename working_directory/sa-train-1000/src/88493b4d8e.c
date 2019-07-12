#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[72];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[50];                                   // Tag.BODY
    entity_2 = 11;                                       // Tag.BODY
    entity_1 = 67;                                       // Tag.BODY
    for(entity_8 = 77; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_1] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER