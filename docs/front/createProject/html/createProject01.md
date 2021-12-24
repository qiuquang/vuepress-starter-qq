# vue+koa+mysql项目

## 1.mysql安装

查看有无mysql服务

![image-20211224142634138](../assets/image-20211224142634138.png)

查看mysql状态

![image-20211224142801439](../assets/image-20211224142801439.png)

想要重启mysql，发现 我没有 mysql = =！

![image-20211224143035782](../assets/image-20211224143035782.png)

下面 在linux中安装mysql吧！

- 实例规格：ecs.c6.large（2 vCPU，4 GiB内存）

- 操作系统：公共镜像CentOS 7.2 64位

- MySQL：5.7.33

  本示例中，MySQL相关安装路径说明如下：

  - 配置文件：/etc/my.cnf
  - 数据存储：/var/lib/mysql
  - 命令文件：/usr/bin和/usr/sbin

- 数据库端口：3306

第一步、运行以下命令更新YUM源。

![image-20211224143728992](../assets/image-20211224143728992.png)

第二步、运行以下命令安装MySQL。

yum -y install mysql-community-server

第三步、返回以下结果代表部署成功

![image-20211224144057189](../assets/image-20211224144057189.png)

## 配置MySQL

1. 运行以下命令启动MySQL服务。

   ```sql
   systemctl start mysqld
   ```

2. 运行以下命令设置MySQL服务开机自启动。

   ```bash
   systemctl enable mysqld
   ```

3. 运行以下命令查看/var/log/mysqld.log文件，获取并记录root用户的初始密码。

   ```javascript
   grep 'temporary password' /var/log/mysqld.log
   ```

