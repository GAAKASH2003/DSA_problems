class Solution {
public:
    int poorPigs(int buckets, int mt, int mtt) {
       return ceil(log2(buckets)/log2(int(mtt/mt)+1));
    }
};
// Line 4: Char 9: warning: ignoring return value of function declared with const attribute [-Wunused-value]
//         ceil(log(buckets) / log(mt / mtt + 1));
//         ^~~~ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Line 5: Char 5: error: non-void function does not return a value [-Werror,-Wreturn-type]
//     }
//     ^
// 1 warning and 1 error generated.