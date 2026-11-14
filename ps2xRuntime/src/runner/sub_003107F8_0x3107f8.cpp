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

// Function: sub_003107F8
// Address: 0x3107f8 - 0x3108e0
void sub_003107F8_0x3107f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003107F8_0x3107f8");
#endif

    switch (ctx->pc) {
        case 0x310810u: goto label_310810;
        default: break;
    }

    ctx->pc = 0x3107f8u;

    // 0x3107f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3107f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3107fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3107fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x310800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x310804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310808: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x310808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31080c: 0x0  nop
    ctx->pc = 0x31080cu;
    // NOP
label_310810:
    // 0x310810: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x310810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310814: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x310814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x310818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x310818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31081c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31081Cu;
    {
        const bool branch_taken_0x31081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31081Cu;
        // 0x310820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31081c) {
            ctx->pc = 0x310870u;
            goto label_310870;
        }
    }
    ctx->pc = 0x310824u;
    // 0x310824: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x310828: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x310828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31082c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31082cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x310830: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x310830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x310834: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310834u;
    {
        const bool branch_taken_0x310834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310834u;
        // 0x310838: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310834) {
            ctx->pc = 0x31084Cu;
            goto label_31084c;
        }
    }
    ctx->pc = 0x31083Cu;
    // 0x31083c: 0x24c2ffdd  addiu       $v0, $a2, -0x23
    ctx->pc = 0x31083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967261));
    // 0x310840: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x310840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x310844: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x310844u;
    {
        const bool branch_taken_0x310844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310844) {
            ctx->pc = 0x310848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310844u;
            // 0x310848: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310858u;
            goto label_310858;
        }
    }
    ctx->pc = 0x31084Cu;
label_31084c:
    // 0x31084c: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x31084cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x310850: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x310850u;
    {
        const bool branch_taken_0x310850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310850u;
        // 0x310854: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310850) {
            ctx->pc = 0x31087Cu;
            goto label_31087c;
        }
    }
    ctx->pc = 0x310858u;
label_310858:
    // 0x310858: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x310858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x31085c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31085Cu;
    {
        const bool branch_taken_0x31085c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31085Cu;
        // 0x310860: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31085c) {
            ctx->pc = 0x31087Cu;
            goto label_31087c;
        }
    }
    ctx->pc = 0x310864u;
    // 0x310864: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x310864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x310868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310868u;
    {
        const bool branch_taken_0x310868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310868u;
        // 0x31086c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310868) {
            ctx->pc = 0x31087Cu;
            goto label_31087c;
        }
    }
    ctx->pc = 0x310870u;
label_310870:
    // 0x310870: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x310870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x310874: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x310874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x310878: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x310878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_31087c:
    // 0x31087c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31087cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x310880: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x310880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x310884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310884u;
    {
        const bool branch_taken_0x310884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310884u;
        // 0x310888: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310884) {
            ctx->pc = 0x310894u;
            goto label_310894;
        }
    }
    ctx->pc = 0x31088Cu;
    // 0x31088c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310890: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x310890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310894:
    // 0x310894: 0x28c20028  slti        $v0, $a2, 0x28
    ctx->pc = 0x310894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x310898: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x310898u;
    {
        const bool branch_taken_0x310898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310898u;
        // 0x31089c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310898) {
            ctx->pc = 0x310810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310810;
        }
    }
    ctx->pc = 0x3108A0u;
    // 0x3108a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3108A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3108A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108A0u;
        // 0x3108a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3108A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3108A8u;
    // 0x3108a8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3108a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3108ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3108ACu;
    {
        const bool branch_taken_0x3108ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108ACu;
        // 0x3108b0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108ac) {
            ctx->pc = 0x3108D0u;
            goto label_3108d0;
        }
    }
    ctx->pc = 0x3108B4u;
    // 0x3108b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3108b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3108b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3108bc: 0x24422290  addiu       $v0, $v0, 0x2290
    ctx->pc = 0x3108bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8848));
    // 0x3108c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3108c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3108c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3108c8: 0x80bc5c6  j           func_2F1718
    ctx->pc = 0x3108C8u;
    ctx->pc = 0x3108CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108C8u;
    // 0x3108cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    sub_002F1718_0x2f1718(rdram, ctx, runtime); return;
    ctx->pc = 0x3108D0u;
label_3108d0:
    // 0x3108d0: 0x9043b680  lbu         $v1, -0x4980($v0)
    ctx->pc = 0x3108d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948480)));
    // 0x3108d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3108D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3108D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108D4u;
        // 0x3108d8: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3108D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3108DCu;
    // 0x3108dc: 0x0  nop
    ctx->pc = 0x3108dcu;
    // NOP
    ctx->pc = 0x3108e0u;
}
