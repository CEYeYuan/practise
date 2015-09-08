#include <stdio.h>
#include <stdlib.h>

void editMessageSent(char* message,int size){
	char newMessage[]="New";
	if(size>sizeof(newMessage)){
		for (int i=0;i<sizeof(newMessage);i++){
			message[i]=newMessage[i];
		}
	}else{
		printf("%s\n","New message is too big \n" );
	}
}
void main(){
	char randMessage[]="Edit my function";
	editMessageSent(randMessage,sizeof(randMessage));
	printf("New Message: %s \n\n",randMessage);

}