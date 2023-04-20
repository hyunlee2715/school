#define _CRT_SECURE_NO_WARNINGS // disables certain warnings related to the the functions
#include "tokenizing.h" // includea header file for tokenizing function
#define BUFFER_SIZE 300 //defines a buffer size

void tokenizing(void)
{ // function name
	/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n"); // prints a message to indicate the start of the program
	char words[BUFFER_SIZE]; //declares a char array of size BUFFER_SIZE
	char* nextWord = NULL; // declares a char pointer to track the next word
	int wordsCounter; //declares an integer variable to keep count of the words

	do {
		printf("Type a few words separated by space (q -to quit):\n"); //prompts the user to input some words
		fgets(words, BUFFER_SIZE, stdin); // reads input from the user
		words[strlen(words) - 1] = '\0'; // removes the newline character at the end of the input

		if (strcmp(words, "q") != 0) { // checks if the user wants to quit
			nextWord = strtok(words, " "); // extracts the first word from the input
			wordsCounter = 1; // initializes the word counter to 1
			while (nextWord) { // loops until there are no more words to extract
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // prints the word and its number
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0); //loops until the user inputs "q"

	// This program reads in words from thr user and tokenizes them by each individual word using the 'strtok() function

	/* Version 2 */
	//>> insert here

	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter;
	do {
		printf("Type a few phrases separated by comma(q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin); // read user input which is stored in the phrasse array
		phrases[strlen(phrases) - 1] = '\0';
		if ((strcmp(phrases, "q") != 0)) { //if user enter "q" to quit if not the strok function is used
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase) {
				printf("Phrase # % d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");// The while loop is used to continue tokenizing the input string until all tokens have been extracted. The strtok function is called with a NULL pointer as the first argument to continue extracting tokens from the original input string.
			}//The loop continues until all tokens have been extracted from the input string.
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");


	/* Version 3 */
	//>> insert here
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL;
	int sentencesCounter;
	do {
		printf("Type a few sentences separated by dot(q - to quit):\n");//Start a do-while loop that will run until the user inputs "q".
		fgets(sentences, BUFFER_SIZE, stdin);//Ask the user to input a few sentences separated by a dot and store it in sentences.
		if ((strcmp(sentences, "q") != 0)) {//Check if the user input is not "q".
			nextSentence = strtok(sentences, ".");//Tokenize the input string sentences using the strtok() function with the delimiter as "." and assign the result to nextSentence.
			sentencesCounter = 1;
			while (nextSentence)
			{
				printf("Senetnce #%d is \'%s\' \n", sentencesCounter++, nextSentence);//Print each tokenized sentence along with its sentence number
				nextSentence = strtok(NULL, ".");//Call strtok() with NULL as its first argument to tokenize the next sentence.
			}
		}
	} while (strcmp(sentences, "q") != 0);//Repeat the do-while loop until the user inputs "q".
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}

int main(void) {

	tokenizing();
   return 0;

}
