import xml.etree.ElementTree as ET

# Function to convert a dictionary to an XML element
def dict_to_xml(dictionary, root_name):
    root = ET.Element(root_name)
    for key, value in dictionary.items():
        if isinstance(value, dict):
            # Recursively convert nested dictionaries
            child = dict_to_xml(value, key)
            root.append(child)
        else:
            # Create an element for non-dictionary values
            child = ET.Element(key)
            child.text = str(value)
            root.append(child)
    return root

# Example dictionary
data = {
    "person": {
        "name": "John",
        "age": 30,
        "city": "New York"
    }
}

# Convert the dictionary to XML
root_element = dict_to_xml(data, "data")
xml_string = ET.tostring(root_element, encoding="unicode")

# Print the XML
print(xml_string)
