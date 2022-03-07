/* Reverse Word Wise
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
#include <iostream>
using namespace std;

void reverseStringWordWise(char a[]) {
  int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
int i=0,j=count-1;
while(i<j){
    char temp=a[i];
         a[i]=a[j];
         a[j]=temp;
         i++;
         j--;
}

 int start=0;
 int end=0;
for (int i=0;i<count;i++){
 while(i<count&&a[i]==' '){
    i++;
 }
  start=i;
  while(i<count&&a[i]!=' '){
    i++;
  }
  end=i-1;
while(end>start){
    char temp=a[start];
         a[start]=a[end];
         a[end]=temp;
         start++;
         end--;
}
}
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

