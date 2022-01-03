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
      const first = nums1;
      const second = nums2;
      // const first = [1,1]
      // const second = [1,2]
      const sum = first.concat(second);
      const unqi = sum.sort((a, b) => a - b);
      console.log("unqi", unqi);
      if (unqi.length % 2 === 1) {
        const index = (unqi.length - 1) / 2;
        return unqi[index];
      } else {
        const index = unqi.length / 2;
        return (unqi[index] + unqi[index - 1]) / 2;
      }
};
```

![image-20220103204100057](../assets/image-20220103204100057.png)

:::

::: details 参考答案

```javascript
/**

@param {number[]} nums1
@param {number[]} nums2
@return {number}
*/
var findMedianSortedArrays = function (nums1, nums2) {
let p1 = nums1;
let p2 = nums2;
let p3 = [...p1, ...p2]; //ES6新语法很好用，p3得出来的是拼接后的数组
let p4 = p3.sort((a, b) => a - b); //进行从小到大排序
n = p4.length;
if (!p4) {
    return 0;
} else {
    if(n % 2 !== 0 ){ //若长度不能被2整除则为奇数，去获取他的中位数
        let i = Math.floor(n/2)
        return p4[i]
    }else{ //若长度为偶数，寻找中间两个数字除2就为答案啦
        let j = Math.floor(n/2)-1;
        return ((p4[j]+p4[j+1])/2)
    }
}
};
```

![image-20220103204232653](../assets/image-20220103204232653.png)

:::