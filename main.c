#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int spalash_no = 0;
void about()
{
    system("cls");
    display_logo();
    printf("Hater Mute Bangladesh is developed for bangladeshi and the people outside\nof bangladesh. They can learn about bangladesh and also can \nuse this one their serach engine. You also can call it bangladesh directory.\n");
    printf("\n\nDevelopers:\n\n");
    printf("\tAbu Zafor Fagun\n\t\tWeb Developer at SynergyData\n\t\tStudies BSc in Software Engineering\n\t\tat Daffodil International University\n\n");
    printf("\tManjura Tabassum\n\t\tStudies BSc in Software Engineering\n\t\tat Daffodil International University\n\n");
    printf("\tTanzim Hossain\n\t\tStudies BSc in Software Engineering\n\t\tat Daffodil International University");
    printf("\n\n\nPress any key to back.");
    getch();
    system("cls");
    main();
}
void spalash()
{
    if(spalash_no==0){
    printf("\t\t***   ***      ****    *********  *********  *******\n");
    printf("\t\t###   ***     ******   *********  ****       ***   **\n");
    printf("\t\t*********    ***  ***     ***     *******    ***  ***\n");
    printf("\t\t*********   **********    ***     *******    ******* \n");
    printf("\t\t***   ***  ************   ***     ****       ***   **\n");
    printf("\t\t***   *** ***        ***  ***     *********  ***   **\n");
    printf("\n");
    printf("\t\t  ***           ***  ***   ***  *********  *********\n");
    printf("\t\t  *****       *****  ***   ***  *********  ****     \n");
    printf("\t\t  *** **     ** ***  ***   ***     ***     *******  \n");
    printf("\t\t  ***  **   **  ***  ***   ***     ***     *******  \n");
    printf("\t\t  ***   *****   ***  *********     ***     ****     \n");
    printf("\t\t  ***    ***    ***   *******      ***     *********  \n");
    printf("\n");

    printf("\t\t\t**************    ******++****\n");
    printf("\t\t\t**************    ******++*****\n");
    printf("\t\t\t****      ***     ****      ****\n");
    printf("\t\t\t****      **      ****       &***\n");
    printf("\t\t\t***********       &&&&        &***\n");
    printf("\t\t\t***********       &&&&         &***\n");
    printf("\t\t\t****      **      ****        &***\n");
    printf("\t\t\t****      ***     ****       &***\n");
    printf("\t\t\t**************    ******++******\n");
    printf("\t\t\t**************    ******++*****\n");
    spalash_no++;
    printf("\n\n\nPress any key.");
    getch();
    system("cls");
    }

}

void display_logo()
{
    printf("\t\t\tHater Mute Bangladesh\n\t\t\tVersion 1.0\n\n");
}
char *district[66]=
{
    "Barguna",
    "Barisal",
    "Bhola",
    "Jhalokati",
    "Patuakhali",
    "Pirojpur",
    "Bandarban",
    "Brahmanbaria",
    "Chandpur",
    "Chittagong",
    "Comilla",
    "Cox's Bazar",
    "Feni",
    "Khagrachhari",
    "Lakshmipur",
    "Noakhali",
    "Rangamati",
    "Dhaka",
    "Faridpur",
    "Gazipur",
    "Gopalganj",
    "Jamalpur",
    "Kishoreganj",
    "Madaripur",
    "Manikganj",
    "Munshiganj",
    "Mymensingh",
    "Narayanganj",
    "Narsingdi",
    "Netrakona",
    "Rajbari",
    "Shariatpur",
    "Sherpur",
    "Tangail",
    "Bagerhat",
    "Chuadanga",
    "Jessore",
    "Jhenaidah",
    "Khulna",
    "Kushtia",
    "Magura",
    "Meherpur",
    "Narail",
    "Satkhira",
    "Bogra",
    "Joypurhat",
    "Naogaon",
    "Natore",
    "Nawabganj",
    "Pabna",
    "Rajshahi",
    "Sirajganj",
    "Dinajpur",
    "Gaibandha",
    "Kurigram",
    "Lalmonirhat",
    "Nilphamari",
    "Panchagarh",
    "Rangpur",
    "Thakurgaon",
    "Habiganj",
    "Moulvibazar",
    "Sunamganj",
    "Sylhet"
};

long int population[]=
{
    882000,
    2291000,
    1758000,
    596000,
    1517000,
    1103000,
    383000,
    2808000,
    2393000,
    7509000,
    5304000,
    2275000,
    1420000,
    608000,
    1711000,
    3072000,
    596000,
    11875000,
    1867000,
    3333000,
    1149000,
    2265000,
    2853000,
    1149000,
    1379000,
    1420000,
    5042000,
    2897000,
    2202000,
    2207000,
    1040000,
    1146000,
    1334000,
    3571000,
    1461000,
    1123000,
    2742000,
    1756000,
    2294000,
    1933000,
    913000,
    652000,
    715000,
    1973000,
    3371000,
    909000,
    2576000,
    1696000,
    1635000,
    2497000,
    2573000,
    3072000,
    2970000,
    2349000,
    2050000,
    1249000,
    1820000,
    981000,
    2866000,
    1380000,
    2059000,
    1902000,
    2443000,
    3404000,
};

int area[]=
{
    1831,
    2785,
    3403,
    749,
    3221,
    1308,
    4479,
    1927,
    1704,
    5283,
    3085,
    2492,
    928,
    2700,
    1456,
    3601,
    6116,
    1464,
    2073,
    1800,
    1490,
    2032,
    2689,
    1145,
    1379,
    955,
    4363,
    759,
    1141,
    2810,
    1119,
    1182,
    1364,
    3414,
    3959,
    1177,
    2567,
    1961,
    4394,
    1601,
    1049,
    579,
    990,
    3858,
    2920,
    965,
    3436,
    1896,
    1703,
    2372,
    2407,
    2498,
    3438,
    2179,
    2296,
    1241,
    1580,
    1405,
    2368,
    1810,
    2637,
    2799,
    3670,
    3490
};
    float edu_lvl[]=
    {
        55.28,
        56.08,
        36.88,
        66.00,
        51.65,
        64.31,
        31.66,
        39.45,
        51.91,
        50.29,
        55.54,
        35.98,
        30.17,
        54.26,
        41.80,
        42.93,
        51.67,
        47.10,
        68.79,
        40.85,
        56.40,
        51.37,
        31.80,
        42.14,
        41.02,
        51.62,
        39.11,
        51.75,
        42.91,
        34.94,
        39.81,
        38.95,
        31.89,
        40.46,
        58.73,
        40.04,
        51.28,
        44.66,
        37.80,
        40.37,
        44.70,
        37.79,
        48.55,
        45.51,
        42.89,
        45.67,
        35.73,
        49.62,
        33.45,
        42.33,
        44.39,
        41.55,
        35.92,
        38.84,
        42.44,
        43.89,
        47.54,
        41.91,
        40.54,
        41.82,
        37.00,
        42.06,
        34.60,
        46.00
    };
void show_district()
{

    int i,j,k;
    for(i=0,j=22,k=43; i<=21; i++,j++,k++)
    {
        printf("\t%d. %s", i+1, district[i]);
        if(j==35)
            printf("\t%d. %s", j+1, district[j]);
        else
            printf("\t\t%d. %s", j+1, district[j]);

        if(k<64)
            printf("\t\t%d. %s", k+1, district[k]);
        else
            continue;

        printf("\n");
    }
    printf("\n\nCommand List\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("\t1. Sort order by population.\t4. Sort order by education.");
    printf("\n\t2. Sort order by area.\t\t5. Sort order by devision.");
    printf("\n\t3. Sort order by density.\t");
    printf("\n\t\t6. Enter any district name to get information.\n\t\t\t\t7. Back\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("\nEnter Command: ");
    char command[100];
    gets(command);
    strlwr(command);
    if(strcmp("1", command)==0||strstr(command, "population")>0)
    {
        system("cls");
        display_logo();
        order_by_population(0);
    }
    else if(strcmp("2", command)==0||strstr(command, "area")>0)
    {
        system("cls");
        display_logo();
        order_by_area(0);
    }
    else if(strcmp("3", command)==0||strstr(command, "density")>0)
    {
        system("cls");
        display_logo();
        order_by_density(0);
    }
    else if(strcmp("4", command)==0||strstr(command, "edu")>0)
    {
        system("cls");
        display_logo();
        order_by_edu(0);
    }
    else if(strcmp("5", command)==0||strstr(command, "dev")>0)
    {
        system("cls");
        display_logo();
        show_division();
    }


    else if(strcmp("6", command)==0||strstr(command, "search")>0||strstr(command, "district")>0)
    {
        system("cls");
        display_logo();
        search_district();
    }
    else if(strcmp("7", command)==0||strcmp("back", command)==0)
    {
        system("cls");
        main();
    }

    else
    {
        command[0]-=32;
        int value=0;
        for(i =0; i<64; i++)
        {
            if(strcmp(command, district[i])==0)
            {
                system("cls");
                display_logo();
                show_district_info(command);
                value =1;
            }
        }
        if(value==0)
        {
            system("cls");
            display_logo();
            not_found_district(command);
        }
    }



}
void show_dhaka_devision()
{
    char *dhaka[] =
    {
        "Dhaka",
        "Faridpur",
        "Gazipur",
        "Gopalganj",
        "Jamalpur",
        "Kishoreganj",
        "Madaripur",
        "Manikganj",
        "Munshiganj",
        "Mymensingh",
        "Narayanganj",
        "Narsingdi",
        "Netrakona",
        "Rajbari",
        "Shariatpur",
        "Sherpur",
        "Tangail"
    };
    int i,j;
    for(i=0,j=9; i<9; i++,j++)
    {
        printf("\t%d. %s", i+1, dhaka[i]);
        if(j<17)
            printf("\t\t%d. %s", j+1, dhaka[j]);
        else
            continue;
        printf("\n");
    }
}

void show_ctg_devision()
{
    char *ctg[] =
    {
        "Bandarban",
        "Brahmanbaria",
        "Chandpur",
        "Chittagong",
        "Comilla",
        "Cox's Bazar",
        "Feni",
        "Khagrachhari",
        "Lakshmipur",
        "Noakhali",
        "Rangamati"
    };
    int i,j;
    for(i=0,j=6; i<6; i++,j++)
    {
        printf("\t%d. %s", i+1, ctg[i]);
        if(j<11)
            printf("\t\t%d. %s", j+1, ctg[j]);
        else
            continue;
        printf("\n");
    }
}
void show_syl_devision()
{
    char *syl[] =
    {
        "Habiganj",
        "Moulvibazar",
        "Sunamganj",
        "Sylhet"
    };
    int i,j;
    for(i=0; i<4; i++)
    {
        printf("\t%d. %s", i+1, syl[i]);
        printf("\n");
    }
}

void show_bsl_devision()
{
    char *bsl[] =
    {
        "Barguna",
        "Barisal",
        "Bhola",
        "Jhalokati",
        "Patuakhali",
        "Pirojpur"
    };
    int i,j;
    for(i=0,j=3; i<3; i++,j++)
    {
        printf("\t%d. %s", i+1, bsl[i]);
        printf("\t\t%d. %s", j+1, bsl[j]);
        printf("\n");
    }
}

void show_khulna_devision()
{
    char *khulna[] =
    {
        "Bagerhat",
        "Chuadanga",
        "Jessore",
        "Jhenaidah",
        "Khulna",
        "Kushtia",
        "Magura",
        "Meherpur",
        "Narail",
        "Satkhira"
    };
    int i,j;
    for(i=0,j=5; i<5; i++,j++)
    {
        printf("\t%d. %s", i+1, khulna[i]);
        printf("\t\t%d. %s", j+1, khulna[j]);
        printf("\n");
    }
}
void show_raj_devision()
{
    char *raj[] =
    {
        "Bogra",
        "Joypurhat",
        "Naogaon",
        "Natore",
        "Nawabganj",
        "Pabna",
        "Rajshahi",
        "Sirajganj"
    };
    int i,j;
    for(i=0,j=4; i<4; i++,j++)
    {
        printf("\t%d. %s", i+1, raj[i]);
        printf("\t\t%d. %s", j+1, raj[j]);
        printf("\n");
    }
}

void show_rangpur_devision()
{
    char *rangpur[] =
    {
        "Dinajpur",
        "Gaibandha",
        "Kurigram",
        "Lalmonirhat",
        "Nilphamari",
        "Panchagarh",
        "Rangpur",
        "Thakurgaon"
    };
    int i,j;
    for(i=0,j=4; i<4; i++,j++)
    {
        printf("\t%d. %s", i+1, rangpur[i]);
        printf("\t\t%d. %s", j+1, rangpur[j]);
        printf("\n");
    }
}

void show_division()
{
    char command[100];
    printf("::Dhaka Division\n");
    show_dhaka_devision();
    printf("\n\n::Chittaganj Division\n");
    show_ctg_devision();
    printf("\n\n::Sylhet Division\n");
    show_syl_devision();
    printf("\n\n::Barisal Division\n");
    show_bsl_devision();
    printf("\n\n::Khulna Division\n");
    show_khulna_devision();
    printf("\n\n::Rajshahi Division\n");
    show_raj_devision();
    printf("\n\n::Rangpur Division\n");
    show_rangpur_devision();
    int i;
    for(i=0; i<80; i++)
        printf("_");
    printf("\nCommand List:\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("\t\t1. Enter any district name to show it's information.\n\t\t2. Back.\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("Command: ");
    gets(command);
    strlwr(command);
    if(strcmp("back", command)==0)
    {
        system("cls");
        display_logo();
        show_district(command);
    }
    else
    {
        command[0]-=32;
        system("cls");
        display_logo();
        show_district_info(command);
    }

}

void order_by_population(int ord)
{
    char *district[66]=
    {
        "Barguna",
        "Barisal",
        "Bhola",
        "Jhalokati",
        "Patuakhali",
        "Pirojpur",
        "Bandarban",
        "Brahmanbaria",
        "Chandpur",
        "Chittagong",
        "Comilla",
        "Cox's Bazar",
        "Feni",
        "Khagrachhari",
        "Lakshmipur",
        "Noakhali",
        "Rangamati",
        "Dhaka",
        "Faridpur",
        "Gazipur",
        "Gopalganj",
        "Jamalpur",
        "Kishoreganj",
        "Madaripur",
        "Manikganj",
        "Munshiganj",
        "Mymensingh",
        "Narayanganj",
        "Narsingdi",
        "Netrakona",
        "Rajbari",
        "Shariatpur",
        "Sherpur",
        "Tangail",
        "Bagerhat",
        "Chuadanga",
        "Jessore",
        "Jhenaidah",
        "Khulna",
        "Kushtia",
        "Magura",
        "Meherpur",
        "Narail",
        "Satkhira",
        "Bogra",
        "Joypurhat",
        "Naogaon",
        "Natore",
        "Nawabganj",
        "Pabna",
        "Rajshahi",
        "Sirajganj",
        "Dinajpur",
        "Gaibandha",
        "Kurigram",
        "Lalmonirhat",
        "Nilphamari",
        "Panchagarh",
        "Rangpur",
        "Thakurgaon",
        "Habiganj",
        "Moulvibazar",
        "Sunamganj",
        "Sylhet"
    };
    long int population[]=
    {
        882000,
        2291000,
        1758000,
        596000,
        1517000,
        1103000,
        383000,
        2808000,
        2393000,
        7509000,
        5304000,
        2275000,
        1420000,
        608000,
        1711000,
        3072000,
        596000,
        11875000,
        1867000,
        3333000,
        1149000,
        2265000,
        2853000,
        1149000,
        1379000,
        1420000,
        5042000,
        2897000,
        2202000,
        2207000,
        1040000,
        1146000,
        1334000,
        3571000,
        1461000,
        1123000,
        2742000,
        1756000,
        2294000,
        1933000,
        913000,
        652000,
        715000,
        1973000,
        3371000,
        909000,
        2576000,
        1696000,
        1635000,
        2497000,
        2573000,
        3072000,
        2970000,
        2349000,
        2050000,
        1249000,
        1820000,
        981000,
        2866000,
        1380000,
        2059000,
        1902000,
        2443000,
        3404000,
    };

    int i, j,temp;
    char *chartemp;
    for(i=0; i<64; i++)
        for(j=0; j<63; j++)
        {
            if(ord == 0)
            {
                if(population[j]<population[j+1])
                {
                    temp=population[j+1];
                    population[j+1]=population[j];
                    population[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
            else
            {
                if(population[j]>population[j+1])
                {
                    temp=population[j+1];
                    population[j+1]=population[j];
                    population[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }

        }
    printf("\tDistrict Name\t\tpopulation\t\tDistrict Name\t\tpopulation\n\n");
    for(i=0,j=32; i<32; i++,j++)
    {
        printf("\t%d. %s",i+1,district[i]);
        if(strlen(district[i])>11 && i > 10)
            printf("\t%d", population[i]);
        else
            printf("\t\t%d", population[i]);

        if(population[i]>9999999)
            printf("\t%d. %s",j+1,district[j]);
        else
            printf("\t\t%d. %s",j+1,district[j]);
        if(strlen(district[j])>11)
            printf("\t%d", population[j]);
        else
            printf("\t\t%d", population[j]);


        printf("\n");
    }

    printf("\n");

    char command[100];
    for(i=0; i<80; i++)
        printf("_");
    printf("\n");
    printf("\t1. Order by Increasement\t2. Order by Decreasement\t3. Back\nCommand: ");
    gets(command);
    strlwr(command);
    if(strcmp("1", command)==0 || strstr(command, "in"))
        increas_decrease_order_population(0);
    else if(strcmp("2", command)==0 || strstr(command, "dec"))
        increas_decrease_order_population(1);
    else if(strcmp("3", command)==0 || strstr(command, "ba"))
    {
        system("cls");
        display_logo();
        show_district();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\t\t\t\tWrong Input\n\nPress any key to go back.");
        getch();
        system("cls");
        display_logo();
        order_by_population(0);
    }
}

void order_by_area(int ord)

{
    int area[]=
    {
        1831,
        2785,
        3403,
        749,
        3221,
        1308,
        4479,
        1927,
        1704,
        5283,
        3085,
        2492,
        928,
        2700,
        1456,
        3601,
        6116,
        1464,
        2073,
        1800,
        1490,
        2032,
        2689,
        1145,
        1379,
        955,
        4363,
        759,
        1141,
        2810,
        1119,
        1182,
        1364,
        3414,
        3959,
        1177,
        2567,
        1961,
        4394,
        1601,
        1049,
        579,
        990,
        3858,
        2920,
        965,
        3436,
        1896,
        1703,
        2372,
        2407,
        2498,
        3438,
        2179,
        2296,
        1241,
        1580,
        1405,
        2368,
        1810,
        2637,
        2799,
        3670,
        3490
    };
    char *district[66]=
    {
        "Barguna",
        "Barisal",
        "Bhola",
        "Jhalokati",
        "Patuakhali",
        "Pirojpur",
        "Bandarban",
        "Brahmanbaria",
        "Chandpur",
        "Chittagong",
        "Comilla",
        "Cox's Bazar",
        "Feni",
        "Khagrachhari",
        "Lakshmipur",
        "Noakhali",
        "Rangamati",
        "Dhaka",
        "Faridpur",
        "Gazipur",
        "Gopalganj",
        "Jamalpur",
        "Kishoreganj",
        "Madaripur",
        "Manikganj",
        "Munshiganj",
        "Mymensingh",
        "Narayanganj",
        "Narsingdi",
        "Netrakona",
        "Rajbari",
        "Shariatpur",
        "Sherpur",
        "Tangail",
        "Bagerhat",
        "Chuadanga",
        "Jessore",
        "Jhenaidah",
        "Khulna",
        "Kushtia",
        "Magura",
        "Meherpur",
        "Narail",
        "Satkhira",
        "Bogra",
        "Joypurhat",
        "Naogaon",
        "Natore",
        "Nawabganj",
        "Pabna",
        "Rajshahi",
        "Sirajganj",
        "Dinajpur",
        "Gaibandha",
        "Kurigram",
        "Lalmonirhat",
        "Nilphamari",
        "Panchagarh",
        "Rangpur",
        "Thakurgaon",
        "Habiganj",
        "Moulvibazar",
        "Sunamganj",
        "Sylhet"
    };
    int i, j,temp;
    char *chartemp;
    for(i=0; i<64; i++)
        for(j=0; j<63; j++)
        {
            if(ord == 0)
            {
                if(area[j]<area[j+1])
                {
                    temp=area[j+1];
                    area[j+1]=area[j];
                    area[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
            else
            {
                if(area[j]>area[j+1])
                {
                    temp=area[j+1];
                    area[j+1]=area[j];
                    area[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
        }
    printf("District Name\t\tArea\t\tDistrict Name\t\tArea\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("\n");

    for(i=0,j=32; i<32; i++,j++)
    {
        printf("%d. %s",i+1,district[i]);
        if(strlen(district[i])>11)
            printf("\t%d KM%c", area[i],253);
        else if(strlen(district[i])<5)
            printf("\t\t\t%d KM%c", area[i],253);
        else
            printf("\t\t%d KM%c", area[i],253);

        printf("\t%d. %s",j+1,district[j]);
        if(strlen(district[j])>11)
            printf("\t%d KM%c", area[j],253);
        else
            printf("\t\t%d KM%c", area[j],253);


        printf("\n");
    }
    printf("\n");

    char command[100];
    for(i=0; i<80; i++)
        printf("_");
    printf("\n");
    printf("\t1. Order by Increasement\t2. Order by Decreasement\t3. Back\nCommand: ");
    gets(command);
    strlwr(command);
    if(strcmp("1", command)==0 || strstr(command, "in"))
        increas_decrease_order_area(0);
    else if(strcmp("2", command)==0 || strstr(command, "dec"))
        increas_decrease_order_area(1);
    else if(strcmp("3", command)==0 || strstr(command, "ba"))
    {
        system("cls");
        display_logo();
        show_district();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\t\t\t\tWrong Input\n\nPress any key to go back.");
        getch();
        system("cls");
        display_logo();
        order_by_area(0);
    }
}

void order_by_density(int ord)
{
    int area[]=
    {
        1831,
        2785,
        3403,
        749,
        3221,
        1308,
        4479,
        1927,
        1704,
        5283,
        3085,
        2492,
        928,
        2700,
        1456,
        3601,
        6116,
        1464,
        2073,
        1800,
        1490,
        2032,
        2689,
        1145,
        1379,
        955,
        4363,
        759,
        1141,
        2810,
        1119,
        1182,
        1364,
        3414,
        3959,
        1177,
        2567,
        1961,
        4394,
        1601,
        1049,
        579,
        990,
        3858,
        2920,
        965,
        3436,
        1896,
        1703,
        2372,
        2407,
        2498,
        3438,
        2179,
        2296,
        1241,
        1580,
        1405,
        2368,
        1810,
        2637,
        2799,
        3670,
        3490
    };
    char *district[66]=
    {
        "Barguna",
        "Barisal",
        "Bhola",
        "Jhalokati",
        "Patuakhali",
        "Pirojpur",
        "Bandarban",
        "Brahmanbaria",
        "Chandpur",
        "Chittagong",
        "Comilla",
        "Cox's Bazar",
        "Feni",
        "Khagrachhari",
        "Lakshmipur",
        "Noakhali",
        "Rangamati",
        "Dhaka",
        "Faridpur",
        "Gazipur",
        "Gopalganj",
        "Jamalpur",
        "Kishoreganj",
        "Madaripur",
        "Manikganj",
        "Munshiganj",
        "Mymensingh",
        "Narayanganj",
        "Narsingdi",
        "Netrakona",
        "Rajbari",
        "Shariatpur",
        "Sherpur",
        "Tangail",
        "Bagerhat",
        "Chuadanga",
        "Jessore",
        "Jhenaidah",
        "Khulna",
        "Kushtia",
        "Magura",
        "Meherpur",
        "Narail",
        "Satkhira",
        "Bogra",
        "Joypurhat",
        "Naogaon",
        "Natore",
        "Nawabganj",
        "Pabna",
        "Rajshahi",
        "Sirajganj",
        "Dinajpur",
        "Gaibandha",
        "Kurigram",
        "Lalmonirhat",
        "Nilphamari",
        "Panchagarh",
        "Rangpur",
        "Thakurgaon",
        "Habiganj",
        "Moulvibazar",
        "Sunamganj",
        "Sylhet"
    };
    long int population[]=
    {
        882000,
        2291000,
        1758000,
        596000,
        1517000,
        1103000,
        383000,
        2808000,
        2393000,
        7509000,
        5304000,
        2275000,
        1420000,
        608000,
        1711000,
        3072000,
        596000,
        11875000,
        1867000,
        3333000,
        1149000,
        2265000,
        2853000,
        1149000,
        1379000,
        1420000,
        5042000,
        2897000,
        2202000,
        2207000,
        1040000,
        1146000,
        1334000,
        3571000,
        1461000,
        1123000,
        2742000,
        1756000,
        2294000,
        1933000,
        913000,
        652000,
        715000,
        1973000,
        3371000,
        909000,
        2576000,
        1696000,
        1635000,
        2497000,
        2573000,
        3072000,
        2970000,
        2349000,
        2050000,
        1249000,
        1820000,
        981000,
        2866000,
        1380000,
        2059000,
        1902000,
        2443000,
        3404000,
    };
    int dinsity[64];

    int i,j,temp;
    char *chartemp;
    for(i=0; i<64; i++)
    {
        dinsity[i]=population[i]/area[i];
    }

    for(i=0; i<64; i++)
        for(j=0; j<63; j++)
        {
            if(ord == 0)
            {
                if(dinsity[j]<dinsity[j+1])
                {
                    temp=dinsity[j+1];
                    dinsity[j+1]=dinsity[j];
                    dinsity[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
            else
            {
                if(dinsity[j]>dinsity[j+1])
                {
                    temp=dinsity[j+1];
                    dinsity[j+1]=dinsity[j];
                    dinsity[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
        }
    printf("\tDistrict Name\tDinsity\t\t\tDistrict Name\tDinsity\n\n");
    for(i=0,j=32; i<32; i++,j++)
    {
        printf("\t%d. %s",i+1,district[i]);
        if(strlen(district[i])>11)
            printf("\t%d People/KM%c", dinsity[i], 253);
        else if(strlen(district[i])<5)
            printf("\t\t%d People/KM%c", dinsity[i], 253);
        else
            printf("\t%d People/KM%c", dinsity[i],253);

        printf("\t\t%d. %s",j+1,district[j]);
        if(strlen(district[j])>11)
            printf("  %d People/KM%c", dinsity[j], 253);
        else
            printf("\t%d People/KM%c", dinsity[j], 253);

        printf("\n");
    }
    printf("\n");

    char command[100];
    for(i=0; i<80; i++)
        printf("_");
    printf("\n");
    printf("\t1. Order by Increasement\t2. Order by Decreasement\t3. Back\nCommand: ");
    gets(command);
    strlwr(command);
    if(strcmp("1", command)==0 || strstr(command, "in"))
        increas_decrease_order_density(0);
    else if(strcmp("2", command)==0 || strstr(command, "dec"))
        increas_decrease_order_density(1);
    else if(strcmp("3", command)==0 || strstr(command, "ba"))
    {
        system("cls");
        display_logo();
        show_district();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\t\t\t\tWrong Input\n\nPress any key to go back.");
        getch();
        system("cls");
        display_logo();
        order_by_density(0);
    }
}

void order_by_edu(int ord)
{
    char *district[66]=
    {
        "Barguna",
        "Barisal",
        "Bhola",
        "Jhalokati",
        "Patuakhali",
        "Pirojpur",
        "Bandarban",
        "Brahmanbaria",
        "Chandpur",
        "Chittagong",
        "Comilla",
        "Cox's Bazar",
        "Feni",
        "Khagrachhari",
        "Lakshmipur",
        "Noakhali",
        "Rangamati",
        "Dhaka",
        "Faridpur",
        "Gazipur",
        "Gopalganj",
        "Jamalpur",
        "Kishoreganj",
        "Madaripur",
        "Manikganj",
        "Munshiganj",
        "Mymensingh",
        "Narayanganj",
        "Narsingdi",
        "Netrakona",
        "Rajbari",
        "Shariatpur",
        "Sherpur",
        "Tangail",
        "Bagerhat",
        "Chuadanga",
        "Jessore",
        "Jhenaidah",
        "Khulna",
        "Kushtia",
        "Magura",
        "Meherpur",
        "Narail",
        "Satkhira",
        "Bogra",
        "Joypurhat",
        "Naogaon",
        "Natore",
        "Nawabganj",
        "Pabna",
        "Rajshahi",
        "Sirajganj",
        "Dinajpur",
        "Gaibandha",
        "Kurigram",
        "Lalmonirhat",
        "Nilphamari",
        "Panchagarh",
        "Rangpur",
        "Thakurgaon",
        "Habiganj",
        "Moulvibazar",
        "Sunamganj",
        "Sylhet"
    };
    float edu_lvl[]=
    {
        55.28,
        56.08,
        36.88,
        66.00,
        51.65,
        64.31,
        31.66,
        39.45,
        51.91,
        50.29,
        55.54,
        35.98,
        30.17,
        54.26,
        41.80,
        42.93,
        51.67,
        47.10,
        68.79,
        40.85,
        56.40,
        51.37,
        31.80,
        42.14,
        41.02,
        51.62,
        39.11,
        51.75,
        42.91,
        34.94,
        39.81,
        38.95,
        31.89,
        40.46,
        58.73,
        40.04,
        51.28,
        44.66,
        37.80,
        40.37,
        44.70,
        37.79,
        48.55,
        45.51,
        42.89,
        45.67,
        35.73,
        49.62,
        33.45,
        42.33,
        44.39,
        41.55,
        35.92,
        38.84,
        42.44,
        43.89,
        47.54,
        41.91,
        40.54,
        41.82,
        37.00,
        42.06,
        34.60,
        46.00
    };

    int i, j;
    float temp;
    char *chartemp;
    for(i=0; i<64; i++)
        for(j=0; j<63; j++)
        {
            if(ord == 0)
            {
                if(edu_lvl[j]<edu_lvl[j+1])
                {
                    temp=edu_lvl[j+1];
                    edu_lvl[j+1]=edu_lvl[j];
                    edu_lvl[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
            else
            {
                if(edu_lvl[j]>edu_lvl[j+1])
                {
                    temp=edu_lvl[j+1];
                    edu_lvl[j+1]=edu_lvl[j];
                    edu_lvl[j]=temp;
                    chartemp = district[j+1];
                    district[j+1]=district[j];
                    district[j]=chartemp;
                }
            }
        }
    printf("\tDistrict Name\tEducation Lavel\t\tDistrict Name\tEducation Lavel\n\n");
    for(i=0,j=32; i<32; i++,j++)
    {

        printf("\t%d. %s",i+1,district[i]);
        if(strlen(district[i])>11 && i >9)
            printf("\t%.2f %%", edu_lvl[i]);
        else if(strlen(district[i])<5)
            printf("\t\t\t%.2f %%", edu_lvl[i]);
        else
            printf("\t\t%.2f %%", edu_lvl[i]);


        printf("\t\t%d. %s",j+1,district[j]);
        if(strlen(district[j])>11)
            printf("\t%.2f %%", edu_lvl[j]);
        else
            printf("\t\t%.2f %%", edu_lvl[j]);


        printf("\n");
    }
    printf("\n");

    char command[100];
    for(i=0; i<80; i++)
        printf("_");
    printf("\n");
    printf("\t1. Order by Increasement\t2. Order by Decreasement\t3. Back\nCommand: ");
    gets(command);
    strlwr(command);
    if(strcmp("1", command)==0 || strstr(command, "in"))
        increas_decrease_order_edu(0);
    else if(strcmp("2", command)==0 || strstr(command, "dec"))
        increas_decrease_order_edu(1);
    else if(strcmp("3", command)==0 || strstr(command, "ba"))
    {
        system("cls");
        display_logo();
        show_district();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\t\t\t\tWrong Input\n\nPress any key to go back.");
        getch();
        system("cls");
        display_logo();
        order_by_edu(0);
    }
}

void show_district_info(char *fname)
{
    long int population[]=
    {
        882000,
        2291000,
        1758000,
        596000,
        1517000,
        1103000,
        383000,
        2808000,
        2393000,
        7509000,
        5304000,
        2275000,
        1420000,
        608000,
        1711000,
        3072000,
        596000,
        11875000,
        1867000,
        3333000,
        1149000,
        2265000,
        2853000,
        1149000,
        1379000,
        1420000,
        5042000,
        2897000,
        2202000,
        2207000,
        1040000,
        1146000,
        1334000,
        3571000,
        1461000,
        1123000,
        2742000,
        1756000,
        2294000,
        1933000,
        913000,
        652000,
        715000,
        1973000,
        3371000,
        909000,
        2576000,
        1696000,
        1635000,
        2497000,
        2573000,
        3072000,
        2970000,
        2349000,
        2050000,
        1249000,
        1820000,
        981000,
        2866000,
        1380000,
        2059000,
        1902000,
        2443000,
        3404000,
    };
    int area[]=
    {
        1831,
        2785,
        3403,
        749,
        3221,
        1308,
        4479,
        1927,
        1704,
        5283,
        3085,
        2492,
        928,
        2700,
        1456,
        3601,
        6116,
        1464,
        2073,
        1800,
        1490,
        2032,
        2689,
        1145,
        1379,
        955,
        4363,
        759,
        1141,
        2810,
        1119,
        1182,
        1364,
        3414,
        3959,
        1177,
        2567,
        1961,
        4394,
        1601,
        1049,
        579,
        990,
        3858,
        2920,
        965,
        3436,
        1896,
        1703,
        2372,
        2407,
        2498,
        3438,
        2179,
        2296,
        1241,
        1580,
        1405,
        2368,
        1810,
        2637,
        2799,
        3670,
        3490
    };
    float edu_lvl[]=
    {
        55.28,
        56.08,
        36.88,
        66.00,
        51.65,
        64.31,
        31.66,
        39.45,
        51.91,
        50.29,
        55.54,
        35.98,
        30.17,
        54.26,
        41.80,
        42.93,
        51.67,
        47.10,
        68.79,
        40.85,
        56.40,
        51.37,
        31.80,
        42.14,
        41.02,
        51.62,
        39.11,
        51.75,
        42.91,
        34.94,
        39.81,
        38.95,
        31.89,
        40.46,
        58.73,
        40.04,
        51.28,
        44.66,
        37.80,
        40.37,
        44.70,
        37.79,
        48.55,
        45.51,
        42.89,
        45.67,
        35.73,
        49.62,
        33.45,
        42.33,
        44.39,
        41.55,
        35.92,
        38.84,
        42.44,
        43.89,
        47.54,
        41.91,
        40.54,
        41.82,
        37.00,
        42.06,
        34.60,
        46.00
    };

    int i,pos=100,j;
    char name[50];
    strcpy(name, fname);
    strlwr(name);
    name[0]-=32;
    for(i=0; i<64; i++)
    {

        if(strcmp(district[i], name)==0)
        {

            pos=i;
            break;
        }
    }
    if(pos==100)
        return not_found_district(name);

    printf("%s\n",district[pos]);
    for(i=0; i<80; i++)
        printf("_");

    printf("\nArea\t\t\t: %d\tKM%c", area[pos],253);
    printf("\nPopulation\t\t: %d", population[pos]);
    printf("\nDinsity\t\t\t: %d\tPeople/KM%c", (population[pos]/area[pos]),253);
    printf("\nEducation Lavel\t\t: %.2f %%", edu_lvl[pos]);

    printf("\n");
    for(i=0; i<80; i++)
        printf("_");
    printf("\nOther District on that Devision: \n\n");

    show_other_district(pos);
    search_district();
}

void show_other_district(int pos)
{
    if(pos <6)
        show_bsl_devision();
    else if(pos>5 && pos <17)
        show_ctg_devision();
    else if(pos>16 && pos <34)
        show_dhaka_devision();
    else if(pos>33 && pos <44)
        show_khulna_devision();
    else if(pos>43 && pos < 52)
        show_raj_devision();
    else if(pos>51 && pos < 60)
        show_rangpur_devision();
    else
        show_syl_devision();
}

void search_district()
{
    char name[50];
    printf("\n\nEnter District Name: ");
    gets(name);
    system("cls");
    display_logo();
    if(strcmp("back", name)==0)
        show_district();
    else
        show_district_info(name);
}

void not_found_district(char *name)
{
    char sugg[50];
    char tdistrct[66][50];
    int i;
    for(i=0; i<64; i++)
    {
        strcpy(tdistrct[i], district[i]);
    }

    int j=0;
    char suggestion[64][50];
    system("cls");
    display_logo();
    printf("\t\t\t\t\tNOT FOUND\n\n");
    printf("You Entered: %s", name);
    strcpy(sugg,name);

    for(i=0; i<64; i++)
    {
        if(sugg[0]==district[i][0] && sugg[1]==district[i][1])
        {
            strcpy(suggestion[j], district[i]);

            j++;
        }
    }
    printf("\n\nYour Suggesion: \n");
    for(i=0; i<80; i++)
    {
        printf("_");
    }
    if(j>0)
        for(i=0; i<j; i++)
            printf("%s\n", suggestion[i]);
    else
    {
        printf("\tNo Suggestion Found.\n\nPress any key to show full list.\n");
        getch();
        system("cls");
        display_logo();
        return show_district();
    }

    printf("\nType District Name(Type Back to show full list): ");
    char nextname[50];
    gets(nextname);
    strlwr(nextname);
    system("cls");
    display_logo();
    if(strcmp("back", nextname)==0)
    {

        show_district();
    }
    else
        show_district_info(nextname);
}

void increas_decrease_order_population(int order)
{
    system("cls");
    display_logo();
    if(order == 0)
        order_by_population(0);
    else
        order_by_population(1);
}

void increas_decrease_order_area(int order)
{
    system("cls");
    display_logo();
    if(order == 0)
        order_by_area(0);
    else
        order_by_area(1);
}

void increas_decrease_order_density(int order)
{
    system("cls");
    display_logo();
    if(order == 0)
        order_by_density(0);
    else
        order_by_density(1);
}

void increas_decrease_order_edu(int order)
{
    system("cls");
    display_logo();
    if(order == 0)
        order_by_edu(0);
    else
        order_by_edu(1);
}
void searcing()
{
    char keyword[1000],searchkeyword[1000];
    int i,j,number;
    system("cls");
    display_logo();
    printf("\t\t\tSearch: ");
    gets(keyword);
    strlwr(keyword);

    for(i=0; i<strlen(keyword);)
    {
        if(keyword[i]> 48 && keyword[i] < 58)
            i++;
        else
            break;
    }

    for(j=0; j<i; j++)
        searchkeyword[j]=keyword[j];

    searchkeyword[j]='\0';
    number=atoi(searchkeyword);
    if(strcmp("back", keyword)==0){
        system("cls");
        main();
    }
    else if(strstr(keyword, "high")>0 || strstr(keyword, "top")>0)
    {
        if(strstr(keyword, "popula"))
            high_district(0);
        else if(strstr(keyword, "density"))
            high_district(1);
        else if(strstr(keyword, "educ"))
            high_district(3);
        else if(strstr(keyword, "area"))
            high_district(2);
        printf("\n\nPress any key to search again.");
        getch();
        searcing();
    }
    else if(strstr(keyword, "large")>0 || strstr( keyword, "big")>0 || strstr( keyword, "best")>0)
    {

        if(strstr(keyword,"popul") > 0)
        {
            large_district(0);
        }
        else if(strstr(keyword, "density") > 0)
        {
            large_district(1);
        }

        else if(strstr(keyword, "educ") > 0)
        {
            large_district(3);
        }

        else if(strstr(keyword, "area") > 0)
        {
            large_district(2);
        }
        printf("\n\nPress any key to search again.");
        getch();
        searcing();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\t\t\t\tNot Found\n\nPress G for google it, A for search again and press other for go back.");
        char com;
        com = getch();
        if(com >= 'A' && com <= 'Z')
        com+=32;
        if (com == 'g'){
            google(keyword);
            system("cls");
            main();
        }
        if (com == 'a'){
            system("cls");
            display_logo();
            searcing();
        }
        else
        {
            system("cls");

            main();
        }
    }
}

void high_district(int key)
{
    int i,j;
    long int pop[64],temp;
    char tempchar[20],dis[64][20];
    display_logo();
    if(key == 0)
    {
        for(i=0; i<64; i++)
        {
            pop[i]=population[i];
            strcpy(dis[i],district[i]);
        }
        for(i=0; i<64; i++)
        {
            for(j=0; j<63; j++)
            {
                if(pop[j]<pop[j+1])
                {
                    temp=pop[j];
                    strcpy(tempchar, dis[j]);
                    pop[j]=pop[j+1];
                    strcpy(dis[j], dis[j+1]);
                    pop[j+1]=temp;
                    strcpy(dis[j+1], tempchar);
                }

            }
        }

    }

    if(key == 1)
    {
        for(i=0; i<64; i++)
        {
            pop[i]=(population[i]/area[i]);
            strcpy(dis[i],district[i]);
        }
        for(i=0; i<64; i++)
        {
            for(j=0; j<63; j++)
            {
                if(pop[j]<pop[j+1])
                {
                    temp=pop[j];
                    strcpy(tempchar, dis[j]);
                    pop[j]=pop[j+1];
                    strcpy(dis[j], dis[j+1]);
                    pop[j+1]=temp;
                    strcpy(dis[j+1], tempchar);
                }

            }
        }
    }
    if(key == 2)
    {
        for(i=0; i<64; i++)
        {
            pop[i]=area[i];
            strcpy(dis[i],district[i]);
        }
        for(i=0; i<64; i++)
        {
            for(j=0; j<63; j++)
            {
                if(pop[j]<pop[j+1])
                {
                    temp=pop[j];
                    strcpy(tempchar, dis[j]);
                    pop[j]=pop[j+1];
                    strcpy(dis[j], dis[j+1]);
                    pop[j+1]=temp;
                    strcpy(dis[j+1], tempchar);
                }

            }
        }
    }
    if(key == 3)
    {
        for(i=0; i<64; i++)
        {
            pop[i]=edu_lvl[i];
            strcpy(dis[i],district[i]);
        }
        for(i=0; i<64; i++)
        {
            for(j=0; j<63; j++)
            {
                if(pop[j]<pop[j+1])
                {
                    temp=pop[j];
                    strcpy(tempchar, dis[j]);
                    pop[j]=pop[j+1];
                    strcpy(dis[j], dis[j+1]);
                    pop[j+1]=temp;
                    strcpy(dis[j+1], tempchar);
                }

            }
        }
    }
    system("cls");
    display_logo();
    if(key==0)
        printf("\t\t\t\tHigh Populated Districts\n\n");
    else if (key == 1)
        printf("\t\t\tHighly Densited Districts\n\n");
    else if (key == 2)
        printf("\t\t\t\tDistricts with Large Area\n\n");
    else if (key == 3)
        printf("\t\t\tHighly Educated Districts\n\n");
    for(i=0; i<80; i++)
        printf("_");
    if(key==3)
        printf("\tDistrict Name\t\t\tQuantity\n");
    else
        printf("\tDistrict Name\t\t\tArea\n");
    for(i=0; i<80; i++)
        printf("_");
    for(i=0; i<10; i++)
        if (key == 0)
            if(strlen(dis[i])>7)
                printf("\n\t%s\t\t\t%d", dis[i], pop[i]);
            else
                printf("\n\t%s\t\t\t\t%d", dis[i], pop[i]);
        else if(key == 1)
            if(strlen(dis[i])>7)
                printf("\n\t%s\t\t\t%d People/KM%c", dis[i], pop[i], 253);
            else
                printf("\n\t%s\t\t\t\t%d People/KM%c", dis[i], pop[i],253);
        else if(key == 2)
            if(strlen(dis[i])>7)
                printf("\n\t%s\t\t\t%d KM%c", dis[i], pop[i], 253);
            else
                printf("\n\t%s\t\t\t\t%d KM%c", dis[i], pop[i],253);
        else if (key == 3)
            if(strlen(dis[i])>7)
                printf("\n\t%s\t\t\t%d%%", dis[i], pop[i]);
            else
                printf("\n\t%s\t\t\t\t%d%%", dis[i], pop[i]);
}

void large_district(int key)
{
    int i,j;
    long int number=0;
    display_logo();
    if(key==0)
    {
        j=0;
        for(i=0; i<64; i++)
        {
            if(population[i]>number)
            {
                number=population[i];
                j=i;
            }
        }
    }
    if(key==1)
    {
        j=0;
        for(i=0; i<64; i++)
        {
            float distency;
            distency=population[i]/area[i];
            if(distency>number)
            {
                number=distency;
                j=i;
            }
        }
    }
    if(key==2)
    {
        j=0;
        for(i=0; i<64; i++)
            if(area[i]>=number)
            {
                number=area[i];
                j=i;
            }
    }
    if(key==3)
    {
        j=0;
        for(i=0; i<64; i++)
        {
            if(edu_lvl[i]>number)
            {
                number=edu_lvl[i];
                j=i;
            }
        }
    }
    printf("\n\nResult: %s", district[j]);

}

void google(char key[1000])
{
    char srch[1000]="start http://www.google.com/search?q=";
    int i;
    for(i=0;i<strlen(key);i++)
        if(key[i]==' ')
            key[i]='+';
    strcat(srch, key);
    system(srch);
}
int main()
{
    char command[100];
    spalash();
    display_logo();
    printf("\t1. Show All District.\n\t2. Search District.\n\t3. Search Engine.\n\t4. About\n\t5. Exit\n\nEnter any command: ");

    gets(command);
    strlwr(command);
    if(strcmp("1", command) == 0 || strstr(command,"show") > 0)
    {
        system("cls");
        display_logo();
        show_district();
    }
    else if(strcmp("2", command) == 0 || strcmp("search district", command) == 0)
    {
        system("cls");
        display_logo();
        search_district();
    }
    else if(strcmp("3", command) == 0 || strstr(command, "engine") > 0)
    {
        searcing();
    }
    else if(strcmp("4", command) == 0 || strstr(command, "about") > 0)
    {
        about();
    }
    else if(strcmp("5", command) == 0 || strcmp(command,"exit") == 0){
        return 0;
    }
    else if(strstr(command,"search") >0)
    {
        system("cls");
        display_logo();
        printf("\n\t\t\t\tWrong Input\n\tKeyword Suggestion:\n\t\t1. Search District.\n\t\t2. Search Engine\n\nPress any key to continue.\n");
        getch();
        system("cls");
        main();
    }
    else
    {
        system("cls");
        display_logo();
        printf("\n\t\t\t\tWrong Input\nPress any key to go back. :) ");
        getch();
        system(("cls"));
        main();
    }
    return 0;
}
