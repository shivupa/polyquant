import qcschema
import json


filename = "h2o.json"

with open(filename, "r") as infile:
    data = json.load(infile)

qcschema.validate(data, "input")
