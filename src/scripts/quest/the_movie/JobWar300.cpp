// This is an automatically generated C++ script template
// Content needs to be added by hand to make it function
// In order for this script to be loaded, move it to the correct folder in <root>/scripts/

#include <Actor/Player.h>
#include "Manager/EventMgr.h"
#include <ScriptObject.h>
#include <Service.h>

// Quest Script: JobWar300_01049
// Quest Name: Pride and Duty (Will Take You from the Mountain)
// Quest ID: 66585
// Start NPC: 1000927
// End NPC: 1006746

using namespace Sapphire;

class JobWar300 : public Sapphire::ScriptAPI::EventScript
{
  private:
    // Basic quest information 
    // Quest vars / flags used
    // GetQuestBitFlag8
    // GetQuestUI8AL

    // Steps in this quest ( 0 is before accepting, 
    // 1 is first, 255 means ready for turning it in
    enum Sequence : uint8_t
    {
//      Seq0 = 0,
//      Seq1 = 1,
//      Seq2 = 2,
//      Seq3 = 3,
//      SeqFinish = 255,
    };

    // Entities found in the script data of the quest
//    static constexpr auto Actor0 = 1000927;
//    static constexpr auto Actor1 = 1006761;
//    static constexpr auto Actor2 = 1006763;
//    static constexpr auto Actor3 = 1006762;
//    static constexpr auto Actor4 = 1006746;
//    static constexpr auto Eobject0 = 2002300;
//    static constexpr auto EventActionSearch = 1;
//    static constexpr auto GearsetUnlock = 1905;
//    static constexpr auto JobstoneModel = 3;
//    static constexpr auto LocAction0Wsget = 995;
//    static constexpr auto LocLogMes = 3601;
//    static constexpr auto LocVfx1 = 241;
//    static constexpr auto LocVfx2 = 412;
//    static constexpr auto LocWs = 48;
//    static constexpr auto Questbattle0 = 66;
//    static constexpr auto Territorytype0 = 310;
//    static constexpr auto UnlockImageClass = 56;

  public:
    JobWar300() : Sapphire::ScriptAPI::EventScript( 66585 ){}; 
    ~JobWar300() = default; 

  //////////////////////////////////////////////////////////////////////
  // Event Handlers
  void onTalk( uint32_t eventId, Entity::Player& player, uint64_t actorId ) override
  {
    auto& eventMgr = Common::Service< World::Manager::EventMgr >::ref();
    auto actor = eventMgr.mapEventActorToRealActor( static_cast< uint32_t >( actorId ) );
    switch( player.getQuestSeq( getId() ) )
    {
      case 0:
      {
        player.sendUrgent( "This quest contains at least one quest battle, " );
        player.sendUrgent( "which has a high change to break the script and get stuck." );
        player.sendUrgent( "Use \"//gm quest sequence <questId> 255\" to skip broken scenes."); 
        player.sendUrgent( "### Hit NO when asked to enter quest battle ###" );
        Scene00000( player );
        break;
      }
      case 1:
      {
        Scene00002( player );
        break;
      }
      case 2:
      {
        Scene00006( player );
        break;
      }
      case 255:
      {
        Scene00007( player );
        break;
      }
    }
  }


  private:
  //////////////////////////////////////////////////////////////////////
  // Available Scenes in this quest, not necessarly all are used
  void Scene00000( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param2 == 1 )
        player.updateQuest( getId(), 1 );
    };

    player.playScene( getId(), 0, NONE, callback );
  }

  void Scene00001( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };

    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00003( player );
    };

    player.playScene( getId(), 2, NONE, callback );
  }

  void Scene00003( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.updateQuest( getId(), 2 );
    };

    player.playScene( getId(), 3, NONE, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };

    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };

    player.playScene( getId(), 5, NONE, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.updateQuest( getId(), 255 );
    };

    player.playScene( getId(), 6, NONE, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param2 == 1 )
      {
        if( player.giveQuestRewards( getId(), result.param3 ) )
        {
          player.finishQuest( getId() );
        }
      }
    };

    player.playScene( getId(), 7, NONE, callback );
  }

  void Scene00008( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.updateQuest( getId(), 255 );
    };

    player.playScene( getId(), 8, NONE, callback );
  }

};

EXPOSE_SCRIPT( JobWar300 );
