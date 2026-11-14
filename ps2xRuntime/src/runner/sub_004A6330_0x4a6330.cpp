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

// Function: sub_004A6330
// Address: 0x4a6330 - 0x4a64a8
void sub_004A6330_0x4a6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6330_0x4a6330");
#endif

    switch (ctx->pc) {
        case 0x4a6330u: goto label_4a6330;
        case 0x4a6334u: goto label_4a6334;
        case 0x4a6338u: goto label_4a6338;
        case 0x4a633cu: goto label_4a633c;
        case 0x4a6340u: goto label_4a6340;
        case 0x4a6344u: goto label_4a6344;
        case 0x4a6348u: goto label_4a6348;
        case 0x4a634cu: goto label_4a634c;
        case 0x4a6350u: goto label_4a6350;
        case 0x4a6354u: goto label_4a6354;
        case 0x4a6358u: goto label_4a6358;
        case 0x4a635cu: goto label_4a635c;
        case 0x4a6360u: goto label_4a6360;
        case 0x4a6364u: goto label_4a6364;
        case 0x4a6368u: goto label_4a6368;
        case 0x4a636cu: goto label_4a636c;
        case 0x4a6370u: goto label_4a6370;
        case 0x4a6374u: goto label_4a6374;
        case 0x4a6378u: goto label_4a6378;
        case 0x4a637cu: goto label_4a637c;
        case 0x4a6380u: goto label_4a6380;
        case 0x4a6384u: goto label_4a6384;
        case 0x4a6388u: goto label_4a6388;
        case 0x4a638cu: goto label_4a638c;
        case 0x4a6390u: goto label_4a6390;
        case 0x4a6394u: goto label_4a6394;
        case 0x4a6398u: goto label_4a6398;
        case 0x4a639cu: goto label_4a639c;
        case 0x4a63a0u: goto label_4a63a0;
        case 0x4a63a4u: goto label_4a63a4;
        case 0x4a63a8u: goto label_4a63a8;
        case 0x4a63acu: goto label_4a63ac;
        case 0x4a63b0u: goto label_4a63b0;
        case 0x4a63b4u: goto label_4a63b4;
        case 0x4a63b8u: goto label_4a63b8;
        case 0x4a63bcu: goto label_4a63bc;
        case 0x4a63c0u: goto label_4a63c0;
        case 0x4a63c4u: goto label_4a63c4;
        case 0x4a63c8u: goto label_4a63c8;
        case 0x4a63ccu: goto label_4a63cc;
        case 0x4a63d0u: goto label_4a63d0;
        case 0x4a63d4u: goto label_4a63d4;
        case 0x4a63d8u: goto label_4a63d8;
        case 0x4a63dcu: goto label_4a63dc;
        case 0x4a63e0u: goto label_4a63e0;
        case 0x4a63e4u: goto label_4a63e4;
        case 0x4a63e8u: goto label_4a63e8;
        case 0x4a63ecu: goto label_4a63ec;
        case 0x4a63f0u: goto label_4a63f0;
        case 0x4a63f4u: goto label_4a63f4;
        case 0x4a63f8u: goto label_4a63f8;
        case 0x4a63fcu: goto label_4a63fc;
        case 0x4a6400u: goto label_4a6400;
        case 0x4a6404u: goto label_4a6404;
        case 0x4a6408u: goto label_4a6408;
        case 0x4a640cu: goto label_4a640c;
        case 0x4a6410u: goto label_4a6410;
        case 0x4a6414u: goto label_4a6414;
        case 0x4a6418u: goto label_4a6418;
        case 0x4a641cu: goto label_4a641c;
        case 0x4a6420u: goto label_4a6420;
        case 0x4a6424u: goto label_4a6424;
        case 0x4a6428u: goto label_4a6428;
        case 0x4a642cu: goto label_4a642c;
        case 0x4a6430u: goto label_4a6430;
        case 0x4a6434u: goto label_4a6434;
        case 0x4a6438u: goto label_4a6438;
        case 0x4a643cu: goto label_4a643c;
        case 0x4a6440u: goto label_4a6440;
        case 0x4a6444u: goto label_4a6444;
        case 0x4a6448u: goto label_4a6448;
        case 0x4a644cu: goto label_4a644c;
        case 0x4a6450u: goto label_4a6450;
        case 0x4a6454u: goto label_4a6454;
        case 0x4a6458u: goto label_4a6458;
        case 0x4a645cu: goto label_4a645c;
        case 0x4a6460u: goto label_4a6460;
        case 0x4a6464u: goto label_4a6464;
        case 0x4a6468u: goto label_4a6468;
        case 0x4a646cu: goto label_4a646c;
        case 0x4a6470u: goto label_4a6470;
        case 0x4a6474u: goto label_4a6474;
        case 0x4a6478u: goto label_4a6478;
        case 0x4a647cu: goto label_4a647c;
        case 0x4a6480u: goto label_4a6480;
        case 0x4a6484u: goto label_4a6484;
        case 0x4a6488u: goto label_4a6488;
        case 0x4a648cu: goto label_4a648c;
        case 0x4a6490u: goto label_4a6490;
        case 0x4a6494u: goto label_4a6494;
        case 0x4a6498u: goto label_4a6498;
        case 0x4a649cu: goto label_4a649c;
        case 0x4a64a0u: goto label_4a64a0;
        case 0x4a64a4u: goto label_4a64a4;
        default: break;
    }

    ctx->pc = 0x4a6330u;

label_4a6330:
    // 0x4a6330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a6334:
    // 0x4a6334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6338:
    // 0x4a6338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a6338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a633c:
    // 0x4a633c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a6340:
    // 0x4a6340: 0xc12824e  jal         func_4A0938
label_4a6344:
    if (ctx->pc == 0x4A6344u) {
        ctx->pc = 0x4A6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6340u;
        // 0x4a6344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6348u;
        goto label_4a6348;
    }
    ctx->pc = 0x4A6340u;
    SET_GPR_U32(ctx, 31, 0x4A6348u);
    ctx->pc = 0x4A6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6340u;
    // 0x4a6344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0938u, 0x4A6340u, 0x4A6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6348u;
label_4a6348:
    // 0x4a6348: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_4a634c:
    if (ctx->pc == 0x4A634Cu) {
        ctx->pc = 0x4A634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6348u;
        // 0x4a634c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6350u;
        goto label_4a6350;
    }
    ctx->pc = 0x4A6348u;
    {
        const bool branch_taken_0x4a6348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6348u;
        // 0x4a634c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6348) {
            ctx->pc = 0x4A63D0u;
            goto label_4a63d0;
        }
    }
    ctx->pc = 0x4A6350u;
label_4a6350:
    // 0x4a6350: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4a6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4a6354:
    // 0x4a6354: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6358:
    if (ctx->pc == 0x4A6358u) {
        ctx->pc = 0x4A6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6354u;
        // 0x4a6358: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A635Cu;
        goto label_4a635c;
    }
    ctx->pc = 0x4A6354u;
    {
        const bool branch_taken_0x4a6354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6354) {
            ctx->pc = 0x4A6358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6354u;
            // 0x4a6358: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6368u;
            goto label_4a6368;
        }
    }
    ctx->pc = 0x4A635Cu;
label_4a635c:
    // 0x4a635c: 0x40f809  jalr        $v0
label_4a6360:
    if (ctx->pc == 0x4A6360u) {
        ctx->pc = 0x4A6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A635Cu;
        // 0x4a6360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6364u;
        goto label_4a6364;
    }
    ctx->pc = 0x4A635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6364u);
        ctx->pc = 0x4A6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A635Cu;
        // 0x4a6360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A635Cu, 0x4A6364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6364u;
label_4a6364:
    // 0x4a6364: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4a6364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4a6368:
    // 0x4a6368: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4a636c:
    if (ctx->pc == 0x4A636Cu) {
        ctx->pc = 0x4A636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6368u;
        // 0x4a636c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6370u;
        goto label_4a6370;
    }
    ctx->pc = 0x4A6368u;
    {
        const bool branch_taken_0x4a6368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6368) {
            ctx->pc = 0x4A636Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6368u;
            // 0x4a636c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A637Cu;
            goto label_4a637c;
        }
    }
    ctx->pc = 0x4A6370u;
label_4a6370:
    // 0x4a6370: 0xc12aa86  jal         func_4AAA18
label_4a6374:
    if (ctx->pc == 0x4A6374u) {
        ctx->pc = 0x4A6378u;
        goto label_4a6378;
    }
    ctx->pc = 0x4A6370u;
    SET_GPR_U32(ctx, 31, 0x4A6378u);
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A6370u, 0x4A6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6378u;
label_4a6378:
    // 0x4a6378: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a637c:
    // 0x4a637c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a6380:
    // 0x4a6380: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6384:
    if (ctx->pc == 0x4A6384u) {
        ctx->pc = 0x4A6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6380u;
        // 0x4a6384: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6388u;
        goto label_4a6388;
    }
    ctx->pc = 0x4A6380u;
    {
        const bool branch_taken_0x4a6380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6380) {
            ctx->pc = 0x4A6384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6380u;
            // 0x4a6384: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6394u;
            goto label_4a6394;
        }
    }
    ctx->pc = 0x4A6388u;
label_4a6388:
    // 0x4a6388: 0xc127cae  jal         func_49F2B8
label_4a638c:
    if (ctx->pc == 0x4A638Cu) {
        ctx->pc = 0x4A638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6388u;
        // 0x4a638c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6390u;
        goto label_4a6390;
    }
    ctx->pc = 0x4A6388u;
    SET_GPR_U32(ctx, 31, 0x4A6390u);
    ctx->pc = 0x4A638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6388u;
    // 0x4a638c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A6388u, 0x4A6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6390u;
label_4a6390:
    // 0x4a6390: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x4a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4a6394:
    // 0x4a6394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6398:
    // 0x4a6398: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x4a6398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a639c:
    // 0x4a639c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a639cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a63a0:
    // 0x4a63a0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4a63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4a63a4:
    // 0x4a63a4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x4a63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a63a8:
    // 0x4a63a8: 0xc12a492  jal         func_4A9248
label_4a63ac:
    if (ctx->pc == 0x4A63ACu) {
        ctx->pc = 0x4A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63A8u;
        // 0x4a63ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A63B0u;
        goto label_4a63b0;
    }
    ctx->pc = 0x4A63A8u;
    SET_GPR_U32(ctx, 31, 0x4A63B0u);
    ctx->pc = 0x4A63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A63A8u;
    // 0x4a63ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A63A8u, 0x4A63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A63B0u;
label_4a63b0:
    // 0x4a63b0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x4a63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a63b4:
    // 0x4a63b4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4a63b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4a63b8:
    // 0x4a63b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4a63bc:
    if (ctx->pc == 0x4A63BCu) {
        ctx->pc = 0x4A63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63B8u;
        // 0x4a63bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A63C0u;
        goto label_4a63c0;
    }
    ctx->pc = 0x4A63B8u;
    {
        const bool branch_taken_0x4a63b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63B8u;
        // 0x4a63bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63b8) {
            ctx->pc = 0x4A63CCu;
            goto label_4a63cc;
        }
    }
    ctx->pc = 0x4A63C0u;
label_4a63c0:
    // 0x4a63c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a63c4:
    // 0x4a63c4: 0xc12a9a0  jal         func_4AA680
label_4a63c8:
    if (ctx->pc == 0x4A63C8u) {
        ctx->pc = 0x4A63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63C4u;
        // 0x4a63c8: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A63CCu;
        goto label_4a63cc;
    }
    ctx->pc = 0x4A63C4u;
    SET_GPR_U32(ctx, 31, 0x4A63CCu);
    ctx->pc = 0x4A63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A63C4u;
    // 0x4a63c8: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A63C4u, 0x4A63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A63CCu;
label_4a63cc:
    // 0x4a63cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a63d0:
    // 0x4a63d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a63d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a63d4:
    // 0x4a63d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a63d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a63d8:
    // 0x4a63d8: 0x3e00008  jr          $ra
label_4a63dc:
    if (ctx->pc == 0x4A63DCu) {
        ctx->pc = 0x4A63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63D8u;
        // 0x4a63dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A63E0u;
        goto label_4a63e0;
    }
    ctx->pc = 0x4A63D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63D8u;
        // 0x4a63dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A63D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A63E0u;
label_4a63e0:
    // 0x4a63e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a63e4:
    // 0x4a63e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a63e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a63e8:
    // 0x4a63e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a63ec:
    // 0x4a63ec: 0xc12992a  jal         func_4A64A8
label_4a63f0:
    if (ctx->pc == 0x4A63F0u) {
        ctx->pc = 0x4A63F4u;
        goto label_4a63f4;
    }
    ctx->pc = 0x4A63ECu;
    SET_GPR_U32(ctx, 31, 0x4A63F4u);
    ctx->pc = 0x4A64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64A8u, 0x4A63ECu, 0x4A63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A63F4u;
label_4a63f4:
    // 0x4a63f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a63f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a63f8:
    // 0x4a63f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_4a63fc:
    if (ctx->pc == 0x4A63FCu) {
        ctx->pc = 0x4A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63F8u;
        // 0x4a63fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6400u;
        goto label_4a6400;
    }
    ctx->pc = 0x4A63F8u;
    {
        const bool branch_taken_0x4a63f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63F8u;
        // 0x4a63fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63f8) {
            ctx->pc = 0x4A6410u;
            goto label_4a6410;
        }
    }
    ctx->pc = 0x4A6400u;
label_4a6400:
    // 0x4a6400: 0xc12824e  jal         func_4A0938
label_4a6404:
    if (ctx->pc == 0x4A6404u) {
        ctx->pc = 0x4A6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6400u;
        // 0x4a6404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6408u;
        goto label_4a6408;
    }
    ctx->pc = 0x4A6400u;
    SET_GPR_U32(ctx, 31, 0x4A6408u);
    ctx->pc = 0x4A6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6400u;
    // 0x4a6404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0938u, 0x4A6400u, 0x4A6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6408u;
label_4a6408:
    // 0x4a6408: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4a640c:
    if (ctx->pc == 0x4A640Cu) {
        ctx->pc = 0x4A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6408u;
        // 0x4a640c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6410u;
        goto label_4a6410;
    }
    ctx->pc = 0x4A6408u;
    {
        const bool branch_taken_0x4a6408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6408) {
            ctx->pc = 0x4A640Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6408u;
            // 0x4a640c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6418u;
            goto label_4a6418;
        }
    }
    ctx->pc = 0x4A6410u;
label_4a6410:
    // 0x4a6410: 0x10000020  b           . + 4 + (0x20 << 2)
label_4a6414:
    if (ctx->pc == 0x4A6414u) {
        ctx->pc = 0x4A6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6410u;
        // 0x4a6414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6418u;
        goto label_4a6418;
    }
    ctx->pc = 0x4A6410u;
    {
        const bool branch_taken_0x4a6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6410u;
        // 0x4a6414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6410) {
            ctx->pc = 0x4A6494u;
            goto label_4a6494;
        }
    }
    ctx->pc = 0x4A6418u;
label_4a6418:
    // 0x4a6418: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a641c:
    if (ctx->pc == 0x4A641Cu) {
        ctx->pc = 0x4A641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6418u;
        // 0x4a641c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6420u;
        goto label_4a6420;
    }
    ctx->pc = 0x4A6418u;
    {
        const bool branch_taken_0x4a6418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6418) {
            ctx->pc = 0x4A641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6418u;
            // 0x4a641c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A642Cu;
            goto label_4a642c;
        }
    }
    ctx->pc = 0x4A6420u;
label_4a6420:
    // 0x4a6420: 0x40f809  jalr        $v0
label_4a6424:
    if (ctx->pc == 0x4A6424u) {
        ctx->pc = 0x4A6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6420u;
        // 0x4a6424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6428u;
        goto label_4a6428;
    }
    ctx->pc = 0x4A6420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6428u);
        ctx->pc = 0x4A6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6420u;
        // 0x4a6424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6420u, 0x4A6428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6428u;
label_4a6428:
    // 0x4a6428: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4a6428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4a642c:
    // 0x4a642c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4a6430:
    if (ctx->pc == 0x4A6430u) {
        ctx->pc = 0x4A6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A642Cu;
        // 0x4a6430: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6434u;
        goto label_4a6434;
    }
    ctx->pc = 0x4A642Cu;
    {
        const bool branch_taken_0x4a642c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a642c) {
            ctx->pc = 0x4A6430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A642Cu;
            // 0x4a6430: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6440u;
            goto label_4a6440;
        }
    }
    ctx->pc = 0x4A6434u;
label_4a6434:
    // 0x4a6434: 0xc12aa86  jal         func_4AAA18
label_4a6438:
    if (ctx->pc == 0x4A6438u) {
        ctx->pc = 0x4A643Cu;
        goto label_4a643c;
    }
    ctx->pc = 0x4A6434u;
    SET_GPR_U32(ctx, 31, 0x4A643Cu);
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A6434u, 0x4A643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A643Cu;
label_4a643c:
    // 0x4a643c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4a643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a6440:
    // 0x4a6440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a6440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a6444:
    // 0x4a6444: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6448:
    if (ctx->pc == 0x4A6448u) {
        ctx->pc = 0x4A6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6444u;
        // 0x4a6448: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A644Cu;
        goto label_4a644c;
    }
    ctx->pc = 0x4A6444u;
    {
        const bool branch_taken_0x4a6444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6444) {
            ctx->pc = 0x4A6448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6444u;
            // 0x4a6448: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6458u;
            goto label_4a6458;
        }
    }
    ctx->pc = 0x4A644Cu;
label_4a644c:
    // 0x4a644c: 0xc127cae  jal         func_49F2B8
label_4a6450:
    if (ctx->pc == 0x4A6450u) {
        ctx->pc = 0x4A6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A644Cu;
        // 0x4a6450: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6454u;
        goto label_4a6454;
    }
    ctx->pc = 0x4A644Cu;
    SET_GPR_U32(ctx, 31, 0x4A6454u);
    ctx->pc = 0x4A6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A644Cu;
    // 0x4a6450: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A644Cu, 0x4A6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6454u;
label_4a6454:
    // 0x4a6454: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x4a6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4a6458:
    // 0x4a6458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a645c:
    // 0x4a645c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x4a645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a6460:
    // 0x4a6460: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a6460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a6464:
    // 0x4a6464: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4a6468:
    // 0x4a6468: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x4a6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a646c:
    // 0x4a646c: 0xc12a492  jal         func_4A9248
label_4a6470:
    if (ctx->pc == 0x4A6470u) {
        ctx->pc = 0x4A6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A646Cu;
        // 0x4a6470: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6474u;
        goto label_4a6474;
    }
    ctx->pc = 0x4A646Cu;
    SET_GPR_U32(ctx, 31, 0x4A6474u);
    ctx->pc = 0x4A6470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A646Cu;
    // 0x4a6470: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A646Cu, 0x4A6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6474u;
label_4a6474:
    // 0x4a6474: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x4a6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a6478:
    // 0x4a6478: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4a6478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4a647c:
    // 0x4a647c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4a6480:
    if (ctx->pc == 0x4A6480u) {
        ctx->pc = 0x4A6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A647Cu;
        // 0x4a6480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6484u;
        goto label_4a6484;
    }
    ctx->pc = 0x4A647Cu;
    {
        const bool branch_taken_0x4a647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A647Cu;
        // 0x4a6480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a647c) {
            ctx->pc = 0x4A6490u;
            goto label_4a6490;
        }
    }
    ctx->pc = 0x4A6484u;
label_4a6484:
    // 0x4a6484: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a6484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a6488:
    // 0x4a6488: 0xc12a9a0  jal         func_4AA680
label_4a648c:
    if (ctx->pc == 0x4A648Cu) {
        ctx->pc = 0x4A648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6488u;
        // 0x4a648c: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6490u;
        goto label_4a6490;
    }
    ctx->pc = 0x4A6488u;
    SET_GPR_U32(ctx, 31, 0x4A6490u);
    ctx->pc = 0x4A648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6488u;
    // 0x4a648c: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A6488u, 0x4A6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6490u;
label_4a6490:
    // 0x4a6490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6494:
    // 0x4a6494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6498:
    // 0x4a6498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a649c:
    // 0x4a649c: 0x3e00008  jr          $ra
label_4a64a0:
    if (ctx->pc == 0x4A64A0u) {
        ctx->pc = 0x4A64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A649Cu;
        // 0x4a64a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A64A4u;
        goto label_4a64a4;
    }
    ctx->pc = 0x4A649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A649Cu;
        // 0x4a64a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A64A4u;
label_4a64a4:
    // 0x4a64a4: 0x0  nop
    ctx->pc = 0x4a64a4u;
    // NOP
    ctx->pc = 0x4a64a8u;
}
