#include<stdio.h>
#include<stdbool.h>

typedef struct{
    char date[50];
    int amount;
    char type[50];
}Transaction;

typedef struct{
    char name[50];
    long long int accnum;
    bool iskyc;
    Transaction lastTran;
}Details;

int main(){

    Transaction lastTransac[3] = {
        {"19th December",25000,"Online"},
        {"16th December",10000,"Online"},
        {"15th December",15000,"Offline"}
    };

    Details persons[3] = {
        {"Anuj Das",9001233219,true,lastTransac[0]},
        {"Walter White",9808765443,true,lastTransac[1]},
        {"Jesse Pinkman",7654378920,false,lastTransac[2]}
    };

    // // --- STEP 1: WRITING TO FILE ---
    // // Open file for Writing in Binary mode ("wb")
    // FILE *file_out = fopen("bank_db.bin", "wb");
    // if (file_out != NULL) {
    //     // Write all 3 structs at once!
    //     fwrite(persons, sizeof(Details), 3, file_out);
    //     fclose(file_out);
    //     printf("Database saved to disk.\n");
    // }

    // // Clear the array to prove that we are loading from the file later
    // Details loaded_persons[3];

    // // --- STEP 2: READING FROM FILE ---
    // // Open file for Reading in Binary mode ("rb")
    // FILE *file_in = fopen("bank_db.bin", "rb");
    // if (file_in != NULL) {
    //     // Read 3 blocks of 'Details' size into the new array
    //     fread(loaded_persons, sizeof(Details), 3, file_in);
    //     fclose(file_in);
    //     printf("Database loaded from disk.\n\n");
    // }

    FILE *file_out = fopen("bankdb.bin", "wb");
    if(file_out != NULL){
        fwrite(persons,sizeof(Details),3,file_out);
        fclose(file_out);
        printf("File saved to Disk!\n\n");
    }

    Details loadedPersons[3];

    FILE *file_in = fopen("bankdb.bin", "rb");
    if(file_in!=NULL){
        fread(loadedPersons,sizeof(Details),3,file_in);
        fclose(file_in);
        printf("File loaded from disk!\n\n");
    }

    int n;
    printf("Enter person ID: ");
    scanf("%d", &n);

    if(n>0 && n<=3){

    //     printf("Name: %s\nAccount Number: %lld\nKYC: %s\n\nLast transaction date: %s\nAmount: %d\nType of patyment: %s",
    //     persons[n-1].name,persons[n-1].accnum,(persons[n-1].iskyc)? "Approved":"Not Approved",lastTransac[n-1].date,
    // lastTransac[n-1].amount,lastTransac[n-1].type);

    Details *p = &persons[n-1];

    printf("\n---Account Details---\n");
    printf("Name: %s\n",p->name);
    printf("Account Number: %lld\n",p->accnum);
    printf("KYC: %s\n",p->iskyc?"Approved":"Pending");
    printf("\n---Transaction Details---\n");
    printf("Last transaction date: %s\n",p->lastTran.date);
    printf("Amount: %d\n",p->lastTran.amount);
    printf("Type: %s\n",p->lastTran.type);

}   
    else{
        printf("Invalid person ID!!");
    }
    return 0;
}