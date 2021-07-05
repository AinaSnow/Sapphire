// FFXIVTheMovie.ParserV3.2
// id hint used:
//SCENE_14 = VOYNE
//SCENE_15 = VOYNE
//SCENE_16 = VOYNE
//SCENE_17 = a11
//SCENE_18 = a11
//SCENE_19 = a11
//SCENE_20 = PAWNIL
//SCENE_21 = PAWNIL
//SCENE_22 = PAWNIL
#include <Actor/Player.h>
#include <ScriptObject.h>
#include <Service.h>
#include "Manager/TerritoryMgr.h"
#include "Manager/EventMgr.h"

using namespace Sapphire;

class LucKmg103 : public Sapphire::ScriptAPI::EventScript
{
public:
  LucKmg103() : Sapphire::ScriptAPI::EventScript( 69211 ){}; 
  ~LucKmg103() = default; 

  //SEQ_0, 1 entries
  //SEQ_1, 1 entries
  //SEQ_2, 5 entries
  //SEQ_3, 6 entries
  //SEQ_4, 9 entries
  //SEQ_255, 9 entries

  //ACTOR0 = 1032451
  //ACTOR1 = 1032122
  //ACTOR10 = 1027939
  //ACTOR11 = 1027910
  //ACTOR12 = 1027909
  //ACTOR13 = 1031721
  //ACTOR14 = 1031797
  //ACTOR2 = 1031653
  //ACTOR3 = 1031722
  //ACTOR4 = 1031723
  //ACTOR5 = 1031725
  //ACTOR6 = 1031732
  //ACTOR7 = 1031733
  //ACTOR8 = 1031734
  //ACTOR9 = 1030386
  //BGMMUSICEX3NEWTHEMESECRET01 = 652
  //BGMMUSICEX3PATHOS01 = 649
  //CUTSCENE0 = 2188
  //ITEM0 = 2002904
  //LOCACTION0 = 5627
  //LOCACTORALISAIE = 1026567
  //LOCACTORALPHINAUD = 1026568
  //LOCACTORBEQLUGG = 1029471
  //LOCACTORHALRIC = 1028127
  //LOCACTORMYSTERYVOICE = 1028166
  //LOCACTORYSHTOLA = 1026571
  //LOCBINDACTOR0 = 8132193
  //LOCBINDACTOR1 = 8132194
  //LOCBINDACTOR2 = 8132192
  //LOCBINDACTOR3 = 7944340
  //LOCVFX01 = 177
  //LOCVFX02 = 289
  //POPRANGE0 = 8149860
  //TERRITORYTYPE0 = 844

private:
  void onProgress( Entity::Player& player, uint64_t param1, uint32_t param2, uint32_t type, uint32_t param3 )
  {
    switch( player.getQuestSeq( getId() ) )
    {
      case 0:
      {
        Scene00000( player ); // Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown
        // +Callback Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=ALPHINAUD
        break;
      }
      case 1:
      {
        if( type == 4 ) // BASE_ID_TERRITORY_TYPE = unknown
        {
          Scene00002( player ); // Scene00002: Normal(CutScene, AutoFadeIn), id=unknown
          break;
        }
        break;
      }
      case 2:
      {
        if( param1 == 1032122 || param2 == 1032122 ) // ACTOR1 = unknown
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00003( player ); // Scene00003: Normal(Talk, FadeIn, TargetCanMove), id=unknown
          }
          break;
        }
        if( param1 == 1031653 || param2 == 1031653 ) // ACTOR2 = MYSTERYVOICE
        {
          Scene00004( player ); // Scene00004: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        if( param1 == 1031722 || param2 == 1031722 ) // ACTOR3 = ALPHINAUD
        {
          Scene00005( player ); // Scene00005: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1031723 || param2 == 1031723 ) // ACTOR4 = ALISAIE
        {
          Scene00006( player ); // Scene00006: Normal(Talk, TargetCanMove), id=ALISAIE
          break;
        }
        if( param1 == 1031725 || param2 == 1031725 ) // ACTOR5 = YSHTOLA
        {
          Scene00007( player ); // Scene00007: Normal(Talk, TargetCanMove), id=YSHTOLA
          break;
        }
        break;
      }
      //seq 3 event item ITEM0 = UI8BH max stack ?
      case 3:
      {
        if( param1 == 1031732 || param2 == 1031732 ) // ACTOR6 = BEQLUGG
        {
          if( player.getQuestUI8AL( getId() ) != 1 )
          {
            Scene00008( player ); // Scene00008: Normal(Talk, FadeIn, TargetCanMove), id=BEQLUGG
          }
          break;
        }
        if( param1 == 1031733 || param2 == 1031733 ) // ACTOR7 = ALPHINAUD
        {
          Scene00009( player ); // Scene00009: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1031734 || param2 == 1031734 ) // ACTOR8 = ALISAIE
        {
          Scene00010( player ); // Scene00010: Normal(Talk, TargetCanMove), id=ALISAIE
          break;
        }
        if( param1 == 1030386 || param2 == 1030386 ) // ACTOR9 = HALRIC
        {
          Scene00011( player ); // Scene00011: Normal(Talk, TargetCanMove), id=HALRIC
          break;
        }
        if( param1 == 1031653 || param2 == 1031653 ) // ACTOR2 = MYSTERYVOICE
        {
          Scene00012( player ); // Scene00012: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        if( param1 == 1031725 || param2 == 1031725 ) // ACTOR5 = YSHTOLA
        {
          Scene00013( player ); // Scene00013: Normal(Talk, TargetCanMove), id=YSHTOLA
          break;
        }
        break;
      }
      //seq 4 event item ITEM0 = UI8BH max stack ?
      case 4:
      {
        if( param1 == 1027939 || param2 == 1027939 ) // ACTOR10 = VOYNE
        {
          if( player.getQuestUI8AL( getId() ) != 3 )
          {
            Scene00014( player ); // Scene00014: Normal(Inventory), id=VOYNE
            // +Callback Scene00015: Normal(Talk, TargetCanMove), id=VOYNE
            // +Callback Scene00016: Normal(Talk, TargetCanMove), id=VOYNE
          }
          break;
        }
        if( param1 == 1027910 || param2 == 1027910 ) // ACTOR11 = a11
        {
          if( player.getQuestUI8AL( getId() ) != 3 )
          {
            Scene00017( player ); // Scene00017: Normal(Inventory), id=a11
            // +Callback Scene00018: Normal(Talk, TargetCanMove, SystemTalk), id=a11
            // +Callback Scene00019: Normal(Talk, TargetCanMove, SystemTalk), id=a11
          }
          break;
        }
        if( param1 == 1027909 || param2 == 1027909 ) // ACTOR12 = PAWNIL
        {
          if( player.getQuestUI8AL( getId() ) != 3 )
          {
            Scene00020( player ); // Scene00020: Normal(Inventory), id=PAWNIL
            // +Callback Scene00021: Normal(Talk, TargetCanMove), id=PAWNIL
            // +Callback Scene00022: Normal(Talk, TargetCanMove), id=PAWNIL
          }
          break;
        }
        if( param1 == 1031732 || param2 == 1031732 ) // ACTOR6 = BEQLUGG
        {
          Scene00023( player ); // Scene00023: Normal(Talk, TargetCanMove), id=BEQLUGG
          break;
        }
        if( param1 == 1030386 || param2 == 1030386 ) // ACTOR9 = HALRIC
        {
          Scene00024( player ); // Scene00024: Normal(Talk, TargetCanMove), id=HALRIC
          break;
        }
        if( param1 == 1031721 || param2 == 1031721 ) // ACTOR13 = ALPHINAUD
        {
          Scene00025( player ); // Scene00025: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1031797 || param2 == 1031797 ) // ACTOR14 = ALISAIE
        {
          Scene00026( player ); // Scene00026: Normal(Talk, TargetCanMove), id=ALISAIE
          break;
        }
        if( param1 == 1031653 || param2 == 1031653 ) // ACTOR2 = MYSTERYVOICE
        {
          Scene00027( player ); // Scene00027: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        if( param1 == 1031725 || param2 == 1031725 ) // ACTOR5 = YSHTOLA
        {
          Scene00028( player ); // Scene00028: Normal(Talk, TargetCanMove), id=YSHTOLA
          break;
        }
        break;
      }
      case 255:
      {
        if( param1 == 1031732 || param2 == 1031732 ) // ACTOR6 = BEQLUGG
        {
          Scene00029( player ); // Scene00029: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=BEQLUGG
          break;
        }
        if( param1 == 1027939 || param2 == 1027939 ) // ACTOR10 = VOYNE
        {
          Scene00030( player ); // Scene00030: Normal(Talk, TargetCanMove), id=VOYNE
          break;
        }
        if( param1 == 1027910 || param2 == 1027910 ) // ACTOR11 = unknown
        {
          Scene00031( player ); // Scene00031: Normal(Talk, TargetCanMove, SystemTalk), id=unknown
          break;
        }
        if( param1 == 1027909 || param2 == 1027909 ) // ACTOR12 = PAWNIL
        {
          Scene00032( player ); // Scene00032: Normal(Talk, TargetCanMove), id=PAWNIL
          break;
        }
        if( param1 == 1030386 || param2 == 1030386 ) // ACTOR9 = HALRIC
        {
          Scene00033( player ); // Scene00033: Normal(Talk, TargetCanMove), id=HALRIC
          break;
        }
        if( param1 == 1031721 || param2 == 1031721 ) // ACTOR13 = ALPHINAUD
        {
          Scene00034( player ); // Scene00034: Normal(Talk, TargetCanMove), id=ALPHINAUD
          break;
        }
        if( param1 == 1031797 || param2 == 1031797 ) // ACTOR14 = ALISAIE
        {
          Scene00035( player ); // Scene00035: Normal(Talk, TargetCanMove), id=ALISAIE
          break;
        }
        if( param1 == 1031653 || param2 == 1031653 ) // ACTOR2 = MYSTERYVOICE
        {
          Scene00036( player ); // Scene00036: Normal(Talk, TargetCanMove), id=MYSTERYVOICE
          break;
        }
        if( param1 == 1031725 || param2 == 1031725 ) // ACTOR5 = YSHTOLA
        {
          Scene00037( player ); // Scene00037: Normal(Talk, TargetCanMove), id=YSHTOLA
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
    player.updateQuest( getId(), 2 );
  }
  void checkProgressSeq2( Entity::Player& player )
  {
    if( player.getQuestUI8AL( getId() ) == 1 )
    {
      player.setQuestUI8AL( getId(), 0 );
      player.updateQuest( getId(), 3 );
    }
  }
  void checkProgressSeq3( Entity::Player& player )
  {
    if( player.getQuestUI8AL( getId() ) == 1 )
    {
      player.setQuestUI8AL( getId(), 0 );
      player.updateQuest( getId(), 4 );
    }
  }
  void checkProgressSeq4( Entity::Player& player )
  {
    if( player.getQuestUI8AL( getId() ) == 3 )
    {
      player.setQuestUI8AL( getId(), 0 );
      player.setQuestUI8BH( getId(), 0 );
      player.updateQuest( getId(), 255 );
    }
  }

  void Scene00000( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00000: Normal(QuestOffer, TargetCanMove), id=unknown" );
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
    player.sendDebug( "LucKmg103:69211 calling Scene00001: Normal(Talk, NpcDespawn, QuestAccept, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      checkProgressSeq0( player );
    };
    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00002: Normal(CutScene, AutoFadeIn), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      checkProgressSeq1( player );
      player.sendDebug( "Finished with AutoFadeIn scene, calling forceZoneing..." );
      player.eventFinish( getId(), 1 );
      player.forceZoneing();
    };
    player.playScene( getId(), 2, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00003( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00003: Normal(Talk, FadeIn, TargetCanMove), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq2( player );
    };
    player.playScene( getId(), 3, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00004: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00005: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 5, NONE, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00006: Normal(Talk, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 6, NONE, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00007: Normal(Talk, TargetCanMove), id=YSHTOLA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 7, NONE, callback );
  }

  void Scene00008( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00008: Normal(Talk, FadeIn, TargetCanMove), id=BEQLUGG" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), 1 );
      checkProgressSeq3( player );
    };
    player.playScene( getId(), 8, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00009( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00009: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 9, NONE, callback );
  }

  void Scene00010( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00010: Normal(Talk, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 10, NONE, callback );
  }

  void Scene00011( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00011: Normal(Talk, TargetCanMove), id=HALRIC" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 11, NONE, callback );
  }

  void Scene00012( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00012: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 12, NONE, callback );
  }

  void Scene00013( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00013: Normal(Talk, TargetCanMove), id=YSHTOLA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 13, NONE, callback );
  }

  void Scene00014( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00014: Normal(Inventory), id=VOYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00015( player );
    };
    player.playScene( getId(), 14, NONE, callback );
  }
  void Scene00015( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00015: Normal(Talk, TargetCanMove), id=VOYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00016( player );
    };
    player.playScene( getId(), 15, NONE, callback );
  }
  void Scene00016( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00016: Normal(Talk, TargetCanMove), id=VOYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), player.getQuestUI8AL( getId() ) + 1 );
      checkProgressSeq4( player );
    };
    player.playScene( getId(), 16, NONE, callback );
  }

  void Scene00017( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00017: Normal(Inventory), id=a11" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00018( player );
    };
    player.playScene( getId(), 17, NONE, callback );
  }
  void Scene00018( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00018: Normal(Talk, TargetCanMove, SystemTalk), id=a11" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00019( player );
    };
    player.playScene( getId(), 18, NONE, callback );
  }
  void Scene00019( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00019: Normal(Talk, TargetCanMove, SystemTalk), id=a11" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), player.getQuestUI8AL( getId() ) + 1 );
      checkProgressSeq4( player );
    };
    player.playScene( getId(), 19, NONE, callback );
  }

  void Scene00020( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00020: Normal(Inventory), id=PAWNIL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00021( player );
    };
    player.playScene( getId(), 20, NONE, callback );
  }
  void Scene00021( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00021: Normal(Talk, TargetCanMove), id=PAWNIL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      Scene00022( player );
    };
    player.playScene( getId(), 21, NONE, callback );
  }
  void Scene00022( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00022: Normal(Talk, TargetCanMove), id=PAWNIL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      player.setQuestUI8AL( getId(), player.getQuestUI8AL( getId() ) + 1 );
      checkProgressSeq4( player );
    };
    player.playScene( getId(), 22, NONE, callback );
  }

  void Scene00023( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00023: Normal(Talk, TargetCanMove), id=BEQLUGG" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 23, NONE, callback );
  }

  void Scene00024( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00024: Normal(Talk, TargetCanMove), id=HALRIC" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 24, NONE, callback );
  }

  void Scene00025( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00025: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 25, NONE, callback );
  }

  void Scene00026( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00026: Normal(Talk, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 26, NONE, callback );
  }

  void Scene00027( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00027: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 27, NONE, callback );
  }

  void Scene00028( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00028: Normal(Talk, TargetCanMove), id=YSHTOLA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 28, NONE, callback );
  }

  void Scene00029( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00029: Normal(Talk, FadeIn, QuestReward, QuestComplete, TargetCanMove), id=BEQLUGG" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
      if( result.param1 > 0 && result.param2 == 1 )
      {
        if( player.giveQuestRewards( getId(), result.param3 ) )
        {
          player.finishQuest( getId() );
        }
      }
    };
    player.playScene( getId(), 29, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00030( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00030: Normal(Talk, TargetCanMove), id=VOYNE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 30, NONE, callback );
  }

  void Scene00031( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00031: Normal(Talk, TargetCanMove, SystemTalk), id=unknown" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 31, NONE, callback );
  }

  void Scene00032( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00032: Normal(Talk, TargetCanMove), id=PAWNIL" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 32, NONE, callback );
  }

  void Scene00033( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00033: Normal(Talk, TargetCanMove), id=HALRIC" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 33, NONE, callback );
  }

  void Scene00034( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00034: Normal(Talk, TargetCanMove), id=ALPHINAUD" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 34, NONE, callback );
  }

  void Scene00035( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00035: Normal(Talk, TargetCanMove), id=ALISAIE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 35, NONE, callback );
  }

  void Scene00036( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00036: Normal(Talk, TargetCanMove), id=MYSTERYVOICE" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 36, NONE, callback );
  }

  void Scene00037( Entity::Player& player )
  {
    player.sendDebug( "LucKmg103:69211 calling Scene00037: Normal(Talk, TargetCanMove), id=YSHTOLA" );
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
    };
    player.playScene( getId(), 37, NONE, callback );
  }
};

EXPOSE_SCRIPT( LucKmg103 );
