module.exports = [{
    title: '关于我', // 必要的
    path: '/guide/', // 可选的, 标题的跳转链接，应为绝对路径且必须存在
    collapsable: false, // 可选的, 默认值是 true,
    sidebarDepth: 1, // 可选的, 默认值是 1
    children: [
        { title: '个人简介', path: '/guide/notes/html/guide01' },
        { title: '学习计划', path: '/guide/notes/html/guide02' },
        { title: '槑言槑语', path: '/guide/notes/html/guide03' },
        { title: '迷茫的时候看这里', path: '/guide/notes/html/guide04' },
    ]
},
{
    title: '喜欢的话', // 必要的
    path: '/likeword/', // 可选的, 标题的跳转链接，应为绝对路径且必须存在
    collapsable: false, // 可选的, 默认值是 true,
    sidebarDepth: 1, // 可选的, 默认值是 1
    children: [
        { title: '神奇人生十二法则', path: '/likeword/html/likeword01' },
        { title: '稻盛和夫的六项精进', path: '/likeword/html/likeword02' },
    ]
}]