#include <cstdio>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]){
	int i, num;
	string output;
	istringstream iSS( argv[1] );
	iSS >> num;

	for(i = 1; i <= num; i++){
		//my first attempt
		/*//check if 15 first, otherwise this will print at wrong times
		if(i % 15 == 0){
			printf("fizzbuzz\n");
		}
		else if(i % 3 == 0){
			printf("fizz\n");
		}
		else if(i % 5 == 0){
			printf("buzz\n");
		}
		else{
			printf("%d\n", i);
		}*/

		//smarter way
		output = "";
		
		if(i%3 == 0){ output += "fizz"; }
		if(i%5 == 0){ output += "buzz"; }

		if(output.size() == 0){
			printf("%d\n", i);
		}
		else{
			printf("%s\n", output.c_str());
		}
	}
}
