/*จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้ 
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5 แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้*/

#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

char* cutGrade(float score) {
    if (score >= 80) return "A" ;
    else if (score >= 75) return "B+" ;
    else if (score >= 70) return "B" ;
    else if (score >= 65) return "C+" ;
    else if (score >= 60) return "C" ;
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D" ;
    else return "F" ;
}

int main() {
    S Students[3] ;
    int i ;

    printf("Enter the details of 3 students :\n") ;
    for ( i = 0 ; i < 3 ; i++ ) {
        printf("Student %d\n", i + 1) ;

        printf("Name: \n");
        scanf(" %[^\n]", Students[i].Name) ;

        printf("ID : \n") ;
        scanf("%s", Students[i].ID) ;

        printf("Scores in Subject 1 : \n") ;
        scanf("%f", &Students[i].ScoreSub1) ;

        printf("Scores in Subject 2 : \n") ;
        scanf("%f", &Students[i].ScoreSub2) ;

        printf("Scores in Subject 3 : \n") ;
        scanf("%f", &Students[i].ScoreSub3) ;

        printf("Scores in Subject 4 : \n") ;
        scanf("%f", &Students[i].ScoreSub4) ;

        printf("Scores in Subject 5 : \n") ;
        scanf("%f", &Students[i].ScoreSub5) ;

        printf("\n") ;
    }
    printf("\n") ;

    for ( i = 0 ; i < 3 ; i++ ) {
        float avg = ( Students[i].ScoreSub1 + Students[i].ScoreSub2 + Students[i].ScoreSub3 + Students[i].ScoreSub4 + Students[i].ScoreSub5 ) / 5 ;

        printf("Student %d:\n", i + 1) ;
        printf("Name: %s\n", Students[i].Name) ;
        printf("ID: %s\n", Students[i].ID) ;
        printf("Score: %.0f %.0f %.0f %.0f %.0f\n", 
            Students[i].ScoreSub1, 
            Students[i].ScoreSub2, 
            Students[i].ScoreSub3, 
            Students[i].ScoreSub4, 
            Students[i].ScoreSub5) ;
        printf("Grades: %s %s %s %s %s\n",
               cutGrade(Students[i].ScoreSub1),
               cutGrade(Students[i].ScoreSub2),
               cutGrade(Students[i].ScoreSub3),
               cutGrade(Students[i].ScoreSub4),
               cutGrade(Students[i].ScoreSub5)) ;
        printf("Average Scores: %.1f\n", avg) ;
        
        printf("\n") ;
    }
    return 0 ;
}
