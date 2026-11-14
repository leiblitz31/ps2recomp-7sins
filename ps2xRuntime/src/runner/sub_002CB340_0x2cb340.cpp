#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB340
// Address: 0x2cb340 - 0x2cb730
void sub_002CB340_0x2cb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB340_0x2cb340");
#endif

    switch (ctx->pc) {
        case 0x2cb340u: goto label_2cb340;
        case 0x2cb344u: goto label_2cb344;
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3ccu: goto label_2cb3cc;
        case 0x2cb3d0u: goto label_2cb3d0;
        case 0x2cb3d4u: goto label_2cb3d4;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3dcu: goto label_2cb3dc;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb3e4u: goto label_2cb3e4;
        case 0x2cb3e8u: goto label_2cb3e8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb3f0u: goto label_2cb3f0;
        case 0x2cb3f4u: goto label_2cb3f4;
        case 0x2cb3f8u: goto label_2cb3f8;
        case 0x2cb3fcu: goto label_2cb3fc;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb404u: goto label_2cb404;
        case 0x2cb408u: goto label_2cb408;
        case 0x2cb40cu: goto label_2cb40c;
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb414u: goto label_2cb414;
        case 0x2cb418u: goto label_2cb418;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb420u: goto label_2cb420;
        case 0x2cb424u: goto label_2cb424;
        case 0x2cb428u: goto label_2cb428;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb430u: goto label_2cb430;
        case 0x2cb434u: goto label_2cb434;
        case 0x2cb438u: goto label_2cb438;
        case 0x2cb43cu: goto label_2cb43c;
        case 0x2cb440u: goto label_2cb440;
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb44cu: goto label_2cb44c;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb454u: goto label_2cb454;
        case 0x2cb458u: goto label_2cb458;
        case 0x2cb45cu: goto label_2cb45c;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb464u: goto label_2cb464;
        case 0x2cb468u: goto label_2cb468;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb470u: goto label_2cb470;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb480u: goto label_2cb480;
        case 0x2cb484u: goto label_2cb484;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb48cu: goto label_2cb48c;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb494u: goto label_2cb494;
        case 0x2cb498u: goto label_2cb498;
        case 0x2cb49cu: goto label_2cb49c;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a4u: goto label_2cb4a4;
        case 0x2cb4a8u: goto label_2cb4a8;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb4b4u: goto label_2cb4b4;
        case 0x2cb4b8u: goto label_2cb4b8;
        case 0x2cb4bcu: goto label_2cb4bc;
        case 0x2cb4c0u: goto label_2cb4c0;
        case 0x2cb4c4u: goto label_2cb4c4;
        case 0x2cb4c8u: goto label_2cb4c8;
        case 0x2cb4ccu: goto label_2cb4cc;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4d4u: goto label_2cb4d4;
        case 0x2cb4d8u: goto label_2cb4d8;
        case 0x2cb4dcu: goto label_2cb4dc;
        case 0x2cb4e0u: goto label_2cb4e0;
        case 0x2cb4e4u: goto label_2cb4e4;
        case 0x2cb4e8u: goto label_2cb4e8;
        case 0x2cb4ecu: goto label_2cb4ec;
        case 0x2cb4f0u: goto label_2cb4f0;
        case 0x2cb4f4u: goto label_2cb4f4;
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb4fcu: goto label_2cb4fc;
        case 0x2cb500u: goto label_2cb500;
        case 0x2cb504u: goto label_2cb504;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb50cu: goto label_2cb50c;
        case 0x2cb510u: goto label_2cb510;
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb518u: goto label_2cb518;
        case 0x2cb51cu: goto label_2cb51c;
        case 0x2cb520u: goto label_2cb520;
        case 0x2cb524u: goto label_2cb524;
        case 0x2cb528u: goto label_2cb528;
        case 0x2cb52cu: goto label_2cb52c;
        case 0x2cb530u: goto label_2cb530;
        case 0x2cb534u: goto label_2cb534;
        case 0x2cb538u: goto label_2cb538;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb548u: goto label_2cb548;
        case 0x2cb54cu: goto label_2cb54c;
        case 0x2cb550u: goto label_2cb550;
        case 0x2cb554u: goto label_2cb554;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb55cu: goto label_2cb55c;
        case 0x2cb560u: goto label_2cb560;
        case 0x2cb564u: goto label_2cb564;
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb56cu: goto label_2cb56c;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb574u: goto label_2cb574;
        case 0x2cb578u: goto label_2cb578;
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb580u: goto label_2cb580;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb588u: goto label_2cb588;
        case 0x2cb58cu: goto label_2cb58c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb594u: goto label_2cb594;
        case 0x2cb598u: goto label_2cb598;
        case 0x2cb59cu: goto label_2cb59c;
        case 0x2cb5a0u: goto label_2cb5a0;
        case 0x2cb5a4u: goto label_2cb5a4;
        case 0x2cb5a8u: goto label_2cb5a8;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb5b0u: goto label_2cb5b0;
        case 0x2cb5b4u: goto label_2cb5b4;
        case 0x2cb5b8u: goto label_2cb5b8;
        case 0x2cb5bcu: goto label_2cb5bc;
        case 0x2cb5c0u: goto label_2cb5c0;
        case 0x2cb5c4u: goto label_2cb5c4;
        case 0x2cb5c8u: goto label_2cb5c8;
        case 0x2cb5ccu: goto label_2cb5cc;
        case 0x2cb5d0u: goto label_2cb5d0;
        case 0x2cb5d4u: goto label_2cb5d4;
        case 0x2cb5d8u: goto label_2cb5d8;
        case 0x2cb5dcu: goto label_2cb5dc;
        case 0x2cb5e0u: goto label_2cb5e0;
        case 0x2cb5e4u: goto label_2cb5e4;
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5ecu: goto label_2cb5ec;
        case 0x2cb5f0u: goto label_2cb5f0;
        case 0x2cb5f4u: goto label_2cb5f4;
        case 0x2cb5f8u: goto label_2cb5f8;
        case 0x2cb5fcu: goto label_2cb5fc;
        case 0x2cb600u: goto label_2cb600;
        case 0x2cb604u: goto label_2cb604;
        case 0x2cb608u: goto label_2cb608;
        case 0x2cb60cu: goto label_2cb60c;
        case 0x2cb610u: goto label_2cb610;
        case 0x2cb614u: goto label_2cb614;
        case 0x2cb618u: goto label_2cb618;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb620u: goto label_2cb620;
        case 0x2cb624u: goto label_2cb624;
        case 0x2cb628u: goto label_2cb628;
        case 0x2cb62cu: goto label_2cb62c;
        case 0x2cb630u: goto label_2cb630;
        case 0x2cb634u: goto label_2cb634;
        case 0x2cb638u: goto label_2cb638;
        case 0x2cb63cu: goto label_2cb63c;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb644u: goto label_2cb644;
        case 0x2cb648u: goto label_2cb648;
        case 0x2cb64cu: goto label_2cb64c;
        case 0x2cb650u: goto label_2cb650;
        case 0x2cb654u: goto label_2cb654;
        case 0x2cb658u: goto label_2cb658;
        case 0x2cb65cu: goto label_2cb65c;
        case 0x2cb660u: goto label_2cb660;
        case 0x2cb664u: goto label_2cb664;
        case 0x2cb668u: goto label_2cb668;
        case 0x2cb66cu: goto label_2cb66c;
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb674u: goto label_2cb674;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb67cu: goto label_2cb67c;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb684u: goto label_2cb684;
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb68cu: goto label_2cb68c;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb694u: goto label_2cb694;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb69cu: goto label_2cb69c;
        case 0x2cb6a0u: goto label_2cb6a0;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6acu: goto label_2cb6ac;
        case 0x2cb6b0u: goto label_2cb6b0;
        case 0x2cb6b4u: goto label_2cb6b4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6c0u: goto label_2cb6c0;
        case 0x2cb6c4u: goto label_2cb6c4;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d4u: goto label_2cb6d4;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6e0u: goto label_2cb6e0;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb6ecu: goto label_2cb6ec;
        case 0x2cb6f0u: goto label_2cb6f0;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb6fcu: goto label_2cb6fc;
        case 0x2cb700u: goto label_2cb700;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb708u: goto label_2cb708;
        case 0x2cb70cu: goto label_2cb70c;
        case 0x2cb710u: goto label_2cb710;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb724u: goto label_2cb724;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb72cu: goto label_2cb72c;
        default: break;
    }

    ctx->pc = 0x2cb340u;

label_2cb340:
    // 0x2cb340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cb344:
    // 0x2cb344: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cb344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2cb348:
    // 0x2cb348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb34c:
    // 0x2cb34c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cb350:
    // 0x2cb350: 0x3e00008  jr          $ra
label_2cb354:
    if (ctx->pc == 0x2CB354u) {
        ctx->pc = 0x2CB358u;
        goto label_2cb358;
    }
    ctx->pc = 0x2CB350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB358u;
label_2cb358:
    // 0x2cb358: 0x0  nop
    ctx->pc = 0x2cb358u;
    // NOP
label_2cb35c:
    // 0x2cb35c: 0x0  nop
    ctx->pc = 0x2cb35cu;
    // NOP
label_2cb360:
    // 0x2cb360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb364:
    // 0x2cb364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cb368:
    // 0x2cb368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2cb36c:
    // 0x2cb36c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cb36cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2cb370:
    // 0x2cb370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb374:
    // 0x2cb374: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2cb378:
    if (ctx->pc == 0x2CB378u) {
        ctx->pc = 0x2CB37Cu;
        goto label_2cb37c;
    }
    ctx->pc = 0x2CB374u;
    {
        const bool branch_taken_0x2cb374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb374) {
            ctx->pc = 0x2CB3E8u;
            goto label_2cb3e8;
        }
    }
    ctx->pc = 0x2CB37Cu;
label_2cb37c:
    // 0x2cb37c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2cb37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2cb380:
    // 0x2cb380: 0x246367d0  addiu       $v1, $v1, 0x67D0
    ctx->pc = 0x2cb380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26576));
label_2cb384:
    // 0x2cb384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb388:
    // 0x2cb388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cb388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2cb38c:
    // 0x2cb38c: 0xaf80bcc0  sw          $zero, -0x4340($gp)
    ctx->pc = 0x2cb38cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950080), GPR_U32(ctx, 0));
label_2cb390:
    // 0x2cb390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb394:
    // 0x2cb394: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2cb394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2cb398:
    // 0x2cb398: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb39c:
    // 0x2cb39c: 0xc045280  jal         func_114A00
label_2cb3a0:
    if (ctx->pc == 0x2CB3A0u) {
        ctx->pc = 0x2CB3A4u;
        goto label_2cb3a4;
    }
    ctx->pc = 0x2CB39Cu;
    SET_GPR_U32(ctx, 31, 0x2CB3A4u);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x2CB39Cu, 0x2CB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3A4u;
label_2cb3a4:
    // 0x2cb3a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3a8:
    // 0x2cb3a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb3ac:
    // 0x2cb3ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb3b0:
    // 0x2cb3b0: 0xc0b2bf8  jal         func_2CAFE0
label_2cb3b4:
    if (ctx->pc == 0x2CB3B4u) {
        ctx->pc = 0x2CB3B8u;
        goto label_2cb3b8;
    }
    ctx->pc = 0x2CB3B0u;
    SET_GPR_U32(ctx, 31, 0x2CB3B8u);
    ctx->pc = 0x2CAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAFE0u, 0x2CB3B0u, 0x2CB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3B8u;
label_2cb3b8:
    // 0x2cb3b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3bc:
    // 0x2cb3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3c0:
    // 0x2cb3c0: 0xc04f5bc  jal         func_13D6F0
label_2cb3c4:
    if (ctx->pc == 0x2CB3C4u) {
        ctx->pc = 0x2CB3C8u;
        goto label_2cb3c8;
    }
    ctx->pc = 0x2CB3C0u;
    SET_GPR_U32(ctx, 31, 0x2CB3C8u);
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x2CB3C0u, 0x2CB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3C8u;
label_2cb3c8:
    // 0x2cb3c8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cb3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb3cc:
    // 0x2cb3cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cb3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2cb3d0:
    // 0x2cb3d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb3d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb3d4:
    // 0x2cb3d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2cb3d8:
    if (ctx->pc == 0x2CB3D8u) {
        ctx->pc = 0x2CB3DCu;
        goto label_2cb3dc;
    }
    ctx->pc = 0x2CB3D4u;
    {
        const bool branch_taken_0x2cb3d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb3d4) {
            ctx->pc = 0x2CB3E8u;
            goto label_2cb3e8;
        }
    }
    ctx->pc = 0x2CB3DCu;
label_2cb3dc:
    // 0x2cb3dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3e0:
    // 0x2cb3e0: 0xc0ba070  jal         func_2E81C0
label_2cb3e4:
    if (ctx->pc == 0x2CB3E4u) {
        ctx->pc = 0x2CB3E8u;
        goto label_2cb3e8;
    }
    ctx->pc = 0x2CB3E0u;
    SET_GPR_U32(ctx, 31, 0x2CB3E8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CB3E0u, 0x2CB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3E8u;
label_2cb3e8:
    // 0x2cb3e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3ec:
    // 0x2cb3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb3f0:
    // 0x2cb3f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cb3f4:
    // 0x2cb3f4: 0x3e00008  jr          $ra
label_2cb3f8:
    if (ctx->pc == 0x2CB3F8u) {
        ctx->pc = 0x2CB3FCu;
        goto label_2cb3fc;
    }
    ctx->pc = 0x2CB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB3FCu;
label_2cb3fc:
    // 0x2cb3fc: 0x0  nop
    ctx->pc = 0x2cb3fcu;
    // NOP
label_2cb400:
    // 0x2cb400: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2cb404:
    // 0x2cb404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cb408:
    // 0x2cb408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb40c:
    // 0x2cb40c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2cb40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_2cb410:
    // 0x2cb410: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cb414:
    // 0x2cb414: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cb414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2cb418:
    // 0x2cb418: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40
    ctx->pc = 0x2cb418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
label_2cb41c:
    // 0x2cb41c: 0xc040304  jal         func_100C10
label_2cb420:
    if (ctx->pc == 0x2CB420u) {
        ctx->pc = 0x2CB424u;
        goto label_2cb424;
    }
    ctx->pc = 0x2CB41Cu;
    SET_GPR_U32(ctx, 31, 0x2CB424u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2CB41Cu, 0x2CB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB424u;
label_2cb424:
    // 0x2cb424: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2cb424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cb428:
    // 0x2cb428: 0x2785a4f0  addiu       $a1, $gp, -0x5B10
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943984));
label_2cb42c:
    // 0x2cb42c: 0xc040304  jal         func_100C10
label_2cb430:
    if (ctx->pc == 0x2CB430u) {
        ctx->pc = 0x2CB434u;
        goto label_2cb434;
    }
    ctx->pc = 0x2CB42Cu;
    SET_GPR_U32(ctx, 31, 0x2CB434u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2CB42Cu, 0x2CB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB434u;
label_2cb434:
    // 0x2cb434: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cb434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cb438:
    // 0x2cb438: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cb43c:
    // 0x2cb43c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cb440:
    // 0x2cb440: 0xc119d74  jal         func_4675D0
label_2cb444:
    if (ctx->pc == 0x2CB444u) {
        ctx->pc = 0x2CB448u;
        goto label_2cb448;
    }
    ctx->pc = 0x2CB440u;
    SET_GPR_U32(ctx, 31, 0x2CB448u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x2CB440u, 0x2CB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB448u;
label_2cb448:
    // 0x2cb448: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2cb448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cb44c:
    // 0x2cb44c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb450:
    // 0x2cb450: 0xc0402d4  jal         func_100B50
label_2cb454:
    if (ctx->pc == 0x2CB454u) {
        ctx->pc = 0x2CB458u;
        goto label_2cb458;
    }
    ctx->pc = 0x2CB450u;
    SET_GPR_U32(ctx, 31, 0x2CB458u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CB450u, 0x2CB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB458u;
label_2cb458:
    // 0x2cb458: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cb45c:
    // 0x2cb45c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb460:
    // 0x2cb460: 0xc0402d4  jal         func_100B50
label_2cb464:
    if (ctx->pc == 0x2CB464u) {
        ctx->pc = 0x2CB468u;
        goto label_2cb468;
    }
    ctx->pc = 0x2CB460u;
    SET_GPR_U32(ctx, 31, 0x2CB468u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CB460u, 0x2CB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB468u;
label_2cb468:
    // 0x2cb468: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cb468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cb46c:
    // 0x2cb46c: 0xc119db4  jal         func_4676D0
label_2cb470:
    if (ctx->pc == 0x2CB470u) {
        ctx->pc = 0x2CB474u;
        goto label_2cb474;
    }
    ctx->pc = 0x2CB46Cu;
    SET_GPR_U32(ctx, 31, 0x2CB474u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x2CB46Cu, 0x2CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB474u;
label_2cb474:
    // 0x2cb474: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2cb478:
    if (ctx->pc == 0x2CB478u) {
        ctx->pc = 0x2CB47Cu;
        goto label_2cb47c;
    }
    ctx->pc = 0x2CB474u;
    {
        const bool branch_taken_0x2cb474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb474) {
            ctx->pc = 0x2CB4CCu;
            goto label_2cb4cc;
        }
    }
    ctx->pc = 0x2CB47Cu;
label_2cb47c:
    // 0x2cb47c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cb47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cb480:
    // 0x2cb480: 0xc08ec7c  jal         func_23B1F0
label_2cb484:
    if (ctx->pc == 0x2CB484u) {
        ctx->pc = 0x2CB488u;
        goto label_2cb488;
    }
    ctx->pc = 0x2CB480u;
    SET_GPR_U32(ctx, 31, 0x2CB488u);
    ctx->pc = 0x23B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1F0u, 0x2CB480u, 0x2CB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB488u;
label_2cb488:
    // 0x2cb488: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2cb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cb48c:
    // 0x2cb48c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2cb48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2cb490:
    // 0x2cb490: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2cb490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_2cb494:
    // 0x2cb494: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cb494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2cb498:
    // 0x2cb498: 0x24a5e2e0  addiu       $a1, $a1, -0x1D20
    ctx->pc = 0x2cb498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959840));
label_2cb49c:
    // 0x2cb49c: 0xc041ba4  jal         func_106E90
label_2cb4a0:
    if (ctx->pc == 0x2CB4A0u) {
        ctx->pc = 0x2CB4A4u;
        goto label_2cb4a4;
    }
    ctx->pc = 0x2CB49Cu;
    SET_GPR_U32(ctx, 31, 0x2CB4A4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2CB49Cu, 0x2CB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4A4u;
label_2cb4a4:
    // 0x2cb4a4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2cb4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2cb4a8:
    // 0x2cb4a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cb4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cb4ac:
    // 0x2cb4ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb4b0:
    // 0x2cb4b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2cb4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2cb4b4:
    // 0x2cb4b4: 0x320f809  jalr        $t9
label_2cb4b8:
    if (ctx->pc == 0x2CB4B8u) {
        ctx->pc = 0x2CB4BCu;
        goto label_2cb4bc;
    }
    ctx->pc = 0x2CB4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB4BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB4B4u, 0x2CB4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB4BCu;
label_2cb4bc:
    // 0x2cb4bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cb4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cb4c0:
    // 0x2cb4c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb4c4:
    // 0x2cb4c4: 0xc041b74  jal         func_106DD0
label_2cb4c8:
    if (ctx->pc == 0x2CB4C8u) {
        ctx->pc = 0x2CB4CCu;
        goto label_2cb4cc;
    }
    ctx->pc = 0x2CB4C4u;
    SET_GPR_U32(ctx, 31, 0x2CB4CCu);
    ctx->pc = 0x106DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DD0u, 0x2CB4C4u, 0x2CB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4CCu;
label_2cb4cc:
    // 0x2cb4cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2cb4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2cb4d0:
    // 0x2cb4d0: 0xc0b3bf8  jal         func_2CEFE0
label_2cb4d4:
    if (ctx->pc == 0x2CB4D4u) {
        ctx->pc = 0x2CB4D8u;
        goto label_2cb4d8;
    }
    ctx->pc = 0x2CB4D0u;
    SET_GPR_U32(ctx, 31, 0x2CB4D8u);
    ctx->pc = 0x2CEFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEFE0u, 0x2CB4D0u, 0x2CB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4D8u;
label_2cb4d8:
    // 0x2cb4d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2cb4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2cb4dc:
    // 0x2cb4dc: 0xc08ec3c  jal         func_23B0F0
label_2cb4e0:
    if (ctx->pc == 0x2CB4E0u) {
        ctx->pc = 0x2CB4E4u;
        goto label_2cb4e4;
    }
    ctx->pc = 0x2CB4DCu;
    SET_GPR_U32(ctx, 31, 0x2CB4E4u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x2CB4DCu, 0x2CB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4E4u;
label_2cb4e4:
    // 0x2cb4e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2cb4e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cb4e8:
    // 0x2cb4e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cb4ec:
    // 0x2cb4ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb4f0:
    // 0x2cb4f0: 0xc119d90  jal         func_467640
label_2cb4f4:
    if (ctx->pc == 0x2CB4F4u) {
        ctx->pc = 0x2CB4F8u;
        goto label_2cb4f8;
    }
    ctx->pc = 0x2CB4F0u;
    SET_GPR_U32(ctx, 31, 0x2CB4F8u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x2CB4F0u, 0x2CB4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB4F8u;
label_2cb4f8:
    // 0x2cb4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4fc:
    // 0x2cb4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb500:
    // 0x2cb500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb504:
    // 0x2cb504: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2cb504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cb508:
    // 0x2cb508: 0x3e00008  jr          $ra
label_2cb50c:
    if (ctx->pc == 0x2CB50Cu) {
        ctx->pc = 0x2CB510u;
        goto label_2cb510;
    }
    ctx->pc = 0x2CB508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB510u;
label_2cb510:
    // 0x2cb510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2cb514:
    // 0x2cb514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb518:
    // 0x2cb518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb51c:
    // 0x2cb51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb520:
    // 0x2cb520: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cb520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2cb524:
    // 0x2cb524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cb524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb528:
    // 0x2cb528: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2cb52c:
    if (ctx->pc == 0x2CB52Cu) {
        ctx->pc = 0x2CB530u;
        goto label_2cb530;
    }
    ctx->pc = 0x2CB528u;
    {
        const bool branch_taken_0x2cb528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb528) {
            ctx->pc = 0x2CB6D8u;
            goto label_2cb6d8;
        }
    }
    ctx->pc = 0x2CB530u;
label_2cb530:
    // 0x2cb530: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cb530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb534:
    // 0x2cb534: 0x10000034  b           . + 4 + (0x34 << 2)
label_2cb538:
    if (ctx->pc == 0x2CB538u) {
        ctx->pc = 0x2CB53Cu;
        goto label_2cb53c;
    }
    ctx->pc = 0x2CB534u;
    {
        const bool branch_taken_0x2cb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb534) {
            ctx->pc = 0x2CB608u;
            goto label_2cb608;
        }
    }
    ctx->pc = 0x2CB53Cu;
label_2cb53c:
    // 0x2cb53c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb540:
    // 0x2cb540: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb544:
    // 0x2cb544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb548:
    // 0x2cb548: 0xc09d660  jal         func_275980
label_2cb54c:
    if (ctx->pc == 0x2CB54Cu) {
        ctx->pc = 0x2CB550u;
        goto label_2cb550;
    }
    ctx->pc = 0x2CB548u;
    SET_GPR_U32(ctx, 31, 0x2CB550u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB548u, 0x2CB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB550u;
label_2cb550:
    // 0x2cb550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb554:
    // 0x2cb554: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb558:
    // 0x2cb558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb55c:
    // 0x2cb55c: 0xc0b2ed0  jal         func_2CBB40
label_2cb560:
    if (ctx->pc == 0x2CB560u) {
        ctx->pc = 0x2CB564u;
        goto label_2cb564;
    }
    ctx->pc = 0x2CB55Cu;
    SET_GPR_U32(ctx, 31, 0x2CB564u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CB55Cu, 0x2CB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB564u;
label_2cb564:
    // 0x2cb564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb568:
    // 0x2cb568: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2cb56c:
    if (ctx->pc == 0x2CB56Cu) {
        ctx->pc = 0x2CB570u;
        goto label_2cb570;
    }
    ctx->pc = 0x2CB568u;
    {
        const bool branch_taken_0x2cb568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb568) {
            ctx->pc = 0x2CB604u;
            goto label_2cb604;
        }
    }
    ctx->pc = 0x2CB570u;
label_2cb570:
    // 0x2cb570: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb574:
    // 0x2cb574: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb578:
    // 0x2cb578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb57c:
    // 0x2cb57c: 0xc09d660  jal         func_275980
label_2cb580:
    if (ctx->pc == 0x2CB580u) {
        ctx->pc = 0x2CB584u;
        goto label_2cb584;
    }
    ctx->pc = 0x2CB57Cu;
    SET_GPR_U32(ctx, 31, 0x2CB584u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB57Cu, 0x2CB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB584u;
label_2cb584:
    // 0x2cb584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb588:
    // 0x2cb588: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb58c:
    // 0x2cb58c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb590:
    // 0x2cb590: 0xc0b2ed0  jal         func_2CBB40
label_2cb594:
    if (ctx->pc == 0x2CB594u) {
        ctx->pc = 0x2CB598u;
        goto label_2cb598;
    }
    ctx->pc = 0x2CB590u;
    SET_GPR_U32(ctx, 31, 0x2CB598u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CB590u, 0x2CB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB598u;
label_2cb598:
    // 0x2cb598: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cb598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb59c:
    // 0x2cb59c: 0xc0b2eac  jal         func_2CBAB0
label_2cb5a0:
    if (ctx->pc == 0x2CB5A0u) {
        ctx->pc = 0x2CB5A4u;
        goto label_2cb5a4;
    }
    ctx->pc = 0x2CB59Cu;
    SET_GPR_U32(ctx, 31, 0x2CB5A4u);
    ctx->pc = 0x2CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAB0u, 0x2CB59Cu, 0x2CB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5A4u;
label_2cb5a4:
    // 0x2cb5a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb5a8:
    // 0x2cb5a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb5ac:
    // 0x2cb5ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5b0:
    // 0x2cb5b0: 0xc09d660  jal         func_275980
label_2cb5b4:
    if (ctx->pc == 0x2CB5B4u) {
        ctx->pc = 0x2CB5B8u;
        goto label_2cb5b8;
    }
    ctx->pc = 0x2CB5B0u;
    SET_GPR_U32(ctx, 31, 0x2CB5B8u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB5B0u, 0x2CB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5B8u;
label_2cb5b8:
    // 0x2cb5b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb5bc:
    // 0x2cb5bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb5c0:
    // 0x2cb5c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5c4:
    // 0x2cb5c4: 0xc0b2ed0  jal         func_2CBB40
label_2cb5c8:
    if (ctx->pc == 0x2CB5C8u) {
        ctx->pc = 0x2CB5CCu;
        goto label_2cb5cc;
    }
    ctx->pc = 0x2CB5C4u;
    SET_GPR_U32(ctx, 31, 0x2CB5CCu);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CB5C4u, 0x2CB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5CCu;
label_2cb5cc:
    // 0x2cb5cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb5d0:
    // 0x2cb5d0: 0xc119c5c  jal         func_467170
label_2cb5d4:
    if (ctx->pc == 0x2CB5D4u) {
        ctx->pc = 0x2CB5D8u;
        goto label_2cb5d8;
    }
    ctx->pc = 0x2CB5D0u;
    SET_GPR_U32(ctx, 31, 0x2CB5D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2CB5D0u, 0x2CB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5D8u;
label_2cb5d8:
    // 0x2cb5d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb5dc:
    // 0x2cb5dc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb5e0:
    // 0x2cb5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5e4:
    // 0x2cb5e4: 0xc09d660  jal         func_275980
label_2cb5e8:
    if (ctx->pc == 0x2CB5E8u) {
        ctx->pc = 0x2CB5ECu;
        goto label_2cb5ec;
    }
    ctx->pc = 0x2CB5E4u;
    SET_GPR_U32(ctx, 31, 0x2CB5ECu);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB5E4u, 0x2CB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5ECu;
label_2cb5ec:
    // 0x2cb5ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb5f0:
    // 0x2cb5f0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb5f4:
    // 0x2cb5f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5f8:
    // 0x2cb5f8: 0xc0b2ed0  jal         func_2CBB40
label_2cb5fc:
    if (ctx->pc == 0x2CB5FCu) {
        ctx->pc = 0x2CB600u;
        goto label_2cb600;
    }
    ctx->pc = 0x2CB5F8u;
    SET_GPR_U32(ctx, 31, 0x2CB600u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CB5F8u, 0x2CB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB600u;
label_2cb600:
    // 0x2cb600: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cb600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2cb604:
    // 0x2cb604: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cb604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cb608:
    // 0x2cb608: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb60c:
    // 0x2cb60c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb610:
    // 0x2cb610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb614:
    // 0x2cb614: 0xc09d660  jal         func_275980
label_2cb618:
    if (ctx->pc == 0x2CB618u) {
        ctx->pc = 0x2CB61Cu;
        goto label_2cb61c;
    }
    ctx->pc = 0x2CB614u;
    SET_GPR_U32(ctx, 31, 0x2CB61Cu);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB614u, 0x2CB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB61Cu;
label_2cb61c:
    // 0x2cb61c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb620:
    // 0x2cb620: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb624:
    // 0x2cb624: 0xc0b2e9c  jal         func_2CBA70
label_2cb628:
    if (ctx->pc == 0x2CB628u) {
        ctx->pc = 0x2CB62Cu;
        goto label_2cb62c;
    }
    ctx->pc = 0x2CB624u;
    SET_GPR_U32(ctx, 31, 0x2CB62Cu);
    ctx->pc = 0x2CBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA70u, 0x2CB624u, 0x2CB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB62Cu;
label_2cb62c:
    // 0x2cb62c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2cb62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cb630:
    // 0x2cb630: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_2cb634:
    if (ctx->pc == 0x2CB634u) {
        ctx->pc = 0x2CB638u;
        goto label_2cb638;
    }
    ctx->pc = 0x2CB630u;
    {
        const bool branch_taken_0x2cb630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb630) {
            ctx->pc = 0x2CB53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb53c;
        }
    }
    ctx->pc = 0x2CB638u;
label_2cb638:
    // 0x2cb638: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb63c:
    // 0x2cb63c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb640:
    // 0x2cb640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb644:
    // 0x2cb644: 0xc09d660  jal         func_275980
label_2cb648:
    if (ctx->pc == 0x2CB648u) {
        ctx->pc = 0x2CB64Cu;
        goto label_2cb64c;
    }
    ctx->pc = 0x2CB644u;
    SET_GPR_U32(ctx, 31, 0x2CB64Cu);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB644u, 0x2CB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB64Cu;
label_2cb64c:
    // 0x2cb64c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb650:
    // 0x2cb650: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cb650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cb654:
    // 0x2cb654: 0xc0b2e24  jal         func_2CB890
label_2cb658:
    if (ctx->pc == 0x2CB658u) {
        ctx->pc = 0x2CB65Cu;
        goto label_2cb65c;
    }
    ctx->pc = 0x2CB654u;
    SET_GPR_U32(ctx, 31, 0x2CB65Cu);
    ctx->pc = 0x2CB890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB890u, 0x2CB654u, 0x2CB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB65Cu;
label_2cb65c:
    // 0x2cb65c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb660:
    // 0x2cb660: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb664:
    // 0x2cb664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb668:
    // 0x2cb668: 0xc09d660  jal         func_275980
label_2cb66c:
    if (ctx->pc == 0x2CB66Cu) {
        ctx->pc = 0x2CB670u;
        goto label_2cb670;
    }
    ctx->pc = 0x2CB668u;
    SET_GPR_U32(ctx, 31, 0x2CB670u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB668u, 0x2CB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB670u;
label_2cb670:
    // 0x2cb670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb674:
    // 0x2cb674: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2cb678:
    if (ctx->pc == 0x2CB678u) {
        ctx->pc = 0x2CB67Cu;
        goto label_2cb67c;
    }
    ctx->pc = 0x2CB674u;
    {
        const bool branch_taken_0x2cb674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb674) {
            ctx->pc = 0x2CB6D4u;
            goto label_2cb6d4;
        }
    }
    ctx->pc = 0x2CB67Cu;
label_2cb67c:
    // 0x2cb67c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb680:
    // 0x2cb680: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb684:
    // 0x2cb684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb688:
    // 0x2cb688: 0xc09d660  jal         func_275980
label_2cb68c:
    if (ctx->pc == 0x2CB68Cu) {
        ctx->pc = 0x2CB690u;
        goto label_2cb690;
    }
    ctx->pc = 0x2CB688u;
    SET_GPR_U32(ctx, 31, 0x2CB690u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB688u, 0x2CB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB690u;
label_2cb690:
    // 0x2cb690: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb694:
    // 0x2cb694: 0xc0b2e18  jal         func_2CB860
label_2cb698:
    if (ctx->pc == 0x2CB698u) {
        ctx->pc = 0x2CB69Cu;
        goto label_2cb69c;
    }
    ctx->pc = 0x2CB694u;
    SET_GPR_U32(ctx, 31, 0x2CB69Cu);
    ctx->pc = 0x2CB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB860u, 0x2CB694u, 0x2CB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB69Cu;
label_2cb69c:
    // 0x2cb69c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb6a0:
    // 0x2cb6a0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb6a4:
    // 0x2cb6a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb6a8:
    // 0x2cb6a8: 0xc09d660  jal         func_275980
label_2cb6ac:
    if (ctx->pc == 0x2CB6ACu) {
        ctx->pc = 0x2CB6B0u;
        goto label_2cb6b0;
    }
    ctx->pc = 0x2CB6A8u;
    SET_GPR_U32(ctx, 31, 0x2CB6B0u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB6A8u, 0x2CB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6B0u;
label_2cb6b0:
    // 0x2cb6b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cb6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb6b4:
    // 0x2cb6b4: 0xc119c5c  jal         func_467170
label_2cb6b8:
    if (ctx->pc == 0x2CB6B8u) {
        ctx->pc = 0x2CB6BCu;
        goto label_2cb6bc;
    }
    ctx->pc = 0x2CB6B4u;
    SET_GPR_U32(ctx, 31, 0x2CB6BCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2CB6B4u, 0x2CB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6BCu;
label_2cb6bc:
    // 0x2cb6bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb6c0:
    // 0x2cb6c0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb6c4:
    // 0x2cb6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb6c8:
    // 0x2cb6c8: 0xc09d660  jal         func_275980
label_2cb6cc:
    if (ctx->pc == 0x2CB6CCu) {
        ctx->pc = 0x2CB6D0u;
        goto label_2cb6d0;
    }
    ctx->pc = 0x2CB6C8u;
    SET_GPR_U32(ctx, 31, 0x2CB6D0u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CB6C8u, 0x2CB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6D0u;
label_2cb6d0:
    // 0x2cb6d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2cb6d4:
    // 0x2cb6d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cb6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cb6d8:
    // 0x2cb6d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb6dc:
    // 0x2cb6dc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb6e0:
    // 0x2cb6e0: 0xc09d650  jal         func_275940
label_2cb6e4:
    if (ctx->pc == 0x2CB6E4u) {
        ctx->pc = 0x2CB6E8u;
        goto label_2cb6e8;
    }
    ctx->pc = 0x2CB6E0u;
    SET_GPR_U32(ctx, 31, 0x2CB6E8u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2CB6E0u, 0x2CB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6E8u;
label_2cb6e8:
    // 0x2cb6e8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2cb6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cb6ec:
    // 0x2cb6ec: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
label_2cb6f0:
    if (ctx->pc == 0x2CB6F0u) {
        ctx->pc = 0x2CB6F4u;
        goto label_2cb6f4;
    }
    ctx->pc = 0x2CB6ECu;
    {
        const bool branch_taken_0x2cb6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6ec) {
            ctx->pc = 0x2CB530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb530;
        }
    }
    ctx->pc = 0x2CB6F4u;
label_2cb6f4:
    // 0x2cb6f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb6f8:
    // 0x2cb6f8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cb6fc:
    // 0x2cb6fc: 0xc0b2dcc  jal         func_2CB730
label_2cb700:
    if (ctx->pc == 0x2CB700u) {
        ctx->pc = 0x2CB704u;
        goto label_2cb704;
    }
    ctx->pc = 0x2CB6FCu;
    SET_GPR_U32(ctx, 31, 0x2CB704u);
    ctx->pc = 0x2CB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB730u, 0x2CB6FCu, 0x2CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB704u;
label_2cb704:
    // 0x2cb704: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb708:
    // 0x2cb708: 0xc08ec48  jal         func_23B120
label_2cb70c:
    if (ctx->pc == 0x2CB70Cu) {
        ctx->pc = 0x2CB710u;
        goto label_2cb710;
    }
    ctx->pc = 0x2CB708u;
    SET_GPR_U32(ctx, 31, 0x2CB710u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2CB708u, 0x2CB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB710u;
label_2cb710:
    // 0x2cb710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb714:
    // 0x2cb714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb718:
    // 0x2cb718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb71c:
    // 0x2cb71c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cb71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cb720:
    // 0x2cb720: 0x3e00008  jr          $ra
label_2cb724:
    if (ctx->pc == 0x2CB724u) {
        ctx->pc = 0x2CB728u;
        goto label_2cb728;
    }
    ctx->pc = 0x2CB720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB728u;
label_2cb728:
    // 0x2cb728: 0x0  nop
    ctx->pc = 0x2cb728u;
    // NOP
label_2cb72c:
    // 0x2cb72c: 0x0  nop
    ctx->pc = 0x2cb72cu;
    // NOP
    ctx->pc = 0x2cb730u;
}
