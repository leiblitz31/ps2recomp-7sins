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

// Function: sub_00127EF0
// Address: 0x127ef0 - 0x127fc0
void sub_00127EF0_0x127ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127EF0_0x127ef0");
#endif

    ctx->pc = 0x127ef0u;

    // 0x127ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127ef4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x127ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x127ef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127efc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127EFCu;
    {
        const bool branch_taken_0x127efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127efc) {
            ctx->pc = 0x127F10u;
            goto label_127f10;
        }
    }
    ctx->pc = 0x127F04u;
    // 0x127f04: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x127f08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127F08u;
    {
        const bool branch_taken_0x127f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127f08) {
            ctx->pc = 0x127F1Cu;
            goto label_127f1c;
        }
    }
    ctx->pc = 0x127F10u;
label_127f10:
    // 0x127f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x127F14u;
    {
        const bool branch_taken_0x127f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f14) {
            ctx->pc = 0x127FACu;
            goto label_127fac;
        }
    }
    ctx->pc = 0x127F1Cu;
label_127f1c:
    // 0x127f1c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x127f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x127f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x127f24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127F24u;
    {
        const bool branch_taken_0x127f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f24) {
            ctx->pc = 0x127F4Cu;
            goto label_127f4c;
        }
    }
    ctx->pc = 0x127F2Cu;
    // 0x127f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127f38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127F38u;
    {
        const bool branch_taken_0x127f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x127f38) {
            ctx->pc = 0x127F4Cu;
            goto label_127f4c;
        }
    }
    ctx->pc = 0x127F40u;
    // 0x127f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x127F44u;
    {
        const bool branch_taken_0x127f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f44) {
            ctx->pc = 0x127FACu;
            goto label_127fac;
        }
    }
    ctx->pc = 0x127F4Cu;
label_127f4c:
    // 0x127f4c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x127f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x127f50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x127f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x127f54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127F54u;
    {
        const bool branch_taken_0x127f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f54) {
            ctx->pc = 0x127F7Cu;
            goto label_127f7c;
        }
    }
    ctx->pc = 0x127F5Cu;
    // 0x127f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x127f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127f68: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127F68u;
    {
        const bool branch_taken_0x127f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x127f68) {
            ctx->pc = 0x127F7Cu;
            goto label_127f7c;
        }
    }
    ctx->pc = 0x127F70u;
    // 0x127f70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x127F74u;
    {
        const bool branch_taken_0x127f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f74) {
            ctx->pc = 0x127FACu;
            goto label_127fac;
        }
    }
    ctx->pc = 0x127F7Cu;
label_127f7c:
    // 0x127f7c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x127f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x127f80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x127f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x127f84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127F84u;
    {
        const bool branch_taken_0x127f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f84) {
            ctx->pc = 0x127FA8u;
            goto label_127fa8;
        }
    }
    ctx->pc = 0x127F8Cu;
    // 0x127f8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x127f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x127f94: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127F94u;
    {
        const bool branch_taken_0x127f94 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x127f94) {
            ctx->pc = 0x127FA8u;
            goto label_127fa8;
        }
    }
    ctx->pc = 0x127F9Cu;
    // 0x127f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127FA0u;
    {
        const bool branch_taken_0x127fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127fa0) {
            ctx->pc = 0x127FACu;
            goto label_127fac;
        }
    }
    ctx->pc = 0x127FA8u;
label_127fa8:
    // 0x127fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127fac:
    // 0x127fac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x127facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x127FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127FB8u;
    // 0x127fb8: 0x0  nop
    ctx->pc = 0x127fb8u;
    // NOP
    // 0x127fbc: 0x0  nop
    ctx->pc = 0x127fbcu;
    // NOP
    ctx->pc = 0x127fc0u;
}
