#include <folly/String.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// vector<string> get_input_tokens() {
// 	string input;
// 	getline(cin, input);
	
// 	vector<string> tokensVec;
// 	folly::split(" ", "a b c", tokensVec);

// 	for (int i=0; i<tokensVec.size(); i++) {
// 		cout << tokensVec[i] << endl;
// 	}

// 	return tokensVec;
// }

int main(int argc, char *argv[]) {
	// auto tokensVec = get_input_tokens();

	std::vector<string> v;
	folly::split(":", "asd:bsd", v);
	for (int i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	// char *path[1] = {"/bin"};

	// while (1) {
	// 	printf("wish> ");
	// 	char **tokens = get_input_tokens();

	// 	for (int i=0; tokens[i] != NULL; i++) {
	// 		printf("%s\n", tokens[i]);
	// 	}

	// 	 char *command = tokens[0];
	// 	 for (int i=0; i<sizeof(path); i++) {
	// 	 	 int access_res = access(tokens[0], X_OK);
	// 		 //    if (access_res < 0) {
	// 			//     write(STDERR_FILENO, ERROR_MESSAGE, strlen(ERROR_MESSAGE)); 
	// 		 //    }
	// 	 }
	// }
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