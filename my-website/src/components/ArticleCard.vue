<template>
  <article class="mb-16 border-b border-gray-100 pb-12">
    <div class="mb-6">
      <div class="mb-3 text-sm text-gray-500">
        <span class="font-semibold text-black">
          {{ author }}
        </span>
        · {{ readTime }}
      </div>

      <h2 class="mb-4 text-4xl font-bold">
        {{ title }}
      </h2>
    </div>

    <img
      :src="image"
      :alt="title"
      class="mb-8 h-[380px] w-full rounded object-cover"
    />

    <p class="text-lg leading-8 text-gray-800">
      {{ description }}
    </p>
  </article>
</template>

<script setup>
defineProps({
  author: String,
  readTime: String,
  title: String,
  image: String,
  description: String
});
</script>