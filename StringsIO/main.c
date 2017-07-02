//
//  main.c
//  StringsIO
// 
//  demonstrates how to get string input from the keyboard
//  and output something back to the user
//  via the Command Line
//
//  Created by Jay Versluis on 02/07/2017.
//  Copyright © 2017 Pinkstone Pictures LLC. All rights reserved.
//

#include <stdio.h>

char input[100];
char *output = "Thank you for your message!";

int main(int argc, const char * argv[]) {
    
    // ask user for some input
    puts("Tell me something nice:");
    
    // grab input from keyboard via scanf()
    // don't use gets() for this, apparently it's totally evil
    scanf("%s", input);
    
    // say goodbye
    printf("%s\n\n", output);
    
    return 0;
}
