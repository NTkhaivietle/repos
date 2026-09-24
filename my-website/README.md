# 🌿 Company Publication - Website Thương Mại Điện Tử Dược Mỹ Phẩm

Website thương mại điện tử giới thiệu các sản phẩm chăm sóc da và dược mỹ phẩm thiên nhiên, được xây dựng bằng **Vue 3**, **Vite** và **TailwindCSS** với giao diện tối giản lấy cảm hứng từ Medium.

---

## 📋 Mục Lục

* Giới Thiệu
* Tính Năng
* Cấu Trúc Dự Án
* Công Nghệ Sử Dụng
* Mock Data
* Cài Đặt & Chạy
* Thiết Kế & UI/UX
* Responsive
* Roadmap

---

## 🌱 Giới Thiệu

**Company Publication** là website giới thiệu và quảng bá các sản phẩm dược mỹ phẩm có nguồn gốc thiên nhiên như:

* Tẩy tế bào chết
* Serum dưỡng da
* Nước tẩy trang
* Sản phẩm chăm sóc da thiên nhiên

Bên cạnh chức năng giới thiệu sản phẩm, website còn đóng vai trò như một blog doanh nghiệp giúp xây dựng thương hiệu thông qua các bài viết về:

* Quá trình hình thành và phát triển công ty
* Nghiên cứu và phát triển sản phẩm (R&D)
* Quy trình sản xuất
* Cam kết chất lượng

> Định hướng: Kết hợp giữa thương mại điện tử và content marketing nhằm nâng cao trải nghiệm người dùng và giá trị thương hiệu.

---

## ✨ Tính Năng

### 🏠 Trang Chủ

* Hiển thị danh sách bài viết nổi bật
* Ảnh cover toàn chiều rộng
* Thông tin tác giả và thời gian đọc
* Giao diện tối ưu trải nghiệm đọc

### 💊 Trang Sản Phẩm

* Hiển thị danh sách sản phẩm
* Hình ảnh sản phẩm local
* Danh sách đặc điểm nổi bật
* Thiết kế dạng list hiện đại

### 🎨 Giao Diện

* Responsive trên Desktop, Tablet và Mobile
* Sticky Navbar
* Footer thông tin doanh nghiệp
* TailwindCSS Utility First

---

## 📁 Cấu Trúc Dự Án

```text
src/
├── assets/
├── components/
│   ├── Navbar.vue
│   ├── Footer.vue
│   ├── ArticleCard.vue
│   └── ProductCard.vue
│
├── data/
│   ├── articles.js
│   └── products.js
│
├── router/
│   └── index.js
│
├── views/
│   ├── HomeView.vue
│   └── ProductsView.vue
│
├── App.vue
└── main.js

public/
└── images/
    ├── article-1.jpg
    ├── article-2.jpg
    ├── article-3.jpg
    ├── product-1.jpg
    ├── product-2.jpg
    └── product-3.jpg
```

---

## 🛠 Công Nghệ Sử Dụng

| Thành phần      | Công nghệ                      |
| --------------- | ------------------------------ |
| Frontend        | Vue 3                          |
| Build Tool      | Vite                           |
| Routing         | Vue Router                     |
| Styling         | TailwindCSS                    |
| Data            | Mock Data (JavaScript)         |
| Images          | Local Images (`public/images`) |
| Package Manager | npm                            |

---

## 📦 Mock Data

Dự án hiện sử dụng dữ liệu giả lập (mock data) thay cho API backend.

### Bài viết

```text
src/data/articles.js
```

Chứa:

* Tiêu đề
* Tác giả
* Thời gian đọc
* Ảnh bài viết
* Nội dung mô tả

### Sản phẩm

```text
src/data/products.js
```

Chứa:

* Tên sản phẩm
* Hình ảnh
* Danh sách tính năng

Ví dụ:

```javascript
{
  id: 1,
  name: "Tẩy Tế Bào Chết Cà Phê",
  image: "/images/product-1.jpg",
  features: [
    "100% thuần chay thực vật",
    "Làm mịn da tức thì",
    "Mùi hương cà phê tự nhiên"
  ]
}
```

---

## 🖼️ Quản Lý Hình Ảnh

Tất cả hình ảnh được lưu trong:

```text
public/images
```

Ví dụ:

```text
public/images/product-1.jpg
public/images/product-2.jpg
public/images/article-1.jpg
```

Sử dụng trong dữ liệu:

```javascript
image: "/images/product-1.jpg"
```

---

## 🚀 Cài Đặt & Chạy

### 1. Clone source code

```bash
git clone https://github.com/NTkhaivietle/repos
cd my-website
```

### 2. Cài đặt dependencies

```bash
npm install
```

### 3. Chạy môi trường development

```bash
npm run dev
```

Sau khi chạy thành công:

```text
http://localhost:5173
```

### 4. Build production

```bash
npm run build
```

### 5. Preview production build

```bash
npm run preview
```

---

## 🎨 Thiết Kế & UI/UX

Website được thiết kế dựa trên các nguyên tắc:

* Nội dung là trung tâm
* Khoảng trắng rộng rãi
* Hình ảnh chất lượng cao
* Typography dễ đọc
* Điều hướng đơn giản

Nguồn cảm hứng:

* Medium
* Stripe
* Shopify Blog

---

## 📱 Responsive

Hỗ trợ:

* Desktop
* Laptop
* Tablet
* Mobile

Các layout được xây dựng bằng Flexbox và TailwindCSS Responsive Utilities.