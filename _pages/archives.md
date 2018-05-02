---
title: "Posts archivados"
layout: archive
permalink: /archive/
author_profile: true
---

{% include base_path %}

{% for post in site.posts %}
  {% include archive-single.html %}
{% endfor %}
