import ujson
settings = {}
with open("settings.json") as fp:
    settings = ujson.load(fp)

print(settings)


def get():
    return settings


def get_part(part: str):
    if (part in settings):
        return settings[part]

    return {}
