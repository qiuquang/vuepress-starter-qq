# JS 的数据类型你了解多少？

## 1.数据类型

![img](../asset/CgpVE1_4DdGAJ_EXAAE38RQC0js096.png)

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