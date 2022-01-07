


struct fifo* parser(char** input){
    struct fifo* queue = fifo_new(NULL);
    char keyword[BUFF_SIZE];
    size_t index = 0;
    for (;**input != '\0'; *input++){
        switch (*input){
            case ' ':
                
                break;
            case '(':


        }



        if (*input == ' '){ //end of a keyword
            index = 0;
        }
        else if (*input == '('){
            node_new(TOK_PAR_LEFT)
        }
        else if (*input == ')'){

        }
        else{

        }
    }
}