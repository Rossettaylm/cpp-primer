class Box():
    def __init__(self, height):
        self.height = height

    def __add__(self, box):
        sum_height = self.height + box.height
        box = Box(height=sum_height)
        return box

    def __repr__(self) -> str:
        return f"Box(height={self.height})"


box = Box(3)
print(repr(box))
box2 = Box(5)
box3 = box + box2
print(repr(box3))
