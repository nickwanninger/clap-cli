# clap-cli

It just puts claps between words.

---

Installation

```bash
npm install -g clap-cli
```

---

The only command:

```bash
clap wow thats really cool
> wow 👏 thats 👏 really 👏 cool
```

or you can pipe stdin:

```bash
echo "wow thats really cool" | clap
> wow 👏 thats 👏 really 👏 cool
```
