#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[41];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 26;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 48;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 69; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_7] = '0';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER