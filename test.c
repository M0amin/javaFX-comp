#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char** argv){
if(argc!=3){
printf("exactly need two argument.\n");
printf("Usage:\n");
printf("<<<< test -c <program_name.java> >>>> for compile \n");
printf("<<<< test -r <program_name> >>>> for run \n ");
return -1;
}
char *comp="-r";
char *run="-c";
char buffer[128];
if(strncmp(argv[1],comp,strlen(comp))){

snprintf(buffer,sizeof(buffer),"javac --module-path ~/Documents/PROGRAMS/JAVA/javafx-sdk/lib --add-modules javafx.controls %s",argv[2]);
system(buffer);
}
if(strncmp(argv[1],run,strlen(run))){
snprintf(buffer,sizeof(buffer),"java --module-path ~/Documents/PROGRAMS/JAVA/javafx-sdk/lib --add-modules javafx.controls %s",argv[2]);
system(buffer);
}

}
