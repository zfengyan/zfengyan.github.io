### Domain
[Squarespace](https://www.squarespace.com/)

### HTML Structure
```html
<body>
└── <div class="page">                    ← Full-page wrapper
    ├── <header class="shell site-header"> ← Top navigation
    │   ├── <div class="logo-wordmark">
    │   └── <nav class="nav">
    │       └── <a> links
    │
    ├── <main class="shell hero">          ← HERO SECTION (main content)
    │   ├── <section class="portrait-wrap"> ← Left side
    │   │   └── <div class="stellar-system">
    │   │       ├── <div class="orbit">    ← Orbital circles
    │   │       ├── <div class="portrait-frame"> ← Your portrait
    │   │       │   └── <div class="portrait-inner">
    │   │       │       └── <img class="portrait">
    │   │       └── <div class="planet-links"> ← Navigation planets
    │   │           └── <div class="planet">
    │   │               └── <a>
    │   │
    │   └── <section class="intro">        ← Right side
    │       ├── <div class="intro-eyebrow">
    │       ├── <h1 class="intro-name">
    │       ├── <p class="intro-subtitle">
    │       ├── <p class="intro-body">
    │       ├── <div class="intro-actions">
    │       │   ├── <a class="button-primary">
    │       │   └── <a class="button-ghost">
    │       └── <div class="intro-meta">
    │
    └── <footer class="site-footer">       ← Bottom footer
        └── <p>
```
**visualization**
```text
┌─────────────────────────────────────────────┐
│ BODY (starfield background)                 │
│ ┌─────────────────────────────────────────┐ │
│ │ .page (flexbox column)                  │ │
│ │ ┌─────────────────────────────────────┐ │ │
│ │ │ HEADER (.shell)                     │ │ │
│ │ │ Logo          Nav Links             │ │ │
│ │ └─────────────────────────────────────┘ │ │
│ │                                         │ │
│ │ ┌─────────────────────────────────────┐ │ │
│ │ │ MAIN (.shell .hero) - 2 COLUMNS     │ │ │
│ │ │ ┌──────────┐  ┌──────────────────┐ │ │ │
│ │ │ │ SECTION  │  │ SECTION          │ │ │ │
│ │ │ │ Portrait │  │ Name             │ │ │ │
│ │ │ │ + Planets│  │ Subtitle         │ │ │ │
│ │ │ │          │  │ Bio              │ │ │ │
│ │ │ │          │  │ Buttons          │ │ │ │
│ │ │ └──────────┘  └──────────────────┘ │ │ │
│ │ └─────────────────────────────────────┘ │ │
│ │                                         │ │
│ │ ┌─────────────────────────────────────┐ │ │
│ │ │ FOOTER                              │ │ │
│ │ │ © Copyright                         │ │ │
│ │ └─────────────────────────────────────┘ │ │
│ └─────────────────────────────────────────┘ │
└─────────────────────────────────────────────┘
```