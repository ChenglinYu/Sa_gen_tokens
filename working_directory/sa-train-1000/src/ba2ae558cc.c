#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 97;                                       // Tag.BODY
    char entity_6[58];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 58;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 56; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_2] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER