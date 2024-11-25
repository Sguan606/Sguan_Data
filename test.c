//计算n的阶层 10.16
// #include <stdio.h>
// #include <string.h>
// int main()
// {   
//     int a;
//     scanf("%d",&a);
//     int m = 1;

//     while (a>0)
//     {
//         m = m*a;
//         a -=1;

//     }
//     printf("%d",m);
//     return 0;
// }




// // 1 到 10 的阶乘之和 10.16
// #include <stdio.h>
// int main()
// {
//     int m = 0;
//     int a = 1;
//     for (int i = 1; i < 11; i++)
//     {
//         a = a*i;
//         m = m + a;
//     }
    
//     printf("%d\n",m);

//     return 0;
// }





// 查找某个字符
// #include <stdio.h>

// int binsearch(int x,int v[],int n)
// {
    
// }

// int main()
// {
//     printf("ABC");
//     return 0;
// }




//字符向中间移动演示
// #include <stdio.h>

// int main()
// {
//     printf("#-----------------------#\n");
//     printf("###---------------------#\n");
//     printf("####-------------------##\n");
//     printf("######--------------#####\n");
//     printf("########-----------######\n");
//     printf("##########-------########\n");
//     printf("#########################\n");
//     return 0;
// }




// 模拟用户登陆的场景,仅限输入3次密码
// #define NUM 346464
// #include <stdio.h>

// int main()
// {
//     int a;
//     int count = 0;
//     printf("输入密码(仅限3次)");
//     while (count<3)
//     {
//         scanf("%d",&a);
//         if (a == NUM)
//         {
//             printf("恭喜您,密码正确...现在开始马上进入系统!\n");
//             printf("进入系统成功,yes!");
//             break;
//         }
//         else
//         {
//             printf("密码错误,请重新输入!\n");
//             count ++;
//         }
//     }

//     if (count == 3)
//     {
//         printf("您已连续三次输入错误密码,程序退出。\n");
//     }

//     return 0;
// }



//to make sure one word is just a jisu;
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     if (a % 2 == 1)
//     {
//         printf("yes!");
//     }
//     else
//     {
//         printf("no!sorry~");
//     }
    
//     return 0;
// }



//to print 1 to 100 word which is a jisu;
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i < 101; i++)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d ",i);
//         }
//     }
    
//     return 0;
// }




//用switch判断今天是星期几;
// #include <stdio.h>

// int main()
// {
//     int day;
//     printf("请输入 the day (1-7): "); // 提示用户输入
//     scanf("%d", &day); // 读取用户输入

//     switch (day)
//     {
//         case 1: // 星期一
//         case 2: // 星期二
//         case 3: // 星期三
//         case 4: // 星期四
//         case 5: // 星期五
//             printf("work day!\n"); // 工作日
//             break;

//         case 6: // 星期六
//         case 7: // 星期天
//             printf("sleep day!\n"); // 休息日
//             break;

//         default: // 输入无效
//             printf("you are wrong!\n");
//             break;
//     }

//     return 0; // 程序正常结束
// }




//如果实现一个二分查找函数：
// int bin_search(int arr[], int left, int right, int key)
// {
//     int mid = 0;
//     while(left<=right)
//     {
//         mid = (left+right)>>1;
//         if(arr[mid]>key)
//         {
//             right = mid-1;
//         }
//         else if(arr[mid] < key)
//         {
//             left = mid+1;
//         }
//         else
//             return mid;//找到了，返回下标
// }




//猜数字游戏的实现
// #include <stdio.h>
// #define NUM 233
// void game(int x)
// {
//     scanf("%d",x);
//     if (x>NUM)
//     {
//         printf("猜大了！");
//     }
//     else if (x<NUM)
//     {
//         printf("猜小了！");
//     }
//     else
//     {
//         printf("yes!it is!");
//     }
// }

// int main()
// {
//     game();
//     return 0;
// }



//判断一个数是不是素数
// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     return 0;
// }







// //用C语言实现二分查找
// #include <stdio.h>

// // 函数原型声明
// int binarySearch(int arr[], int left, int right, int target);

// int main() {
//     int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;
//     int result = binarySearch(arr, 0, n - 1, target);

//     if (result != -1) {
//         printf("目标元素 %d 在数组中的索引位置是: %d\n", target, result);
//     } else {
//         printf("目标元素 %d 不在数组中。\n", target);
//     }

//     return 0;
// }

// // 二分查找函数实现
// int binarySearch(int arr[], int left, int right, int target) {
//     while (left <= right) {
//         int mid = left + (right - left) / 2; // 计算中间位置

//         // 检查中间元素是否是目标元素
//         if (arr[mid] == target) {
//             return mid; // 返回目标元素的索引
//         }

//         // 如果目标元素大于中间元素，则在右半部分继续查找
//         if (arr[mid] < target) {
//             left = mid + 1;
//         }
//         // 如果目标元素小于中间元素，则在左半部分继续查找
//         else {
//             right = mid - 1;
//         }
//     }

//     // 如果没有找到目标元素，返回 -1
//     return -1;
// }




// //写的每调用一次函数，计数一次
// #include <stdio.h>

// int count = 0;  // 全局变量，用于记录调用次数
// int c = 0;      // 声明 c 变量在全局范围内

// int game_main(int x, int y)
// {
//     c = x * x + y * y;  // 计算 x 和 y 的平方和
//     count++;            // 增加调用次数
//     return c;          // 返回计算结果
// }

// int main()
// {
//     int a, b;
//     printf("Enter two integers: ");  // 提示用户输入
//     scanf("%d%d", &a, &b);           // 使用 & 符号获取变量地址
//     game_main(a, b);                 // 调用 game_main 函数
//     int d = 3;
//     game_main(a, d);                 // 再次调用 game_main 函数
//     printf("Result c: %d\n", c);     // 打印 c 的值
//     printf("Count: %d\n", count);     // 打印调用次数
//     return 0;
// }




//接受一个整形，然后按照顺序打印出来；
// #include <stdio.h>
// void test(int num)
// {
//     while (num>9)
//     {
//         int nums = num/10;
//         num = nums;
//         printf("%d",nunms);
//     }
// }//may be something wrong

// int main()
// {
//     int num;
//     printf("请输入你想排序的数字：");
//     scanf("%d",num);
//     test(num)
//     return 0;
// }





// //编写函数不允许创建临时变量,求字符串的长度
// #include <stdio.h>
// #include <string.h>
// int strlen_main(const char*str)
// {
//     switch (*str)
//     {
//     case '\0':
//         return 0;
//         break;
    
//     default:
//         return 1+strlen_main(str+1);
//         break;
//     }
// }

// int main()
// {   
//     char *p = "acbsrdf";
//     int len = strlen_main(p);
//     printf("%d\n",len);
//     return 0;
// }




// //to make sure what the 'n!' like;
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     m = 1;
//     scanf("%d",&n);
//     for(int i = 1;i <= n;i++)
//     {
//         m = m*i;
//     }
//     printf("%d\n",m);
//     return 0;
// }




// //不能创建第三个变量,实现两个数的交换;
// #include <stdio.h>
// int main()
// {
//     int a = 7;
//     int b = 9;
//     printf("%d %d\n",a,b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("%d %d\n",a,b);
//     return 0;
// }




// //编写代码实现求指定数字2进制中1的个数;
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("请输入你想查询数字:\n");
//     scanf("%d",&num);
//     int m = 1;
//     int count = 0;
//     while (num)
//     {
//         if (num & 1)
//         {
//             count ++;
//         }
//         num = num >> 1;
//     }
//     printf("%d",count);

//     return 0;
// }




//360面试题,最简单的一个仅示范
// #include <stdio.h>
// int main()
// {
// int i = 0,a=0,b=2,c =3,d=4;
// i = a++ && ++b && d++;
// //i = a++||++b||d++;
// printf("a = %d\nb =%d\nc = %d\nd = %d\n", a, b, c, d);
// return 0;
// }
// //程序输出的结果是什么？




// //条件操作符练习(3目操作符)
// //exp1 ? exp2 : exp3
// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     int b = 0;
//     int num;
//     printf("请问你知道中国共产党成立于多少年吗?清输入:\n");
//     scanf("%d",&num);
//     if (num == 1921 ? a : b)
//     {
//         printf("yes! It is!");
//     }
//     else
//     {
//         printf("I'm shy with you! sorry");
//     }
//     return 0;
// }





// //结构体练习
// #include <stdio.h>
// // 定义结构体
// struct Stu {
//     char name[10];
//     int age;
//     char sex[5];
//     double score;
// };  // 注意此处的分号

// // 使用值传递设置年龄
// void set_age1(struct Stu stu) {
//     stu.age = 18; // 这里只会在函数内部修改副本
// }

// // 使用指针设置年龄
// void set_age2(struct Stu* pStu) {
//     pStu->age = 18; // 结构成员访问
// }

// int main() {
//     struct Stu stu;             // 创建结构体实例
//     struct Stu* pStu = &stu;   // 获取结构体实例的指针
    
//     // 设置结构体成员的初始值
//     stu.age = 20;               // 直接访问结构成员
//     printf("初始年龄: %d\n", stu.age); // 打印初始年龄
    
//     // 调用 set_age1 函数
//     set_age1(stu);
//     printf("调用 set_age1 后的年龄: %d\n", stu.age); // 依然是 20，因为传递的是副本

//     // 调用 set_age2 函数
//     set_age2(pStu);
//     printf("调用 set_age2 后的年龄: %d\n", stu.age); // 现在是 18，因为通过指针修改了原始数据

//     return 0;
// }





// //打印2维数组arr[][y]
// #include <stdio.h>

// void restart_broad(int x, int y, char arr[x][y]) {
//     // Initialize the board with '*'
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             arr[i][j] = '*';
//         }
//     }
// }

// void print_broad(int x, int y, char arr[x][y]) {
//     // Print the board
//     for (int k = 0; k < x; k++) {
//         for (int l = 0; l < y; l++) {
//             printf("%c", arr[k][l]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int a, b;
//     printf("Please mark the shape of your board (rows and columns): ");
//     scanf("%d %d", &a, &b);
    
//     // Declare the array in the main function
//     char arr[a][b];
    
//     restart_broad(a, b, arr); // Pass the array to the function
//     print_broad(a, b, arr);    // Pass the array to the function
    
//     return 0;
// }




// //测试指针变量
// #include <stdio.h>
// int main()
// {
//     int a = 12;
//     int *pa = & a;
//     printf("%p\n",(void*)pa);
//     printf("%d\n",*pa);
//     return 0;
// }




// //结构体测试
// #include <stdio.h>
// struct juster
// {
//     char name[20];
//     char studyid[30];
//     int age;
//     int studycore;
// };
// int main()
// {
//     struct juster sguan ={"星必尘Sguan","232241802238",20,99};
//     printf("他的名字是：%s,然后学号%s,年龄和成绩分别是%dand%d\n",sguan.name,sguan.studyid,sguan.age,sguan.studycore);
//     struct juster *sguan2 = &sguan;
//     printf("%s\n",sguan2->name);
//     printf("%s\n",(*sguan2).name);
//     return 0;
// }




// //struct结构体指针练习
// #include <stdio.h>
// struct * just
// {
//     int age;
//     int word;
//     int math;
// };

// int main()
// {
//     struct just sguan = {11,12,13};
//     return 0;
// }




// //my_strcpy
// #include <stdio.h>
// void my_strcpy(char *dert,const char *srt)
// {
//     while (*dert++ = *srt++)
//     {
//     }
    
    
// }

// int main()
// {
//     char arr1[20];
//     char arr2[]={"hello"};
//     my_strcpy(arr1,arr2);
//     printf("%s",arr1);
//     return 0;
// }




// //my_strlen自定义函数
// #include <stdio.h>
// #include <string.h>
// int my_strlen(char* str)
// {
//     int count = 0;
//     while (str[count] != '\0')
//     {
//         count ++;
//     }
    
//     return count;
// }
// int main()
// {
//     char name[] ="星必尘Sguan";
//     int a = strlen(name);
//     int b = my_strlen(name);
//     printf("%s\n",name);
//     printf("字符大小是%dand%d",a,b);
//     return 0;
// }



// //测试一个非常特别的操作符sizeof
// #include <stdio.h>
// int main()
// {
//     char arr[]="小小比特，怀揣着大大的梦想！";
//     int a =sizeof(arr)/sizeof(arr[0]);
//     printf("the size is %d\n",a);
//     return 0;
// }




// //用c语言实现输入一个数，然后立马输出这个数字的正整数的正分解；
// #include <stdio.h>
// void my_fenjie(int a)
// {
//     printf("%d = 2",a);
//     int count = 2;
//     while(a != 1)
//     {
//         while (a % count ==0)
//         {
//             printf("*%d",count);
//             a = a /count;
//         }
//         count ++;
//     }
// }
// int main()
// {
//     int a,b;
//     printf("请输入一个数，然后让我立马输出这个数的正分解：\n");
//     scanf("%d",&a);
//     printf("这个数分解之后就是：\n");
//     my_fenjie(a);
//     return 0;
// }




// //二维数组的练习
// #include <stdio.h>
// int main()
// {
//     int x,y;
//     printf("请输入你想要打印棋盘的行和列\n");
//     scanf("%d",&y);
//     scanf("%d",&x);
//     char arr1[x][y];
//     printf("\n");
//     for (int i = 0; i <= x-1; i++)
//     {
//         for (int j = 0; j <= y-1;j++)
//         {
//             arr1[i][j] = '*';
//         }
        
//     }
//     for (int k = 0; k <= x-1; k++)
//     {
//         for (int l = 0; l <= y-1;l++)
//         {
//             printf("%c",arr1[k][l]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// //one of very specilical thing
// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     int b,c;
//     c = ++a;
//     b = ++c,c++,++a,a++;
//     b += a++ + c;
//     printf("%dand%dand%d",a,b,c);
//     return 0;
// }



// #include <stdio.h>
// // 声明 game.c 中的 count 变量（extern）
// extern int count;

// void countIterations(int iterations); // 声明在 game.c 中的函数

// int main() {
//     int iterations = 5;

//     countIterations(iterations); // 调用在 game.c 中定义的函数

//     printf("循环进行了 %d 次。\n", count); // 使用 game.c 中的 count

//     return 0;
// }




// //restart在一个有序数组中查找具体的某个数字
// #include <stdio.h>
// #include <string.h>
// void binsearch(char *dert,char srt)
// {
//     int x = strlen(dert);
//     for (int i = 0; i < x; i++)
//     {
//         if (srt == dert[i])
//         {
//             printf("找到了！下标为%d！",x);
//             break;
//         }
//         if (i == x-1)
//         {
//             printf("Sorry!找不到！");
//         }
//     }
// }
// int main()
// {
//     char arr1[]="xingbichensguan";
//     char bin;
//     printf("请输入你想要查找的字母：\n");
//     scanf("%c",&bin);
//     binsearch(arr1,bin);
//     return 0;
// }



// //输入一个数，判断是不是奇数，然后输出
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     if (a % 2 ==1)
//     {
//         printf("哇哇哇是奇数！");
//     }
//     else
//     {
//         printf("偶数沃！");
//     }
//     return 0;
// }




// //寻找累加溢出前的最大项数
// #include <stdio.h>
// int binfind(int x)
// {   
//     int count = 0;
//     int m = 0;
//     while (m < x)
//     {
//         count ++;
//         m = m + count*10 + 2;
//     }
//     return count;
// }
// int main()
// {
//     int a;
//     printf("请输入你想查找的数字：");
//     scanf("%d",&a);
//     int binword = binfind(a);
//     printf("找到了你的最大项数是：%d",binword-1);
//     return 0;
// }




// //编写一个可以计算a到b(include a and b)中所以偶数的和；
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("请输入你想计算数的区间(a and b):\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int sum = 0;
//     for (int i = a; i <= b; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("您找的区间sum为：%d",sum);
//     return 0;
// }




// //编写一个能使用麦克劳林级数求正弦函数值的小程序；
// #include <stdio.h>
// #include <math.h>
// float sinfind(float x) 
// {
//     float y = 0.0;
//     float term;  // 当前项
//     int sign = 1; // 符号

//     for (int i = 1; i < 100; i += 2) {
//         term = sign * pow(x, i) / tgamma(i + 1); // 计算当前项
//         y += term;  // 累加
//         sign = -sign; // 切换符号
//     }
//     return y;
// }
// int main() 
// {
//     float a;
//     printf("请输入你想要求的sin(x)的x值：\n");
//     scanf("%f", &a); // 注意这里需要取地址
//     float sinbin = sinfind(a);
//     printf("你想求得的sin(x)值的大小是：%.3f\n", sinbin);
//     return 0;
// }



// //用const修饰的my_strlen
// #include <stdio.h>
// #include <assert.h>
// int my_strlen(const char *str)
// {
//     assert(str != NULL);
//     //assert(str);
//     int count = 0;
//     while (*str != '\0')
//     {
//         str++;
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[100];
//     printf("请输入你想查找字符串长度的char：\n");
//     scanf("%s",arr);
//     int len = my_strlen(arr);
//     printf("你求的%s的长度为：%d",arr,len);
//     return 0;
// }




// //用c语言实现输入一段句子，自动输出为格式正确的标题类型大小写形式；
// //然后还能输出这个句子占用多少个bit，then断句；
// //先是GPT代码示例
// #include <stdio.h>
// #include <string.h>
// void replaceSubstring(char *source, const char *old, const char *new) {
//     char buffer[1024];
//     char *pos;
//     int index = 0;
//     int oldLen = strlen(old);

//     while ((pos = strstr(source, old)) != NULL) {
//         strncpy(buffer + index, source, pos - source);
//         index += pos - source;
//         strcpy(buffer + index, new);
//         index += strlen(new);
//         source = pos + oldLen;
//     }
//     strcpy(buffer + index, source);
//     strcpy(source, buffer);
// }

// int main() {
//     char source_string[1024] = "All day is no day when it is past.";
//     const char *search = "day";
//     const char *replace = "time";
//     // Step 1: Find the substring
//     char *found = strstr(source_string, search);
//     if (found) {
//         printf("%ld\n", found - source_string);
//     } else {
//         printf("None\n");
//     }
//     // Step 2: Replace the substring
//     replaceSubstring(source_string, search, replace);
//     printf("%s\n", source_string);

//     // Step 3: Split the string and print the parts
//     char *token = strtok(source_string, " ");
//     while (token) {
//         printf("'%s'\n", token);
//         token = strtok(NULL, " ");
//     }
//     return 0;
// }





// //写一个程序判断数n是不是2的n次方(有bug，但我目前不想改了)
// #include <stdio.h>
// int math_look(int a)
// {
//     int size_count = 20;
//     int count = 0;
//     for (int i = 1; i < size_count; i++)
//     {
//         if (a & 1 == 1)
//         {
//             break;
//         }
//         else
//         {
//             a = a >> 1;
//         }
//         count++;
//     }
//     return count;   
// }
// //2的n次方：2 -> 10; 4 -> 100; 8 -> 1000...and so on
// //2&1 = 00;1&1 = 01;
// int main()
// {
//     int n;
//     printf("Please mark a word of math to let me hava a look:\n");
//     scanf("%d",&n);
//     int my_count = math_look(n);
//     if (my_count == 19)
//     {
//         printf("Sorry!这不是一个2的n次方的数！");
//     }
//     else
//     {
//         printf("恭喜您找到了！It Is！然后它是2的%d",my_count);
//     }
//     return 0;
// }




// //another one for us to hava a look;找一个数是不是2的n次方；
// #include <stdio.h>
// int is_power_of_two(int a) {
//     return (a > 0) && ((a & (a - 1)) == 0);
// }

// int main() {
//     int n;
//     printf("Please enter a number to check if it's a power of 2:\n");
//     scanf("%d", &n);
    
//     if (is_power_of_two(n)) {
//         printf("恭喜您找到了！It Is！这是2的%d次方。\n", __builtin_ctz(n));
//     } else {
//         printf("Sorry!这不是一个2的n次方的数！\n");
//     }
    
//     return 0;
// }




// //输入俩整数，然后要求输出他们俩2进制位不同有多少个；
// #include <stdio.h>
// int main()
// {
//     int m,n;
//     printf("请输入您想查的俩数：\n");
//     scanf("%d",&m);
//     scanf("%d",&n);
//     int count = 0;
//     for (int i = 0; i < 32; i++)
//     {
//         if ((m >> i)& 1 != (n >> i)& 1)
//         {
//             count++;
//         }
//     }
//     printf("So一共有%d个二进制位不同！yeah！",count + 1);
//     return 0;
// }




// //another to make it work;输出他们俩2进制位不同；
// #include <stdio.h>
// int main()
// {
//     int m,n;
//     scanf("%d %d",&m,&n);
//     int l = m ^ n;
//     int count = 0;
//     for (int i = 0; i < 32; i++)
//     {
//         if ((l >> i)& 1)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }




// //创建函数，实现输出一个10进制数，然后输出它2进制的奇数位；
// #include <stdio.h>
// int main()
// {
//     int math;
//     printf("请写一个10进制的数，让我输出着玩：\n");
//     scanf("%d",&math);
//     for (int i = 30; i >= 0; i -= 2)
//     {
//         printf("%d",(math >> i)& 1);
//     }
    
//     return 0;
// }




// //int不管什么平台都是占内存4个bit，但是指针32位平台4 or 64位8；
// #include <stdio.h>
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     short *p = (short*)arr;
//     for (int i = 0; i < 4; i++)
//     {
//         *(p + 1) = 0;
//     }
//     for (int k = 0; k < 5; k++)
//     {
//         printf("%d",arr[k]);
//     }
//     return 0;
// }





// //编写一个程序，将输入的字符串进行压缩;
// #include <stdio.h>
// #include <assert.h>
// char my_strzip(const char *str)
// {
//     assert(str != NULL);
//     int ours_count = 0;
//     int my_count = 0;
//     int your_count = 0;
//     int his_count = 0;
//     int hers_count = 0;
//     for (int i = 0; i < 20; i++)
//     {
//         if (str[i] == str[0])
//         {
//             my_count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = my_count; i < 20; i++)
//     {
//         if (str[i] == str[my_count])
//         {
//             your_count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = my_count + your_count; i < 20; i++)
//     {
//         if (str[i] == str[my_count + your_count])
//         {
//             his_count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = my_count + your_count + his_count; i < 20; i++)
//     {
//         if (str[i] == str[my_count + your_count + his_count])
//         {
//             hers_count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = my_count + your_count + his_count + hers_count; i < 20; i++)
//     {
//         if (str[i] == str[my_count + your_count + his_count + hers_count])
//         {
//             ours_count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     char dert[] = {str[0],my_count,str[my_count],your_count,str[your_count],his_count,str[his_count],hers_count,str[hers_count],ours_count};
    
//     return dert;
// }

// int main()
// {
//     char arr[100];
//     printf("请输入你要压缩的字符串：\n");
//     scanf("%s",arr);
//     printf("很好！咱们压缩过的字符串现在变成咯：%s",my_strzip(arr));
//     return 0;
// }
// //待改的一个程序，需要用到while循环




// //浮点数float and double的存储区别；
// #include <stdio.h>
// int main() {
//     float a = 5.5f;     // 使用 float，明确
//     double b = 5.5;     // 使用 double，默认
//     float c = 5.5;      // 可能会发出警告，虽然大多数编译器会自动转换

//     printf("a: %f\n", a); // 输出 float
//     printf("b: %lf\n", b); // 输出 double
//     return 0;
// }



// //float and double嗨嗨嗨！
// #include <stdio.h>
// int main()
// {
//     int n = 9;
//     float *pFloat = (float *)&n;
//     printf("n的值为：%d\n",n);
//     printf("*pFloat的值为：%f\n",*pFloat);

//     *pFloat = 9.0;
//     printf("num的值为：%d\n",n);
//     printf("*pFloat的值为：%f\n",*pFloat);
//     return 0;
// }



// //signed int 和 unsigned  int
// #include <stdio.h>
// int i;
// int main()
// {
//     i--;
//     if (i < sizeof(i)) //sizeof 2进制默认unsigned int；
//     {
//         printf("小于！");  //signed int i ==11111111 11111111 11111111 11111111;
//     }        //unsigned int a = sizeof(i)    00000000 00000000 00000000 00000100
//     else
//     {
//         printf("嗨嗨嗨！被骗了吧！其实是大于哒...\n这里signed int和unsigned int比较，默认转成unsigned");
//     }
//     return 0;
// }





// //编写一个程序，将输入的字符串进行压缩;
// //实现输入"aaabccddddddeeeef", 输出"a3b1c2d6e4f1";
// #include <stdio.h>
// char translate(const char *str)
// {
//     char dert[100];
//     int count = 1;
//     int cunt = 0;
//     for (int i = 0; i < sizeof(str)/sizeof(str[0]); i += count)
//     {   
//         int my_count = 0;
//         for (int j = i; j < sizeof(str)/sizeof(str[0]); j++)
//         {
//             if (str[j] == str[i])
//             {
//                 my_count++;
//                 count = my_count;
//                 cunt++;
//             }
//             else
//             {
//                dert[i - cunt] = str[i];
                
//             }
//         }
        
//     }
    
//     return dert;
// }

// int main()
// { 
//     char arr[100];
//     printf("Please restart your math word:\n");
//     scanf("%s",arr);
//     char brr = translate(arr);
//     printf("您要输出的char类型是：%s",brr);
//     return 0;
// }
// //失败的作品！man！




// #include <stdio.h>
// #include <string.h>

// void compressString(const char *input, char *output) {
//     int count = 1;  // 计数器，初始化为1
//     int j = 0;      // 输出字符串的索引

//     for (int i = 0; i < strlen(input); i++) {
//         // 检查当前字符与下一个字符是否相同
//         if (input[i] == input[i + 1]) {
//             count++;
//         } else {
//             // 如果不同，将字符和计数写入输出字符串
//             output[j++] = input[i];
//             j += sprintf(output + j, "%d", count);  // 添加计数
//             count = 1;  // 重置计数器
//         }
//     }
//     output[j] = '\0';  // 以空字符结束输出字符串
// }

// int main() {
//     char input[100];
//     char output[200];  // 假设输出字符串不会超过200字符

//     printf("请输入字符串: ");
//     scanf("%s", input);  // 获取输入字符串

//     compressString(input, output);  // 压缩字符串

//     printf("压缩后的字符串: %s\n", output);  // 输出结果

//     return 0;
// }





// //4人嫌疑犯，指定凶手，3人说真话，1人假话，设计并判断；
// //A：not me！ B：C for sure! C：是D! D:C在放屁！
// #include <stdio.h>
// int main()
// {
//     for (int murderer = 'A'; murderer <= 'D' ; murderer++)
//     {
//         if (('A' != murderer)+('C' == murderer)+('D' == murderer)+('D' != murderer) == 3)
//         {
//             printf("那么，凶手其实是%c!嗨嗨嗨！",murderer);
//         }
//     }
//     return 0;
// }





// //有一种香，材质不均匀，燃烧时有的地方染得快一点，but总燃时间都是1h；
// //设计程序：现有俩这样的香，请确认对应15分钟段的香的位置和长度；
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define TOTAL_TIME 60 // 总时间为60分钟
// #define SEGMENT_TIME 15 // 每段为15分钟
// #define NUM_SEGMENTS (TOTAL_TIME / SEGMENT_TIME) // 段数

// typedef struct {
//     float length[NUM_SEGMENTS]; // 每段的长度
//     float position[NUM_SEGMENTS]; // 每段的位置
// } Incense;

// void simulateIncense(Incense *incense) {
//     for (int i = 0; i < NUM_SEGMENTS; i++) {
//         // 假设每段的长度随机在0到1之间
//         incense->length[i] = ((float)rand() / RAND_MAX);
//         incense->position[i] = (float)(i + 1) * SEGMENT_TIME; // 每段结束的位置
//     }
// }

// void printIncenseDetails(const Incense *incense, const char *name) {
//     printf("%s的15分钟段信息:\n", name);
//     for (int i = 0; i < NUM_SEGMENTS; i++) {
//         printf("第%d段: 长度=%.2f, 位置=%.2f分钟\n", i + 1, incense->length[i], incense->position[i]);
//     }
// }

// int main() {
//     srand(time(NULL)); // 初始化随机数种子

//     Incense incense1, incense2;
    
//     // 模拟两根香
//     simulateIncense(&incense1);
//     simulateIncense(&incense2);

//     // 打印结果
//     printIncenseDetails(&incense1, "香1");
//     printIncenseDetails(&incense2, "香2");

//     return 0;
// }





// //36匹马，6个跑道，不给计数器，最少跑多少次可以确认前3名；然后同样问题，25匹马，5个跑道；
// #include <stdio.h>

// int main() {
//     int rounds36 = 6 + 3 + 1; // 对于36匹马
//     printf("确定36匹马前3名需要最少比赛次数: %d\n", rounds36);
    
//     // 对于25匹马
//     int rounds25 = 5 + 3 + 1; // 对于25匹马
//     printf("确定25匹马前3名需要最少比赛次数: %d\n", rounds25);
    
//     return 0;
// }





// //函数解引用操作，用指针；
// #include <stdio.h>
// int test(int x,int y)
// {
//     int sum = x + y;
//     return sum;
// }
// int main()
// {
//     int (*pSum)(int,int) =&test;
//     printf("请输入俩数，然后让我求和：\n");
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int ret = (*pSum)(a,b);
//     int rat = pSum(a,b);
//     printf("你的输出结果分别是：%dand%d.",ret,rat);
//     return 0;
// }





// // 设计一个面板可以进行4则运算；
// #include <stdio.h>
// void menu()
// {
//     printf("##############################\n");
//     printf("########  1.Add  2.Sub #######\n");
//     printf("########  3.Mul  4.Div #######\n");
//     printf("########  0.Exit       #######\n");
//     printf("##############################\n");
// }

// int Add(int x,int y)
// {
//     int sum1 = x + y;
//     return sum1;
// }
// int Sub(int x,int y)
// {
//     int sum2 = x - y;
//     return sum2;
// }
// int Mul(int x,int y)
// {
//     int sum3 = x * y;
//     return sum3;
// }
// int Div(int x,int y)
// {
//     int sum4 = x / y;
//     return sum4;
// }

// int main()
// {
//     int a,b,c,ret;
//     printf("请输入俩参数，让me进行运算：\n");
//     scanf("%d",&b);
//     scanf("%d",&c);
//     menu();
//     do
//     {   
//         scanf("%d",&a);
//         switch (a)
//         {
//         case 1:
//             ret = Add(b,c);
//             break;
//         case 2:
//             ret = Sub(b,c);
//             break;
//         case 3:
//             ret = Mul(b,c);
//             break;
//         case 4:
//             ret = Div(b,c);
//             break;
//         case 0:
//             printf("已退出程序！Say good baye！");
//             break;
//         default:
//             printf("输入错误，请重新输入！");
//             break;
//         }
//     } while (a != 0 && a != 1 && a != 2 && a != 3 && a != 4);
//     printf("这个数是：%d",ret);
//     return 0;
// }





// //使用函数指针数组，重写上面4则运算的代码；
// //回调函数；
// #include <stdio.h>
// void menu_init() {
//     printf("##############################\n");
//     printf("########  1.Add  2.Sub #######\n");
//     printf("########  3.Mul  4.Div #######\n");
//     printf("########  0.Exit       #######\n");
//     printf("##############################\n");
// }
// int Add(int x, int y) {
//     return x + y;
// }
// int Sub(int x, int y) {
//     return x - y;
// }
// int Mul(int x, int y) {
//     return x * y;
// }
// int Div(int x, int y) {
//     if (y == 0) {
//         printf("错误: 除数不能为零。\n");
//         return 0; // 返回 0 或其他值以表示错误
//     }
//     return x / y;
// }

// int main() {
//     int input, input1, input2;
//     int (*pPrint[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//     do {
//         menu_init();
//         printf("请选择你的功能模块：\n");
//         scanf("%d", &input);
//         if (input == 0) {
//             printf("程序已经开始退出了！感谢使用！\n");
//             break; // 直接退出循环
//         }
//         if (input < 1 || input > 4) {
//             printf("输入错误...请重新输入->");
//             continue; // 继续循环
//         }
//         printf("请输入你想运算的俩操作数：\n");
//         scanf("%d %d", &input1, &input2);
//         int ret = pPrint[input](input1, input2);
//         if (input == 4 && input2 == 0) {
//             // 特殊处理，已经在 Div 函数中处理了除数为零的情况
//             continue;
//         }
//         printf("\n你的运算结果是：%d\n", ret);
//     } while (1); // 无限循环，直到手动退出
//     return 0;
// }




// //输出1到10w之间的水仙花数,用C语言实现；
// //log10(num) + 1：数字位数。
// //pow(digit, n)： n 次方。
// //sum：存储每各位 n 次方和。
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num, digits, sum, temp;
//     printf("水仙花数（阿姆斯特朗数）在 1 到 100000 之间：\n");
//     for (num = 1; num <= 100000; num++) {
//         // 计算数字的位数
//         temp = num;
//         digits = 0;
//         while (temp != 0) {
//             temp /= 10;
//             digits++;
//         }
//         // 计算各位数字的 digits 次方之和
//         temp = num;
//         sum = 0;
//         while (temp != 0) {
//             sum += pow(temp % 10, digits);
//             temp /= 10;
//         }
//         // 检查是否为水仙花数
//         if (sum == num) {
//             printf("%d\n", num);
//         }
//     }
//     return 0;
// }




// //输入a and b,输出a到b(包含a,b)的奇数列到前端，偶数到后端；
// #include <stdio.h>
// int main() {
//     int a, b;
//     // 输入区间
//     printf("请输入你要运算的算术区间 (a 和 b)：\n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     // 计算区间的大小
//     int sz = b - a + 1; // 包含a和b
//     int arr[sz]; // 用于存储结果
//     int oddIndex = 0; // 奇数的索引
//     int evenIndex = sz - (b - a + 1); // 偶数的索引起始位置
//     // 遍历区间
//     for (int i = a; i <= b; i++) {
//         if (i % 2 != 0) { // 奇数
//             arr[oddIndex] = i;
//             oddIndex++;
//         } else { // 偶数
//             arr[evenIndex] = i;
//             evenIndex++;
//         }
//     }
//     // 打印结果
//     printf("奇数在前，偶数在后：\n");
//     for (int i = 0; i < sz; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }





// //杨辉三角实列;
// #include <stdio.h>
// int main() {
//     int n;
//     // 输入行数
//     printf("请输入杨辉三角的列数 n: ");
//     scanf("%d", &n);
//     // 定义二维数组，最多 n 行 n 列
//     int triangle[n][n];
//     // 填充杨辉三角
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i) {
//                 triangle[i][j] = 1; // 每行的第一个和最后一个元素为 1
//             } else {
//                 triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // 中间的元素
//             }
//         }
//     }
//     // 打印杨辉三角
//     printf("杨辉三角（列数 %d）：\n", n);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", triangle[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }






// //写一个函数，实现数组逆序；
// #include <stdio.h>

// void reverseArray(int arr[], int sz) {
//     int brr[100]; // 用于存储反转数组

//     for (int i = 0; i < sz; i++) {
//         brr[sz - i - 1] = arr[i];
//     }

//     // 打印反转后的数组
//     for (int i = 0; i < sz; i++) {
//         printf("%d ", brr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 定义整数数组
//     int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组大小

//     reverseArray(arr, sz); // 调用反转函数

//     return 0;
// }






// //写一个函数，实现冒泡排序，让不规则的数组，按顺序or逆序排；
// //{782693} -> {236789}
// #include <stdio.h>

// void bubbleSort(int arr[], int sz, int ascending) {
//     for (int k = 0; k < sz - 1; k++) {
//         for (int i = 0; i < sz - 1 - k; i++) {
//             // 根据升序或降序进行比较
//             if ((ascending && arr[i] > arr[i + 1]) || (!ascending && arr[i] < arr[i + 1])) {
//                 // 交换
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 6, 7, 9, 5, 4, 3, 2, 8, 0}; // 定义数组
//     int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组大小
//     int ascending = 1; // 1 为升序，0 为降序

//     bubbleSort(arr, sz, ascending); // 调用冒泡排序函数

//     // 打印排序后的数组
//     for (int i = 0; i < sz; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }





// //sizeof的再次说明；
// #include <stdio.h>
// int main()
// {
//     short a = 5;
//     int s = 4;
//     printf("%d\n",sizeof(s = a + 5));
//     printf("%d",s);
//     return 0;
// }




// //*p指针的另一用法；
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int *pa = (int*)(&arr + 1);
//     printf("%d and %d",*(arr + 1),*(pa - 1));
//     return 0;
// }



// //指针的用法之...回调函数；
// #include <stdio.h>
// void game(int x,int y,int z)
// {
//     printf("game is coming!%dand%dand%d",x,y,z);
// }
// void tset(int x,int y,int z)
// {
//     printf("test is coming!%dand%dand%d",x,y,z);
// }

// int main()
// {
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",c);
//     int(*pGame[3])(int, int) = {NULL,game,tset};
//     char brr[] = (*pGame[c])(a,b);
//     printf("%s",brr);
//     return 0;
// }





// //####################
// //###*pArr###
// //指针的几道题，还是挺难学的呕；
// #include <stdio.h>
// int main()
//  {
//      int a[5] = { 1, 2, 3, 4, 5 };
//      int *ptr = (int *)(&a + 1);
//      printf( "%d,%d", *(a + 1), *(ptr - 1));
//      return 0;
//  }
//  //程序的结果是什么？
// //####################

// //####################
// //由于还没学习结构体，这里告知结构体的大小是20个字节
// #include <stdio.h>
// struct Test
// {
//      int Num;
//      char *pcName;
//      short sDate;
//      char cha[2];
//      short sBa[4];
//  }*p;
//  //假设p 的值为0x100000。 如下表表达式的值分别为多少？
// //已知，结构体Test类型的变量大小是20个字节
// int main()
//  {
//      printf("%p\n", p + 0x1);
//      printf("%p\n", (unsigned long)p + 0x1);
//      printf("%p\n", (unsigned int*)p + 0x1);
//      return 0;
//  }
// //####################

// //####################
// #include <stdio.h>
// int main()
//  {
//      int a[4] = { 1, 2, 3, 4 };
//      int *ptr1 = (int *)(&a + 1);
//      int *ptr2 = (int *)((int)a + 1);
//      printf( "%x,%x", ptr1[-1], *ptr2);
//      return 0;
//  }
// //####################

// //####################
// #include <stdio.h>
//  int main()
//  {
//      int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//      int *p;
//      p = a[0];
//      printf( "%d", p[0]);
//      return 0;
//  }
// //####################

// //####################
// #include <stdio.h>
//  int main()
//  {
//      int a[5][5];
//      int(*p)[4];
//      p = a;
//      printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//      return 0;
//  }
// //####################

// //####################
// #include <stdio.h>
// int main()
//  {
//      int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//      int *ptr1 = (int *)(&aa + 1);
//      int *ptr2 = (int *)(*(aa + 1));
//      printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//      return 0;
//  }
// //####################

// //####################
//  #include <stdio.h>
//  int main()
//  {
//      char *a[] = {"work","at","alibaba"};
//      char**pa = a;
//      pa++;

//      printf("%s\n", *pa);
//      return 0;
//  }
// //####################

//####################
// #include <stdio.h>
// int main()
//  {
//     char *c[] = {"ENTER","NEW","POINT","FIRST"};
//     char**cp[] = {c+3,c+2,c+1,c};
//     char***cpp = cp;

//     printf("%s\n", **++cpp);
//     printf("%s\n", *--*++cpp+3);
//     printf("%s\n", *cpp[-2]+3);
//     printf("%s\n", cpp[-1][-1]+1);
//     return 0;
//  }
//####################





// //练习；
// #include <stdio.h>
// #include <string.h>
// void All_Saints_Day(const char *time, const char *incident) {
//     char notebook[200]; 
//     int sz_time = strlen(time); 
//     int sz_incident = strlen(incident);
//     int sz_sum = sz_time + sz_incident;

//     for (int i = 0; i < sz_sum; i++) {
//         if (i < sz_time) {
//             notebook[i] = time[i];
//         } else {
//             notebook[i] = incident[i - sz_time];
//         }
//     }
//     notebook[sz_sum] = '\0';
//     printf("%s\n", notebook); 
// }

// int main() {
//     const char time_input[] = "11月1号";
//     const char incident_input[] = "万圣节给朋友拍照！嗨嗨嗨！";
//     All_Saints_Day(time_input, incident_input);
//     return 0;
// }





// //万圣节All Saints' Day指针练习；
// #include <stdio.h>
// void All_Saints_Day(const char *time, const char *incident) {
//     char notebook[200]; 
//     char *pNote = notebook;
//     while (*time){
//         *pNote++ = *time++;
//     }
//     while (*incident){
//         *pNote++ = *incident++;
//     }

//     *pNote = '\0';
//     printf("%s\n", notebook); 
// }

// int main(){
//     const char time_input[] = "11月1号万圣节";
//     const char incident_input[] = "给朋友拍照！嗨嗨嗨！";
//     All_Saints_Day(time_input, incident_input);
//     return 0;
// }






// //练习一下，杨氏矩阵查找,使查找的效率高于O[N];
// //杨氏矩阵1  2  3  4  5
// //       6  7  8  9  10
// //       11 12 13 14 15
// //       16 17 18 19 20
// //       21 22 23 24 25
// #include <stdio.h>

// int word_find(const int arr[5][5], int *x, int *y, int z) {
//     int px = 0; // 使用整数，而不是指针
//     int py = *y - 1; // 从最后一列开始

//     while (px < *x && py >= 0) {
//         if (arr[px][py] == z) {
//             // 找到目标元素，返回下标
//             *x = px + 1;
//             *y = py + 1;
//             return 1;
//         } else if (arr[px][py] > z) {
//             py--; // 向左移动
//         } else {
//             px++; // 向下移动
//         }
//     }
//     return 0; // 未找到目标元素
// }

// int main() {
//     int arr[5][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25}
//     };
    
//     printf("请输入一个数让我进行查找：\n");
//     int my_word;
//     scanf("%d", &my_word); // 使用 & 符号取地址
//     int m = 5; // 行数
//     int n = 5; // 列数
//     int ret = word_find(arr, &m, &n, my_word);
    
//     if (ret) {
//         printf("find it! 它的下标是 %d 和 %d\n", m, n);
//     } else {
//         printf("找不到！\n");
//     }

//     return 0;
// }






// //实现一个函数，左旋一个字符串(ABCDEF -> BCDEFA);
// #include <stdio.h>
// #include <string.h>
// void str_tmp(char *str,int n)
// {
//     int sz = strlen(str);
//     n = n % sz;
//     for (int i = 0; i < n/2; i++)
//     {
//         char tmp1 = str[i];
//         str[i] = str[n - i -1];
//         str[n - i -1] = tmp1;
//     }
//     for (int j = n; j < (sz+n)/2 ; j++)
//     {
//         char tmp2 = str[j];
//         str[j] = str[sz - n -1];
//         str[sz - j -1] = tmp2;
//     }
//     for (int k = 0; k < sz/2; k++)
//     {
//         char temp = str[k];
//         str[k] = str[sz - k -1];
//         str[sz - k -1] = temp;
//     }
// }

// int main()
// {
//     char arr[]="ABCDEFGHIJKLMN";
//     int m;
//     printf("请输入一个数，让我指定左旋的位数：\n");
//     scanf("%d",&m);
//     str_tmp(arr,m);
//     printf("左旋%d次的字符串现在变成了%s!",m,arr);
//     return 0;
// }






// //写一个函数，判断一个字符串是不是另一个字符串左旋得来的；
// //例如：左旋2个字符串(ABCDEFJHI -> CDEFJHIAB)；
// #include <stdio.h>
// #include <string.h>

// int str_find(const char *str, const char *dert) {
//     int sz = strlen(str);
//     int dert_sz = strlen(dert);

//     // 长度不相等直接返回0
//     if (sz != dert_sz) {
//         return 0;
//     }

//     // 创建一个新的字符串，将原字符串重复一次
//     char temp[200]; // 假设最大长度不超过100
//     strcpy(temp, str);
//     strcat(temp, str); // 连接两次

//     // 判断目标字符串是否在连接后的字符串中
//     return strstr(temp, dert) != NULL; // 返回1表示是左旋，返回0表示不是
// }

// int main() {
//     char arr[100];
//     char brr[100];
//     printf("请输入两个字符串，然后让我来判断左旋与否：\n");
//     scanf("%s %s", arr, brr);
//     int ret = str_find(arr, brr);
//     if (ret) {
//         printf("是左旋得来的字符串。\n");
//     } else {
//         printf("不是左旋得来的字符串。\n");
//     }
//     return 0;
// }





// //写一个函数，实现模拟qsort的功能，冒泡排序;
// //478963512 -> 987654321;
// #include <stdio.h>
// #include <string.h>
// void resort_str(char str[])
// {
//     int sz = strlen(str);
//     for (int i = 0; i < sz - 1; i++)
//     {
//         for (int j = 0; j < sz - i - 1; j++)
//         {
//             if (str[j] < str[j+1])
//             {
//                 char temp = str[j];
//                 str[j] = str[j+1];
//                 str[j+1] = temp;
//             }   
//         }   
//     }
// }

// int main()
// {
//     printf("please input your arr word:\n");
//     char arr[100];
//     scanf("%s",arr);
//     resort_str(arr);
//     printf("Then your arr finialy returned with:%s",arr);
//     return 0;
// }






//写一个2级指针的运算；
//int a;
//int *pa = &a;
//int (*pa[input])(int,int) = {NULL}





// //写一个函数实现strlen;1.计数器的版本；
// #include <stdio.h>
// int my_strlen(const char *str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         str++;
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     char arr[]= {23,21,35,47,99};
//     int ret = my_strlen(arr);
//     printf("%d",ret);
//     return 0;
// }






// //写一个函数实现strlen;2.递归的版本；
// #include <stdio.h>
// #include <assert.h>
// void my_strlen(const char *str,int *count)
// {
//     assert(str != NULL);
//     if (str[*count] == '\0')
//     {
//         return;
//     }
//     (*count)++;
//     my_strlen(str,count);

// }

// int main()
// {
//     char arr[] = {13,11,34,55,46,44,77};
//     int ret = 0;
//     my_strlen(arr,&ret);
//     printf("%d",ret);
//     return 0;
// }






// //写一个函数实现strlen;3.指针-指针的版本,使用size_t;
// #include <stdio.h>
// int my_strlen(const char *str)
// {
//     const char *dert = str;
//     while (*str != '\0')
//     {
//         str++;
//     }
    
//     return str - dert;
// }

// int main()
// {
//     char arr[]= {23,21,35,47,99,34,22};
//     int ret = my_strlen(arr);
//     printf("%d",ret);
//     return 0;
// }







// //写一个函数实现strcpy;1.指针的版本;
// #include <stdio.h>
// void my_strcpy(const char *str,char *dert)
// {
//     while (*str)
//     {
//         *dert = *str;
//         dert++;
//         str++;
//     }
//     *dert = '\0';
// }

// int main()
// {
//     char arr[]= "Hello,my world!";
//     char brr[200];
//     my_strcpy(arr,brr);
//     printf("%s",brr);
//     return 0;
// }





// //写一个函数实现strcat;1.指针的版本;(strcat -> 字符串追加链接 arr1 = {arr1,arr2})
// #include <stdio.h>
// #include <string.h>
// void my_strcat(char *str,const char *dert)
// {
//     int sz = strlen(str);
//     while (*dert)
//     {
//         str[sz] = *dert;
//         dert++;
//         sz++;
//     }
//     str[sz] = '\0';
// }

// int main()
// {
//     char arr1[] = "Hello ";
//     char arr2[] = "Byte!";
//     my_strcat(arr1,arr2);
//     printf("%s",arr1);
//     return 0;
// }





// //写一个函数实现strcmp;1.指针的版本;(字符串比较函数)
// #include <stdio.h>
// int my_strcmp(const char *str,const char *dert)
// {
//     int sz = sizeof(str)/sizeof(str[0]);
//     while (*str == *dert)
//     {   
//         str++;
//         dert++;
//         if (*str > *dert)
//         {
//             return 1;
//         }
//         if (*str < *dert)
//         {
//             return -1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     char arr[] = "abcdefg";
//     char brr[] = "abced";
//     int ret = my_strcmp(arr,brr);
//     printf("%d",ret);
//     return 0;
// }






// //写一个函数实现strncmp;1.指针的版本;
// #include <stdio.h>
// void my_strncmp(char *str,const char *dert,int size)
// {
//     int sz = sizeof(str)/sizeof(str[0]);
//     for (int i = 0; i < size; i++)
//     {
//         str[sz + i] = *dert;
//         dert++;
//     }
//     str[sz + size] = '\0';
// }

// int main()
// {
//     char arr1[] = "abcdefghijklmn";
//     char arr2[] = "ABCDEFJHIJKLMN";
//     int n = 7;
//     my_strncmp(arr1,arr2,n);
//     printf("%s",arr1);
//     return 0;
// }






// //将一个无序矩阵化为行阶梯型矩阵(高斯消元法)；
// //示例版本；
// #include <stdio.h>
// #include <math.h>
// void printMatrix(float matrix[][100], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%.2f ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }
// void gaussianElimination(float matrix[][100], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         // 找到当前列的主元
//         int maxRow = i;
//         for (int k = i + 1; k < rows; k++) {
//             if (abs(matrix[k][i]) > abs(matrix[maxRow][i])) {
//                 maxRow = k;
//             }
//         }
//         // 交换当前行与主元行
//         for (int k = 0; k < cols; k++) {
//             float temp = matrix[maxRow][k];
//             matrix[maxRow][k] = matrix[i][k];
//             matrix[i][k] = temp;
//         }
//         // 将主元标准化
//         for (int j = i + 1; j < rows; j++) {
//             float factor = matrix[j][i] / matrix[i][i];
//             for (int k = i; k < cols; k++) {
//                 matrix[j][k] -= factor * matrix[i][k];
//             }
//         }
//     }
// }

// int main() {
//     float matrix[100][100];
//     int rows, cols;
//     printf("请输入矩阵的行数和列数：\n");
//     scanf("%d %d", &rows, &cols);

//     printf("请输入矩阵的元素：\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%f", &matrix[i][j]);
//         }
//     }
//     gaussianElimination(matrix, rows, cols);
//     printf("行阶梯型矩阵为：\n");
//     printMatrix(matrix, rows, cols);
//     return 0;
// }





// 将一个无序矩阵化为行阶梯型矩阵(高斯消元法)；
//自己操作的int类型的版本(并返回秩)；





// //写一个函数实现strstr;1.指针的版本(在一个字符串中查找另一个字符串);
// //如果存在，返回第一次出现的地方...然后往后打印！Or没找到，返回NULL；
// #include <stdio.h>

// const char* my_strstr(const char *str, const char *dert) {
//     if (*dert == '\0')  // 空字符串情况，返回原字符串
//         return str;

//     // 遍历主字符串
//     while (*str) {
//         const char *start = str;
//         const char *pattern = dert;

//         // 尝试从当前位置开始匹配
//         while (*str && *pattern && *str == *pattern) {
//             str++;
//             pattern++;
//         }

//         // 如果子字符串完全匹配，返回匹配的起始位置
//         if (*pattern == '\0') {
//             return start;
//         }

//         // 否则继续遍历主字符串
//         str = start + 1;
//     }

//     // 如果没有找到匹配的子字符串，返回 NULL
//     return NULL;
// }

// int main() {
//     char arr[] = "落霞与孤鹜齐飞，秋水共长天一色";
//     char brr[] = "孤鹜";

//     const char *result = my_strstr(arr, brr);
//     if (result) {
//         printf("Found substring: %s\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }






// //写一个函数实现strstr;2.KMP算法的版本；
// //KMP 算法：
// // 更高效，通过构建前缀表避免了回溯，提高了匹配效率。
// // 时间复杂度为 O(n + m)，其中 n 是主字符串的长度，m 是子字符串的长度。
// #include <stdio.h>
// #include <string.h>

// // 构建部分匹配表（前缀函数）
// void build_prefix_table(const char *needle, int *prefix_table) {
//     int m = strlen(needle);
//     prefix_table[0] = 0;  // 第一位永远是 0
//     int k = 0;  // 记录匹配的前缀长度

//     for (int i = 1; i < m; i++) {
//         while (k > 0 && needle[k] != needle[i]) {
//             k = prefix_table[k - 1];  // 回溯
//         }
//         if (needle[k] == needle[i]) {
//             k++;
//         }
//         prefix_table[i] = k;  // 更新前缀表
//     }
// }

// // KMP 字符串匹配算法实现
// const char* kmp_strstr(const char *haystack, const char *needle) {
//     int n = strlen(haystack);
//     int m = strlen(needle);

//     if (m == 0) return haystack;  // 空字符串处理

//     // 构建部分匹配表
//     int prefix_table[m];
//     build_prefix_table(needle, prefix_table);

//     int j = 0;  // needle 中的指针
//     for (int i = 0; i < n; i++) {  // 遍历 haystack
//         while (j > 0 && needle[j] != haystack[i]) {
//             j = prefix_table[j - 1];  // 如果不匹配，回溯
//         }
//         if (needle[j] == haystack[i]) {
//             j++;  // 匹配成功，继续前进
//         }
//         if (j == m) {  // 完全匹配
//             return haystack + i - m + 1;  // 返回匹配位置
//         }
//     }

//     return NULL;  // 如果没有找到匹配
// }

// int main() {
//     const char *str = "Hello, this is an example!";
//     const char *substr = "this";

//     const char *result = kmp_strstr(str, substr);
//     if (result) {
//         printf("Found substring: %s\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }






// // 写一个函数实现strtok;1.指针的版本(用于切割字符串);
// //char *strtok( char *strToken, const char *strDelimit );
// #include <stdio.h>
// #include <assert.h>
// #include <string.h>
// // 自定义 strtok 函数
// char* my_strtok(char *str, const char *delimiters) {
//     static char *last = NULL;  // static 变量，保存上次调用的位置
//     if (str != NULL) {
//         last = str;  // 如果传入新的字符串，更新 last
//     }
//     if (last == NULL) {
//         return NULL;  // 如果没有可处理的字符串，返回 NULL
//     }

//     // 跳过前导分隔符
//     while (*last && strchr(delimiters, *last) != NULL) {
//         last++;  // 跳过分隔符
//     }

//     if (*last == '\0') {
//         return NULL;  // 如果到达字符串末尾，返回 NULL
//     }

//     // 保存当前开始位置
//     char *start = last;

//     // 找到下一个分隔符
//     while (*last && strchr(delimiters, *last) == NULL) {
//         last++;  // 找到下一个非分隔符字符
//     }

//     if (*last != '\0') {
//         *last = '\0';  // 将当前分隔符置为 '\0'，以结束当前分割
//         last++;  // 向后移动，准备下次分割
//     }

//     return start;  // 返回当前分割出的子字符串
// }

// int main() {
//     char arr[] = "落霞与孤鹜齐飞，秋水共长天一色";
//     char delimiters[] = "与";  // 定义分隔符
//     char *token = my_strtok(arr, delimiters);

//     // 分割并打印每一部分
//     while (token != NULL) {
//         printf("Token: %s\n", token);
//         token = my_strtok(NULL, delimiters);
//     }

//     return 0;
// }






// //写一个函数学会用strerror(把错误码存在errno中);
// //char *strerror( int errnum );
// #include <stdio.h>
// #include <errno.h>
// #include <string.h>  // 包含 strerror

// int main() {
//     FILE *file = fopen("non_existent_file.txt", "r");  // 打开一个不存在的文件
//     if (file == NULL) {
//         // 使用 errno 获取错误码，并用 strerror 获取错误描述
//         printf("Error opening file: %s\n", strerror(errno));
//     } else {
//         fclose(file);
//     }
//     return 0;
// }






// //模拟实现toupper；
// #include <stdio.h>
// #include <string.h>
// void my_toupper(char *str)
// {
//     int sz = strlen(str);
//     for (int i = 0; i < sz; i++)
//     {
//         if ((int)str[i] > 95)
//         {
//             str[i] = str[i] - 32;
//         }
//     }
// }

// int main()
// {
//     char arr[] = "abcDEfgJhiJK";
//     my_toupper(arr);
//     printf("%s",arr);
//     return 0;
// }





// //模拟实现tolower；
// #include <stdio.h>
// #include <string.h>
// void my_toupper(char *str)
// {
//     int sz = strlen(str);
//     for (int i = 0; i < sz; i++)
//     {
//         if ((int)str[i] < 95)
//         {
//             str[i] = str[i] + 32;
//         }
//     }
// }

// int main()
// {
//     char arr[] = "abcDEfgJhiJK";
//     my_toupper(arr);
//     printf("%s",arr);
//     return 0;
// }





// //实现输入英文段落字符串，实现(World is full of love.) -> (World Is Full Of Love.);
// #include <stdio.h>
// #include <string.h>
// void my_strdiv(char *str)
// {
//     int sz = strlen(str);
//     if (str[0] > 95)
//     {
//         str[0] = str[0] - 32;
//     }
//     for (int i = 0; i < sz; i++)
//     {
//         if (str[i] == ' ')
//         {
//             str[i + 1] = str[i + 1] - 32;
//         }
//     }
// }

// int main()
// {
//     char arr[] = "World is full of love.";
//     my_strdiv(arr);
//     printf("%s",arr);
//     return 0;
// }





// //写一个函数实现memcpy；
// #include <stdio.h>

// void *my_memcpy(void *dest, const void *src, size_t n) {
//     unsigned char *d = dest;
//     const unsigned char *s = src;

//     for (size_t i = 0; i < n; i++) {
//         d[i] = s[i];
//     }

//     return dest;
// }

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];

//     my_memcpy(destination, source, sizeof(source));  // 复制 source 到 destination

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }






// //写一个函数实现memmove;
// #include <stdio.h>
// void *my_memmove(void *dest, const void *src, size_t n) {
//     unsigned char *d = dest;
//     const unsigned char *s = src;

//     // 如果目标和源内存区域没有重叠，可以直接使用 memcpy 的方式
//     if (d < s || d >= s + n) {
//         // 从前向后拷贝数据
//         for (size_t i = 0; i < n; i++) {
//             d[i] = s[i];
//         }
//     } else {
//         // 如果目标和源内存区域重叠，且目标内存区域在源内存区域的右侧，
//         // 从后向前拷贝数据，避免覆盖源数据
//         for (size_t i = n; i > 0; i--) {
//             d[i - 1] = s[i - 1];
//         }
//     }
//     return dest;
// }

// int main() {
//     char buffer[] = "Hello, World!";

//     // 重叠情况下移动内存块
//     my_memmove(buffer + 6, buffer, 6);  // 将"Hello,"复制到"World!"的位置

//     printf("Buffer after memmove: %s\n", buffer);  // 输出: "Hello, Hello!"

//     return 0;
// }






//输入n，输出X图形的函数;



//面试官打分，7个百分制的成绩...写一个函数，去掉一个最高分and最低分，求后面的平均值；




//请帮他编程实现。输入年份和月份，计算这一年这个月有多少天;



//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中;
//保证插入新数后，序列仍然是升序;




//熟悉文件操作的一些基本操作；




// 本关任务：编写一个能统计候选人票数的小程序。
// 任务开始前，通过多人对若干个候选人投票。
// 循环输入候选人的名字，将其存入到列表candidate中，直到输入结束为止
// 计算每个候选人的得票数，按从高到低显示名次、姓名、票数。
#include <stdio.h>
#include <string.h>




// step 1：利用for循环直接遍历f1文件，将币种和汇率保存到bzzd字典中；
// step 2：用户输入待兑换的外币及其金额，保存在字符串hb中；
// step 3：while循环判断hb不为0，若满足进入循环，否则跳出循环；
// step 4：将hb字符串大写，并先判断是否出现“币种错误”或“金额错误”，若“是”，则显示相关信息，并提示用户重新输入。
// step 5：通过币种访问字典获取汇率，乘以金额，完成汇率转换，并输出。




//写一个代码，用结构体实现通讯录(使用动态内存开辟空间then用fwrite到文件);
#include <stdio.h>
#include <string.h>
struct TXL
{
    char name[],
    int phonenumber[],
    char addess,
}x;


int main()
{


    return 0;
}



