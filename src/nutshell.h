/**
    \file nutshell.h
    An overly extended example of how to use breathe
*/
/**
    \defgroup nuttygroup Nutty Group
    The group for all nutjobs.
*/
/**
    \defgroup nuttygroup2 Second Nutty Group
    The group for all nutjobs.
*/

/**
*   @addtogroup nuttygroup
*   @brief No nut can withstand us!
*  @{
*/
class Nutshell {
public:
  //! Our tool set
  /** @brief The various tools we can opt to use to crack this particular nut */
  enum Tool {
    kHammer = 0,        //!< What? It does the job
    kNutCrackers,       //!< Boring
    kNinjaThrowingStars //!< Stealthy
  };

  //! @brief Nutshell constructor
  Nutshell();

  //! @brief Nutshell destructor
  ~Nutshell();

  /** @brief Crack that shell with specified tool
    \param tool - the tool with which to crack the nut
  */
  void crack(Tool tool);

  /**
    \return Whether or not the nut is cracked
  */
  bool isCracked();

private:
  //! Our cracked state
  bool m_isCracked;
};
/** @} */ // end of nuttygroup

/**@ingroup nuttygroup
*
*/
enum class : Steamroller { YellowRoller, RedRoller, GreenRoller };

/** @addtogroup nuttygroup2
 *
 *  More documentation for the second group.
 *  @{
 */
enum class : Mousse { Chocolate, Mossy, CremeFraiche };
/** @} */ // end of nuttygroup2
