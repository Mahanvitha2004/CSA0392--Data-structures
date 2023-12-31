// C# code to find max element in a matrix
using System;

class GFG {
	
	static int N = 4;
	static int M = 4 ;

	// Function to find max element
	// mat[,] : 2D array to find max element
	static int findMax(int[,] mat)
	{

		// Initializing max element as INT_MIN
		int maxElement = int.MinValue;

		// checking each element of matrix
		// if it is greater than maxElement,
		// update maxElement
		for (int i = 0; i < N; i++) {
			
			for (int j = 0; j < M; j++) {
				
				if (mat[i,j] > maxElement) {
					
					maxElement = mat[i,j];
				}
			}
		}

		// finally return maxElement
		return maxElement;
	}

	
	// Driver code
	public static void Main()
	{
		
		// matrix
		int[,]mat = {{ 1, 2, 3, 4},
					{25, 6, 7, 8},
					{9, 10, 11, 12},
					{13, 14, 15, 16}};

		Console.Write(findMax(mat)) ;
	}
	
}

// This code is contributed by ChitraNayal

