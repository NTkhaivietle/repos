<script setup>
import ArticleCard from "../components/ArticleCard.vue";
import { articles } from "../data/articles";
</script>

<template>
  <main class="mx-auto max-w-3xl px-6 py-12">
    <ArticleCard
      v-for="article in articles"
      :key="article.id"
      :author="article.author"
      :read-time="article.readTime"
      :title="article.title"
      :image="article.image"
      :description="article.description"
    />
  </main>
</template>