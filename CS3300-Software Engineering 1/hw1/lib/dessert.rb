class Dessert
  @name
  @calories

  attr_reader(:name);
  attr_writer(:name);
  attr_reader(:calories);
  attr_writer(:calories);

  def initialize(name, calories)
    @name = name;
    @calories = calories;
  end
  def healthy?
    retVal = false;
    if @calories < 200
      retVal = true
    end
    return retVal;
  end
  def delicious?
    return true
  end
end

class JellyBean < Dessert
  def initialize(flavor)
    super(flavor + " jelly bean", 5);
  end
  def delicious?
    retVal = false;
    if @name.downcase() != "licorice jelly bean"
      retVal = true
    end
    return retVal;
  end
end
