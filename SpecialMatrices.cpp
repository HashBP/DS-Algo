// Special Matrices(For Squre Matrices)
/*
1.Diagonal Matrix - All the elements except elements in diagonal are 0.
 or M[i,j]=0 , i!=j.
 * To reduce the time complexity we use single dimension array rather then two-dimention to store data.

2. Lower Traingular Matrices - Atll the elements of lower traingle are non-zero.
 or M[i,j]=0, i<j && M[i,j]!=0, i>=j.
 * Number od non-zero elements = n(n+1)/2
 * Number of zero elements = n(n-1)/2
 * Convertion of two dimentional matrix to a single dimention array to save space and time compleity,We have to ways to do so,(A)Row Major and (B)Column Major.
   Then come up with a formula to acces the index of the required number from matrix found tin the array.

3. Symmitric Matrix - When the matrix is symmitric about its principle diagonal.
 or M[i,j]=M[j,i].
 It can me represented as Lower Traingual and Upper Traingular matrices.
 Also can be used as a single dimentional array to save time and space.

4. Tri-Diagonal Matrices - The elements in principle diagonal,Just upper and lower to principle diagonal should me non-zero and rest 
  should be zero.
  or the elements in i-j=0,i-j=1,i-j=-1 should be non zero.
  M(|i-j|=<1)!=0 
  We can convert this 2D matrix to an array and we have to use three diffrent cases as of (i-j=0,i-j=1,i-j=-1) in the array to get them one by one.
 ** Further if number of band is more then three ther are called Squre band matrix.

5. Toeplitz Matrix - All the elements in any diagonal are same.
  or M[i,j]=M[i-1,j-1].
   We can convert this 2D matrix to an array . We will distribute the matrix in two parts upper and lower traingle matrices.
 */