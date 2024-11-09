#include<stdio.h>
#include<time.h>
#include <time.h>


int main()
{
    char tm;
    int choice, mode_of_entry, selection, comodities, quantity, amount, cumilative;
    int one_bag, one_kg, No_of_bags, Walk_in;
    int Initial_Receipt_No = 1506640320;

    int Receipt_No = 0;
    Receipt_No = ++Initial_Receipt_No ;
    Initial_Receipt_No = Receipt_No;
    scanf("%d,&Reciept_No");

    printf("\n\t\t\t\t\t\t\t*********************");
    printf("\n\t\t\t\t\t\t\t Paid Sale Receipt");
    printf("\n\t\t\t\t\t\t\t ALGO FEEDS KENYA");
    printf("\n\t\t\t\t\t\t\t Contact +254232191");
    printf("\n\n\t\t\t\t\t\t\t*********************");
    printf("\n\n\nReciept No: %d",Receipt_No);
    printf("\n");
    printf("\n\tPlease select your preferred operation");
    printf("\n\t1.Start service ");
    printf("\n\t2.Print invoice");
    printf("\n\t3.Delete invoice");
    printf("\n\t4.exit");
    printf("\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("\nPlease choose mode of entry");
            printf("\n1.Walk in");
            printf("\n2.Drive in");
            printf("\nEnter your choice: ");
            scanf("%d",&mode_of_entry);
            switch (mode_of_entry)
            {
                case 1:
                    printf("\nPlease select your prefered operation");
                    printf("\n1.Select comodites");
                    printf("\n2.exit");
                    printf("\nEnter your selection: ");
                    scanf("%d",&selection);
                    switch (selection)
                    {
                        case 1:
                            printf("\nPlease select puchased comodities");
                            printf("\n1.Layers");
                            printf("\n2.Growers");
                            printf("\n3.Maize Jam");
                            printf("\n4.More than one comodity");
                            printf("\nPlease select the viable option: ");
                            scanf("%d",&comodities);
                            switch (comodities)
                            {
                                case 1:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60 kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 3300;
                                            amount = 3300*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("\nYou are exiting");
                                            break;
                                    }
                                    break;
                                case 2:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags");
                                    printf("\n4.Finish order");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 2850;
                                            amount = 2850*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("\nYou are exiting");
                                            break;
                                    }
                                    break;
                                case 3:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60 kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags");
                                    printf("\n4.Finish order");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 2000;
                                            amount = 2000*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Maize Jam @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("\nYou are exciting");
                                            break;
                                    }
                                    break;
                                case 4:
                                    printf("\n1. Maize Jam & Growers");
                                    printf("\n2. Maize Jam & Layers");
                                    printf("\n3.Layers & Maize Jam");
                                    printf("\n4. Maize Jam, Layers & Growers");
                                    printf("\n5. Exit");
                                    printf("\nPlease select the viable option: ");
                                    scanf("%d",&cumilative);
                                    switch (cumilative)
                                    {
                                        case 1:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 4:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 5:
                                            printf("\n You are exiting");
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nYou are exiting");
                            break;
                    }
                    break;
                case 2:
                    printf("\nPlease select your prefered operation");
                    printf("\n1.Select comodites");
                    printf("\n2.exit");
                    printf("\nEnter your selection: ");
                    scanf("%d",&selection);
                    switch (selection)
                    {
                        case 1:
                            printf("\nPlease select puchased comodities");
                            printf("\n1.Layers");
                            printf("\n2.Growers");
                            printf("\n3.Maize Jam");
                            printf("\n4.More than one comodity");
                            printf("\nPlease select the viable option: ");
                            scanf("%d",&comodities);
                            switch (comodities)
                            {
                                case 1:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60 kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 3300;
                                            amount = 3300*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("You are exiting");
                                            break;
                                    }
                                    break;
                                case 2:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags ");
                                    printf("\n4.Finish order");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 2850;
                                            amount = 2850*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("\nYou are exiting");
                                            break;
                                    }
                                    break;
                                case 3:
                                    printf("\nPlease select quantity of comodity");
                                    printf("\n1.1-60 kg(s)");
                                    printf("\n2.No of bags");
                                    printf("\n3.More than 60 kgs but less than a set number of whole bags");
                                    printf("\n4.Finish order");
                                    printf("\nEnter the appropriate selection: ");
                                    scanf("%d",&quantity);
                                    switch (quantity)
                                    {
                                        case 1:
                                            printf("\nPlease enter the right and specific quantity: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;

                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the specific number of bags: ");
                                            scanf("%d",&quantity);
                                            one_bag = 2000;
                                            amount = 2000*quantity;

                                            printf("\nYou have bought:\n\t\t %d bag(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nThis is option is under development see you soon");
                                            break;
                                        case 4:
                                            printf("\nYou are exciting");
                                            break;
                                    }
                                    break;
                                case 4:
                                    printf("\n1. Maize Jam & Growers");
                                    printf("\n2. Maize Jam & Layers");
                                    printf("\n3.Layers & Maize Jam");
                                    printf("\n4. Maize Jam, Layers & Growers");
                                    printf("\n5. Exit");
                                    printf("\nPlease select the viable option: ");
                                    scanf("%d",&cumilative);
                                    switch (cumilative)
                                    {
                                        case 1:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 2:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 3:
                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);
                                            break;
                                        case 4:
                                            printf("\nPlease enter the correct quantity for Maize Jam: ");
                                            scanf("%d",&quantity);
                                            one_kg = 30;
                                            amount = 30*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Maize Jam @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Growers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 45;
                                            amount = 45*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Growers @ kes %d price",quantity,amount);

                                            printf("\nPlease enter the correct quantity for Layers: ");
                                            scanf("%d",&quantity);
                                            one_kg = 50;
                                            amount = 50*quantity;
                                            printf("\nYou have bought:\n\t\t %d kg(s) of Layers @ kes %d price",quantity,amount);
                                            break;
                                        case 5:
                                            printf("\nYou are exting");
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 2:
                            printf("\nYou are exting");
                            break;
                    }
                    break;
            }
            break;
        case 2:
            printf("\nThe invoice is empty!");
            break;
        case 3:
            printf("\nThe invoice has been deleted \nGoodbye");
            break;
        case 4:
            printf("\nYou are exiting \nGoodbye");
            break;
    }

    printf("\n\n");
    printf("\nServed by: Lucy Gacheru");
    //printf("\nON: %s",tm);
    //printf("\nPrinted on: %s",tm);
    printf("\n\t\t\t\t\tOriginal");
    printf("\n\t\t\t\tThank you for shoping with us");
    printf("\n\t\t\t\t\tPowered by iPOS");
    return 0;
}