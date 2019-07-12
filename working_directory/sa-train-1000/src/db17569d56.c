#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    entity_7 = 75;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = 70;                                       // Tag.BODY
    char entity_4[60];                                   // Tag.BODY
    char entity_5[27];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 90;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 88; entity_1 < entity_3; entity_1++){ // Tag.BODY
    entity_5[entity_7] = 'R';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_4[entity_1] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER