//time complexity 
//--> Time taken by a algorith to finish

//---> cmpare btween two programs which is slow and which is not 
//---> in this we dont measure ti,e using clock as we dont know which program is rum on which machine and smae like errors

//like units time complexity also has units 
//   --> Big O(oooo) notation    
//   --> Theta notation 
//   --> Omega Notation

//in thus course we will work on Big O 

//BIG O -->
  //upper bound (worst case complexity )
  //means work will be done ayt most this time 
   
   //Types of complexities

  //--> constant time    ==  O(1)  program runs for fixed time and ends like for loop  i=0 to i=10
  //--> linear time       == O(n)  program runs for infinite(input from user ) time for loop i=0 to i=n(input from user)
  //--> Quadratic time     ==O(n Square)  program runs for infinite(input from user ) time eg two nested for loops 
  //--> Cubic timme        == O(n cube)   program runs for infinite(input from user ) time eg three nested for loops 
  

  //how we calculate time complexity 

  // if there are two loops in side by side not nested thes we simply add there time complexities O(n+m)


 //we are assuming in O(n) T.C  that inside of foor loop time T.C is n(1) means it ends if inside for loop we are calling a function and function contain for loop having T.C O(n) then whole time.C becomes O(n square )


//SPACE COMPLEXITY 

// it is the complexity of memory