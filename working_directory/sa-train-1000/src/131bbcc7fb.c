#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[20];                                   // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    char entity_6[54];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 93;                                       // Tag.BODY
    entity_6[entity_3] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_2 = 94; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER