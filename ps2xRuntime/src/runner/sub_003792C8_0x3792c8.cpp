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

// Function: sub_003792C8
// Address: 0x3792c8 - 0x3796a8
void sub_003792C8_0x3792c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003792C8_0x3792c8");
#endif

    switch (ctx->pc) {
        case 0x3792fcu: goto label_3792fc;
        case 0x379314u: goto label_379314;
        case 0x37933cu: goto label_37933c;
        case 0x37934cu: goto label_37934c;
        case 0x379360u: goto label_379360;
        case 0x379374u: goto label_379374;
        case 0x379380u: goto label_379380;
        case 0x379398u: goto label_379398;
        case 0x3793a4u: goto label_3793a4;
        case 0x3793bcu: goto label_3793bc;
        case 0x379428u: goto label_379428;
        case 0x379470u: goto label_379470;
        case 0x3794b0u: goto label_3794b0;
        case 0x379528u: goto label_379528;
        case 0x379590u: goto label_379590;
        case 0x3795b0u: goto label_3795b0;
        case 0x3795f8u: goto label_3795f8;
        case 0x37965cu: goto label_37965c;
        case 0x37966cu: goto label_37966c;
        default: break;
    }

    ctx->pc = 0x3792c8u;

    // 0x3792c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3792c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3792cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3792ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3792d0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3792d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3792d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3792d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3792d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3792dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3792dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3792e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3792e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3792e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3792e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3792e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3792ec: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3792ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3792f0: 0x8cd50018  lw          $s5, 0x18($a2)
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3792f4: 0xc0de61a  jal         func_379868
    ctx->pc = 0x3792F4u;
    SET_GPR_U32(ctx, 31, 0x3792FCu);
    ctx->pc = 0x3792F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792F4u;
    // 0x3792f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x3792F4u, 0x3792FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792FCu;
label_3792fc:
    // 0x3792fc: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x3792FCu;
    {
        const bool branch_taken_0x3792fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792FCu;
        // 0x379300: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792fc) {
            ctx->pc = 0x379664u;
            goto label_379664;
        }
    }
    ctx->pc = 0x379304u;
    // 0x379304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x379304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379308: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x379308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37930c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x37930Cu;
    SET_GPR_U32(ctx, 31, 0x379314u);
    ctx->pc = 0x379310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37930Cu;
    // 0x379310: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x37930Cu, 0x379314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379314u;
label_379314:
    // 0x379314: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x379314u;
    {
        const bool branch_taken_0x379314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379314u;
        // 0x379318: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379314) {
            ctx->pc = 0x379380u;
            goto label_379380;
        }
    }
    ctx->pc = 0x37931Cu;
    // 0x37931c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x37931cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379320: 0x8eb30014  lw          $s3, 0x14($s5)
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x379324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x379324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379328: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x379328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37932c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37932cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x379330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379334: 0xc0de296  jal         func_378A58
    ctx->pc = 0x379334u;
    SET_GPR_U32(ctx, 31, 0x37933Cu);
    ctx->pc = 0x379338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379334u;
    // 0x379338: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A58u, 0x379334u, 0x37933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37933Cu;
label_37933c:
    // 0x37933c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37933cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x379340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379344: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x379344u;
    SET_GPR_U32(ctx, 31, 0x37934Cu);
    ctx->pc = 0x379348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379344u;
    // 0x379348: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x379344u, 0x37934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37934Cu;
label_37934c:
    // 0x37934c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37934Cu;
    {
        const bool branch_taken_0x37934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37934Cu;
        // 0x379350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37934c) {
            ctx->pc = 0x379380u;
            goto label_379380;
        }
    }
    ctx->pc = 0x379354u;
    // 0x379354: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x379354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x379358: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x379358u;
    SET_GPR_U32(ctx, 31, 0x379360u);
    ctx->pc = 0x37935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379358u;
    // 0x37935c: 0x133080  sll         $a2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x379358u, 0x379360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379360u;
label_379360:
    // 0x379360: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x379360u;
    {
        const bool branch_taken_0x379360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379360u;
        // 0x379364: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379360) {
            ctx->pc = 0x379380u;
            goto label_379380;
        }
    }
    ctx->pc = 0x379368u;
    // 0x379368: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x379368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x37936c: 0xc103454  jal         func_40D150
    ctx->pc = 0x37936Cu;
    SET_GPR_U32(ctx, 31, 0x379374u);
    ctx->pc = 0x379370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37936Cu;
    // 0x379370: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x37936Cu, 0x379374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379374u;
label_379374:
    // 0x379374: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x379374u;
    {
        const bool branch_taken_0x379374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379374) {
            ctx->pc = 0x379378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379374u;
            // 0x379378: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379388u;
            goto label_379388;
        }
    }
    ctx->pc = 0x37937Cu;
    // 0x37937c: 0x0  nop
    ctx->pc = 0x37937cu;
    // NOP
label_379380:
    // 0x379380: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x379380u;
    {
        const bool branch_taken_0x379380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379380u;
        // 0x379384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379380) {
            ctx->pc = 0x379680u;
            goto label_379680;
        }
    }
    ctx->pc = 0x379388u;
label_379388:
    // 0x379388: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x379388u;
    {
        const bool branch_taken_0x379388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379388u;
        // 0x37938c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379388) {
            ctx->pc = 0x3793D8u;
            goto label_3793d8;
        }
    }
    ctx->pc = 0x379390u;
    // 0x379390: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x379390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379394: 0x0  nop
    ctx->pc = 0x379394u;
    // NOP
label_379398:
    // 0x379398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x379398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37939c: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x37939Cu;
    SET_GPR_U32(ctx, 31, 0x3793A4u);
    ctx->pc = 0x3793A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37939Cu;
    // 0x3793a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x37939Cu, 0x3793A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793A4u;
label_3793a4:
    // 0x3793a4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3793A4u;
    {
        const bool branch_taken_0x3793a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3793A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793A4u;
        // 0x3793a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793a4) {
            ctx->pc = 0x379380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379380;
        }
    }
    ctx->pc = 0x3793ACu;
    // 0x3793ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3793acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3793b0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3793b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3793b4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3793B4u;
    SET_GPR_U32(ctx, 31, 0x3793BCu);
    ctx->pc = 0x3793B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793B4u;
    // 0x3793b8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3793B4u, 0x3793BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793BCu;
label_3793bc:
    // 0x3793bc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3793BCu;
    {
        const bool branch_taken_0x3793bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3793C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793BCu;
        // 0x3793c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793bc) {
            ctx->pc = 0x379380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379380;
        }
    }
    ctx->pc = 0x3793C4u;
    // 0x3793c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3793c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3793c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3793c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3793cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3793CCu;
    {
        const bool branch_taken_0x3793cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3793D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793CCu;
        // 0x3793d0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793cc) {
            ctx->pc = 0x379398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379398;
        }
    }
    ctx->pc = 0x3793D4u;
    // 0x3793d4: 0x0  nop
    ctx->pc = 0x3793d4u;
    // NOP
label_3793d8:
    // 0x3793d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3793d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3793dc: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x3793dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3793e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3793e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3793e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3793e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793e8: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
    ctx->pc = 0x3793E8u;
    {
        const bool branch_taken_0x3793e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3793ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793E8u;
        // 0x3793ec: 0x260c0004  addiu       $t4, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793e8) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x3793F0u;
    // 0x3793f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3793f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3793f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3793f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793f8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3793f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793fc: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3793FCu;
    {
        const bool branch_taken_0x3793fc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x379400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793FCu;
        // 0x379400: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793fc) {
            ctx->pc = 0x37940Cu;
            goto label_37940c;
        }
    }
    ctx->pc = 0x379404u;
    // 0x379404: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x379404u;
    {
        const bool branch_taken_0x379404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379404) {
            ctx->pc = 0x379408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379404u;
            // 0x379408: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379474u;
            goto label_379474;
        }
    }
    ctx->pc = 0x37940Cu;
label_37940c:
    // 0x37940c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x37940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x379410: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x379410u;
    {
        const bool branch_taken_0x379410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379410u;
        // 0x379414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379410) {
            ctx->pc = 0x37945Cu;
            goto label_37945c;
        }
    }
    ctx->pc = 0x379418u;
    // 0x379418: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37941c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x37941cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x379420: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x379420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379424: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x379424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_379428:
    // 0x379428: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x379428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37942c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37942Cu;
    {
        const bool branch_taken_0x37942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37942c) {
            ctx->pc = 0x379430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37942Cu;
            // 0x379430: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379460u;
            goto label_379460;
        }
    }
    ctx->pc = 0x379434u;
    // 0x379434: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x379434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x379438: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x379438u;
    {
        const bool branch_taken_0x379438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379438) {
            ctx->pc = 0x37943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379438u;
            // 0x37943c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379460u;
            goto label_379460;
        }
    }
    ctx->pc = 0x379440u;
    // 0x379440: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x379440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x379444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379448: 0x10450049  beq         $v0, $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x379448u;
    {
        const bool branch_taken_0x379448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379448u;
        // 0x37944c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379448) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379450u;
    // 0x379450: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x379450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x379454: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x379454u;
    {
        const bool branch_taken_0x379454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379454u;
        // 0x379458: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379454) {
            ctx->pc = 0x379428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379428;
        }
    }
    ctx->pc = 0x37945Cu;
label_37945c:
    // 0x37945c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x37945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_379460:
    // 0x379460: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x379464: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x379464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x379468: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x379468u;
    {
        const bool branch_taken_0x379468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379468u;
        // 0x37946c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379468) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379470u;
label_379470:
    // 0x379470: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x379470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_379474:
    // 0x379474: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x379474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x379478: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x379478u;
    {
        const bool branch_taken_0x379478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379478u;
        // 0x37947c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379478) {
            ctx->pc = 0x3794E4u;
            goto label_3794e4;
        }
    }
    ctx->pc = 0x379480u;
    // 0x379480: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x379480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x379484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x379484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379488: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x379488u;
    {
        const bool branch_taken_0x379488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379488u;
        // 0x37948c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379488) {
            ctx->pc = 0x3794E4u;
            goto label_3794e4;
        }
    }
    ctx->pc = 0x379490u;
    // 0x379490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x379490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379494: 0x108a0036  beq         $a0, $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x379494u;
    {
        const bool branch_taken_0x379494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x379498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379494u;
        // 0x379498: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379494) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x37949Cu;
    // 0x37949c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37949cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3794a0: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x3794a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3794a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3794a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3794a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3794a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3794ac: 0x0  nop
    ctx->pc = 0x3794acu;
    // NOP
label_3794b0:
    // 0x3794b0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3794b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3794b4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3794B4u;
    {
        const bool branch_taken_0x3794b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3794b4) {
            ctx->pc = 0x3794B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3794B4u;
            // 0x3794b8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3794E8u;
            goto label_3794e8;
        }
    }
    ctx->pc = 0x3794BCu;
    // 0x3794bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3794bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3794c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3794C0u;
    {
        const bool branch_taken_0x3794c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3794c0) {
            ctx->pc = 0x3794C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3794C0u;
            // 0x3794c4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3794E8u;
            goto label_3794e8;
        }
    }
    ctx->pc = 0x3794C8u;
    // 0x3794c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3794c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3794cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3794ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3794d0: 0x10450027  beq         $v0, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3794D0u;
    {
        const bool branch_taken_0x3794d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3794D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794D0u;
        // 0x3794d4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794d0) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x3794D8u;
    // 0x3794d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3794d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3794dc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3794DCu;
    {
        const bool branch_taken_0x3794dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794DCu;
        // 0x3794e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794dc) {
            ctx->pc = 0x3794B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3794b0;
        }
    }
    ctx->pc = 0x3794E4u;
label_3794e4:
    // 0x3794e4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3794e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3794e8:
    // 0x3794e8: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x3794e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3794ec: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3794ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3794f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3794F0u;
    {
        const bool branch_taken_0x3794f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F0u;
        // 0x3794f4: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794f0) {
            ctx->pc = 0x37955Cu;
            goto label_37955c;
        }
    }
    ctx->pc = 0x3794F8u;
    // 0x3794f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3794f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3794fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3794fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x379500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x379500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379504: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x379504u;
    {
        const bool branch_taken_0x379504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379504u;
        // 0x379508: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379504) {
            ctx->pc = 0x37955Cu;
            goto label_37955c;
        }
    }
    ctx->pc = 0x37950Cu;
    // 0x37950c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379510: 0x108a0017  beq         $a0, $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x379510u;
    {
        const bool branch_taken_0x379510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x379514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379510u;
        // 0x379514: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379510) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379518u;
    // 0x379518: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x379518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x37951c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x37951cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x379520: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x379520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x379524: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_379528:
    // 0x379528: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x379528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37952c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37952Cu;
    {
        const bool branch_taken_0x37952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37952c) {
            ctx->pc = 0x379530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37952Cu;
            // 0x379530: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379560u;
            goto label_379560;
        }
    }
    ctx->pc = 0x379534u;
    // 0x379534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x379534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x379538: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x379538u;
    {
        const bool branch_taken_0x379538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379538) {
            ctx->pc = 0x37953Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379538u;
            // 0x37953c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379560u;
            goto label_379560;
        }
    }
    ctx->pc = 0x379540u;
    // 0x379540: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x379540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x379544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379548: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x379548u;
    {
        const bool branch_taken_0x379548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379548u;
        // 0x37954c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379548) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379550u;
    // 0x379550: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x379550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x379554: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x379554u;
    {
        const bool branch_taken_0x379554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379554u;
        // 0x379558: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379554) {
            ctx->pc = 0x379528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379528;
        }
    }
    ctx->pc = 0x37955Cu;
label_37955c:
    // 0x37955c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x37955cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_379560:
    // 0x379560: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x379560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x379564: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x379564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x379568: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x379568u;
    {
        const bool branch_taken_0x379568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379568u;
        // 0x37956c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379568) {
            ctx->pc = 0x379470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379470;
        }
    }
    ctx->pc = 0x379570u;
label_379570:
    // 0x379570: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x379570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x379574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x379574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379578: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x379578u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x37957c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x37957cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x379580: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x379580u;
    {
        const bool branch_taken_0x379580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x379584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379580u;
        // 0x379584: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379580) {
            ctx->pc = 0x379650u;
            goto label_379650;
        }
    }
    ctx->pc = 0x379588u;
    // 0x379588: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x379588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37958c: 0x0  nop
    ctx->pc = 0x37958cu;
    // NOP
label_379590:
    // 0x379590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x379590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379594: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x379594u;
    {
        const bool branch_taken_0x379594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379594u;
        // 0x379598: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379594) {
            ctx->pc = 0x379640u;
            goto label_379640;
        }
    }
    ctx->pc = 0x37959Cu;
    // 0x37959c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x37959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3795a0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3795a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3795a4: 0x4e5821  addu        $t3, $v0, $t6
    ctx->pc = 0x3795a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3795a8: 0x6f5021  addu        $t2, $v1, $t7
    ctx->pc = 0x3795a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x3795ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3795acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3795b0:
    // 0x3795b0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3795b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3795b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3795b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3795b8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3795B8u;
    {
        const bool branch_taken_0x3795b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3795BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795B8u;
        // 0x3795bc: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795b8) {
            ctx->pc = 0x37962Cu;
            goto label_37962c;
        }
    }
    ctx->pc = 0x3795C0u;
    // 0x3795c0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3795c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3795c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3795c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3795c8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3795cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3795ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3795d0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x3795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3795d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3795d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3795d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795dc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3795DCu;
    {
        const bool branch_taken_0x3795dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3795E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795DCu;
        // 0x3795e0: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795dc) {
            ctx->pc = 0x379614u;
            goto label_379614;
        }
    }
    ctx->pc = 0x3795E4u;
    // 0x3795e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3795e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3795e8: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3795E8u;
    {
        const bool branch_taken_0x3795e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3795e8) {
            ctx->pc = 0x3795ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3795E8u;
            // 0x3795ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379614u;
            goto label_379614;
        }
    }
    ctx->pc = 0x3795F0u;
    // 0x3795f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3795f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3795f4: 0x0  nop
    ctx->pc = 0x3795f4u;
    // NOP
label_3795f8:
    // 0x3795f8: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x3795f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3795fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3795FCu;
    {
        const bool branch_taken_0x3795fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795FCu;
        // 0x379600: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795fc) {
            ctx->pc = 0x379614u;
            goto label_379614;
        }
    }
    ctx->pc = 0x379604u;
    // 0x379604: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x379604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379608: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x379608u;
    {
        const bool branch_taken_0x379608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x379608) {
            ctx->pc = 0x37960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379608u;
            // 0x37960c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3795F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3795f8;
        }
    }
    ctx->pc = 0x379610u;
    // 0x379610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x379610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379614:
    // 0x379614: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x379614u;
    {
        const bool branch_taken_0x379614 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x379618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379614u;
        // 0x379618: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379614) {
            ctx->pc = 0x37962Cu;
            goto label_37962c;
        }
    }
    ctx->pc = 0x37961Cu;
    // 0x37961c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37961cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x379620: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x379620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x379624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379628: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x379628u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_37962c:
    // 0x37962c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x37962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x379630: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x379630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379634: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x379634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379638: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x379638u;
    {
        const bool branch_taken_0x379638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379638u;
        // 0x37963c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379638) {
            ctx->pc = 0x3795B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3795b0;
        }
    }
    ctx->pc = 0x379640u;
label_379640:
    // 0x379640: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x379640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379644: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x379644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x379648: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x379648u;
    {
        const bool branch_taken_0x379648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379648) {
            ctx->pc = 0x37964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379648u;
            // 0x37964c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379590;
        }
    }
    ctx->pc = 0x379650u;
label_379650:
    // 0x379650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x379650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379654: 0xc0de5f8  jal         func_3797E0
    ctx->pc = 0x379654u;
    SET_GPR_U32(ctx, 31, 0x37965Cu);
    ctx->pc = 0x379658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379654u;
    // 0x379658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3797E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3797E0u, 0x379654u, 0x37965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37965Cu;
label_37965c:
    // 0x37965c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37965Cu;
    {
        const bool branch_taken_0x37965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37965Cu;
        // 0x379660: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37965c) {
            ctx->pc = 0x379680u;
            goto label_379680;
        }
    }
    ctx->pc = 0x379664u;
label_379664:
    // 0x379664: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x379664u;
    SET_GPR_U32(ctx, 31, 0x37966Cu);
    ctx->pc = 0x379668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379664u;
    // 0x379668: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x379664u, 0x37966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37966Cu;
label_37966c:
    // 0x37966c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37966cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379670: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x379670u;
    {
        const bool branch_taken_0x379670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379670u;
        // 0x379674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379670) {
            ctx->pc = 0x379680u;
            goto label_379680;
        }
    }
    ctx->pc = 0x379678u;
    // 0x379678: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x379678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37967c: 0x0  nop
    ctx->pc = 0x37967cu;
    // NOP
label_379680:
    // 0x379680: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x379680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x379684: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x379684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x379688: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x379688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37968c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37968cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379690: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x379690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379694: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x379694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37969c: 0x3e00008  jr          $ra
    ctx->pc = 0x37969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3796A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37969Cu;
        // 0x3796a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3796A4u;
    // 0x3796a4: 0x0  nop
    ctx->pc = 0x3796a4u;
    // NOP
    ctx->pc = 0x3796a8u;
}
