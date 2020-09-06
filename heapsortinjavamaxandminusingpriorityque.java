
//******************************************************************Max heap*********************************************************
PriorityQueue<Integer> pQueue =  
             new PriorityQueue<Integer>(Collections.reverseOrder()); 
  
        // Adding items to the pQueue using add() 
        pQueue.add(10); 
        pQueue.add(30); 
        pQueue.add(20); 
        pQueue.add(400); 
  
        // Printing the most priority element 
        System.out.println("Head value using peek function:" + 
                                              pQueue.peek()); 
  
        // Printing all elements 
        System.out.println("The queue elements:"); 
        Iterator itr = pQueue.iterator(); 
        while (itr.hasNext()) 
            System.out.println(itr.next()); 
  
        // Removing the top priority element (or head) and 
        // printing the modified pQueue using poll() 
        pQueue.poll(); 
        System.out.println("After removing an element "
                           + "with poll function:"); 
//output is:-
//400                                                                                                                           
//30                                                                                                                            
//20                                                                                                                            
//10                                                                                                                                            
//****************************************************************Minheap******************************************************************
 PriorityQueue<Integer> pQueue = new PriorityQueue<Integer>();
        pQueue.add(10); 
        pQueue.add(30); 
        pQueue.add(20); 
        pQueue.add(400); 
        Iterator itr = pQueue.iterator(); 
        while (itr.hasNext()) 
            System.out.println(itr.next()); 
        pQueue.poll(); 
        System.out.println("After removing an element "
                           + "with poll function:"); 
        Iterator<Integer> itr2 = pQueue.iterator(); 
        while (itr2.hasNext()) 
            System.out.println(itr2.next()); 
//output is:-
//10                                                                                                                            
//30                                                                                                                            
//20                                                                                                                            
//400                                                                                                                           