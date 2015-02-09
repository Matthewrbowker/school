class Class
  def attr_accessor_with_history(attr_name)
    attr_reader attr_name
    attr_reader "#{attr_name}_history"

    class_eval %Q{
      def #{attr_name}=(new_value)
        @#{attr_name}_history = [] if @#{attr_name}_history.nil?
        @#{attr_name}_history << @#{attr_name}
        @#{attr_name} = new_value
      end

      def history(name)
        @#{name}_history
      end
    }
  end
end
