# 代码review 20210802

## 1.代码优化例子1

```html

        <el-dropdown-menu slot="dropdown">
          <el-dropdown-item
            v-if="infoShow"
            @click.native="editUserInfo"
          >
            个人信息
          </el-dropdown-item>
          <!-- 企业注册具有信息变更 -->
          <el-dropdown-item
            v-if="infoShow"
            @click.native="toChangeCompanyInfo"
          >
            信息变更
          </el-dropdown-item>
          <!-- 企业注册具有子账号 -->
          <el-dropdown-item
            v-if="userInfo.type !== 0 && userAllInfo.userDetail.subAccountLevel !== 3"
            @click.native="$router.push({name:'subAccount'})"
          >
            子账号管理
          </el-dropdown-item>
          <!-- 非局方人员显示修改密码 -->
          <el-dropdown-item
            v-if="userInfo.type !== 0"
            @click.native="changePwd"
          >
            修改密码
          </el-dropdown-item>
          <!-- 非局方人员显示修改账号 -->
          <el-dropdown-item
            v-if="userInfo.type !== 0"
            @click.native="$router.push({
              name: 'personalInfo',
              query: {
                activeName: '3'
              }
            })"
          >
            修改账号
          </el-dropdown-item>
          <!-- 局方人员显示修改个人信息 -->
          <el-dropdown-item
            v-if="userInfo.type === 0"
            @click.native="changeInfo"
          >
            修改个人信息
          </el-dropdown-item>
          <el-dropdown-item command="logOut">
            退出
          </el-dropdown-item>
        </el-dropdown-menu>
```

优化后

```html
<el-dropdown-menu slot="dropdown">
          <el-dropdown-item
            v-for="(item, index) in dropdownList"
            :key="index"
            @click.native="item.method"
          >
            {{ item.name }}
          </el-dropdown-item>
        </el-dropdown-menu>
```

```javascript

    dropdownList() {
      const subAcconutShow = this.userInfo.type !== 0 && this.userAllInfo.userDetail.subAccountLevel !== 3; // 子账号管理显示
      const changeAccountShow = this.userInfo.type !== 0 && !subUserInfo().subAccountLevel;
      const list = [
        { name: '个人信息', hide: !this.infoShow, method: () => this.toPersonalInfo('personInfo') },
        { name: '信息变更', hide: !this.infoShow, method: this.toChangeCompanyInfo },
        { name: '修改个人信息', hide: this.userInfo.type !== 0, method: () => this.toPersonalInfo('changePersonInfo') },
        { name: '子账号管理', hide: !subAcconutShow, method: this.toSubManage },
        { name: '修改账号', hide: !changeAccountShow, method: () => this.toPersonalInfo('changeAccount') },
        { name: '修改密码', hide: this.userInfo.type === 0, method: () => this.toPersonalInfo('changePassword') },
        { name: '修改手机号码', hide: !this.canChangePhone, method: () => this.toPersonalInfo('changePhone') },
        { name: '退出', method: this.logOut }
      ];
      return list.filter(item => !item.hide);
    },
```



