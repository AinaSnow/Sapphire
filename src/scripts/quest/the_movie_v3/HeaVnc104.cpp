// FFXIVTheMovie.ParserV3
#include <Actor/Player.h>
#include <ScriptObject.h>
#include <Service.h>
#include "Manager/TerritoryMgr.h"
#include "Manager/EventMgr.h"

using namespace Sapphire;

class HeaVnc104 : public Sapphire::ScriptAPI::EventScript
{
public:
  HeaVnc104() : Sapphire::ScriptAPI::EventScript( 67770 ){}; 
  ~HeaVnc104() = default; 

  //SEQ_0, 9 entries
  //SEQ_1, 10 entries
  //SEQ_255, 10 entries

  //ACTOR0 = 1016564
  //ACTOR1 = 1016565
  //ACTOR10 = 1011236
  //ACTOR2 = 1016566
  //ACTOR3 = 1016567
  //ACTOR4 = 1016568
  //ACTOR5 = 1016569
  //ACTOR6 = 1016570
  //ACTOR7 = 1016571
  //ACTOR8 = 1016572
  //ACTOR9 = 1011231
  //LOCACTOR0 = 1008193
  //LOCACTOR1 = 6184575
  //LOCACTOR2 = 6184576
  //LOCACTOR3 = 1012497

private:
  void onProgress( Entity::Player& player, uint64_t param1, uint32_t param2, uint32_t type, uint32_t param3 )
  {
    switch( player.getQuestSeq( getId() ) )
    {
      case 0:
      {
        if( param1 == 1016564 || param2 == 1016564 ) // ACTOR0 = LUCIA
        {
          Scene00000( player ); // Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown
          // +Callback Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=LUCIA
        }
        if( param1 == 1016565 || param2 == 1016565 ) // ACTOR1 = ARTOIREL
        {
          Scene00002( player ); // Scene00002: Normal(Talk, TargetCanMove), id=ARTOIREL
        }
        if( param1 == 1016566 || param2 == 1016566 ) // ACTOR2 = EMMANELLAIN
        {
          Scene00003( player ); // Scene00003: Normal(Talk, TargetCanMove), id=EMMANELLAIN
        }
        if( param1 == 1016567 || param2 == 1016567 ) // ACTOR3 = HONOROIT
        {
          Scene00004( player ); // Scene00004: Normal(Talk, TargetCanMove), id=HONOROIT
        }
        if( param1 == 1016568 || param2 == 1016568 ) // ACTOR4 = CITIZENA02233
        {
          Scene00005( player ); // Scene00005: Normal(Talk, TargetCanMove), id=CITIZENA02233
        }
        if( param1 == 1016569 || param2 == 1016569 ) // ACTOR5 = CITIZENB02233
        {
          Scene00006( player ); // Scene00006: Normal(Talk, TargetCanMove), id=CITIZENB02233
        }
        if( param1 == 1016570 || param2 == 1016570 ) // ACTOR6 = CITIZENC02233
        {
          Scene00007( player ); // Scene00007: Normal(Talk, TargetCanMove), id=CITIZENC02233
        }
        if( param1 == 1016571 || param2 == 1016571 ) // ACTOR7 = unknown
        {
          Scene00008( player ); // Scene00008: Normal(None), id=unknown
        }
        if( param1 == 1016572 || param2 == 1016572 ) // ACTOR8 = unknown
        {
          Scene00009( player ); // Scene00009: Normal(None), id=unknown
        }
        break;
      }
      case 1:
      {
        if( param1 == 1011231 || param2 == 1011231 ) // ACTOR9 = REDWALD
        {
          if( player.getQuestUI8BL( getId() ) != 1 )
          {
            Scene00010( player ); // Scene00010: Normal(Talk, TargetCanMove), id=REDWALD
            // +Callback Scene00011: Normal(Talk, TargetCanMove), id=REDWALD
          }
        }
        if( param1 == 1011236 || param2 == 1011236 ) // ACTOR10 = ROTHE
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00012( player ); // Scene00012: Normal(Talk, TargetCanMove), id=ROTHE
            // +Callback Scene00013: Normal(Talk, TargetCanMove), id=ROTHE
          }
        }
        if( param1 == 1016568 || param2 == 1016568 ) // ACTOR4 = CITIZENA02233
        {
          if( player.getQuestUI8BH( getId() ) != 1 )
          {
            Scene00014( player ); // Scene00014: Normal(Talk, TargetCanMove), id=CITIZENA02233
            // +Callback Scene00015: Normal(Talk, TargetCanMove), id=CITIZENA02233
          }
        }
        if( param1 == 1016565 || param2 == 1016565 ) // ACTOR1 = ARTOIREL
        {
          Scene00016( player ); // Scene00016: Normal(Talk, TargetCanMove), id=ARTOIREL
        }
        if( param1 == 1016566 || param2 == 1016566 ) // ACTOR2 = EMMANELLAIN
        {
          Scene00017( player ); // Scene00017: Normal(Talk, TargetCanMove), id=EMMANELLAIN
        }
        if( param1 == 1016567 || param2 == 1016567 ) // ACTOR3 = HONOROIT
        {
          Scene00018( player ); // Scene00018: Normal(Talk, TargetCanMove), id=HONOROIT
        }
        if( param1 == 1016569 || param2 == 1016569 ) // ACTOR5 = CITIZENB02233
        {
          Scene00019( player ); // Scene00019: Normal(Talk, TargetCanMove), id=CITIZENB02233
        }
        if( param1 == 1016570 || param2 == 1016570 ) // ACTOR6 = CITIZENC02233
        {
          Scene00020( player ); // Scene00020: Normal(Talk, TargetCanMove), id=CITIZENC02233
        }
        if( param1 == 1016571 || param2 == 1016571 ) // ACTOR7 = unknown
        {
          Scene00021( player ); // Scene00021: Normal(None), id=unknown
        }
        if( param1 == 1016572 || param2 == 1016572 ) // ACTOR8 = unknown
        {
          Scene00022( player ); // Scene00022: Normal(None), id=unknown
        }
        break;
      }
      case 255:
      {
        if( param1 == 1016565 || param2 == 1016565 ) // ACTOR1 = ARTOIREL
        {
          Scene00023( player ); // Scene00023: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=ARTOIREL
        }
        if( param1 == 1011231 || param2 == 1011231 ) // ACTOR9 = REDWALD
        {
          Scene00024( player ); // Scene00024: Normal(Talk, TargetCanMove), id=REDWALD
        }
        if( param1 == 1011236 || param2 == 1011236 ) // ACTOR10 = ROTHE
        {
          Scene00025( player ); // Scene00025: Normal(Talk, TargetCanMove), id=ROTHE
        }
        if( param1 == 1016566 || param2 == 1016566 ) // ACTOR2 = EMMANELLAIN
        {
          Scene00026( player ); // Scene00026: Normal(Talk, TargetCanMove), id=EMMANELLAIN
        }
        if( param1 == 1016567 || param2 == 1016567 ) // ACTOR3 = HONOROIT
        {
          Scene00027( player ); // Scene00027: Normal(Talk, TargetCanMove), id=HONOROIT
        }
        if( param1 == 1016568 || param2 == 1016568 ) // ACTOR4 = CITIZENA02233
        {
          Scene00028( player ); // Scene00028: Normal(Talk, TargetCanMove), id=CITIZENA02233
        }
        if( param1 == 1016569 || param2 == 1016569 ) // ACTOR5 = CITIZENB02233
        {
          Scene00029( player ); // Scene00029: Normal(Talk, TargetCanMove), id=CITIZENB02233
        }
        if( param1 == 1016570 || param2 == 1016570 ) // ACTOR6 = CITIZENC02233
        {
          Scene00030( player ); // Scene00030: Normal(Talk, TargetCanMove), id=CITIZENC02233
        }
        if( param1 == 1016571 || param2 == 1016571 ) // ACTOR7 = unknown
        {
          Scene00031( player ); // Scene00031: Normal(None), id=unknown
        }
        if( param1 == 1016572 || param2 == 1016572 ) // ACTOR8 = unknown
        {
          Scene00032( player ); // Scene00032: Normal(None), id=unknown
        }
        break;
      }
      default:
      {
        player.sendUrgent( "Sequence {} not defined.", player.getQuestSeq( getId() ) );
        break;
      }
    }
  }

public:
  void onTalk( uint32_t eventId, Entity::Player& player, uint64_t actorId ) override
  {
    auto& eventMgr = Common::Service< World::Manager::EventMgr >::ref();
    auto actor = eventMgr.mapEventActorToRealActor( static_cast< uint32_t >( actorId ) );
    onProgress( player, actorId, actor, 0, 0 );
  }

  void onEmote( uint64_t actorId, uint32_t eventId, uint32_t emoteId, Entity::Player& player ) override
  {
    auto& eventMgr = Common::Service< World::Manager::EventMgr >::ref();
    auto actor = eventMgr.mapEventActorToRealActor( static_cast< uint32_t >( actorId ) );
    onProgress( player, actorId, actor, 1, emoteId );
  }

  void onBNpcKill( uint32_t npcId, Entity::Player& player ) override
  {
    onProgress( player, npcId, 0, 2, 0 );
  }

  void onWithinRange( Entity::Player& player, uint32_t eventId, uint32_t param1, float x, float y, float z ) override
  {
    onProgress( player, param1, param1, 3, 0 );
  }

  void onEnterTerritory( Sapphire::Entity::Player& player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
  {
    onProgress( player, param1, param2, 4, 0 );
  }

private:
  void checkProgressSeq0( Entity::Player& player )
  {
    player.updateQuest( getId(), 1 );
  }
  void checkProgressSeq1( Entity::Player& player )
  {
    if( player.getQuestUI8BL( getId() ) == 1 )
      if( player.getQuestUI8AL( getId() ) == 1 )
        if( player.getQuestUI8BH( getId() ) == 1 )
        {
          player.setQuestUI8BL( getId(), 0 );
          player.setQuestUI8AL( getId(), 0 );
          player.setQuestUI8BH( getId(), 0 );
          player.updateQuest( getId(), 255 );
        }
  }

  void Scene00000( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 > 0 && result.param2 == 1 )
      {
        Scene00001( player );
      }
    };
    player.playScene( getId(), 0, NONE, callback );
  }
  void Scene00001( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling [BranchTrue]Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=LUCIA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      checkProgressSeq0( player );
    };
    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00002: Normal(Talk, TargetCanMove), id=ARTOIREL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 2, NONE, callback );
  }

  void Scene00003( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00003: Normal(Talk, TargetCanMove), id=EMMANELLAIN" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 3, NONE, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00004: Normal(Talk, TargetCanMove), id=HONOROIT" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00005: Normal(Talk, TargetCanMove), id=CITIZENA02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 5, NONE, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00006: Normal(Talk, TargetCanMove), id=CITIZENB02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 6, NONE, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00007: Normal(Talk, TargetCanMove), id=CITIZENC02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 7, NONE, callback );
  }

  void Scene00008( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00008: Normal(None), id=unknown" );
  }

  void Scene00009( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00009: Normal(None), id=unknown" );
  }

  void Scene00010( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00010: Normal(Talk, TargetCanMove), id=REDWALD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00011( player );
    };
    player.playScene( getId(), 10, NONE, callback );
  }
  void Scene00011( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling [BranchTrue]Scene00011: Normal(Talk, TargetCanMove), id=REDWALD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8BL( getId(), 1 );
      checkProgressSeq1( player );
    };
    player.playScene( getId(), 11, NONE, callback );
  }

  void Scene00012( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00012: Normal(Talk, TargetCanMove), id=ROTHE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00013( player );
    };
    player.playScene( getId(), 12, NONE, callback );
  }
  void Scene00013( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling [BranchTrue]Scene00013: Normal(Talk, TargetCanMove), id=ROTHE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq1( player );
    };
    player.playScene( getId(), 13, NONE, callback );
  }

  void Scene00014( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00014: Normal(Talk, TargetCanMove), id=CITIZENA02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00015( player );
    };
    player.playScene( getId(), 14, NONE, callback );
  }
  void Scene00015( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling [BranchTrue]Scene00015: Normal(Talk, TargetCanMove), id=CITIZENA02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8BH( getId(), 1 );
      checkProgressSeq1( player );
    };
    player.playScene( getId(), 15, NONE, callback );
  }

  void Scene00016( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00016: Normal(Talk, TargetCanMove), id=ARTOIREL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 16, NONE, callback );
  }

  void Scene00017( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00017: Normal(Talk, TargetCanMove), id=EMMANELLAIN" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 17, NONE, callback );
  }

  void Scene00018( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00018: Normal(Talk, TargetCanMove), id=HONOROIT" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 18, NONE, callback );
  }

  void Scene00019( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00019: Normal(Talk, TargetCanMove), id=CITIZENB02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 19, NONE, callback );
  }

  void Scene00020( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00020: Normal(Talk, TargetCanMove), id=CITIZENC02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 20, NONE, callback );
  }

  void Scene00021( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00021: Normal(None), id=unknown" );
  }

  void Scene00022( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00022: Normal(None), id=unknown" );
  }

  void Scene00023( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00023: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=ARTOIREL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 > 0 && result.param2 == 1 )
      {
        if( player.giveQuestRewards( getId(), result.param3 ) )
          player.finishQuest( getId() );
      }
    };
    player.playScene( getId(), 23, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00024( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00024: Normal(Talk, TargetCanMove), id=REDWALD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 24, NONE, callback );
  }

  void Scene00025( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00025: Normal(Talk, TargetCanMove), id=ROTHE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 25, NONE, callback );
  }

  void Scene00026( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00026: Normal(Talk, TargetCanMove), id=EMMANELLAIN" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 26, NONE, callback );
  }

  void Scene00027( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00027: Normal(Talk, TargetCanMove), id=HONOROIT" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 27, NONE, callback );
  }

  void Scene00028( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00028: Normal(Talk, TargetCanMove), id=CITIZENA02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 28, NONE, callback );
  }

  void Scene00029( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00029: Normal(Talk, TargetCanMove), id=CITIZENB02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 29, NONE, callback );
  }

  void Scene00030( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00030: Normal(Talk, TargetCanMove), id=CITIZENC02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 30, NONE, callback );
  }

  void Scene00031( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00031: Normal(None), id=unknown" );
  }

  void Scene00032( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc104:67770 calling Scene00032: Normal(None), id=unknown" );
  }
};

EXPOSE_SCRIPT( HeaVnc104 );
