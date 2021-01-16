module.exports = [
    {
        title: '关于我',   // 必要的
        path: '/guide/',      // 可选的, 标题的跳转链接，应为绝对路径且必须存在
        collapsable: false, // 可选的, 默认值是 true,
        sidebarDepth: 1,    // 可选的, 默认值是 1
        children: [
          {title: '个人简介', path: '/guide/notes/html/personal'},
          {title: '基本标签', path: '/guide/notes/html/commonTags'},
        ]
    }
]