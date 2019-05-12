//
//  cs136test.c
//  
//
//  Created by Sherry R.Z on 2019-05-11.
//

/*
 Hello, World! Welcome to CS 136!
 These are some facts obtained from https://www.allaboutbirds.org about the 'Branta Canadensis' (known to his friends as "Mr. Goose").
 Their length ranges from 76 to 110cm, which is approximately 60% of their large wingspan. They can weigh up to 9kg.
 They mate for life with very low "divorce rates" and mate "assortatively", meaning larger birds choose larger mates and the same for smaller ones.
 We hope you've enjoyed these fun geese facts on Al. Don't forget to put a newline (\n) after each line.
 */
// #include <stdio.h>
#include "cs136test.h"
int main(){
    printf("Hello, World! Welcome to CS %d!\n", 136);
    printf("These are some facts obtained from\n");
    printf("https://www.allaboutbirds.org\n");
    printf("about the 'Branta Canadensis'\n");
    printf("(known to his friends as \"Mr. Goose\").\n\n");
    printf("Their length ranges from %d to %dcm,\n", 76, 110);
    printf("which is approximately %d%% of their\n", 60);
    printf("large wingspan. They can weigh up to 9kg.\n\n");
    printf("They mate for life with very low \"divorce rates\"\n");
    printf("and mate \"assortatively\", meaning larger birds\n");
    printf("choose larger mates and the same for smaller ones.\n\n");
    printf("We hope you've enjoyed these fun geese facts on Al.\n");
    printf("Don't forget to put a newline (\\n) after each line.\n");
    return 0;
}
