<script setup>
import ProductCard from "../components/ProductCard.vue";
import { products } from "../data/products";
</script>

<template>
  <main class="mx-auto max-w-5xl px-6 py-12">
    <h1 class="mb-10 text-5xl font-bold">
      Danh Sách Sản Phẩm
    </h1>

    <div class="space-y-10">
      <ProductCard
        v-for="product in products"
        :key="product.id"
        :title="product.name"
        :image="product.image"
        :features="product.features"
      />
    </div>
  </main>
</template>