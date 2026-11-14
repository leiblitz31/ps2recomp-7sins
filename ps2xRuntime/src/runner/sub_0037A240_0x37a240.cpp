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

// Function: sub_0037A240
// Address: 0x37a240 - 0x37a418
void sub_0037A240_0x37a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A240_0x37a240");
#endif

    switch (ctx->pc) {
        case 0x37a240u: goto label_37a240;
        case 0x37a244u: goto label_37a244;
        case 0x37a248u: goto label_37a248;
        case 0x37a24cu: goto label_37a24c;
        case 0x37a250u: goto label_37a250;
        case 0x37a254u: goto label_37a254;
        case 0x37a258u: goto label_37a258;
        case 0x37a25cu: goto label_37a25c;
        case 0x37a260u: goto label_37a260;
        case 0x37a264u: goto label_37a264;
        case 0x37a268u: goto label_37a268;
        case 0x37a26cu: goto label_37a26c;
        case 0x37a270u: goto label_37a270;
        case 0x37a274u: goto label_37a274;
        case 0x37a278u: goto label_37a278;
        case 0x37a27cu: goto label_37a27c;
        case 0x37a280u: goto label_37a280;
        case 0x37a284u: goto label_37a284;
        case 0x37a288u: goto label_37a288;
        case 0x37a28cu: goto label_37a28c;
        case 0x37a290u: goto label_37a290;
        case 0x37a294u: goto label_37a294;
        case 0x37a298u: goto label_37a298;
        case 0x37a29cu: goto label_37a29c;
        case 0x37a2a0u: goto label_37a2a0;
        case 0x37a2a4u: goto label_37a2a4;
        case 0x37a2a8u: goto label_37a2a8;
        case 0x37a2acu: goto label_37a2ac;
        case 0x37a2b0u: goto label_37a2b0;
        case 0x37a2b4u: goto label_37a2b4;
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a2bcu: goto label_37a2bc;
        case 0x37a2c0u: goto label_37a2c0;
        case 0x37a2c4u: goto label_37a2c4;
        case 0x37a2c8u: goto label_37a2c8;
        case 0x37a2ccu: goto label_37a2cc;
        case 0x37a2d0u: goto label_37a2d0;
        case 0x37a2d4u: goto label_37a2d4;
        case 0x37a2d8u: goto label_37a2d8;
        case 0x37a2dcu: goto label_37a2dc;
        case 0x37a2e0u: goto label_37a2e0;
        case 0x37a2e4u: goto label_37a2e4;
        case 0x37a2e8u: goto label_37a2e8;
        case 0x37a2ecu: goto label_37a2ec;
        case 0x37a2f0u: goto label_37a2f0;
        case 0x37a2f4u: goto label_37a2f4;
        case 0x37a2f8u: goto label_37a2f8;
        case 0x37a2fcu: goto label_37a2fc;
        case 0x37a300u: goto label_37a300;
        case 0x37a304u: goto label_37a304;
        case 0x37a308u: goto label_37a308;
        case 0x37a30cu: goto label_37a30c;
        case 0x37a310u: goto label_37a310;
        case 0x37a314u: goto label_37a314;
        case 0x37a318u: goto label_37a318;
        case 0x37a31cu: goto label_37a31c;
        case 0x37a320u: goto label_37a320;
        case 0x37a324u: goto label_37a324;
        case 0x37a328u: goto label_37a328;
        case 0x37a32cu: goto label_37a32c;
        case 0x37a330u: goto label_37a330;
        case 0x37a334u: goto label_37a334;
        case 0x37a338u: goto label_37a338;
        case 0x37a33cu: goto label_37a33c;
        case 0x37a340u: goto label_37a340;
        case 0x37a344u: goto label_37a344;
        case 0x37a348u: goto label_37a348;
        case 0x37a34cu: goto label_37a34c;
        case 0x37a350u: goto label_37a350;
        case 0x37a354u: goto label_37a354;
        case 0x37a358u: goto label_37a358;
        case 0x37a35cu: goto label_37a35c;
        case 0x37a360u: goto label_37a360;
        case 0x37a364u: goto label_37a364;
        case 0x37a368u: goto label_37a368;
        case 0x37a36cu: goto label_37a36c;
        case 0x37a370u: goto label_37a370;
        case 0x37a374u: goto label_37a374;
        case 0x37a378u: goto label_37a378;
        case 0x37a37cu: goto label_37a37c;
        case 0x37a380u: goto label_37a380;
        case 0x37a384u: goto label_37a384;
        case 0x37a388u: goto label_37a388;
        case 0x37a38cu: goto label_37a38c;
        case 0x37a390u: goto label_37a390;
        case 0x37a394u: goto label_37a394;
        case 0x37a398u: goto label_37a398;
        case 0x37a39cu: goto label_37a39c;
        case 0x37a3a0u: goto label_37a3a0;
        case 0x37a3a4u: goto label_37a3a4;
        case 0x37a3a8u: goto label_37a3a8;
        case 0x37a3acu: goto label_37a3ac;
        case 0x37a3b0u: goto label_37a3b0;
        case 0x37a3b4u: goto label_37a3b4;
        case 0x37a3b8u: goto label_37a3b8;
        case 0x37a3bcu: goto label_37a3bc;
        case 0x37a3c0u: goto label_37a3c0;
        case 0x37a3c4u: goto label_37a3c4;
        case 0x37a3c8u: goto label_37a3c8;
        case 0x37a3ccu: goto label_37a3cc;
        case 0x37a3d0u: goto label_37a3d0;
        case 0x37a3d4u: goto label_37a3d4;
        case 0x37a3d8u: goto label_37a3d8;
        case 0x37a3dcu: goto label_37a3dc;
        case 0x37a3e0u: goto label_37a3e0;
        case 0x37a3e4u: goto label_37a3e4;
        case 0x37a3e8u: goto label_37a3e8;
        case 0x37a3ecu: goto label_37a3ec;
        case 0x37a3f0u: goto label_37a3f0;
        case 0x37a3f4u: goto label_37a3f4;
        case 0x37a3f8u: goto label_37a3f8;
        case 0x37a3fcu: goto label_37a3fc;
        case 0x37a400u: goto label_37a400;
        case 0x37a404u: goto label_37a404;
        case 0x37a408u: goto label_37a408;
        case 0x37a40cu: goto label_37a40c;
        case 0x37a410u: goto label_37a410;
        case 0x37a414u: goto label_37a414;
        default: break;
    }

    ctx->pc = 0x37a240u;

label_37a240:
    // 0x37a240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_37a244:
    // 0x37a244: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37a244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_37a248:
    // 0x37a248: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x37a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37a24c:
    // 0x37a24c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_37a250:
    // 0x37a250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a254:
    // 0x37a254: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x37a254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37a258:
    // 0x37a258: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_37a25c:
    // 0x37a25c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_37a260:
    // 0x37a260: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37a264:
    // 0x37a264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37a268:
    // 0x37a268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37a26c:
    // 0x37a26c: 0xc103322  jal         func_40CC88
label_37a270:
    if (ctx->pc == 0x37A270u) {
        ctx->pc = 0x37A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A26Cu;
        // 0x37a270: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A274u;
        goto label_37a274;
    }
    ctx->pc = 0x37A26Cu;
    SET_GPR_U32(ctx, 31, 0x37A274u);
    ctx->pc = 0x37A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A26Cu;
    // 0x37a270: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x37A26Cu, 0x37A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A274u;
label_37a274:
    // 0x37a274: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_37a278:
    if (ctx->pc == 0x37A278u) {
        ctx->pc = 0x37A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A274u;
        // 0x37a278: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A27Cu;
        goto label_37a27c;
    }
    ctx->pc = 0x37A274u;
    {
        const bool branch_taken_0x37a274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A274u;
        // 0x37a278: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a274) {
            ctx->pc = 0x37A3F4u;
            goto label_37a3f4;
        }
    }
    ctx->pc = 0x37A27Cu;
label_37a27c:
    // 0x37a27c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x37a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_37a280:
    // 0x37a280: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x37a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_37a284:
    // 0x37a284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37a288:
    // 0x37a288: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x37a288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_37a28c:
    // 0x37a28c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_37a290:
    if (ctx->pc == 0x37A290u) {
        ctx->pc = 0x37A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A28Cu;
        // 0x37a290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A294u;
        goto label_37a294;
    }
    ctx->pc = 0x37A28Cu;
    {
        const bool branch_taken_0x37a28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A28Cu;
        // 0x37a290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a28c) {
            ctx->pc = 0x37A2C0u;
            goto label_37a2c0;
        }
    }
    ctx->pc = 0x37A294u;
label_37a294:
    // 0x37a294: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x37a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_37a298:
    // 0x37a298: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37a298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37a29c:
    // 0x37a29c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37a2a0:
    // 0x37a2a0: 0xc1035f6  jal         func_40D7D8
label_37a2a4:
    if (ctx->pc == 0x37A2A4u) {
        ctx->pc = 0x37A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2A0u;
        // 0x37a2a4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2A8u;
        goto label_37a2a8;
    }
    ctx->pc = 0x37A2A0u;
    SET_GPR_U32(ctx, 31, 0x37A2A8u);
    ctx->pc = 0x37A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2A0u;
    // 0x37a2a4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37A2A0u, 0x37A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2A8u;
label_37a2a8:
    // 0x37a2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a2ac:
    // 0x37a2ac: 0xc103628  jal         func_40D8A0
label_37a2b0:
    if (ctx->pc == 0x37A2B0u) {
        ctx->pc = 0x37A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2ACu;
        // 0x37a2b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2B4u;
        goto label_37a2b4;
    }
    ctx->pc = 0x37A2ACu;
    SET_GPR_U32(ctx, 31, 0x37A2B4u);
    ctx->pc = 0x37A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2ACu;
    // 0x37a2b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37A2ACu, 0x37A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2B4u;
label_37a2b4:
    // 0x37a2b4: 0x10000050  b           . + 4 + (0x50 << 2)
label_37a2b8:
    if (ctx->pc == 0x37A2B8u) {
        ctx->pc = 0x37A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2B4u;
        // 0x37a2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2BCu;
        goto label_37a2bc;
    }
    ctx->pc = 0x37A2B4u;
    {
        const bool branch_taken_0x37a2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2B4u;
        // 0x37a2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2b4) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A2BCu;
label_37a2bc:
    // 0x37a2bc: 0x0  nop
    ctx->pc = 0x37a2bcu;
    // NOP
label_37a2c0:
    // 0x37a2c0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x37a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_37a2c4:
    // 0x37a2c4: 0xc103468  jal         func_40D1A0
label_37a2c8:
    if (ctx->pc == 0x37A2C8u) {
        ctx->pc = 0x37A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2C4u;
        // 0x37a2c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2CCu;
        goto label_37a2cc;
    }
    ctx->pc = 0x37A2C4u;
    SET_GPR_U32(ctx, 31, 0x37A2CCu);
    ctx->pc = 0x37A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2C4u;
    // 0x37a2c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x37A2C4u, 0x37A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2CCu;
label_37a2cc:
    // 0x37a2cc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_37a2d0:
    if (ctx->pc == 0x37A2D0u) {
        ctx->pc = 0x37A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2CCu;
        // 0x37a2d0: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2D4u;
        goto label_37a2d4;
    }
    ctx->pc = 0x37A2CCu;
    {
        const bool branch_taken_0x37a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2CCu;
        // 0x37a2d0: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2cc) {
            ctx->pc = 0x37A3F4u;
            goto label_37a3f4;
        }
    }
    ctx->pc = 0x37A2D4u;
label_37a2d4:
    // 0x37a2d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37a2d8:
    // 0x37a2d8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_37a2dc:
    if (ctx->pc == 0x37A2DCu) {
        ctx->pc = 0x37A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2D8u;
        // 0x37a2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2E0u;
        goto label_37a2e0;
    }
    ctx->pc = 0x37A2D8u;
    {
        const bool branch_taken_0x37a2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2D8u;
        // 0x37a2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2d8) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A2E0u;
label_37a2e0:
    // 0x37a2e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_37a2e4:
    // 0x37a2e4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x37a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_37a2e8:
    // 0x37a2e8: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x37a2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_37a2ec:
    // 0x37a2ec: 0x8c64ac60  lw          $a0, -0x53A0($v1)
    ctx->pc = 0x37a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945888)));
label_37a2f0:
    // 0x37a2f0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x37a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_37a2f4:
    // 0x37a2f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37a2f8:
    // 0x37a2f8: 0x40f809  jalr        $v0
label_37a2fc:
    if (ctx->pc == 0x37A2FCu) {
        ctx->pc = 0x37A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2F8u;
        // 0x37a2fc: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A300u;
        goto label_37a300;
    }
    ctx->pc = 0x37A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A300u);
        ctx->pc = 0x37A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2F8u;
        // 0x37a2fc: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A2F8u, 0x37A300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A300u;
label_37a300:
    // 0x37a300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37a300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a304:
    // 0x37a304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a308:
    // 0x37a308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a30c:
    // 0x37a30c: 0xc0bb7e6  jal         func_2EDF98
label_37a310:
    if (ctx->pc == 0x37A310u) {
        ctx->pc = 0x37A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A30Cu;
        // 0x37a310: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A314u;
        goto label_37a314;
    }
    ctx->pc = 0x37A30Cu;
    SET_GPR_U32(ctx, 31, 0x37A314u);
    ctx->pc = 0x37A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A30Cu;
    // 0x37a310: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37A30Cu, 0x37A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A314u;
label_37a314:
    // 0x37a314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a318:
    // 0x37a318: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x37a318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_37a31c:
    // 0x37a31c: 0xc103468  jal         func_40D1A0
label_37a320:
    if (ctx->pc == 0x37A320u) {
        ctx->pc = 0x37A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A31Cu;
        // 0x37a320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A324u;
        goto label_37a324;
    }
    ctx->pc = 0x37A31Cu;
    SET_GPR_U32(ctx, 31, 0x37A324u);
    ctx->pc = 0x37A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A31Cu;
    // 0x37a320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x37A31Cu, 0x37A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A324u;
label_37a324:
    // 0x37a324: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_37a328:
    if (ctx->pc == 0x37A328u) {
        ctx->pc = 0x37A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A324u;
        // 0x37a328: 0x93a3001c  lbu         $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A32Cu;
        goto label_37a32c;
    }
    ctx->pc = 0x37A324u;
    {
        const bool branch_taken_0x37a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A324u;
        // 0x37a328: 0x93a3001c  lbu         $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a324) {
            ctx->pc = 0x37A3F4u;
            goto label_37a3f4;
        }
    }
    ctx->pc = 0x37A32Cu;
label_37a32c:
    // 0x37a32c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37a330:
    // 0x37a330: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x37a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_37a334:
    // 0x37a334: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x37a334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_37a338:
    // 0x37a338: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a33c:
    // 0x37a33c: 0x39980  sll         $s3, $v1, 6
    ctx->pc = 0x37a33cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_37a340:
    // 0x37a340: 0x93b0001d  lbu         $s0, 0x1D($sp)
    ctx->pc = 0x37a340u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
label_37a344:
    // 0x37a344: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x37a344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_37a348:
    // 0x37a348: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x37a348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_37a34c:
    // 0x37a34c: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x37a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_37a350:
    // 0x37a350: 0x93a3001e  lbu         $v1, 0x1E($sp)
    ctx->pc = 0x37a350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
label_37a354:
    // 0x37a354: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x37a354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_37a358:
    // 0x37a358: 0x40f809  jalr        $v0
label_37a35c:
    if (ctx->pc == 0x37A35Cu) {
        ctx->pc = 0x37A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A358u;
        // 0x37a35c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A360u;
        goto label_37a360;
    }
    ctx->pc = 0x37A358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A360u);
        ctx->pc = 0x37A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A358u;
        // 0x37a35c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A358u, 0x37A360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A360u;
label_37a360:
    // 0x37a360: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x37a360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_37a364:
    // 0x37a364: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x37a364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37a368:
    // 0x37a368: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x37a368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_37a36c:
    // 0x37a36c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x37a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_37a370:
    // 0x37a370: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x37a370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_37a374:
    // 0x37a374: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x37a374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_37a378:
    // 0x37a378: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x37a378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_37a37c:
    // 0x37a37c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x37a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_37a380:
    // 0x37a380: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x37a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37a384:
    // 0x37a384: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x37a384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_37a388:
    // 0x37a388: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x37a388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_37a38c:
    // 0x37a38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a390:
    // 0x37a390: 0xc10480a  jal         func_412028
label_37a394:
    if (ctx->pc == 0x37A394u) {
        ctx->pc = 0x37A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A390u;
        // 0x37a394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A398u;
        goto label_37a398;
    }
    ctx->pc = 0x37A390u;
    SET_GPR_U32(ctx, 31, 0x37A398u);
    ctx->pc = 0x37A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A390u;
    // 0x37a394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x37A390u, 0x37A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A398u;
label_37a398:
    // 0x37a398: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
label_37a39c:
    if (ctx->pc == 0x37A39Cu) {
        ctx->pc = 0x37A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A398u;
        // 0x37a39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3A0u;
        goto label_37a3a0;
    }
    ctx->pc = 0x37A398u;
    {
        const bool branch_taken_0x37a398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x37A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A398u;
        // 0x37a39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a398) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A3A0u;
label_37a3a0:
    // 0x37a3a0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37a3a4:
    // 0x37a3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a3a8:
    // 0x37a3a8: 0xc10480a  jal         func_412028
label_37a3ac:
    if (ctx->pc == 0x37A3ACu) {
        ctx->pc = 0x37A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3A8u;
        // 0x37a3ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3B0u;
        goto label_37a3b0;
    }
    ctx->pc = 0x37A3A8u;
    SET_GPR_U32(ctx, 31, 0x37A3B0u);
    ctx->pc = 0x37A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3A8u;
    // 0x37a3ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x37A3A8u, 0x37A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3B0u;
label_37a3b0:
    // 0x37a3b0: 0x14530011  bne         $v0, $s3, . + 4 + (0x11 << 2)
label_37a3b4:
    if (ctx->pc == 0x37A3B4u) {
        ctx->pc = 0x37A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3B0u;
        // 0x37a3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3B8u;
        goto label_37a3b8;
    }
    ctx->pc = 0x37A3B0u;
    {
        const bool branch_taken_0x37a3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x37A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3B0u;
        // 0x37a3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3b0) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A3B8u;
label_37a3b8:
    // 0x37a3b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a3bc:
    // 0x37a3bc: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x37a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_37a3c0:
    // 0x37a3c0: 0xc103468  jal         func_40D1A0
label_37a3c4:
    if (ctx->pc == 0x37A3C4u) {
        ctx->pc = 0x37A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3C0u;
        // 0x37a3c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3C8u;
        goto label_37a3c8;
    }
    ctx->pc = 0x37A3C0u;
    SET_GPR_U32(ctx, 31, 0x37A3C8u);
    ctx->pc = 0x37A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3C0u;
    // 0x37a3c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x37A3C0u, 0x37A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3C8u;
label_37a3c8:
    // 0x37a3c8: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
label_37a3cc:
    if (ctx->pc == 0x37A3CCu) {
        ctx->pc = 0x37A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3C8u;
        // 0x37a3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3D0u;
        goto label_37a3d0;
    }
    ctx->pc = 0x37A3C8u;
    {
        const bool branch_taken_0x37a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x37A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3C8u;
        // 0x37a3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3c8) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A3D0u;
label_37a3d0:
    // 0x37a3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a3d4:
    // 0x37a3d4: 0xc0de1a2  jal         func_378688
label_37a3d8:
    if (ctx->pc == 0x37A3D8u) {
        ctx->pc = 0x37A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3D4u;
        // 0x37a3d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3DCu;
        goto label_37a3dc;
    }
    ctx->pc = 0x37A3D4u;
    SET_GPR_U32(ctx, 31, 0x37A3DCu);
    ctx->pc = 0x37A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3D4u;
    // 0x37a3d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378688u, 0x37A3D4u, 0x37A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3DCu;
label_37a3dc:
    // 0x37a3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_37a3e0:
    if (ctx->pc == 0x37A3E0u) {
        ctx->pc = 0x37A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3DCu;
        // 0x37a3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3E4u;
        goto label_37a3e4;
    }
    ctx->pc = 0x37A3DCu;
    {
        const bool branch_taken_0x37a3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3DCu;
        // 0x37a3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3dc) {
            ctx->pc = 0x37A3F4u;
            goto label_37a3f4;
        }
    }
    ctx->pc = 0x37A3E4u;
label_37a3e4:
    // 0x37a3e4: 0xc0de5f8  jal         func_3797E0
label_37a3e8:
    if (ctx->pc == 0x37A3E8u) {
        ctx->pc = 0x37A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3E4u;
        // 0x37a3e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3ECu;
        goto label_37a3ec;
    }
    ctx->pc = 0x37A3E4u;
    SET_GPR_U32(ctx, 31, 0x37A3ECu);
    ctx->pc = 0x37A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A3E4u;
    // 0x37a3e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3797E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3797E0u, 0x37A3E4u, 0x37A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A3ECu;
label_37a3ec:
    // 0x37a3ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_37a3f0:
    if (ctx->pc == 0x37A3F0u) {
        ctx->pc = 0x37A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3ECu;
        // 0x37a3f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A3F4u;
        goto label_37a3f4;
    }
    ctx->pc = 0x37A3ECu;
    {
        const bool branch_taken_0x37a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3ECu;
        // 0x37a3f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3ec) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A3F4u;
label_37a3f4:
    // 0x37a3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a3f8:
    // 0x37a3f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37a3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37a3fc:
    // 0x37a3fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37a3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37a400:
    // 0x37a400: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37a400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37a404:
    // 0x37a404: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37a404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37a408:
    // 0x37a408: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37a408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37a40c:
    // 0x37a40c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37a410:
    // 0x37a410: 0x3e00008  jr          $ra
label_37a414:
    if (ctx->pc == 0x37A414u) {
        ctx->pc = 0x37A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A410u;
        // 0x37a414: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A418u;
        goto label_fallthrough_0x37a410;
    }
    ctx->pc = 0x37A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A410u;
        // 0x37a414: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37a410:
    ctx->pc = 0x37A418u;
}
