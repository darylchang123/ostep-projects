#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ERROR_MESSAGE[30] = "An error has occurred\n";

char **get_input_tokens() {
	// Read input line
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	ssize_t num_chars = getline(&line_buf, &line_buf_size, stdin);

	// Remove newline character
	line_buf[strcspn(line_buf, "\n")] = '\0';

	// Split line by delimiters
	char *line_buf_original = line_buf;
	const char *delimiters = " \n>&";
	char **tokens = (char **) malloc(100 * sizeof(char *));
	int i = 0;
	while (line_buf != NULL) {
		char *new_token = strsep(&line_buf,  delimiters);
		tokens[i] = new_token;
		i++;
	}

	// Free memory allocated by getline
	free(line_buf_original);

	return tokens;
}

int main(int argc, char *argv[]) {
	char *path[1] = {"/bin"};

	while (1) {
		printf("wish> ");
		char **tokens = get_input_tokens();

		for (int i=0; tokens[i] != NULL; i++) {
			printf("%s\n", tokens[i]);
		}

		 char *command = tokens[0];
		 for (int i=0; i<sizeof(path); i++) {
		 	 int access_res = access(tokens[0], X_OK);
			 //    if (access_res < 0) {
				//     write(STDERR_FILENO, ERROR_MESSAGE, strlen(ERROR_MESSAGE)); 
			 //    }
		 }
	}
	// char **tokens = get_input_tokens();

	// if (*tokens == NULL) continue;

	// char *command = tokens[0];
	// char *path[1] = {"/bin"};

	// // for (int i=0; tokens[i] != NULL; i++) {
	// // 	printf("%s\n", tokens[i]);
	// // }

 //    int access_res = access(tokens[0], X_OK);
 //    if (access_res < 0) {
	//     write(STDERR_FILENO, ERROR_MESSAGE, strlen(ERROR_MESSAGE)); 
 //    }
 //    char *args[2];
 //    args[0] = tokens[0];
 //    args[1] = NULL;
 //    execv(args[0], args);
	// return 0;
}