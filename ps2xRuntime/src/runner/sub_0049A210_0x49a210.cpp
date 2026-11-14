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

// Function: sub_0049A210
// Address: 0x49a210 - 0x49a638
void sub_0049A210_0x49a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A210_0x49a210");
#endif

    switch (ctx->pc) {
        case 0x49a210u: goto label_49a210;
        case 0x49a214u: goto label_49a214;
        case 0x49a218u: goto label_49a218;
        case 0x49a21cu: goto label_49a21c;
        case 0x49a220u: goto label_49a220;
        case 0x49a224u: goto label_49a224;
        case 0x49a228u: goto label_49a228;
        case 0x49a22cu: goto label_49a22c;
        case 0x49a230u: goto label_49a230;
        case 0x49a234u: goto label_49a234;
        case 0x49a238u: goto label_49a238;
        case 0x49a23cu: goto label_49a23c;
        case 0x49a240u: goto label_49a240;
        case 0x49a244u: goto label_49a244;
        case 0x49a248u: goto label_49a248;
        case 0x49a24cu: goto label_49a24c;
        case 0x49a250u: goto label_49a250;
        case 0x49a254u: goto label_49a254;
        case 0x49a258u: goto label_49a258;
        case 0x49a25cu: goto label_49a25c;
        case 0x49a260u: goto label_49a260;
        case 0x49a264u: goto label_49a264;
        case 0x49a268u: goto label_49a268;
        case 0x49a26cu: goto label_49a26c;
        case 0x49a270u: goto label_49a270;
        case 0x49a274u: goto label_49a274;
        case 0x49a278u: goto label_49a278;
        case 0x49a27cu: goto label_49a27c;
        case 0x49a280u: goto label_49a280;
        case 0x49a284u: goto label_49a284;
        case 0x49a288u: goto label_49a288;
        case 0x49a28cu: goto label_49a28c;
        case 0x49a290u: goto label_49a290;
        case 0x49a294u: goto label_49a294;
        case 0x49a298u: goto label_49a298;
        case 0x49a29cu: goto label_49a29c;
        case 0x49a2a0u: goto label_49a2a0;
        case 0x49a2a4u: goto label_49a2a4;
        case 0x49a2a8u: goto label_49a2a8;
        case 0x49a2acu: goto label_49a2ac;
        case 0x49a2b0u: goto label_49a2b0;
        case 0x49a2b4u: goto label_49a2b4;
        case 0x49a2b8u: goto label_49a2b8;
        case 0x49a2bcu: goto label_49a2bc;
        case 0x49a2c0u: goto label_49a2c0;
        case 0x49a2c4u: goto label_49a2c4;
        case 0x49a2c8u: goto label_49a2c8;
        case 0x49a2ccu: goto label_49a2cc;
        case 0x49a2d0u: goto label_49a2d0;
        case 0x49a2d4u: goto label_49a2d4;
        case 0x49a2d8u: goto label_49a2d8;
        case 0x49a2dcu: goto label_49a2dc;
        case 0x49a2e0u: goto label_49a2e0;
        case 0x49a2e4u: goto label_49a2e4;
        case 0x49a2e8u: goto label_49a2e8;
        case 0x49a2ecu: goto label_49a2ec;
        case 0x49a2f0u: goto label_49a2f0;
        case 0x49a2f4u: goto label_49a2f4;
        case 0x49a2f8u: goto label_49a2f8;
        case 0x49a2fcu: goto label_49a2fc;
        case 0x49a300u: goto label_49a300;
        case 0x49a304u: goto label_49a304;
        case 0x49a308u: goto label_49a308;
        case 0x49a30cu: goto label_49a30c;
        case 0x49a310u: goto label_49a310;
        case 0x49a314u: goto label_49a314;
        case 0x49a318u: goto label_49a318;
        case 0x49a31cu: goto label_49a31c;
        case 0x49a320u: goto label_49a320;
        case 0x49a324u: goto label_49a324;
        case 0x49a328u: goto label_49a328;
        case 0x49a32cu: goto label_49a32c;
        case 0x49a330u: goto label_49a330;
        case 0x49a334u: goto label_49a334;
        case 0x49a338u: goto label_49a338;
        case 0x49a33cu: goto label_49a33c;
        case 0x49a340u: goto label_49a340;
        case 0x49a344u: goto label_49a344;
        case 0x49a348u: goto label_49a348;
        case 0x49a34cu: goto label_49a34c;
        case 0x49a350u: goto label_49a350;
        case 0x49a354u: goto label_49a354;
        case 0x49a358u: goto label_49a358;
        case 0x49a35cu: goto label_49a35c;
        case 0x49a360u: goto label_49a360;
        case 0x49a364u: goto label_49a364;
        case 0x49a368u: goto label_49a368;
        case 0x49a36cu: goto label_49a36c;
        case 0x49a370u: goto label_49a370;
        case 0x49a374u: goto label_49a374;
        case 0x49a378u: goto label_49a378;
        case 0x49a37cu: goto label_49a37c;
        case 0x49a380u: goto label_49a380;
        case 0x49a384u: goto label_49a384;
        case 0x49a388u: goto label_49a388;
        case 0x49a38cu: goto label_49a38c;
        case 0x49a390u: goto label_49a390;
        case 0x49a394u: goto label_49a394;
        case 0x49a398u: goto label_49a398;
        case 0x49a39cu: goto label_49a39c;
        case 0x49a3a0u: goto label_49a3a0;
        case 0x49a3a4u: goto label_49a3a4;
        case 0x49a3a8u: goto label_49a3a8;
        case 0x49a3acu: goto label_49a3ac;
        case 0x49a3b0u: goto label_49a3b0;
        case 0x49a3b4u: goto label_49a3b4;
        case 0x49a3b8u: goto label_49a3b8;
        case 0x49a3bcu: goto label_49a3bc;
        case 0x49a3c0u: goto label_49a3c0;
        case 0x49a3c4u: goto label_49a3c4;
        case 0x49a3c8u: goto label_49a3c8;
        case 0x49a3ccu: goto label_49a3cc;
        case 0x49a3d0u: goto label_49a3d0;
        case 0x49a3d4u: goto label_49a3d4;
        case 0x49a3d8u: goto label_49a3d8;
        case 0x49a3dcu: goto label_49a3dc;
        case 0x49a3e0u: goto label_49a3e0;
        case 0x49a3e4u: goto label_49a3e4;
        case 0x49a3e8u: goto label_49a3e8;
        case 0x49a3ecu: goto label_49a3ec;
        case 0x49a3f0u: goto label_49a3f0;
        case 0x49a3f4u: goto label_49a3f4;
        case 0x49a3f8u: goto label_49a3f8;
        case 0x49a3fcu: goto label_49a3fc;
        case 0x49a400u: goto label_49a400;
        case 0x49a404u: goto label_49a404;
        case 0x49a408u: goto label_49a408;
        case 0x49a40cu: goto label_49a40c;
        case 0x49a410u: goto label_49a410;
        case 0x49a414u: goto label_49a414;
        case 0x49a418u: goto label_49a418;
        case 0x49a41cu: goto label_49a41c;
        case 0x49a420u: goto label_49a420;
        case 0x49a424u: goto label_49a424;
        case 0x49a428u: goto label_49a428;
        case 0x49a42cu: goto label_49a42c;
        case 0x49a430u: goto label_49a430;
        case 0x49a434u: goto label_49a434;
        case 0x49a438u: goto label_49a438;
        case 0x49a43cu: goto label_49a43c;
        case 0x49a440u: goto label_49a440;
        case 0x49a444u: goto label_49a444;
        case 0x49a448u: goto label_49a448;
        case 0x49a44cu: goto label_49a44c;
        case 0x49a450u: goto label_49a450;
        case 0x49a454u: goto label_49a454;
        case 0x49a458u: goto label_49a458;
        case 0x49a45cu: goto label_49a45c;
        case 0x49a460u: goto label_49a460;
        case 0x49a464u: goto label_49a464;
        case 0x49a468u: goto label_49a468;
        case 0x49a46cu: goto label_49a46c;
        case 0x49a470u: goto label_49a470;
        case 0x49a474u: goto label_49a474;
        case 0x49a478u: goto label_49a478;
        case 0x49a47cu: goto label_49a47c;
        case 0x49a480u: goto label_49a480;
        case 0x49a484u: goto label_49a484;
        case 0x49a488u: goto label_49a488;
        case 0x49a48cu: goto label_49a48c;
        case 0x49a490u: goto label_49a490;
        case 0x49a494u: goto label_49a494;
        case 0x49a498u: goto label_49a498;
        case 0x49a49cu: goto label_49a49c;
        case 0x49a4a0u: goto label_49a4a0;
        case 0x49a4a4u: goto label_49a4a4;
        case 0x49a4a8u: goto label_49a4a8;
        case 0x49a4acu: goto label_49a4ac;
        case 0x49a4b0u: goto label_49a4b0;
        case 0x49a4b4u: goto label_49a4b4;
        case 0x49a4b8u: goto label_49a4b8;
        case 0x49a4bcu: goto label_49a4bc;
        case 0x49a4c0u: goto label_49a4c0;
        case 0x49a4c4u: goto label_49a4c4;
        case 0x49a4c8u: goto label_49a4c8;
        case 0x49a4ccu: goto label_49a4cc;
        case 0x49a4d0u: goto label_49a4d0;
        case 0x49a4d4u: goto label_49a4d4;
        case 0x49a4d8u: goto label_49a4d8;
        case 0x49a4dcu: goto label_49a4dc;
        case 0x49a4e0u: goto label_49a4e0;
        case 0x49a4e4u: goto label_49a4e4;
        case 0x49a4e8u: goto label_49a4e8;
        case 0x49a4ecu: goto label_49a4ec;
        case 0x49a4f0u: goto label_49a4f0;
        case 0x49a4f4u: goto label_49a4f4;
        case 0x49a4f8u: goto label_49a4f8;
        case 0x49a4fcu: goto label_49a4fc;
        case 0x49a500u: goto label_49a500;
        case 0x49a504u: goto label_49a504;
        case 0x49a508u: goto label_49a508;
        case 0x49a50cu: goto label_49a50c;
        case 0x49a510u: goto label_49a510;
        case 0x49a514u: goto label_49a514;
        case 0x49a518u: goto label_49a518;
        case 0x49a51cu: goto label_49a51c;
        case 0x49a520u: goto label_49a520;
        case 0x49a524u: goto label_49a524;
        case 0x49a528u: goto label_49a528;
        case 0x49a52cu: goto label_49a52c;
        case 0x49a530u: goto label_49a530;
        case 0x49a534u: goto label_49a534;
        case 0x49a538u: goto label_49a538;
        case 0x49a53cu: goto label_49a53c;
        case 0x49a540u: goto label_49a540;
        case 0x49a544u: goto label_49a544;
        case 0x49a548u: goto label_49a548;
        case 0x49a54cu: goto label_49a54c;
        case 0x49a550u: goto label_49a550;
        case 0x49a554u: goto label_49a554;
        case 0x49a558u: goto label_49a558;
        case 0x49a55cu: goto label_49a55c;
        case 0x49a560u: goto label_49a560;
        case 0x49a564u: goto label_49a564;
        case 0x49a568u: goto label_49a568;
        case 0x49a56cu: goto label_49a56c;
        case 0x49a570u: goto label_49a570;
        case 0x49a574u: goto label_49a574;
        case 0x49a578u: goto label_49a578;
        case 0x49a57cu: goto label_49a57c;
        case 0x49a580u: goto label_49a580;
        case 0x49a584u: goto label_49a584;
        case 0x49a588u: goto label_49a588;
        case 0x49a58cu: goto label_49a58c;
        case 0x49a590u: goto label_49a590;
        case 0x49a594u: goto label_49a594;
        case 0x49a598u: goto label_49a598;
        case 0x49a59cu: goto label_49a59c;
        case 0x49a5a0u: goto label_49a5a0;
        case 0x49a5a4u: goto label_49a5a4;
        case 0x49a5a8u: goto label_49a5a8;
        case 0x49a5acu: goto label_49a5ac;
        case 0x49a5b0u: goto label_49a5b0;
        case 0x49a5b4u: goto label_49a5b4;
        case 0x49a5b8u: goto label_49a5b8;
        case 0x49a5bcu: goto label_49a5bc;
        case 0x49a5c0u: goto label_49a5c0;
        case 0x49a5c4u: goto label_49a5c4;
        case 0x49a5c8u: goto label_49a5c8;
        case 0x49a5ccu: goto label_49a5cc;
        case 0x49a5d0u: goto label_49a5d0;
        case 0x49a5d4u: goto label_49a5d4;
        case 0x49a5d8u: goto label_49a5d8;
        case 0x49a5dcu: goto label_49a5dc;
        case 0x49a5e0u: goto label_49a5e0;
        case 0x49a5e4u: goto label_49a5e4;
        case 0x49a5e8u: goto label_49a5e8;
        case 0x49a5ecu: goto label_49a5ec;
        case 0x49a5f0u: goto label_49a5f0;
        case 0x49a5f4u: goto label_49a5f4;
        case 0x49a5f8u: goto label_49a5f8;
        case 0x49a5fcu: goto label_49a5fc;
        case 0x49a600u: goto label_49a600;
        case 0x49a604u: goto label_49a604;
        case 0x49a608u: goto label_49a608;
        case 0x49a60cu: goto label_49a60c;
        case 0x49a610u: goto label_49a610;
        case 0x49a614u: goto label_49a614;
        case 0x49a618u: goto label_49a618;
        case 0x49a61cu: goto label_49a61c;
        case 0x49a620u: goto label_49a620;
        case 0x49a624u: goto label_49a624;
        case 0x49a628u: goto label_49a628;
        case 0x49a62cu: goto label_49a62c;
        case 0x49a630u: goto label_49a630;
        case 0x49a634u: goto label_49a634;
        default: break;
    }

    ctx->pc = 0x49a210u;

label_49a210:
    // 0x49a210: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x49a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49a214:
    // 0x49a214: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x49a214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49a218:
    // 0x49a218: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
label_49a21c:
    if (ctx->pc == 0x49A21Cu) {
        ctx->pc = 0x49A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A218u;
        // 0x49a21c: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A220u;
        goto label_49a220;
    }
    ctx->pc = 0x49A218u;
    {
        const bool branch_taken_0x49a218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x49A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A218u;
        // 0x49a21c: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a218) {
            ctx->pc = 0x49A238u;
            goto label_49a238;
        }
    }
    ctx->pc = 0x49A220u;
label_49a220:
    // 0x49a220: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_49a224:
    if (ctx->pc == 0x49A224u) {
        ctx->pc = 0x49A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A220u;
        // 0x49a224: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A228u;
        goto label_49a228;
    }
    ctx->pc = 0x49A220u;
    {
        const bool branch_taken_0x49a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x49A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A220u;
        // 0x49a224: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a220) {
            ctx->pc = 0x49A230u;
            goto label_49a230;
        }
    }
    ctx->pc = 0x49A228u;
label_49a228:
    // 0x49a228: 0x3e00008  jr          $ra
label_49a22c:
    if (ctx->pc == 0x49A22Cu) {
        ctx->pc = 0x49A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A228u;
        // 0x49a22c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A230u;
        goto label_49a230;
    }
    ctx->pc = 0x49A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A228u;
        // 0x49a22c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A230u;
label_49a230:
    // 0x49a230: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
label_49a234:
    if (ctx->pc == 0x49A234u) {
        ctx->pc = 0x49A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A230u;
        // 0x49a234: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A238u;
        goto label_49a238;
    }
    ctx->pc = 0x49A230u;
    {
        const bool branch_taken_0x49a230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A230u;
        // 0x49a234: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a230) {
            ctx->pc = 0x49A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a220;
        }
    }
    ctx->pc = 0x49A238u;
label_49a238:
    // 0x49a238: 0x3e00008  jr          $ra
label_49a23c:
    if (ctx->pc == 0x49A23Cu) {
        ctx->pc = 0x49A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A238u;
        // 0x49a23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A240u;
        goto label_49a240;
    }
    ctx->pc = 0x49A238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A238u;
        // 0x49a23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A240u;
label_49a240:
    // 0x49a240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49a244:
    // 0x49a244: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_49a248:
    // 0x49a248: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49a248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_49a24c:
    // 0x49a24c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x49a24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49a250:
    // 0x49a250: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x49a250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_49a254:
    // 0x49a254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a258:
    // 0x49a258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49a25c:
    // 0x49a25c: 0x2446ad70  addiu       $a2, $v0, -0x5290
    ctx->pc = 0x49a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946160));
label_49a260:
    // 0x49a260: 0xc1269c6  jal         func_49A718
label_49a264:
    if (ctx->pc == 0x49A264u) {
        ctx->pc = 0x49A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A260u;
        // 0x49a264: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A268u;
        goto label_49a268;
    }
    ctx->pc = 0x49A260u;
    SET_GPR_U32(ctx, 31, 0x49A268u);
    ctx->pc = 0x49A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A260u;
    // 0x49a264: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A260u, 0x49A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A268u;
label_49a268:
    // 0x49a268: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x49a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49a26c:
    // 0x49a26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49a270:
    // 0x49a270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x49a270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49a274:
    // 0x49a274: 0x3e00008  jr          $ra
label_49a278:
    if (ctx->pc == 0x49A278u) {
        ctx->pc = 0x49A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A274u;
        // 0x49a278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A27Cu;
        goto label_49a27c;
    }
    ctx->pc = 0x49A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A274u;
        // 0x49a278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A27Cu;
label_49a27c:
    // 0x49a27c: 0x0  nop
    ctx->pc = 0x49a27cu;
    // NOP
label_49a280:
    // 0x49a280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49a284:
    // 0x49a284: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49a284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_49a288:
    // 0x49a288: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49a288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_49a28c:
    // 0x49a28c: 0x24c6ace8  addiu       $a2, $a2, -0x5318
    ctx->pc = 0x49a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946024));
label_49a290:
    // 0x49a290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49a294:
    // 0x49a294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a298:
    // 0x49a298: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x49a298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_49a29c:
    // 0x49a29c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x49a29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49a2a0:
    // 0x49a2a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x49a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_49a2a4:
    // 0x49a2a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x49a2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a2a8:
    // 0x49a2a8: 0xc1269c6  jal         func_49A718
label_49a2ac:
    if (ctx->pc == 0x49A2ACu) {
        ctx->pc = 0x49A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2A8u;
        // 0x49a2ac: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A2B0u;
        goto label_49a2b0;
    }
    ctx->pc = 0x49A2A8u;
    SET_GPR_U32(ctx, 31, 0x49A2B0u);
    ctx->pc = 0x49A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A2A8u;
    // 0x49a2ac: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A2A8u, 0x49A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A2B0u;
label_49a2b0:
    // 0x49a2b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x49a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49a2b4:
    // 0x49a2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49a2b8:
    // 0x49a2b8: 0x3e00008  jr          $ra
label_49a2bc:
    if (ctx->pc == 0x49A2BCu) {
        ctx->pc = 0x49A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2B8u;
        // 0x49a2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A2C0u;
        goto label_49a2c0;
    }
    ctx->pc = 0x49A2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2B8u;
        // 0x49a2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A2C0u;
label_49a2c0:
    // 0x49a2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49a2c4:
    // 0x49a2c4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x49a2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49a2c8:
    // 0x49a2c8: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x49a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_49a2cc:
    // 0x49a2cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_49a2d0:
    // 0x49a2d0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x49a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_49a2d4:
    // 0x49a2d4: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49a2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_49a2d8:
    // 0x49a2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49a2dc:
    // 0x49a2dc: 0x24c6ace8  addiu       $a2, $a2, -0x5318
    ctx->pc = 0x49a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946024));
label_49a2e0:
    // 0x49a2e0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x49a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_49a2e4:
    // 0x49a2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a2e8:
    // 0x49a2e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x49a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_49a2ec:
    // 0x49a2ec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x49a2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49a2f0:
    // 0x49a2f0: 0xc1269c6  jal         func_49A718
label_49a2f4:
    if (ctx->pc == 0x49A2F4u) {
        ctx->pc = 0x49A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2F0u;
        // 0x49a2f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A2F8u;
        goto label_49a2f8;
    }
    ctx->pc = 0x49A2F0u;
    SET_GPR_U32(ctx, 31, 0x49A2F8u);
    ctx->pc = 0x49A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A2F0u;
    // 0x49a2f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A2F0u, 0x49A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A2F8u;
label_49a2f8:
    // 0x49a2f8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x49a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49a2fc:
    // 0x49a2fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x49a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_49a300:
    // 0x49a300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49a304:
    // 0x49a304: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x49a304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49a308:
    // 0x49a308: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x49a308u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_49a30c:
    // 0x49a30c: 0x3e00008  jr          $ra
label_49a310:
    if (ctx->pc == 0x49A310u) {
        ctx->pc = 0x49A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A30Cu;
        // 0x49a310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A314u;
        goto label_49a314;
    }
    ctx->pc = 0x49A30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A30Cu;
        // 0x49a310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A314u;
label_49a314:
    // 0x49a314: 0x0  nop
    ctx->pc = 0x49a314u;
    // NOP
label_49a318:
    // 0x49a318: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_49a31c:
    if (ctx->pc == 0x49A31Cu) {
        ctx->pc = 0x49A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A318u;
        // 0x49a31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A320u;
        goto label_49a320;
    }
    ctx->pc = 0x49A318u;
    {
        const bool branch_taken_0x49a318 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A318u;
        // 0x49a31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a318) {
            ctx->pc = 0x49A328u;
            goto label_49a328;
        }
    }
    ctx->pc = 0x49A320u;
label_49a320:
    // 0x49a320: 0x10000002  b           . + 4 + (0x2 << 2)
label_49a324:
    if (ctx->pc == 0x49A324u) {
        ctx->pc = 0x49A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A320u;
        // 0x49a324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A328u;
        goto label_49a328;
    }
    ctx->pc = 0x49A320u;
    {
        const bool branch_taken_0x49a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A320u;
        // 0x49a324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a320) {
            ctx->pc = 0x49A32Cu;
            goto label_49a32c;
        }
    }
    ctx->pc = 0x49A328u;
label_49a328:
    // 0x49a328: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x49a328u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_49a32c:
    // 0x49a32c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x49a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_49a330:
    // 0x49a330: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x49a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_49a334:
    // 0x49a334: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_49a338:
    if (ctx->pc == 0x49A338u) {
        ctx->pc = 0x49A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A334u;
        // 0x49a338: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A33Cu;
        goto label_49a33c;
    }
    ctx->pc = 0x49A334u;
    {
        const bool branch_taken_0x49a334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x49A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A334u;
        // 0x49a338: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a334) {
            ctx->pc = 0x49A360u;
            goto label_49a360;
        }
    }
    ctx->pc = 0x49A33Cu;
label_49a33c:
    // 0x49a33c: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x49a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_49a340:
    // 0x49a340: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x49a340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_49a344:
    // 0x49a344: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_49a348:
    if (ctx->pc == 0x49A348u) {
        ctx->pc = 0x49A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A344u;
        // 0x49a348: 0x2462ffc0  addiu       $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A34Cu;
        goto label_49a34c;
    }
    ctx->pc = 0x49A344u;
    {
        const bool branch_taken_0x49a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A344u;
        // 0x49a348: 0x2462ffc0  addiu       $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a344) {
            ctx->pc = 0x49A350u;
            goto label_49a350;
        }
    }
    ctx->pc = 0x49A34Cu;
label_49a34c:
    // 0x49a34c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_49a350:
    // 0x49a350: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49a354:
    // 0x49a354: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49a354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_49a358:
    // 0x49a358: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
label_49a35c:
    if (ctx->pc == 0x49A35Cu) {
        ctx->pc = 0x49A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A358u;
        // 0x49a35c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A360u;
        goto label_49a360;
    }
    ctx->pc = 0x49A358u;
    {
        const bool branch_taken_0x49a358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x49A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A358u;
        // 0x49a35c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a358) {
            ctx->pc = 0x49A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a340;
        }
    }
    ctx->pc = 0x49A360u;
label_49a360:
    // 0x49a360: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_49a364:
    if (ctx->pc == 0x49A364u) {
        ctx->pc = 0x49A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A360u;
        // 0x49a364: 0x106182b  sltu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A368u;
        goto label_49a368;
    }
    ctx->pc = 0x49A360u;
    {
        const bool branch_taken_0x49a360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A360u;
        // 0x49a364: 0x106182b  sltu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a360) {
            ctx->pc = 0x49A374u;
            goto label_49a374;
        }
    }
    ctx->pc = 0x49A368u;
label_49a368:
    // 0x49a368: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x49a368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49a36c:
    // 0x49a36c: 0x3e00008  jr          $ra
label_49a370:
    if (ctx->pc == 0x49A370u) {
        ctx->pc = 0x49A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A36Cu;
        // 0x49a370: 0x103100b  movn        $v0, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A374u;
        goto label_49a374;
    }
    ctx->pc = 0x49A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A36Cu;
        // 0x49a370: 0x103100b  movn        $v0, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A374u;
label_49a374:
    // 0x49a374: 0x3e00008  jr          $ra
label_49a378:
    if (ctx->pc == 0x49A378u) {
        ctx->pc = 0x49A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A374u;
        // 0x49a378: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A37Cu;
        goto label_49a37c;
    }
    ctx->pc = 0x49A374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A374u;
        // 0x49a378: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A37Cu;
label_49a37c:
    // 0x49a37c: 0x0  nop
    ctx->pc = 0x49a37cu;
    // NOP
label_49a380:
    // 0x49a380: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x49a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_49a384:
    // 0x49a384: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49a388:
    // 0x49a388: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x49a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_49a38c:
    // 0x49a38c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_49a390:
    // 0x49a390: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x49a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_49a394:
    // 0x49a394: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x49a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_49a398:
    // 0x49a398: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x49a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_49a39c:
    // 0x49a39c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x49a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_49a3a0:
    // 0x49a3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a3a4:
    // 0x49a3a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x49a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_49a3a8:
    // 0x49a3a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_49a3ac:
    // 0x49a3ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49a3b0:
    if (ctx->pc == 0x49A3B0u) {
        ctx->pc = 0x49A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3ACu;
        // 0x49a3b0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A3B4u;
        goto label_49a3b4;
    }
    ctx->pc = 0x49A3ACu;
    {
        const bool branch_taken_0x49a3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3ACu;
        // 0x49a3b0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3ac) {
            ctx->pc = 0x49A3BCu;
            goto label_49a3bc;
        }
    }
    ctx->pc = 0x49A3B4u;
label_49a3b4:
    // 0x49a3b4: 0x10000028  b           . + 4 + (0x28 << 2)
label_49a3b8:
    if (ctx->pc == 0x49A3B8u) {
        ctx->pc = 0x49A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3B4u;
        // 0x49a3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A3BCu;
        goto label_49a3bc;
    }
    ctx->pc = 0x49A3B4u;
    {
        const bool branch_taken_0x49a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3B4u;
        // 0x49a3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3b4) {
            ctx->pc = 0x49A458u;
            goto label_49a458;
        }
    }
    ctx->pc = 0x49A3BCu;
label_49a3bc:
    // 0x49a3bc: 0x8f90c190  lw          $s0, -0x3E70($gp)
    ctx->pc = 0x49a3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
label_49a3c0:
    // 0x49a3c0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_49a3c4:
    // 0x49a3c4: 0x2454ac78  addiu       $s4, $v0, -0x5388
    ctx->pc = 0x49a3c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945912));
label_49a3c8:
    // 0x49a3c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x49a3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49a3cc:
    // 0x49a3cc: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x49a3ccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_49a3d0:
    // 0x49a3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a3d4:
    // 0x49a3d4: 0x280f809  jalr        $s4
label_49a3d8:
    if (ctx->pc == 0x49A3D8u) {
        ctx->pc = 0x49A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3D4u;
        // 0x49a3d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A3DCu;
        goto label_49a3dc;
    }
    ctx->pc = 0x49A3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x49A3DCu);
        ctx->pc = 0x49A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3D4u;
        // 0x49a3d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A3D4u, 0x49A3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A3DCu;
label_49a3dc:
    // 0x49a3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a3e0:
    // 0x49a3e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_49a3e4:
    if (ctx->pc == 0x49A3E4u) {
        ctx->pc = 0x49A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E0u;
        // 0x49a3e4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A3E8u;
        goto label_49a3e8;
    }
    ctx->pc = 0x49A3E0u;
    {
        const bool branch_taken_0x49a3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E0u;
        // 0x49a3e4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3e0) {
            ctx->pc = 0x49A3F0u;
            goto label_49a3f0;
        }
    }
    ctx->pc = 0x49A3E8u;
label_49a3e8:
    // 0x49a3e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_49a3ec:
    if (ctx->pc == 0x49A3ECu) {
        ctx->pc = 0x49A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E8u;
        // 0x49a3ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A3F0u;
        goto label_49a3f0;
    }
    ctx->pc = 0x49A3E8u;
    {
        const bool branch_taken_0x49a3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E8u;
        // 0x49a3ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3e8) {
            ctx->pc = 0x49A450u;
            goto label_49a450;
        }
    }
    ctx->pc = 0x49A3F0u;
label_49a3f0:
    // 0x49a3f0: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x49a3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49a3f4:
    // 0x49a3f4: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x49a3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49a3f8:
    // 0x49a3f8: 0x12320014  beq         $s1, $s2, . + 4 + (0x14 << 2)
label_49a3fc:
    if (ctx->pc == 0x49A3FCu) {
        ctx->pc = 0x49A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3F8u;
        // 0x49a3fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A400u;
        goto label_49a400;
    }
    ctx->pc = 0x49A3F8u;
    {
        const bool branch_taken_0x49a3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x49A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3F8u;
        // 0x49a3fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3f8) {
            ctx->pc = 0x49A44Cu;
            goto label_49a44c;
        }
    }
    ctx->pc = 0x49A400u;
label_49a400:
    // 0x49a400: 0x2630ffe8  addiu       $s0, $s1, -0x18
    ctx->pc = 0x49a400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
label_49a404:
    // 0x49a404: 0x0  nop
    ctx->pc = 0x49a404u;
    // NOP
label_49a408:
    // 0x49a408: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_49a40c:
    // 0x49a40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49a40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a410:
    // 0x49a410: 0x280f809  jalr        $s4
label_49a414:
    if (ctx->pc == 0x49A414u) {
        ctx->pc = 0x49A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A410u;
        // 0x49a414: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A418u;
        goto label_49a418;
    }
    ctx->pc = 0x49A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x49A418u);
        ctx->pc = 0x49A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A410u;
        // 0x49a414: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A410u, 0x49A418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A418u;
label_49a418:
    // 0x49a418: 0x1056fff3  beq         $v0, $s6, . + 4 + (-0xD << 2)
label_49a41c:
    if (ctx->pc == 0x49A41Cu) {
        ctx->pc = 0x49A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A418u;
        // 0x49a41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A420u;
        goto label_49a420;
    }
    ctx->pc = 0x49A418u;
    {
        const bool branch_taken_0x49a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x49A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A418u;
        // 0x49a41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a418) {
            ctx->pc = 0x49A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a3e8;
        }
    }
    ctx->pc = 0x49A420u;
label_49a420:
    // 0x49a420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a424:
    // 0x49a424: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49a424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49a428:
    // 0x49a428: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x49a428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49a42c:
    // 0x49a42c: 0xc1269c6  jal         func_49A718
label_49a430:
    if (ctx->pc == 0x49A430u) {
        ctx->pc = 0x49A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A42Cu;
        // 0x49a430: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A434u;
        goto label_49a434;
    }
    ctx->pc = 0x49A42Cu;
    SET_GPR_U32(ctx, 31, 0x49A434u);
    ctx->pc = 0x49A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A42Cu;
    // 0x49a430: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A42Cu, 0x49A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A434u;
label_49a434:
    // 0x49a434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49a434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49a438:
    // 0x49a438: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_49a43c:
    if (ctx->pc == 0x49A43Cu) {
        ctx->pc = 0x49A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A438u;
        // 0x49a43c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A440u;
        goto label_49a440;
    }
    ctx->pc = 0x49A438u;
    {
        const bool branch_taken_0x49a438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A438u;
        // 0x49a43c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a438) {
            ctx->pc = 0x49A450u;
            goto label_49a450;
        }
    }
    ctx->pc = 0x49A440u;
label_49a440:
    // 0x49a440: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x49a440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49a444:
    // 0x49a444: 0x1632fff0  bne         $s1, $s2, . + 4 + (-0x10 << 2)
label_49a448:
    if (ctx->pc == 0x49A448u) {
        ctx->pc = 0x49A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A444u;
        // 0x49a448: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A44Cu;
        goto label_49a44c;
    }
    ctx->pc = 0x49A444u;
    {
        const bool branch_taken_0x49a444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x49A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A444u;
        // 0x49a448: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a444) {
            ctx->pc = 0x49A408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a408;
        }
    }
    ctx->pc = 0x49A44Cu;
label_49a44c:
    // 0x49a44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a450:
    // 0x49a450: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x49a450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_49a454:
    // 0x49a454: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49a454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49a458:
    // 0x49a458: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x49a458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49a45c:
    // 0x49a45c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x49a45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49a460:
    // 0x49a460: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x49a460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49a464:
    // 0x49a464: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49a464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49a468:
    // 0x49a468: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x49a468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a46c:
    // 0x49a46c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x49a46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a470:
    // 0x49a470: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x49a470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a474:
    // 0x49a474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a478:
    // 0x49a478: 0x3e00008  jr          $ra
label_49a47c:
    if (ctx->pc == 0x49A47Cu) {
        ctx->pc = 0x49A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A478u;
        // 0x49a47c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A480u;
        goto label_49a480;
    }
    ctx->pc = 0x49A478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A478u;
        // 0x49a47c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A480u;
label_49a480:
    // 0x49a480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49a484:
    // 0x49a484: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x49a484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_49a488:
    // 0x49a488: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49a48c:
    // 0x49a48c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49a490:
    // 0x49a490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49a490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a494:
    // 0x49a494: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49a498:
    // 0x49a498: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x49a498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49a49c:
    // 0x49a49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a4a0:
    // 0x49a4a0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
label_49a4a4:
    if (ctx->pc == 0x49A4A4u) {
        ctx->pc = 0x49A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4A0u;
        // 0x49a4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A4A8u;
        goto label_49a4a8;
    }
    ctx->pc = 0x49A4A0u;
    {
        const bool branch_taken_0x49a4a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4A0u;
        // 0x49a4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4a0) {
            ctx->pc = 0x49A4C0u;
            goto label_49a4c0;
        }
    }
    ctx->pc = 0x49A4A8u;
label_49a4a8:
    // 0x49a4a8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x49a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49a4ac:
    // 0x49a4ac: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x49a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_49a4b0:
    // 0x49a4b0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49a4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49a4b4:
    // 0x49a4b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_49a4b8:
    if (ctx->pc == 0x49A4B8u) {
        ctx->pc = 0x49A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4B4u;
        // 0x49a4b8: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A4BCu;
        goto label_49a4bc;
    }
    ctx->pc = 0x49A4B4u;
    {
        const bool branch_taken_0x49a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4B4u;
        // 0x49a4b8: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4b4) {
            ctx->pc = 0x49A4D0u;
            goto label_49a4d0;
        }
    }
    ctx->pc = 0x49A4BCu;
label_49a4bc:
    // 0x49a4bc: 0x0  nop
    ctx->pc = 0x49a4bcu;
    // NOP
label_49a4c0:
    // 0x49a4c0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x49a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49a4c4:
    // 0x49a4c4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x49a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_49a4c8:
    // 0x49a4c8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49a4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49a4cc:
    // 0x49a4cc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x49a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_49a4d0:
    // 0x49a4d0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x49a4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49a4d4:
    // 0x49a4d4: 0xae0a0014  sw          $t2, 0x14($s0)
    ctx->pc = 0x49a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_49a4d8:
    // 0x49a4d8: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x49a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_49a4dc:
    // 0x49a4dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x49a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_49a4e0:
    // 0x49a4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a4e4:
    // 0x49a4e4: 0xc12a424  jal         func_4A9090
label_49a4e8:
    if (ctx->pc == 0x49A4E8u) {
        ctx->pc = 0x49A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4E4u;
        // 0x49a4e8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A4ECu;
        goto label_49a4ec;
    }
    ctx->pc = 0x49A4E4u;
    SET_GPR_U32(ctx, 31, 0x49A4ECu);
    ctx->pc = 0x49A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A4E4u;
    // 0x49a4e8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x49A4E4u, 0x49A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A4ECu;
label_49a4ec:
    // 0x49a4ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a4f0:
    if (ctx->pc == 0x49A4F0u) {
        ctx->pc = 0x49A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4ECu;
        // 0x49a4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A4F4u;
        goto label_49a4f4;
    }
    ctx->pc = 0x49A4ECu;
    {
        const bool branch_taken_0x49a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4ECu;
        // 0x49a4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4ec) {
            ctx->pc = 0x49A508u;
            goto label_49a508;
        }
    }
    ctx->pc = 0x49A4F4u;
label_49a4f4:
    // 0x49a4f4: 0xc12a45c  jal         func_4A9170
label_49a4f8:
    if (ctx->pc == 0x49A4F8u) {
        ctx->pc = 0x49A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4F4u;
        // 0x49a4f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A4FCu;
        goto label_49a4fc;
    }
    ctx->pc = 0x49A4F4u;
    SET_GPR_U32(ctx, 31, 0x49A4FCu);
    ctx->pc = 0x49A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A4F4u;
    // 0x49a4f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x49A4F4u, 0x49A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A4FCu;
label_49a4fc:
    // 0x49a4fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49a500:
    if (ctx->pc == 0x49A500u) {
        ctx->pc = 0x49A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4FCu;
        // 0x49a500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A504u;
        goto label_49a504;
    }
    ctx->pc = 0x49A4FCu;
    {
        const bool branch_taken_0x49a4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4FCu;
        // 0x49a500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4fc) {
            ctx->pc = 0x49A50Cu;
            goto label_49a50c;
        }
    }
    ctx->pc = 0x49A504u;
label_49a504:
    // 0x49a504: 0x0  nop
    ctx->pc = 0x49a504u;
    // NOP
label_49a508:
    // 0x49a508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a50c:
    // 0x49a50c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49a50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a510:
    // 0x49a510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49a510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a514:
    // 0x49a514: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49a514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a518:
    // 0x49a518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a51c:
    // 0x49a51c: 0x3e00008  jr          $ra
label_49a520:
    if (ctx->pc == 0x49A520u) {
        ctx->pc = 0x49A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A51Cu;
        // 0x49a520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A524u;
        goto label_49a524;
    }
    ctx->pc = 0x49A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A51Cu;
        // 0x49a520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A524u;
label_49a524:
    // 0x49a524: 0x0  nop
    ctx->pc = 0x49a524u;
    // NOP
label_49a528:
    // 0x49a528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49a52c:
    // 0x49a52c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x49a52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_49a530:
    // 0x49a530: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49a534:
    // 0x49a534: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49a538:
    // 0x49a538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49a538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a53c:
    // 0x49a53c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49a540:
    // 0x49a540: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x49a540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49a544:
    // 0x49a544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a548:
    // 0x49a548: 0x14c20011  bne         $a2, $v0, . + 4 + (0x11 << 2)
label_49a54c:
    if (ctx->pc == 0x49A54Cu) {
        ctx->pc = 0x49A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A548u;
        // 0x49a54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A550u;
        goto label_49a550;
    }
    ctx->pc = 0x49A548u;
    {
        const bool branch_taken_0x49a548 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x49A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A548u;
        // 0x49a54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a548) {
            ctx->pc = 0x49A590u;
            goto label_49a590;
        }
    }
    ctx->pc = 0x49A550u;
label_49a550:
    // 0x49a550: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x49a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49a554:
    // 0x49a554: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x49a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_49a558:
    // 0x49a558: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49a558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49a55c:
    // 0x49a55c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x49a55cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_49a560:
    // 0x49a560: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x49a560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49a564:
    // 0x49a564: 0xae0a0014  sw          $t2, 0x14($s0)
    ctx->pc = 0x49a564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_49a568:
    // 0x49a568: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x49a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_49a56c:
    // 0x49a56c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x49a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_49a570:
    // 0x49a570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a574:
    // 0x49a574: 0xc12a448  jal         func_4A9120
label_49a578:
    if (ctx->pc == 0x49A578u) {
        ctx->pc = 0x49A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A574u;
        // 0x49a578: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A57Cu;
        goto label_49a57c;
    }
    ctx->pc = 0x49A574u;
    SET_GPR_U32(ctx, 31, 0x49A57Cu);
    ctx->pc = 0x49A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A574u;
    // 0x49a578: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49A574u, 0x49A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A57Cu;
label_49a57c:
    // 0x49a57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a580:
    // 0x49a580: 0xc12a47e  jal         func_4A91F8
label_49a584:
    if (ctx->pc == 0x49A584u) {
        ctx->pc = 0x49A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A580u;
        // 0x49a584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A588u;
        goto label_49a588;
    }
    ctx->pc = 0x49A580u;
    SET_GPR_U32(ctx, 31, 0x49A588u);
    ctx->pc = 0x49A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A580u;
    // 0x49a584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49A580u, 0x49A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A588u;
label_49a588:
    // 0x49a588: 0x10000011  b           . + 4 + (0x11 << 2)
label_49a58c:
    if (ctx->pc == 0x49A58Cu) {
        ctx->pc = 0x49A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A588u;
        // 0x49a58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A590u;
        goto label_49a590;
    }
    ctx->pc = 0x49A588u;
    {
        const bool branch_taken_0x49a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A588u;
        // 0x49a58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a588) {
            ctx->pc = 0x49A5D0u;
            goto label_49a5d0;
        }
    }
    ctx->pc = 0x49A590u;
label_49a590:
    // 0x49a590: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x49a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_49a594:
    // 0x49a594: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x49a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_49a598:
    // 0x49a598: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x49a598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49a59c:
    // 0x49a59c: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x49a59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_49a5a0:
    // 0x49a5a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x49a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49a5a4:
    // 0x49a5a4: 0xae0a0014  sw          $t2, 0x14($s0)
    ctx->pc = 0x49a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_49a5a8:
    // 0x49a5a8: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x49a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_49a5ac:
    // 0x49a5ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x49a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_49a5b0:
    // 0x49a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a5b4:
    // 0x49a5b4: 0xc12a448  jal         func_4A9120
label_49a5b8:
    if (ctx->pc == 0x49A5B8u) {
        ctx->pc = 0x49A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5B4u;
        // 0x49a5b8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A5BCu;
        goto label_49a5bc;
    }
    ctx->pc = 0x49A5B4u;
    SET_GPR_U32(ctx, 31, 0x49A5BCu);
    ctx->pc = 0x49A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A5B4u;
    // 0x49a5b8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49A5B4u, 0x49A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A5BCu;
label_49a5bc:
    // 0x49a5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a5c0:
    // 0x49a5c0: 0xc12a47e  jal         func_4A91F8
label_49a5c4:
    if (ctx->pc == 0x49A5C4u) {
        ctx->pc = 0x49A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5C0u;
        // 0x49a5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A5C8u;
        goto label_49a5c8;
    }
    ctx->pc = 0x49A5C0u;
    SET_GPR_U32(ctx, 31, 0x49A5C8u);
    ctx->pc = 0x49A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A5C0u;
    // 0x49a5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49A5C0u, 0x49A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A5C8u;
label_49a5c8:
    // 0x49a5c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49a5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a5cc:
    // 0x49a5cc: 0x0  nop
    ctx->pc = 0x49a5ccu;
    // NOP
label_49a5d0:
    // 0x49a5d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49a5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a5d4:
    // 0x49a5d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49a5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a5d8:
    // 0x49a5d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49a5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a5dc:
    // 0x49a5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a5e0:
    // 0x49a5e0: 0x3e00008  jr          $ra
label_49a5e4:
    if (ctx->pc == 0x49A5E4u) {
        ctx->pc = 0x49A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5E0u;
        // 0x49a5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A5E8u;
        goto label_49a5e8;
    }
    ctx->pc = 0x49A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5E0u;
        // 0x49a5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A5E8u;
label_49a5e8:
    // 0x49a5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49a5ec:
    // 0x49a5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a5f0:
    // 0x49a5f0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49a5f4:
    // 0x49a5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a5f8:
    // 0x49a5f8: 0x24848258  addiu       $a0, $a0, -0x7DA8
    ctx->pc = 0x49a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935128));
label_49a5fc:
    // 0x49a5fc: 0xc126614  jal         func_499850
label_49a600:
    if (ctx->pc == 0x49A600u) {
        ctx->pc = 0x49A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5FCu;
        // 0x49a600: 0xaf82c194  sw          $v0, -0x3E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A604u;
        goto label_49a604;
    }
    ctx->pc = 0x49A5FCu;
    SET_GPR_U32(ctx, 31, 0x49A604u);
    ctx->pc = 0x49A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A5FCu;
    // 0x49a600: 0xaf82c194  sw          $v0, -0x3E6C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x49A5FCu, 0x49A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A604u;
label_49a604:
    // 0x49a604: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49a608:
    // 0x49a608: 0xc12aa86  jal         func_4AAA18
label_49a60c:
    if (ctx->pc == 0x49A60Cu) {
        ctx->pc = 0x49A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A608u;
        // 0x49a60c: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A610u;
        goto label_49a610;
    }
    ctx->pc = 0x49A608u;
    SET_GPR_U32(ctx, 31, 0x49A610u);
    ctx->pc = 0x49A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A608u;
    // 0x49a60c: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49A608u, 0x49A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A610u;
label_49a610:
    // 0x49a610: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49a610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49a614:
    // 0x49a614: 0xc12aa86  jal         func_4AAA18
label_49a618:
    if (ctx->pc == 0x49A618u) {
        ctx->pc = 0x49A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A614u;
        // 0x49a618: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A61Cu;
        goto label_49a61c;
    }
    ctx->pc = 0x49A614u;
    SET_GPR_U32(ctx, 31, 0x49A61Cu);
    ctx->pc = 0x49A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A614u;
    // 0x49a618: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49A614u, 0x49A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A61Cu;
label_49a61c:
    // 0x49a61c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_49a620:
    // 0x49a620: 0xc12aa86  jal         func_4AAA18
label_49a624:
    if (ctx->pc == 0x49A624u) {
        ctx->pc = 0x49A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A620u;
        // 0x49a624: 0x248481e0  addiu       $a0, $a0, -0x7E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A628u;
        goto label_49a628;
    }
    ctx->pc = 0x49A620u;
    SET_GPR_U32(ctx, 31, 0x49A628u);
    ctx->pc = 0x49A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A620u;
    // 0x49a624: 0x248481e0  addiu       $a0, $a0, -0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49A620u, 0x49A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A628u;
label_49a628:
    // 0x49a628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a62c:
    // 0x49a62c: 0xaf80b7ac  sw          $zero, -0x4854($gp)
    ctx->pc = 0x49a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
label_49a630:
    // 0x49a630: 0x3e00008  jr          $ra
label_49a634:
    if (ctx->pc == 0x49A634u) {
        ctx->pc = 0x49A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A630u;
        // 0x49a634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A638u;
        goto label_fallthrough_0x49a630;
    }
    ctx->pc = 0x49A630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A630u;
        // 0x49a634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49a630:
    ctx->pc = 0x49A638u;
}
