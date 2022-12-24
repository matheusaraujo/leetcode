func arraySign(nums []int) int {
    var c = 0
    for i := 0; i < len(nums); i++ { 
        if (nums[i] == 0) { return 0 }
        if (nums[i] < 0 ) { c++ }
    }
    if c % 2 == 1 { return -1 }
    return 1
}
