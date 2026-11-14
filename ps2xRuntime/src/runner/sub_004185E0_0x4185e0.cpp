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

// Function: sub_004185E0
// Address: 0x4185e0 - 0x418820
void sub_004185E0_0x4185e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004185E0_0x4185e0");
#endif

    switch (ctx->pc) {
        case 0x4185e0u: goto label_4185e0;
        case 0x4185e4u: goto label_4185e4;
        case 0x4185e8u: goto label_4185e8;
        case 0x4185ecu: goto label_4185ec;
        case 0x4185f0u: goto label_4185f0;
        case 0x4185f4u: goto label_4185f4;
        case 0x4185f8u: goto label_4185f8;
        case 0x4185fcu: goto label_4185fc;
        case 0x418600u: goto label_418600;
        case 0x418604u: goto label_418604;
        case 0x418608u: goto label_418608;
        case 0x41860cu: goto label_41860c;
        case 0x418610u: goto label_418610;
        case 0x418614u: goto label_418614;
        case 0x418618u: goto label_418618;
        case 0x41861cu: goto label_41861c;
        case 0x418620u: goto label_418620;
        case 0x418624u: goto label_418624;
        case 0x418628u: goto label_418628;
        case 0x41862cu: goto label_41862c;
        case 0x418630u: goto label_418630;
        case 0x418634u: goto label_418634;
        case 0x418638u: goto label_418638;
        case 0x41863cu: goto label_41863c;
        case 0x418640u: goto label_418640;
        case 0x418644u: goto label_418644;
        case 0x418648u: goto label_418648;
        case 0x41864cu: goto label_41864c;
        case 0x418650u: goto label_418650;
        case 0x418654u: goto label_418654;
        case 0x418658u: goto label_418658;
        case 0x41865cu: goto label_41865c;
        case 0x418660u: goto label_418660;
        case 0x418664u: goto label_418664;
        case 0x418668u: goto label_418668;
        case 0x41866cu: goto label_41866c;
        case 0x418670u: goto label_418670;
        case 0x418674u: goto label_418674;
        case 0x418678u: goto label_418678;
        case 0x41867cu: goto label_41867c;
        case 0x418680u: goto label_418680;
        case 0x418684u: goto label_418684;
        case 0x418688u: goto label_418688;
        case 0x41868cu: goto label_41868c;
        case 0x418690u: goto label_418690;
        case 0x418694u: goto label_418694;
        case 0x418698u: goto label_418698;
        case 0x41869cu: goto label_41869c;
        case 0x4186a0u: goto label_4186a0;
        case 0x4186a4u: goto label_4186a4;
        case 0x4186a8u: goto label_4186a8;
        case 0x4186acu: goto label_4186ac;
        case 0x4186b0u: goto label_4186b0;
        case 0x4186b4u: goto label_4186b4;
        case 0x4186b8u: goto label_4186b8;
        case 0x4186bcu: goto label_4186bc;
        case 0x4186c0u: goto label_4186c0;
        case 0x4186c4u: goto label_4186c4;
        case 0x4186c8u: goto label_4186c8;
        case 0x4186ccu: goto label_4186cc;
        case 0x4186d0u: goto label_4186d0;
        case 0x4186d4u: goto label_4186d4;
        case 0x4186d8u: goto label_4186d8;
        case 0x4186dcu: goto label_4186dc;
        case 0x4186e0u: goto label_4186e0;
        case 0x4186e4u: goto label_4186e4;
        case 0x4186e8u: goto label_4186e8;
        case 0x4186ecu: goto label_4186ec;
        case 0x4186f0u: goto label_4186f0;
        case 0x4186f4u: goto label_4186f4;
        case 0x4186f8u: goto label_4186f8;
        case 0x4186fcu: goto label_4186fc;
        case 0x418700u: goto label_418700;
        case 0x418704u: goto label_418704;
        case 0x418708u: goto label_418708;
        case 0x41870cu: goto label_41870c;
        case 0x418710u: goto label_418710;
        case 0x418714u: goto label_418714;
        case 0x418718u: goto label_418718;
        case 0x41871cu: goto label_41871c;
        case 0x418720u: goto label_418720;
        case 0x418724u: goto label_418724;
        case 0x418728u: goto label_418728;
        case 0x41872cu: goto label_41872c;
        case 0x418730u: goto label_418730;
        case 0x418734u: goto label_418734;
        case 0x418738u: goto label_418738;
        case 0x41873cu: goto label_41873c;
        case 0x418740u: goto label_418740;
        case 0x418744u: goto label_418744;
        case 0x418748u: goto label_418748;
        case 0x41874cu: goto label_41874c;
        case 0x418750u: goto label_418750;
        case 0x418754u: goto label_418754;
        case 0x418758u: goto label_418758;
        case 0x41875cu: goto label_41875c;
        case 0x418760u: goto label_418760;
        case 0x418764u: goto label_418764;
        case 0x418768u: goto label_418768;
        case 0x41876cu: goto label_41876c;
        case 0x418770u: goto label_418770;
        case 0x418774u: goto label_418774;
        case 0x418778u: goto label_418778;
        case 0x41877cu: goto label_41877c;
        case 0x418780u: goto label_418780;
        case 0x418784u: goto label_418784;
        case 0x418788u: goto label_418788;
        case 0x41878cu: goto label_41878c;
        case 0x418790u: goto label_418790;
        case 0x418794u: goto label_418794;
        case 0x418798u: goto label_418798;
        case 0x41879cu: goto label_41879c;
        case 0x4187a0u: goto label_4187a0;
        case 0x4187a4u: goto label_4187a4;
        case 0x4187a8u: goto label_4187a8;
        case 0x4187acu: goto label_4187ac;
        case 0x4187b0u: goto label_4187b0;
        case 0x4187b4u: goto label_4187b4;
        case 0x4187b8u: goto label_4187b8;
        case 0x4187bcu: goto label_4187bc;
        case 0x4187c0u: goto label_4187c0;
        case 0x4187c4u: goto label_4187c4;
        case 0x4187c8u: goto label_4187c8;
        case 0x4187ccu: goto label_4187cc;
        case 0x4187d0u: goto label_4187d0;
        case 0x4187d4u: goto label_4187d4;
        case 0x4187d8u: goto label_4187d8;
        case 0x4187dcu: goto label_4187dc;
        case 0x4187e0u: goto label_4187e0;
        case 0x4187e4u: goto label_4187e4;
        case 0x4187e8u: goto label_4187e8;
        case 0x4187ecu: goto label_4187ec;
        case 0x4187f0u: goto label_4187f0;
        case 0x4187f4u: goto label_4187f4;
        case 0x4187f8u: goto label_4187f8;
        case 0x4187fcu: goto label_4187fc;
        case 0x418800u: goto label_418800;
        case 0x418804u: goto label_418804;
        case 0x418808u: goto label_418808;
        case 0x41880cu: goto label_41880c;
        case 0x418810u: goto label_418810;
        case 0x418814u: goto label_418814;
        case 0x418818u: goto label_418818;
        case 0x41881cu: goto label_41881c;
        default: break;
    }

    ctx->pc = 0x4185e0u;

label_4185e0:
    // 0x4185e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4185e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4185e4:
    // 0x4185e4: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x4185e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_4185e8:
    // 0x4185e8: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x4185e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_4185ec:
    // 0x4185ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4185ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4185f0:
    // 0x4185f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4185f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4185f4:
    // 0x4185f4: 0x24c6d818  addiu       $a2, $a2, -0x27E8
    ctx->pc = 0x4185f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957080));
label_4185f8:
    // 0x4185f8: 0x24e7d848  addiu       $a3, $a3, -0x27B8
    ctx->pc = 0x4185f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957128));
label_4185fc:
    // 0x4185fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4185fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_418600:
    // 0x418600: 0xc1063f6  jal         func_418FD8
label_418604:
    if (ctx->pc == 0x418604u) {
        ctx->pc = 0x418604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418600u;
        // 0x418604: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418608u;
        goto label_418608;
    }
    ctx->pc = 0x418600u;
    SET_GPR_U32(ctx, 31, 0x418608u);
    ctx->pc = 0x418604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418600u;
    // 0x418604: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418600u, 0x418608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418608u;
label_418608:
    // 0x418608: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_41860c:
    // 0x41860c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41860cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418610:
    // 0x418610: 0x24c63710  addiu       $a2, $a2, 0x3710
    ctx->pc = 0x418610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14096));
label_418614:
    // 0x418614: 0x24e73768  addiu       $a3, $a3, 0x3768
    ctx->pc = 0x418614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14184));
label_418618:
    // 0x418618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41861c:
    // 0x41861c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x41861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418620:
    // 0x418620: 0xc1063f6  jal         func_418FD8
label_418624:
    if (ctx->pc == 0x418624u) {
        ctx->pc = 0x418624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418620u;
        // 0x418624: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418628u;
        goto label_418628;
    }
    ctx->pc = 0x418620u;
    SET_GPR_U32(ctx, 31, 0x418628u);
    ctx->pc = 0x418624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418620u;
    // 0x418624: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418620u, 0x418628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418628u;
label_418628:
    // 0x418628: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_41862c:
    // 0x41862c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41862cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418630:
    // 0x418630: 0x24c6d7a8  addiu       $a2, $a2, -0x2858
    ctx->pc = 0x418630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956968));
label_418634:
    // 0x418634: 0x24e7d7c0  addiu       $a3, $a3, -0x2840
    ctx->pc = 0x418634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956992));
label_418638:
    // 0x418638: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418638u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41863c:
    // 0x41863c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418640:
    // 0x418640: 0xc1063f6  jal         func_418FD8
label_418644:
    if (ctx->pc == 0x418644u) {
        ctx->pc = 0x418644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418640u;
        // 0x418644: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418648u;
        goto label_418648;
    }
    ctx->pc = 0x418640u;
    SET_GPR_U32(ctx, 31, 0x418648u);
    ctx->pc = 0x418644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418640u;
    // 0x418644: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418640u, 0x418648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418648u;
label_418648:
    // 0x418648: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_41864c:
    // 0x41864c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41864cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418650:
    // 0x418650: 0x24c6fda8  addiu       $a2, $a2, -0x258
    ctx->pc = 0x418650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966696));
label_418654:
    // 0x418654: 0x24e7fe60  addiu       $a3, $a3, -0x1A0
    ctx->pc = 0x418654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966880));
label_418658:
    // 0x418658: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418658u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41865c:
    // 0x41865c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x41865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418660:
    // 0x418660: 0xc1063f6  jal         func_418FD8
label_418664:
    if (ctx->pc == 0x418664u) {
        ctx->pc = 0x418664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418660u;
        // 0x418664: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418668u;
        goto label_418668;
    }
    ctx->pc = 0x418660u;
    SET_GPR_U32(ctx, 31, 0x418668u);
    ctx->pc = 0x418664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418660u;
    // 0x418664: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418660u, 0x418668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418668u;
label_418668:
    // 0x418668: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x418668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_41866c:
    // 0x41866c: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x41866cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_418670:
    // 0x418670: 0x24c6a2f8  addiu       $a2, $a2, -0x5D08
    ctx->pc = 0x418670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943480));
label_418674:
    // 0x418674: 0x24e7a290  addiu       $a3, $a3, -0x5D70
    ctx->pc = 0x418674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943376));
label_418678:
    // 0x418678: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41867c:
    // 0x41867c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_418680:
    // 0x418680: 0xc1063f6  jal         func_418FD8
label_418684:
    if (ctx->pc == 0x418684u) {
        ctx->pc = 0x418684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418680u;
        // 0x418684: 0x24050403  addiu       $a1, $zero, 0x403 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418688u;
        goto label_418688;
    }
    ctx->pc = 0x418680u;
    SET_GPR_U32(ctx, 31, 0x418688u);
    ctx->pc = 0x418684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418680u;
    // 0x418684: 0x24050403  addiu       $a1, $zero, 0x403 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418680u, 0x418688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418688u;
label_418688:
    // 0x418688: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_41868c:
    // 0x41868c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41868cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418690:
    // 0x418690: 0x24c626b8  addiu       $a2, $a2, 0x26B8
    ctx->pc = 0x418690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9912));
label_418694:
    // 0x418694: 0x24e72730  addiu       $a3, $a3, 0x2730
    ctx->pc = 0x418694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10032));
label_418698:
    // 0x418698: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41869c:
    // 0x41869c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4186a0:
    // 0x4186a0: 0xc1063f6  jal         func_418FD8
label_4186a4:
    if (ctx->pc == 0x4186A4u) {
        ctx->pc = 0x4186A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4186A0u;
        // 0x4186a4: 0x24050404  addiu       $a1, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4186A8u;
        goto label_4186a8;
    }
    ctx->pc = 0x4186A0u;
    SET_GPR_U32(ctx, 31, 0x4186A8u);
    ctx->pc = 0x4186A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4186A0u;
    // 0x4186a4: 0x24050404  addiu       $a1, $zero, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x4186A0u, 0x4186A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4186A8u;
label_4186a8:
    // 0x4186a8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x4186a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_4186ac:
    // 0x4186ac: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x4186acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_4186b0:
    // 0x4186b0: 0x24c68438  addiu       $a2, $a2, -0x7BC8
    ctx->pc = 0x4186b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935608));
label_4186b4:
    // 0x4186b4: 0x24e783d0  addiu       $a3, $a3, -0x7C30
    ctx->pc = 0x4186b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935504));
label_4186b8:
    // 0x4186b8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4186b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4186bc:
    // 0x4186bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4186bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4186c0:
    // 0x4186c0: 0xc1063f6  jal         func_418FD8
label_4186c4:
    if (ctx->pc == 0x4186C4u) {
        ctx->pc = 0x4186C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4186C0u;
        // 0x4186c4: 0x24050405  addiu       $a1, $zero, 0x405 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4186C8u;
        goto label_4186c8;
    }
    ctx->pc = 0x4186C0u;
    SET_GPR_U32(ctx, 31, 0x4186C8u);
    ctx->pc = 0x4186C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4186C0u;
    // 0x4186c4: 0x24050405  addiu       $a1, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x4186C0u, 0x4186C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4186C8u;
label_4186c8:
    // 0x4186c8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x4186c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_4186cc:
    // 0x4186cc: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x4186ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_4186d0:
    // 0x4186d0: 0x24c6a480  addiu       $a2, $a2, -0x5B80
    ctx->pc = 0x4186d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943872));
label_4186d4:
    // 0x4186d4: 0x24e7a620  addiu       $a3, $a3, -0x59E0
    ctx->pc = 0x4186d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944288));
label_4186d8:
    // 0x4186d8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4186d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4186dc:
    // 0x4186dc: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x4186dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4186e0:
    // 0x4186e0: 0xc1063f6  jal         func_418FD8
label_4186e4:
    if (ctx->pc == 0x4186E4u) {
        ctx->pc = 0x4186E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4186E0u;
        // 0x4186e4: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4186E8u;
        goto label_4186e8;
    }
    ctx->pc = 0x4186E0u;
    SET_GPR_U32(ctx, 31, 0x4186E8u);
    ctx->pc = 0x4186E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4186E0u;
    // 0x4186e4: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x4186E0u, 0x4186E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4186E8u;
label_4186e8:
    // 0x4186e8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x4186e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_4186ec:
    // 0x4186ec: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x4186ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_4186f0:
    // 0x4186f0: 0x24c6d0c8  addiu       $a2, $a2, -0x2F38
    ctx->pc = 0x4186f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955208));
label_4186f4:
    // 0x4186f4: 0x24e7d878  addiu       $a3, $a3, -0x2788
    ctx->pc = 0x4186f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957176));
label_4186f8:
    // 0x4186f8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4186f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4186fc:
    // 0x4186fc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x4186fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_418700:
    // 0x418700: 0xc1063f6  jal         func_418FD8
label_418704:
    if (ctx->pc == 0x418704u) {
        ctx->pc = 0x418704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418700u;
        // 0x418704: 0x24050407  addiu       $a1, $zero, 0x407 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418708u;
        goto label_418708;
    }
    ctx->pc = 0x418700u;
    SET_GPR_U32(ctx, 31, 0x418708u);
    ctx->pc = 0x418704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418700u;
    // 0x418704: 0x24050407  addiu       $a1, $zero, 0x407 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418700u, 0x418708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418708u;
label_418708:
    // 0x418708: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x418708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_41870c:
    // 0x41870c: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x41870cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_418710:
    // 0x418710: 0x24c60170  addiu       $a2, $a2, 0x170
    ctx->pc = 0x418710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
label_418714:
    // 0x418714: 0x24e7ffd8  addiu       $a3, $a3, -0x28
    ctx->pc = 0x418714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967256));
label_418718:
    // 0x418718: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418718u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41871c:
    // 0x41871c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x41871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_418720:
    // 0x418720: 0xc1063f6  jal         func_418FD8
label_418724:
    if (ctx->pc == 0x418724u) {
        ctx->pc = 0x418724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418720u;
        // 0x418724: 0x24050408  addiu       $a1, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418728u;
        goto label_418728;
    }
    ctx->pc = 0x418720u;
    SET_GPR_U32(ctx, 31, 0x418728u);
    ctx->pc = 0x418724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418720u;
    // 0x418724: 0x24050408  addiu       $a1, $zero, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418720u, 0x418728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418728u;
label_418728:
    // 0x418728: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x418728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_41872c:
    // 0x41872c: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x41872cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_418730:
    // 0x418730: 0x24c64c68  addiu       $a2, $a2, 0x4C68
    ctx->pc = 0x418730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19560));
label_418734:
    // 0x418734: 0x24e74c98  addiu       $a3, $a3, 0x4C98
    ctx->pc = 0x418734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19608));
label_418738:
    // 0x418738: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41873c:
    // 0x41873c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x41873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_418740:
    // 0x418740: 0xc1063f6  jal         func_418FD8
label_418744:
    if (ctx->pc == 0x418744u) {
        ctx->pc = 0x418744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418740u;
        // 0x418744: 0x24050409  addiu       $a1, $zero, 0x409 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418748u;
        goto label_418748;
    }
    ctx->pc = 0x418740u;
    SET_GPR_U32(ctx, 31, 0x418748u);
    ctx->pc = 0x418744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418740u;
    // 0x418744: 0x24050409  addiu       $a1, $zero, 0x409 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418740u, 0x418748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418748u;
label_418748:
    // 0x418748: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_41874c:
    // 0x41874c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41874cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418750:
    // 0x418750: 0x24c64398  addiu       $a2, $a2, 0x4398
    ctx->pc = 0x418750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17304));
label_418754:
    // 0x418754: 0x24e74410  addiu       $a3, $a3, 0x4410
    ctx->pc = 0x418754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17424));
label_418758:
    // 0x418758: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x418758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41875c:
    // 0x41875c: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x41875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_418760:
    // 0x418760: 0xc1063f6  jal         func_418FD8
label_418764:
    if (ctx->pc == 0x418764u) {
        ctx->pc = 0x418764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418760u;
        // 0x418764: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418768u;
        goto label_418768;
    }
    ctx->pc = 0x418760u;
    SET_GPR_U32(ctx, 31, 0x418768u);
    ctx->pc = 0x418764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418760u;
    // 0x418764: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418760u, 0x418768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418768u;
label_418768:
    // 0x418768: 0xc111330  jal         func_444CC0
label_41876c:
    if (ctx->pc == 0x41876Cu) {
        ctx->pc = 0x41876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418768u;
        // 0x41876c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418770u;
        goto label_418770;
    }
    ctx->pc = 0x418768u;
    SET_GPR_U32(ctx, 31, 0x418770u);
    ctx->pc = 0x41876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418768u;
    // 0x41876c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444CC0u, 0x418768u, 0x418770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418770u;
label_418770:
    // 0x418770: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x418770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_418774:
    // 0x418774: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x418774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_418778:
    // 0x418778: 0x24c646c0  addiu       $a2, $a2, 0x46C0
    ctx->pc = 0x418778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18112));
label_41877c:
    // 0x41877c: 0x24e74780  addiu       $a3, $a3, 0x4780
    ctx->pc = 0x41877cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
label_418780:
    // 0x418780: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418780u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_418784:
    // 0x418784: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x418784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_418788:
    // 0x418788: 0xc1063f6  jal         func_418FD8
label_41878c:
    if (ctx->pc == 0x41878Cu) {
        ctx->pc = 0x41878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418788u;
        // 0x41878c: 0x2405040a  addiu       $a1, $zero, 0x40A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418790u;
        goto label_418790;
    }
    ctx->pc = 0x418788u;
    SET_GPR_U32(ctx, 31, 0x418790u);
    ctx->pc = 0x41878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418788u;
    // 0x41878c: 0x2405040a  addiu       $a1, $zero, 0x40A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x418788u, 0x418790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418790u;
label_418790:
    // 0x418790: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x418790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_418794:
    // 0x418794: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x418794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_418798:
    // 0x418798: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x418798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_41879c:
    // 0x41879c: 0x24c61658  addiu       $a2, $a2, 0x1658
    ctx->pc = 0x41879cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5720));
label_4187a0:
    // 0x4187a0: 0x24e71d30  addiu       $a3, $a3, 0x1D30
    ctx->pc = 0x4187a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7472));
label_4187a4:
    // 0x4187a4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4187a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4187a8:
    // 0x4187a8: 0xc1063f6  jal         func_418FD8
label_4187ac:
    if (ctx->pc == 0x4187ACu) {
        ctx->pc = 0x4187ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187A8u;
        // 0x4187ac: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4187B0u;
        goto label_4187b0;
    }
    ctx->pc = 0x4187A8u;
    SET_GPR_U32(ctx, 31, 0x4187B0u);
    ctx->pc = 0x4187ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4187A8u;
    // 0x4187ac: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x4187A8u, 0x4187B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4187B0u;
label_4187b0:
    // 0x4187b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4187b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4187b4:
    // 0x4187b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4187b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4187b8:
    // 0x4187b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4187b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4187bc:
    // 0x4187bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4187bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4187c0:
    // 0x4187c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4187c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4187c4:
    // 0x4187c4: 0x3e00008  jr          $ra
label_4187c8:
    if (ctx->pc == 0x4187C8u) {
        ctx->pc = 0x4187C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187C4u;
        // 0x4187c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4187CCu;
        goto label_4187cc;
    }
    ctx->pc = 0x4187C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4187C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187C4u;
        // 0x4187c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4187C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4187CCu;
label_4187cc:
    // 0x4187cc: 0x0  nop
    ctx->pc = 0x4187ccu;
    // NOP
label_4187d0:
    // 0x4187d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4187d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4187d4:
    // 0x4187d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4187d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4187d8:
    // 0x4187d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4187d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4187dc:
    // 0x4187dc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x4187dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4187e0:
    // 0x4187e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4187e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4187e4:
    // 0x4187e4: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x4187e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_4187e8:
    // 0x4187e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4187e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4187ec:
    // 0x4187ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4187ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4187f0:
    // 0x4187f0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x4187f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_4187f4:
    // 0x4187f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4187f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4187f8:
    // 0x4187f8: 0x40f809  jalr        $v0
label_4187fc:
    if (ctx->pc == 0x4187FCu) {
        ctx->pc = 0x4187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187F8u;
        // 0x4187fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418800u;
        goto label_418800;
    }
    ctx->pc = 0x4187F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418800u);
        ctx->pc = 0x4187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187F8u;
        // 0x4187fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4187F8u, 0x418800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418800u;
label_418800:
    // 0x418800: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_418804:
    if (ctx->pc == 0x418804u) {
        ctx->pc = 0x418804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418800u;
        // 0x418804: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418808u;
        goto label_418808;
    }
    ctx->pc = 0x418800u;
    {
        const bool branch_taken_0x418800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x418800) {
            ctx->pc = 0x418804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418800u;
            // 0x418804: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418808u;
            goto label_418808;
        }
    }
    ctx->pc = 0x418808u;
label_418808:
    // 0x418808: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x418808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41880c:
    // 0x41880c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41880cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418810:
    // 0x418810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418814:
    // 0x418814: 0x3e00008  jr          $ra
label_418818:
    if (ctx->pc == 0x418818u) {
        ctx->pc = 0x418818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418814u;
        // 0x418818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41881Cu;
        goto label_41881c;
    }
    ctx->pc = 0x418814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418814u;
        // 0x418818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41881Cu;
label_41881c:
    // 0x41881c: 0x0  nop
    ctx->pc = 0x41881cu;
    // NOP
    ctx->pc = 0x418820u;
}
