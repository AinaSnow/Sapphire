// FFXIVTheMovie.ParserV3
//fix: black screen
#include <Actor/Player.h>
#include <ScriptObject.h>
#include <Service.h>
#include "Manager/TerritoryMgr.h"
#include "Manager/EventMgr.h"

using namespace Sapphire;

class HeaVnc103 : public Sapphire::ScriptAPI::EventScript
{
public:
  HeaVnc103() : Sapphire::ScriptAPI::EventScript( 67769 ){}; 
  ~HeaVnc103() = default; 

  //SEQ_0, 1 entries
  //SEQ_1, 3 entries
  //SEQ_255, 10 entries

  //ACTOR0 = 1016560
  //ACTOR1 = 1011223
  //ACTOR10 = 1016571
  //ACTOR11 = 1016572
  //ACTOR2 = 1012163
  //ACTOR3 = 1016564
  //ACTOR4 = 1016565
  //ACTOR5 = 1016566
  //ACTOR6 = 1016567
  //ACTOR7 = 1016568
  //ACTOR8 = 1016569
  //ACTOR9 = 1016570
  //CUTSCENEN01 = 1144
  //POPRANGE0 = 5827491

private:
  void onProgress( Entity::Player& player, uint64_t param1, uint32_t param2, uint32_t type, uint32_t param3 )
  {
    switch( player.getQuestSeq( getId() ) )
    {
      case 0:
      {
        Scene00000( player ); // Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown
        // +Callback Scene00001: Normal(Talk, QuestAccept, TargetCanMove), id=ALPHINAUD
        break;
      }
      case 1:
      {
        if( param1 == 1011223 || param2 == 1011223 ) // ACTOR1 = TEMPLEKIGHTGATE
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00002( player ); // Scene00002: Normal(Talk, YesNo, TargetCanMove), id=TEMPLEKIGHTGATE
            // +Callback Scene00003: Normal(CutScene), id=unknown
          }
        }
        if( param1 == 1012163 || param2 == 1012163 ) // ACTOR2 = HANDELOUP
        {
          Scene00004( player ); // Scene00004: Normal(Talk, TargetCanMove), id=HANDELOUP
        }
        if( param1 == 1016560 || param2 == 1016560 ) // ACTOR0 = ALPHINAUD
        {
          Scene00005( player ); // Scene00005: Normal(Talk, TargetCanMove), id=ALPHINAUD
        }
        break;
      }
      case 255:
      {
        if( param1 == 1016564 || param2 == 1016564 ) // ACTOR3 = LUCIA
        {
          Scene00006( player ); // Scene00006: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=LUCIA
        }
        if( param1 == 1012163 || param2 == 1012163 ) // ACTOR2 = HANDELOUP
        {
          Scene00007( player ); // Scene00007: Normal(Talk, TargetCanMove), id=HANDELOUP
        }
        if( param1 == 1016565 || param2 == 1016565 ) // ACTOR4 = ARTOIREL
        {
          Scene00008( player ); // Scene00008: Normal(Talk, TargetCanMove), id=ARTOIREL
        }
        if( param1 == 1016566 || param2 == 1016566 ) // ACTOR5 = EMMANELLAIN
        {
          Scene00009( player ); // Scene00009: Normal(Talk, TargetCanMove), id=EMMANELLAIN
        }
        if( param1 == 1016567 || param2 == 1016567 ) // ACTOR6 = HONOROIT
        {
          Scene00010( player ); // Scene00010: Normal(Talk, TargetCanMove), id=HONOROIT
        }
        if( param1 == 1016568 || param2 == 1016568 ) // ACTOR7 = CITIZENA02233
        {
          Scene00011( player ); // Scene00011: Normal(Talk, TargetCanMove), id=CITIZENA02233
        }
        if( param1 == 1016569 || param2 == 1016569 ) // ACTOR8 = CITIZENB02233
        {
          Scene00012( player ); // Scene00012: Normal(Talk, TargetCanMove), id=CITIZENB02233
        }
        if( param1 == 1016570 || param2 == 1016570 ) // ACTOR9 = CITIZENC02233
        {
          Scene00013( player ); // Scene00013: Normal(Talk, TargetCanMove), id=CITIZENC02233
        }
        if( param1 == 1016571 || param2 == 1016571 ) // ACTOR10 = unknown
        {
          Scene00014( player ); // Scene00014: Normal(None), id=unknown
        }
        if( param1 == 1016572 || param2 == 1016572 ) // ACTOR11 = unknown
        {
          Scene00015( player ); // Scene00015: Normal(None), id=unknown
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
    if( player.getQuestUI8AL( getId() ) == 1 )
    {
      player.setQuestUI8AL( getId(), 0 );
      player.updateQuest( getId(), 255 );
    }
  }

  void Scene00000( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown" );
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
    player.sendDebug( "HeaVnc103:67769 calling [BranchTrue]Scene00001: Normal(Talk, QuestAccept, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      checkProgressSeq0( player );
    };
    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00002: Normal(Talk, YesNo, TargetCanMove), id=TEMPLEKIGHTGATE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 != 50 )
      {
        Scene00003( player );
      }
    };
    player.playScene( getId(), 2, NONE, callback );
  }
  void Scene00003( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling [BranchTrue]Scene00003: Normal(CutScene), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq1( player );
      player.eventFinish( getId(), 1 );
      player.forceZoneing( 418, 111, 24.4, -7.69, -0.3 );
    };
    player.playScene( getId(), 3, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00004: Normal(Talk, TargetCanMove), id=HANDELOUP" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00005: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 5, NONE, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00006: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=LUCIA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 > 0 && result.param2 == 1 )
      {
        if( player.giveQuestRewards( getId(), result.param3 ) )
          player.finishQuest( getId() );
      }
    };
    player.playScene( getId(), 6, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00007: Normal(Talk, TargetCanMove), id=HANDELOUP" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 7, NONE, callback );
  }

  void Scene00008( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00008: Normal(Talk, TargetCanMove), id=ARTOIREL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 8, NONE, callback );
  }

  void Scene00009( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00009: Normal(Talk, TargetCanMove), id=EMMANELLAIN" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 9, NONE, callback );
  }

  void Scene00010( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00010: Normal(Talk, TargetCanMove), id=HONOROIT" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 10, NONE, callback );
  }

  void Scene00011( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00011: Normal(Talk, TargetCanMove), id=CITIZENA02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 11, NONE, callback );
  }

  void Scene00012( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00012: Normal(Talk, TargetCanMove), id=CITIZENB02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 12, NONE, callback );
  }

  void Scene00013( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00013: Normal(Talk, TargetCanMove), id=CITIZENC02233" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 13, NONE, callback );
  }

  void Scene00014( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00014: Normal(None), id=unknown" );
  }

  void Scene00015( Entity::Player& player )
  {
    player.sendDebug( "HeaVnc103:67769 calling Scene00015: Normal(None), id=unknown" );
  }
};

EXPOSE_SCRIPT( HeaVnc103 );
