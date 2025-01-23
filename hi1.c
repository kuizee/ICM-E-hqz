#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
  char* S1[10];
  int S3[2][2];

  printf("Enter a string: ");
  S1[0]=(char*)malloc(sizeof(10*sizeof(char)));
  scanf("%s", S1[0]);

  printf("Enter an integer: ");
  scanf("%d", &S3[0][0]);

  printf("String: %s\nInteger: %d\n", S1[0], S3[0][0]);
  system("pause");  
  return 0;
}


// .container{
//     /* 相对定位 */
//     position: relative;
//     width: 73rem;

// }


          <el-row :gutter="20" style="margin-top: 20px;" justify="center">
            <el-col :span="5" v-for="product in paginatedProducts" :key="product.id">
              <el-card :body-style="{ padding: '0px' }">
                <img :src="product.imageUrl" class="image">
                <div style="padding: 14px;">
                  <!-- 在模板中使用类 -->
                  <span class="product-name">{{ product.name }}</span>
                  <div class="bottom clearfix">
                    <div class="price">?{{ product.price }}</div>
                    <el-button  type="primary" class="button" @click="addToCart(product.good_id)">收藏</el-button>
                  </div>
                </div>
              </el-card>
            </el-col>
          </el-row>


.button {
  font-size: 0.9vw;
  
}
.product-name {
  font-size: 1vw; /* 或者你想要的大小 */
  display: -webkit-box;
  -webkit-line-clamp: 2;
  line-clamp: 2; /* 限制文本最多显示三行 */
  -webkit-box-orient: vertical; /* 垂直方向上的文本 */
  overflow: hidden; /* 隐藏超出部分 */
  text-overflow: ellipsis; /* 超出部分显示省略号 */
  line-height: 1.5; /* 行高，根据需要调整 */
  max-height: 4.5em; /* 最大高度，根据行高和行数计算 */

}

.el-card {
  width: 100%; /* 或者你想要的宽度 */
  position: relative;
  overflow: hidden;
  margin: 20px; 
}
.price {
  font-size: 0.9vw;
  color: red; /* 将价格的颜色设置为红色，你可以选择任何你喜欢的颜色 */
  font-weight: bold; /* 使字体加粗，增加醒目程度 */
  margin-right: 10px; /* 在价格和按钮之间添加一些间距 */
}
.pagination-container {
  display: flex;
  justify-content: center;
}
.image {
  width: 100%;
  height: 12.5%;
  object-fit: cover;
}
.time {
  float: right;
  color: red;
}
.button {
  float: right;
}
.bottom {
  margin-top: 13px;
  line-height: 12px;
  display: flex;
  justify-content: space-between; /* 确保子元素之间的空间相等 */
  align-items: center; /* 垂直居中对齐 */
}
.clearfix:before,
.clearfix:after {
    display: table;
    content: "";
}

.clearfix:after {
    clear: both
}


router-link {
  text-decoration: none; /* 移除下划线 */
}
/* 在这里可以添加一些样式 */
h3 {
  margin: 0;
  padding: 10px;
}
.user-info {
  margin: 10px 0;
  padding: 5px;
  border: 1px solid #ebeef5;
  border-radius: 4px;
}

.user-info p {
  margin: 5px 0;
}

.router-link-inactive {
  color: white; /* 设置为白色 */
  text-decoration: none; /* 去除下划线 */
}

/* 激活状态下的 <router-link> 样式 */
a{
  text-decoration: none;
}
.router-link-active {
  color:  white; /* 设置为黄色 */
  text-decoration: none; /* 去除下划线 */
}

<el-col :span="6" v-for="(productItem, index) in products" :key="index" class="product-col">
      <el-card :body-style="{ padding: '0px' }" style="margin-top: 20px;">
        <img
          :src="productItem.image"
          class="image"
          style="width: 100%; height: 400px; display: block;"
        >
        <div style="padding: 14px;">
          <span class="product-name">{{ productItem.name }}</span>
          <div class="bottom clearfix" style="display: flex; justify-content: space-between; align-items: center; width: 100%;">
            <!-- 整体 A -->
            <div style="flex: 1; display: flex; justify-content: space-between; align-items: center; width: 50%;">
              <span class="price" style="flex: 1.2; text-align: center;">{{ productItem.price_0 }}元</span>
              <a class="plink" :href="productItem.link" target="_blank" style="flex: 1.0; text-align: center;">来自{{ productItem.marketplace }}</a>
            </div>

            <!-- 整体 B -->
            <div style="flex: 1; display: flex; justify-content: space-between; align-items: center;">
              <el-button type="text" class="button" @click="delshoucang(productItem)" style="flex: 0.4; text-align: center;">取消收藏</el-button>
              <el-button type="text" class="button" @click="showPriceChart(productItem)" style="flex: 0.4; text-align: center;">展示价格变动</el-button>
            </div>
          </div>
        </div>
      </el-card>
</el-col>