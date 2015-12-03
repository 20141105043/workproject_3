//
//  main.cpp
//  workproject_3
//
//  Created by 20141105043dj on 15/12/2.
//  Copyright (c) 2015年 20141105043dj. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Student
    {
        char name[10];
        int age;
        Student *next;
    };
    Student *p,*q,*head;
    head=new Student;
    head->next=0;
    p=head;
    for(int i=0;i<4;i++)
    {
        q=new Student;
        p->next=q;
        q->next=0;
        scanf("%s %d",q->name,&(q->age));
        p=q;
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s  %d p=%x\n",p->name,p->age,p);
        p=p->next;
    }
    return 0;
}
