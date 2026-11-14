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

// Function: sub_0049AAF8
// Address: 0x49aaf8 - 0x49abd8
void sub_0049AAF8_0x49aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AAF8_0x49aaf8");
#endif

    switch (ctx->pc) {
        case 0x49ab40u: goto label_49ab40;
        case 0x49ab50u: goto label_49ab50;
        case 0x49ab70u: goto label_49ab70;
        case 0x49ab80u: goto label_49ab80;
        case 0x49aba4u: goto label_49aba4;
        default: break;
    }

    ctx->pc = 0x49aaf8u;

    // 0x49aaf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49aafc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49ab00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49ab04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49ab04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ab08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49ab0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49ab10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ab14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ab18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x49ab1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49AB1Cu;
    {
        const bool branch_taken_0x49ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ab1c) {
            ctx->pc = 0x49AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AB1Cu;
            // 0x49ab20: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AB2Cu;
            goto label_49ab2c;
        }
    }
    ctx->pc = 0x49AB24u;
    // 0x49ab24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x49AB24u;
    {
        const bool branch_taken_0x49ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB24u;
        // 0x49ab28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab24) {
            ctx->pc = 0x49ABB8u;
            goto label_49abb8;
        }
    }
    ctx->pc = 0x49AB2Cu;
label_49ab2c:
    // 0x49ab2c: 0x9450000c  lhu         $s0, 0xC($v0)
    ctx->pc = 0x49ab2cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x49ab30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49AB30u;
    {
        const bool branch_taken_0x49ab30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB30u;
        // 0x49ab34: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab30) {
            ctx->pc = 0x49AB58u;
            goto label_49ab58;
        }
    }
    ctx->pc = 0x49AB38u;
    // 0x49ab38: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x49ab38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x49ab3c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x49ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49ab40:
    // 0x49ab40: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x49ab40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x49ab44: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x49ab44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49ab48: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x49AB48u;
    SET_GPR_U32(ctx, 31, 0x49AB50u);
    ctx->pc = 0x49AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AB48u;
    // 0x49ab4c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49AB48u, 0x49AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AB50u;
label_49ab50:
    // 0x49ab50: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49AB50u;
    {
        const bool branch_taken_0x49ab50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB50u;
        // 0x49ab54: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab50) {
            ctx->pc = 0x49AB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ab40;
        }
    }
    ctx->pc = 0x49AB58u;
label_49ab58:
    // 0x49ab58: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x49ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x49ab5c: 0x9450000e  lhu         $s0, 0xE($v0)
    ctx->pc = 0x49ab5cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x49ab60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49AB60u;
    {
        const bool branch_taken_0x49ab60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB60u;
        // 0x49ab64: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab60) {
            ctx->pc = 0x49AB88u;
            goto label_49ab88;
        }
    }
    ctx->pc = 0x49AB68u;
    // 0x49ab68: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x49ab68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x49ab6c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x49ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49ab70:
    // 0x49ab70: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x49ab70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x49ab74: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x49ab74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49ab78: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x49AB78u;
    SET_GPR_U32(ctx, 31, 0x49AB80u);
    ctx->pc = 0x49AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AB78u;
    // 0x49ab7c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49AB78u, 0x49AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AB80u;
label_49ab80:
    // 0x49ab80: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49AB80u;
    {
        const bool branch_taken_0x49ab80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB80u;
        // 0x49ab84: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab80) {
            ctx->pc = 0x49AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ab70;
        }
    }
    ctx->pc = 0x49AB88u;
label_49ab88:
    // 0x49ab88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ab8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49ab90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49AB90u;
    {
        const bool branch_taken_0x49ab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ab90) {
            ctx->pc = 0x49AB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AB90u;
            // 0x49ab94: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49ABA8u;
            goto label_49aba8;
        }
    }
    ctx->pc = 0x49AB98u;
    // 0x49ab98: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x49ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x49ab9c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49AB9Cu;
    SET_GPR_U32(ctx, 31, 0x49ABA4u);
    ctx->pc = 0x49ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AB9Cu;
    // 0x49aba0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49AB9Cu, 0x49ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ABA4u;
label_49aba4:
    // 0x49aba4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x49aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_49aba8:
    // 0x49aba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49aba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49abac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x49abacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x49abb0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x49abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x49abb4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x49abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_49abb8:
    // 0x49abb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49abb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49abbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49abbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49abc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49abc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49abc4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49abc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49abc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x49ABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ABCCu;
        // 0x49abd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ABCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ABD4u;
    // 0x49abd4: 0x0  nop
    ctx->pc = 0x49abd4u;
    // NOP
    ctx->pc = 0x49abd8u;
}
