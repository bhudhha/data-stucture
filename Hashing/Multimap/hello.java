public class hello {
    public static boolean istrue(int[] pl, int[] p2) 
    { 
        if (p1[0] == p1[2] || p1[1] == p1[3] ||p2[0] == p2[2] || p2[1] == p2[3]) {
    return false;
}
    return ! (p1[2] <= p2[0] ||
    p1 [3] <= p2[1] ||
    p1[0] >= p2[2] ||
    p1 [1] >= p2[3]);
}
    public static void main(String[] args) {
    System.out. print (istrue (new int[] {0,0,1,1},new int[] {1,0,2,1}));
     System.out. print(istrue(new int[]{0,0,2,2},new int[]{1,1,3,3})); 
     System.out. print (istrue(new int []{0,0,1,1},new int [] {2,2,3,3}))
    ;}