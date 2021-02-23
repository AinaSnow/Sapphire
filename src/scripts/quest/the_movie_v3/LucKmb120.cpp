// FFXIVTheMovie.ParserV3.2
#include <Actor/Player.h>
#include <ScriptObject.h>
#include <Service.h>
#include "Manager/TerritoryMgr.h"
#include "Manager/EventMgr.h"

using namespace Sapphire;

class LucKmb120 : public Sapphire::ScriptAPI::EventScript
{
public:
  LucKmb120() : Sapphire::ScriptAPI::EventScript( 68857 ){}; 
  ~LucKmb120() = default; 

  //SEQ_0, 5 entries
  //SEQ_1, 6 entries
  //SEQ_2, 6 entries
  //SEQ_255, 2 entries

  //ACTOR0 = 1029584
  //ACTOR1 = 1029585
  //ACTOR10 = 1028923
  //ACTOR11 = 1030610
  //ACTOR2 = 1029586
  //ACTOR3 = 1029587
  //ACTOR4 = 1029583
  //ACTOR5 = 1029595
  //ACTOR6 = 1029591
  //ACTOR7 = 1029592
  //ACTOR8 = 1029593
  //ACTOR9 = 1029594
  //BINDACTOR0 = 7924194
  //BINDACTOR1 = 7924192
  //BINDACTOR2 = 7924202
  //BINDACTOR3 = 7924203
  //BINDACTOR4 = 7922338
  //BINDACTOR5 = 7922339
  //BINDACTOR6 = 7922340
  //BINDACTOR7 = 7922337
  //CUTSCENE0 = 1999
  //CUTSCENE1 = 2000
  //POPRANGE0 = 8011405

private:
  void onProgress( Entity::Player& player, uint64_t param1, uint32_t param2, uint32_t type, uint32_t param3 )
  {
    switch( player.getQuestSeq( getId() ) )
    {
      case 0:
      {
        if( param1 == 1029584 || param2 == 1029584 ) // ACTOR0 = THANCRED
        {
          Scene00000( player ); // Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown
          // +Callback Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=THANCRED
          break;
        }
        if( param1 == 1029585 || param2 == 1029585 ) // ACTOR1 = RYNE
        {
          Scene00002( player ); // Scene00002: Normal(Talk, TargetCanMove), id=RYNE
          break;
        }
        if( param1 == 1029586 || param2 == 1029586 ) // ACTOR2 = ALPHINAUD
        {
          Scene00003( player ); // Scene00003: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1029587 || param2 == 1029587 ) // ACTOR3 = ALISAIE
        {
          Scene00004( player ); // Scene00004: Normal(Talk, TargetCanMove), id=ALISAIE
          break;
        }
        if( param1 == 1029583 || param2 == 1029583 ) // ACTOR4 = URIANGER
        {
          Scene00005( player ); // Scene00005: Normal(Talk, TargetCanMove), id=URIANGER
          break;
        }
        break;
      }
      case 1:
      {
        if( param1 == 1029595 || param2 == 1029595 ) // ACTOR5 = unknown
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00006( player ); // Scene00006: Normal(CutScene), id=unknown
          }
          break;
        }
        if( param1 == 1029591 || param2 == 1029591 ) // ACTOR6 = URIANGER
        {
          Scene00007( player ); // Scene00007: Normal(Talk, TargetCanMove), id=URIANGER
          break;
        }
        if( param1 == 1029592 || param2 == 1029592 ) // ACTOR7 = THANCRED
        {
          Scene00008( player ); // Scene00008: Normal(Talk, TargetCanMove), id=THANCRED
          break;
        }
        if( param1 == 1029593 || param2 == 1029593 ) // ACTOR8 = RYNE
        {
          Scene00009( player ); // Scene00009: Normal(Talk, TargetCanMove), id=RYNE
          break;
        }
        if( param1 == 1029594 || param2 == 1029594 ) // ACTOR9 = ALPHINAUD
        {
          Scene00010( player ); // Scene00010: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1028923 || param2 == 1028923 ) // ACTOR10 = MYSTERYVOICE
        {
          Scene00011( player ); // Scene00011: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        break;
      }
      case 2:
      {
        if( param1 == 1029595 || param2 == 1029595 ) // ACTOR5 = ALISAIE
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00012( player ); // Scene00012: Normal(Talk, NpcDespawn, TargetCanMove), id=ALISAIE
          }
          break;
        }
        if( param1 == 1029591 || param2 == 1029591 ) // ACTOR6 = URIANGER
        {
          Scene00013( player ); // Scene00013: Normal(Talk, TargetCanMove), id=URIANGER
          break;
        }
        if( param1 == 1029592 || param2 == 1029592 ) // ACTOR7 = THANCRED
        {
          Scene00014( player ); // Scene00014: Normal(Talk, TargetCanMove), id=THANCRED
          break;
        }
        if( param1 == 1029593 || param2 == 1029593 ) // ACTOR8 = RYNE
        {
          Scene00015( player ); // Scene00015: Normal(Talk, TargetCanMove), id=RYNE
          break;
        }
        if( param1 == 1029594 || param2 == 1029594 ) // ACTOR9 = ALPHINAUD
        {
          Scene00016( player ); // Scene00016: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1028923 || param2 == 1028923 ) // ACTOR10 = MYSTERYVOICE
        {
          Scene00017( player ); // Scene00017: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        break;
      }
      case 255:
      {
        if( param1 == 1030610 || param2 == 1030610 ) // ACTOR11 = GUIDEOFTHEPENDANTS
        {
          Scene00018( player ); // Scene00018: Normal(Talk, YesNo, QuestReward, QuestComplete, TargetCanMove, CanCancel), id=GUIDEOFTHEPENDANTS
          // +Callback Scene00019: Normal(CutScene, AutoFadeIn), id=unknown
          break;
        }
        if( param1 == 1028923 || param2 == 1028923 ) // ACTOR10 = MYSTERYVOICE
        {
          Scene00020( player ); // Scene00020: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
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
      player.updateQuest( getId(), 2 );
    }
  }
  void checkProgressSeq2( Entity::Player& player )
  {
    if( player.getQuestUI8AL( getId() ) == 1 )
    {
      player.setQuestUI8AL( getId(), 0 );
      player.updateQuest( getId(), 255 );
    }
  }

  void Scene00000( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown" );
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
    player.sendDebug( "LucKmb120:68857 calling Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=THANCRED" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      checkProgressSeq0( player );
    };
    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00002: Normal(Talk, TargetCanMove), id=RYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 2, NONE, callback );
  }

  void Scene00003( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00003: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 3, NONE, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00004: Normal(Talk, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00005: Normal(Talk, TargetCanMove), id=URIANGER" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 5, NONE, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00006: Normal(CutScene), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq1( player );
    };
    player.playScene( getId(), 6, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00007: Normal(Talk, TargetCanMove), id=URIANGER" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 7, NONE, callback );
  }

  void Scene00008( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00008: Normal(Talk, TargetCanMove), id=THANCRED" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 8, NONE, callback );
  }

  void Scene00009( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00009: Normal(Talk, TargetCanMove), id=RYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 9, NONE, callback );
  }

  void Scene00010( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00010: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 10, NONE, callback );
  }

  void Scene00011( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00011: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 11, NONE, callback );
  }

  void Scene00012( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00012: Normal(Talk, NpcDespawn, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq2( player );
    };
    player.playScene( getId(), 12, NONE, callback );
  }

  void Scene00013( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00013: Normal(Talk, TargetCanMove), id=URIANGER" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 13, NONE, callback );
  }

  void Scene00014( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00014: Normal(Talk, TargetCanMove), id=THANCRED" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 14, NONE, callback );
  }

  void Scene00015( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00015: Normal(Talk, TargetCanMove), id=RYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 15, NONE, callback );
  }

  void Scene00016( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00016: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 16, NONE, callback );
  }

  void Scene00017( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00017: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 17, NONE, callback );
  }

  void Scene00018( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00018: Normal(Talk, YesNo, QuestReward, QuestComplete, TargetCanMove, CanCancel), id=GUIDEOFTHEPENDANTS" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 > 0 && result.param2 == 1 )
      {
        Scene00019( player );
      }
    };
    player.playScene( getId(), 18, NONE, callback );
  }
  void Scene00019( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00019: Normal(CutScene, AutoFadeIn), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( player.giveQuestRewards( getId(), result.param3 ) )
      {
        player.finishQuest( getId() );
        player.sendDebug( "Finished with AutoFadeIn scene, calling forceZoneing..." );
        player.eventFinish( getId(), 1 );
        player.forceZoneing();
      }
    };
    player.playScene( getId(), 19, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00020( Entity::Player& player )
  {
    player.sendDebug( "LucKmb120:68857 calling Scene00020: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 20, NONE, callback );
  }
};

EXPOSE_SCRIPT( LucKmb120 );
