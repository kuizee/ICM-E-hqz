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
//     /* ��Զ�λ */
//     position: relative;
//     width: 73rem;

// }


          <el-row :gutter="20" style="margin-top: 20px;" justify="center">
            <el-col :span="5" v-for="product in paginatedProducts" :key="product.id">
              <el-card :body-style="{ padding: '0px' }">
                <img :src="product.imageUrl" class="image">
                <div style="padding: 14px;">
                  <!-- ��ģ����ʹ���� -->
                  <span class="product-name">{{ product.name }}</span>
                  <div class="bottom clearfix">
                    <div class="price">?{{ product.price }}</div>
                    <el-button  type="primary" class="button" @click="addToCart(product.good_id)">�ղ�</el-button>
                  </div>
                </div>
              </el-card>
            </el-col>
          </el-row>


.button {
  font-size: 0.9vw;
  
}
.product-name {
  font-size: 1vw; /* ��������Ҫ�Ĵ�С */
  display: -webkit-box;
  -webkit-line-clamp: 2;
  line-clamp: 2; /* �����ı������ʾ���� */
  -webkit-box-orient: vertical; /* ��ֱ�����ϵ��ı� */
  overflow: hidden; /* ���س������� */
  text-overflow: ellipsis; /* ����������ʾʡ�Ժ� */
  line-height: 1.5; /* �иߣ�������Ҫ���� */
  max-height: 4.5em; /* ���߶ȣ������иߺ��������� */

}

.el-card {
  width: 100%; /* ��������Ҫ�Ŀ�� */
  position: relative;
  overflow: hidden;
  margin: 20px; 
}
.price {
  font-size: 0.9vw;
  color: red; /* ���۸����ɫ����Ϊ��ɫ�������ѡ���κ���ϲ������ɫ */
  font-weight: bold; /* ʹ����Ӵ֣�������Ŀ�̶� */
  margin-right: 10px; /* �ڼ۸�Ͱ�ť֮�����һЩ��� */
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
  justify-content: space-between; /* ȷ����Ԫ��֮��Ŀռ���� */
  align-items: center; /* ��ֱ���ж��� */
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
  text-decoration: none; /* �Ƴ��»��� */
}
/* ������������һЩ��ʽ */
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
  color: white; /* ����Ϊ��ɫ */
  text-decoration: none; /* ȥ���»��� */
}

/* ����״̬�µ� <router-link> ��ʽ */
a{
  text-decoration: none;
}
.router-link-active {
  color:  white; /* ����Ϊ��ɫ */
  text-decoration: none; /* ȥ���»��� */
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
            <!-- ���� A -->
            <div style="flex: 1; display: flex; justify-content: space-between; align-items: center; width: 50%;">
              <span class="price" style="flex: 1.2; text-align: center;">{{ productItem.price_0 }}Ԫ</span>
              <a class="plink" :href="productItem.link" target="_blank" style="flex: 1.0; text-align: center;">����{{ productItem.marketplace }}</a>
            </div>

            <!-- ���� B -->
            <div style="flex: 1; display: flex; justify-content: space-between; align-items: center;">
              <el-button type="text" class="button" @click="delshoucang(productItem)" style="flex: 0.4; text-align: center;">ȡ���ղ�</el-button>
              <el-button type="text" class="button" @click="showPriceChart(productItem)" style="flex: 0.4; text-align: center;">չʾ�۸�䶯</el-button>
            </div>
          </div>
        </div>
      </el-card>
</el-col>