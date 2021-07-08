# Dynaplex architecture
1. Trace collection:
a. code instrumentation
b. input generation
2. Complexity analysis:
a. Generate recurrence relations
b. Generate polynomial relation
c. Solve recurrence relation for closed form complexity

# Trace collection
1. We instrument the recursive function to collect the problem size and depth of recursion at each iteration
2. We also instrument the recursive function and helper functions (if available) to collect the size and number of iterations for **one** recursive step. 
3. We store traces in files with following naming convention
a. output-\<size\> for recursion traces for input of size \<size\>
b. traces for the iterations 

# Complexity analysis
To compute the complexity from collected traces we use the following command:
/path/to/analyzer.py -trace /path/to/trace/folder 

# Descriptive example

    def bubble_sort(arr, n, depth, file):
        with open(file, 'a') as f:
            print("{};{}".format(depth, n), file=f)
        if n==1:
            return arr
        for i in range(n-1):
            if arr[i]>arr[i+1]:
                if depth == 0: #we only count iterations for one recursion step.
                    global counter
                    counter = counter + 1
                arr[i], arr[i+1] = arr[i+1], arr[i]
            return bubble_sort(arr, n-1, depth+1, file) 
    
    #Driver to collect all traces
    counter = 0
    def main():
        global counter
        counter = 0
        size = random.randint(1, 500)
        arr = random_list(size)
        depth = 0
        path = "./bubble_sort"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./bubble_sort/output-{}".format(size) #naming convention 
        bubble_sort(arr, size, depth, file)
        with open("./bubble_sort/traces", 'a') as f:
            print("{};{}".format(size, counter), file=f)
        counter = 0
        
    
    if __name__ == '__main__':
        for i in range(100): #run the bubblesort a few times to collect enough traces
           main()

# Analysis results 
**Command**: path/to/analyzer.py -trace path/to/bubblesort
**results**
recurrence: T(n) = T(n-1) + f(n) <br>
polynomial relation: f(n) = n^1 <br>
reccurence relation: T(n) = T(n-1) + n <br>
complexity: O(n)
## Note: 
The code instrumentation does not need to follow the same guidelines shown in the example. For example, check the recursive_programs/cpp folder for more effective code instrumentation. The traces do need to follow the same guidelines. For recursive traces in files named output-\<size\> there should be depth;size to indicate depth of recursion and size of the problem at that depth. For iteration traces in file named traces there should be size;counter to indicate the size of the problem and the number of iteration one recursive step takes. 
