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
    case player1[1].downcase
      when 'r'
        case player2[1].downcase
          when 'r'
            retVal = player1
          when 'p'
            retVal = player2
          when 's'
            retVal = player1
        end
      when 'p'
        case player2[1].downcase
          when 'r'
            retVal = player1
          when 'p'
            retVal = player1
          when 's'
            retVal = player2
        end
      when 's'
        case player2[1].downcase
          when 'r'
            retVal = player2
          when 'p'
            retVal = player1
          when 's'
            retVal = player1
        end
    end
    return retVal;
  end

  def self.tournament_winner(tournament)
    if (tournament[0][0].is_a? String)
      retVal = winner(tournament[0], tournament[1])
    else
      retVal = tournament_winner([tournament_winner(tournament[0]), tournament_winner(tournament[1])]);
    end
    return retVal
  end

end