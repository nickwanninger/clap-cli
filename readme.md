# clap-cli

It just puts claps between words.

---

Installation and Usage

```bash
git clone git@github.com:nickwanninger/clap-cli.git
cd clap-cli
make
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
