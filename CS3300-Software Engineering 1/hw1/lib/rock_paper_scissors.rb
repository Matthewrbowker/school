class RockPaperScissors

  # Exceptions this class can raise:
  class NoSuchStrategyError < StandardError ; end

  def self.winner(player1, player2)
    case player1[1].downcase
      when 'r', 'p', 's'
        # Do nothing
      else
        raise NoSuchStrategyError, "Strategy must be one of R,P,S"
    end

    case player2[1].downcase
      when 'r', 'p', 's'
        # Do nothing
      else
        raise NoSuchStrategyError, "Strategy must be one of R,P,S"
    end

    if player1[1].downcase == player2[1].downcase
      retVal = player1;
    end
    #elsif player1[1].downcase == 'r'
    return retVal;
  end

  def self.tournament_winner(tournament)
    # YOUR CODE HERE
  end

end
