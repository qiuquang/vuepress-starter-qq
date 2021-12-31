# 4.寻找两个正序数组的中位数

<author/>

## 题目

给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。

算法的时间复杂度应该为 O(log (m+n)) 。

示例 1：

```
输入：nums1 = [1,3], nums2 = [2]
输出：2.00000
解释：合并数组 = [1,2,3] ，中位数 2
```

示例 2：

```
输入：nums1 = [1,2], nums2 = [3,4]
输出：2.50000
解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
```

示例 3：

```
输入：nums1 = [0,0], nums2 = [0,0]
输出：0.00000
```

示例 4：

```
输入：nums1 = [], nums2 = [1]
输出：1.00000
```

示例 5：

```
输入：nums1 = [2], nums2 = []
输出：2.00000
```

::: details 点击查看我的答案

```javascript
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    const first = nums1
    const second = nums2
    // const first = [1,1]
    // const second = [1,2]
    const sum = first.concat(second)
    const unqi = Array.from(new Set(sum)).sort((a,b) => a-b)
    console.log('unqi', unqi)
    if(unqi.length%2===1) {
        const index = (unqi.length - 1) /2
        return unqi[index]
    } else {
        const index = unqi.length / 2
        return ((unqi[index] + unqi[index - 1]) /2).toFixed(1)
    }
};
```

:::