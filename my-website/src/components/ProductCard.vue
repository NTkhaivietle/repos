<template>
  <div
    class="flex items-center gap-8 border-b border-gray-100 pb-8"
  >
    <div class="flex-1">
      <h3 class="mb-3 text-2xl font-bold">
        {{ title }}
      </h3>

      <ul class="space-y-1 text-gray-600">
        <li v-for="item in features" :key="item">
          • {{ item }}
        </li>
      </ul>
    </div>

    <img
      :src="image"
      :alt="title"
      class="h-32 w-44 rounded object-cover"
    />
  </div>
</template>

<script setup>
defineProps({
  title: String,
  image: String,
  features: Array
});
</script>