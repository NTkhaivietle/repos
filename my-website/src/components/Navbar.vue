<template>
  <header
    class="sticky top-0 z-50 border-b border-gray-100 bg-white/95 backdrop-blur"
  >
    <div
      class="mx-auto flex max-w-5xl items-center justify-between px-6 py-5"
    >
      <RouterLink
        to="/"
        class="text-2xl font-bold tracking-tight"
      >
        Company Publication
      </RouterLink>

      <nav class="flex gap-6">
        <RouterLink
          to="/"
          class="text-gray-500 hover:text-black"
        >
          Trang Chủ
        </RouterLink>

        <RouterLink
          to="/products"
          class="text-gray-500 hover:text-black"
        >
          Sản Phẩm
        </RouterLink>
      </nav>
    </div>
  </header>
</template>