<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exemplo de Estrutura de Texto Organizada</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 20px;
        }
        header, footer {
            background-color: #f8f8f8;
            padding: 10px;
            text-align: center;
        }
        article {
            margin: 20px 0;
        }
        h1, h2, h3 {
            color: #333;
        }
        p {
            margin: 10px 0;
        }
        ul, ol {
            margin: 10px 0 10px 20px;
        }
        blockquote {
            margin: 20px 0;
            padding: 10px;
            background-color: #f0f0f0;
            border-left: 5px solid #ccc;
        }
        code {
            background-color: #f4f4f4;
            padding: 2px 4px;
            font-family: Consolas, monospace;
        }
    </style>
</head>
<body>

<header>
    <h1>Bem-vindo ao Meu Site</h1>
    <nav>
        <a href="#introducao">Introdução</a> | 
        <a href="#conteudo-principal">Conteúdo Principal</a> | 
        <a href="#conclusao">Conclusão</a>
    </nav>
</header>

<main>
    <article id="introducao">
        <h2>Introdução</h2>
        <p>Este é um exemplo de como estruturar um texto de forma organizada usando HTML. Vamos ver como usar diferentes tags para criar uma página bem formatada.</p>
    </article>

    <article id="conteudo-principal">
        <h2>Conteúdo Principal</h2>
        <section>
            <h3>Seção 1: Parágrafos e Cabeçalhos</h3>
            <p>Os parágrafos são definidos pela tag <code>&lt;p&gt;</code>. Cabeçalhos variam de <code>&lt;h1&gt;</code> a <code>&lt;h6&gt;</code>, onde <code>&lt;h1&gt;</code> é o mais importante e <code>&lt;h6&gt;</code> o menos importante.</p>
        </section>
        <section>
            <h3>Seção 2: Listas</h3>
            <p>Existem dois tipos principais de listas em HTML:</p>
            <ul>
                <li>Listas não ordenadas (com marcadores), criadas com <code>&lt;ul&gt;</code> e <code>&lt;li&gt;</code></li>
                <li>Listas ordenadas (numeradas), criadas com <code>&lt;ol&gt;</code> e <code>&lt;li&gt;</code></li>
            </ul>
        </section>
        <section>
            <h3>Seção 3: Citações e Código</h3>
            <p>Para destacar uma citação, usamos a tag <code>&lt;blockquote&gt;</code>:</p>
            <blockquote>
                "Esta é uma citação de exemplo, destacada de forma especial."
            </blockquote>
            <p>Para exibir código, usamos a tag <code>&lt;code&gt;</code>:</p>
            <p><code>&lt;p&gt;Este é um parágrafo.&lt;/p&gt;</code></p>
        </section>
    </article>

    <article id="conclusao">
        <h2>Conclusão</h2>
        <p>Usando essas tags HTML, podemos criar uma estrutura de texto bem organizada e fácil de ler. Isso inclui cabeçalhos, parágrafos, listas, citações e trechos de código.</p>
    </article>
</main>

<footer>
    <p>&copy; 2024 Meu Site</p>
</footer>

</body>
</html>
