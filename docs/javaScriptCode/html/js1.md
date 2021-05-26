# JS 的数据类型你了解多少？

## 1.数据类型

![img](../asset/CgpVE1_4DdGAJ_EXAAE38RQC0js096.png)

## 1+ 判断传入值是什么类型的方法

```javascript
function getType(obj) {
  let type = typeof obj;
  if (type !== "object") {
    // 先进行typeof判断，如果是基础数据类型，直接返回
    return type;
  }
  // 对于typeof返回结果是object的，再进行如下的判断，正则返回结果
  // 注意正则中间有个空格
  return Object.prototype.toString
    .call(obj)
    .replace(/^\[object (\S+)\]$/, "$1");
}
```

## 2.Number() 方法的强制转换规则

如果是布尔值，true 和 false 分别被转换为 1 和 0；

如果是数字，返回自身；

如果是 null，返回 0；

如果是 undefined，返回 NaN；

如果是字符串，遵循以下规则：如果字符串中只包含数字（或者是 0X / 0x 开头的十六进制数字字符串，允许包含正负号），则将其转换为十进制；如果字符串中包含有效的浮点格式，将其转换为浮点数值；如果是空字符串，将其转换为 0；如果不是以上格式的字符串，均返回 NaN；

如果是 Symbol，抛出错误；

如果是对象，并且部署了 [Symbol.toPrimitive] ，那么调用此方法，否则调用对象的 valueOf() 方法，然后依据前面的规则转换返回的值；如果转换的结果是 NaN ，则调用对象的 toString() 方法，再次依照前面的顺序转换返回对应的值（Object 转换规则会在下面细讲）。

## 3.Boolean() 方法的强制转换规则

除了 undefined、 null、 false、 ''、 0（包括 +0，-0）、 NaN 转换出来是 false，其他都是 true。

## 4.'==' 的隐式类型转换规则

如果类型相同，无须进行类型转换；

如果其中一个操作值是 null 或者 undefined，那么另一个操作符必须为 null 或者 undefined，才会返回 true，否则都返回 false；

如果其中一个是 Symbol 类型，那么返回 false；

两个操作值如果为 string 和 number 类型，那么就会将字符串转换为 number；

如果一个操作值是 boolean，那么转换成 number；

如果一个操作值为 object 且另一方为 string、number 或者 symbol，就会把 object 转为原始类型再进行判断（调用 object 的 valueOf/toString 方法进行转换）。

## 5.'+' 的隐式类型转换规则

当 '+' 号两边都是数字时，进行的是加法运算；如果两边都是字符串，则直接拼接，无须进行隐式类型转换。

- 如果其中有一个是字符串，另外一个是 undefined、null 或布尔型，则调用 toString() 方法进行字符串拼接；如果是纯对象、数组、正则等，则默认调用对象的转换方法会存在优先级（下一讲会专门介绍），然后再进行拼接。
- 如果其中有一个是数字，另外一个是 undefined、null、布尔型或数字，则会将其转换成数字进行加法运算，对象的情况还是参考上一条规则。
- 如果其中一个是字符串、一个是数字，则按照字符串规则进行拼接。

## 6.**Object 的转换规则**

对象转换的规则，会先调用内置的 [ToPrimitive] 函数，其规则逻辑如下：

- 如果部署了 Symbol.toPrimitive 方法，优先调用再返回；
- 调用 valueOf()，如果转换为基础类型，则返回；
- 调用 toString()，如果转换为基础类型，则返回；
- 如果都没有返回基础类型，会报错。

思维导图

[基础类型](https://note.youdao.com/ynoteshare1/index.html?id=62f8f4cd95c668462b98b426fb1347f0)
