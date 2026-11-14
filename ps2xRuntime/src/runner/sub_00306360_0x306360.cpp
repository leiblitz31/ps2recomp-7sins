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

// Function: sub_00306360
// Address: 0x306360 - 0x306460
void sub_00306360_0x306360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306360_0x306360");
#endif

    switch (ctx->pc) {
        case 0x306388u: goto label_306388;
        case 0x30639cu: goto label_30639c;
        case 0x3063e0u: goto label_3063e0;
        case 0x306420u: goto label_306420;
        default: break;
    }

    ctx->pc = 0x306360u;

    // 0x306360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x306364: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x306364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x306368: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x30636c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x306370: 0x8e420c40  lw          $v0, 0xC40($s2)
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C40u));
    // 0x306374: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x306374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x306378: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x306378u;
    {
        const bool branch_taken_0x306378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306378u;
        // 0x30637c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306378) {
            ctx->pc = 0x306444u;
            goto label_306444;
        }
    }
    ctx->pc = 0x306380u;
    // 0x306380: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x306380u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
    // 0x306384: 0x26302f00  addiu       $s0, $s1, 0x2F00
    ctx->pc = 0x306384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12032));
label_306388:
    // 0x306388: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x306388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x30638c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306390: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x306390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x306394: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x306394u;
    SET_GPR_U32(ctx, 31, 0x30639Cu);
    ctx->pc = 0x306398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306394u;
    // 0x306398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x306394u, 0x30639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30639Cu;
    {
        const bool branch_taken_0x30639c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30639c) {
            ctx->pc = 0x3063A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30639Cu;
            // 0x3063a0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3063ACu;
            goto label_3063ac;
        }
    }
    ctx->pc = 0x3063A4u;
    // 0x3063a4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3063A4u;
    {
        const bool branch_taken_0x3063a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063A4u;
        // 0x3063a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063a4) {
            ctx->pc = 0x306448u;
            goto label_306448;
        }
    }
    ctx->pc = 0x3063ACu;
label_3063ac:
    // 0x3063ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3063ACu;
    {
        const bool branch_taken_0x3063ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ACu;
        // 0x3063b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ac) {
            ctx->pc = 0x306414u;
            goto label_306414;
        }
    }
    ctx->pc = 0x3063B4u;
    // 0x3063b4: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
    // 0x3063b8: 0xae400c40  sw          $zero, 0xC40($s2)
    ctx->pc = 0x3063b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3136), GPR_U32(ctx, 0));
    // 0x3063bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3063bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3063c0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3063c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3063c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3063c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3063ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063d0: 0x26292d00  addiu       $t1, $s1, 0x2D00
    ctx->pc = 0x3063d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 11520));
    // 0x3063d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3063d8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3063D8u;
    SET_GPR_U32(ctx, 31, 0x3063E0u);
    ctx->pc = 0x3063DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063D8u;
    // 0x3063dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3063D8u, 0x3063E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063E0u;
label_3063e0:
    // 0x3063e0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3063E0u;
    {
        const bool branch_taken_0x3063e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3063E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063E0u;
        // 0x3063e4: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063e0) {
            ctx->pc = 0x3063F4u;
            goto label_3063f4;
        }
    }
    ctx->pc = 0x3063E8u;
    // 0x3063e8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3063e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3063ec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3063ECu;
    {
        const bool branch_taken_0x3063ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063ECu;
        // 0x3063f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ec) {
            ctx->pc = 0x306448u;
            goto label_306448;
        }
    }
    ctx->pc = 0x3063F4u;
label_3063f4:
    // 0x3063f4: 0x26272d00  addiu       $a3, $s1, 0x2D00
    ctx->pc = 0x3063f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 11520));
    // 0x3063f8: 0x24662f28  addiu       $a2, $v1, 0x2F28
    ctx->pc = 0x3063f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12072));
    // 0x3063fc: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3063fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x306400: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x306400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x306404: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x306404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x306408: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x306408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30640c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30640Cu;
    {
        const bool branch_taken_0x30640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30640Cu;
        // 0x306410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30640c) {
            ctx->pc = 0x306448u;
            goto label_306448;
        }
    }
    ctx->pc = 0x306414u;
label_306414:
    // 0x306414: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x306414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x306418: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x306418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30641c: 0x0  nop
    ctx->pc = 0x30641cu;
    // NOP
label_306420:
    // 0x306420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x306420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x306424: 0x0  nop
    ctx->pc = 0x306424u;
    // NOP
    // 0x306428: 0x0  nop
    ctx->pc = 0x306428u;
    // NOP
    // 0x30642c: 0x0  nop
    ctx->pc = 0x30642cu;
    // NOP
    // 0x306430: 0x0  nop
    ctx->pc = 0x306430u;
    // NOP
    // 0x306434: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x306434u;
    {
        const bool branch_taken_0x306434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306434) {
            ctx->pc = 0x306420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306420;
        }
    }
    ctx->pc = 0x30643Cu;
    // 0x30643c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x30643Cu;
    {
        const bool branch_taken_0x30643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30643Cu;
        // 0x306440: 0x26302f00  addiu       $s0, $s1, 0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30643c) {
            ctx->pc = 0x306388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306388;
        }
    }
    ctx->pc = 0x306444u;
label_306444:
    // 0x306444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x306444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306448:
    // 0x306448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x306448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30644c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30644cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306450: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x306450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306458: 0x3e00008  jr          $ra
    ctx->pc = 0x306458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306458u;
        // 0x30645c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306460u;
}
