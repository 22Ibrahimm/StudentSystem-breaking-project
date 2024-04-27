static int password=1234;
void passcheck(){ //To check password
   int i,pass;
printf("Please Enter The Password\n");
for(i=0;i<3;i++){
    scanf("%d",&pass);
    if(pass==password){
        printf("---->Welcome To Admin Mode<----\n");
        admin();
        break;
    }
    else{
        if(i!=2)
    printf("Wrong Password !!,Try agian\n");
    else
        printf("Wrong Password !!,No more tries\n");
}
}
}

void admin(){
    int features;
printf("To Add A New Record Enter 1\n"
       "To Remove A Record Enter 2\n"
       "To View A Student Record Enter 3\n"
       "To View All Records Enter 4\n"
       "To Edit Admin Password Enter 5\n"
       "To Edit Student Grade Enter 6\n");
       scanf("%d",&features);
       switch(features){
   case 1:
    add();
    break;

       }

}


void add(){
    record x;
    int i;
    printf("Enter The Name Of The Student\n");
    scanf("%s",&x.name);
    printf("Enter Age Of The Student\n");
    scanf("%d",&x.age);
    printf("Enter Grade Of The Student\n");
    scanf("%d",&x.grade);
    printf("Enter The Gender Of The Student\n");
    scanf("%s",&x.gender);
    printf("Enter A Unique Id Of The Student\n");
    scanf("%d",&x.id);
    for(i=0;i<counting;i++){
        if(students[i].id==x.id){
            printf("Id Already Exists\n");
            exit(1);
        }

    }
   printf("Enter Password Of The Student\n");
    scanf("%s",&x.password);
    students[counting++]=x;
    printf("A New Student Has Been Added\n");

}
