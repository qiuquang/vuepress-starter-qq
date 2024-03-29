# 集合引用类型

## Object

## Array

Array 构造函数还有两个 ES6 新增的用于创建数组的静态方法： from() 和 of() 。 from() 用于将类数组结构转换为数组实例，而 of() 用于将一组参数转换为数组实例。

Array.from() 的第一个参数是一个类数组对象，即任何可迭代的结构，或者有一个 length 属性和可索引元素的结构。这种方式可用于很多场合：

```javascript
// 字符串会被拆分为单字符数组
console.log(Array.from("Matt")); // ["M", "a", "t", "t"]
// 可以使用 from()将集合和映射转换为一个新数组
const m = new Map().set(1, 2)
.set(3, 4);
const s = new Set().add(1)
.add(2)
.add(3)
.add(4);
console.log(Array.from(m)); // [[1, 2], [3, 4]]
console.log(Array.from(s)); // [1, 2, 3, 4]
// Array.from()对现有数组执行浅复制
const a1 = [1, 2, 3, 4];
const a2 = Array.from(a1);
console.log(a1); // [1, 2, 3, 4]
alert(a1 === a2); // false
// 可以使用任何可迭代对象
const iter = {
*[Symbol.iterator]() {
yield 1;
yield 2;
yield 3;
yield 4;
}
};
console.log(Array.from(iter)); // [1, 2, 3, 4]


// arguments 对象可以被轻松地转换为数组
function getArgsArray() {
return Array.from(arguments);
}
console.log(getArgsArray(1, 2, 3, 4)); // [1, 2, 3, 4]
// from()也能转换带有必要属性的自定义对象
const arrayLikeObject = {
0: 1,
1: 2,
2: 3,
3: 4,
length: 4
};
console.log(Array.from(arrayLikeObject)); // [1, 2, 3, 4]

```

Array.from() 还接收第二个可选的映射函数参数。这个函数可以直接增强新数组的值，而无须像调用 Array.from().map() 那样先创建一个中间数组。还可以接收第三个可选参数，用于指定映射函数中 this 的值。但这个重写的 this 值在箭头函数中不适用。

```javascript
const a1 = [1, 2, 3, 4];
const a2 = Array.from(a1, x => x**2);
const a3 = Array.from(a1, function(x) {return x**this.exponent}, {exponent: 2});
console.log(a2); // [1, 4, 9, 16]
console.log(a3); // [1, 4, 9, 16]
```

