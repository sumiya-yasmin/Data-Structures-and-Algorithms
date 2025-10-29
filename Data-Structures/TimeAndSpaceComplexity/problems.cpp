//Find out time complexity of the following problems: 

//problem1

// int i=0,sum = 0;
//     while(i<n)
//     {
//         int j=0;
//         while(j<n)
//         {
//             sum += j;
//             j+=2;
//         }
//         i++;
//     }

// Answer1: O(n*n)

//problem2:

// for(int i=0;i<n;i+=10)
//     {
//         for(int j=n;j>=0;j--)
//         {
//             cout << "Hello" << endl;
//         }
//     }


//     for(int i=0;i<n;i++)
//     {
//         cout << "Hi" << endl;
//     }

// Answer2: O(n*n)

//problem3

// for(int i=0;i<n;i++)
//     {
//         int j=0;
//         while(j*j<n)
//         {
//             i+j;
//             j++;
//         }
//     }

//Answer3: (n*sqrt(n))


//problem4

//   for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>=0;j--)
//         {
//             for(int k=1;k<=n;k++)    ///O(n*n*n)
//             {
//                 sum += i+j+k;
//             }
//         }
//     }


//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=n;j++)    //O(n*n)
//         {
//             sum += i+j;
//         }
//     }

//Answer4: O(n*n*n)

//problem5

// for(int i=0;i*i<n;i++)
// {
//     sum += i;      //O(sqrt(n))
// }


// for(int i=0;i<n;i++)
// {
//     sum += i;      //O(logn)
//     i*=k;
// }


//Answer5: O(logn)


//problem6

// for(int i=0;i<n;i++)
// {
//     cin >> a[i];  //O(n)
// }
// sort(a,a+n);  //O(nlogn)

//answer6: O(nlogn)


//problem7

//  for(int i=0;i<n;i++)
//     {
//         sort(a,a+n);
//     }

//Answer7: O(n*nlogn)