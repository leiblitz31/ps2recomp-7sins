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

// Function: sub_00242E20
// Address: 0x242e20 - 0x242eb0
void sub_00242E20_0x242e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242E20_0x242e20");
#endif

    switch (ctx->pc) {
        case 0x242e5cu: goto label_242e5c;
        case 0x242e9cu: goto label_242e9c;
        default: break;
    }

    ctx->pc = 0x242e20u;

    // 0x242e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242e28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x242e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x242e2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x242e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x242e30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x242e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x242e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242e38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e3c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x242e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242e40: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x242E40u;
    {
        const bool branch_taken_0x242e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x242e40) {
            ctx->pc = 0x242E74u;
            goto label_242e74;
        }
    }
    ctx->pc = 0x242E48u;
    // 0x242e48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242e50: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x242e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242e54: 0xc090c88  jal         func_243220
    ctx->pc = 0x242E54u;
    SET_GPR_U32(ctx, 31, 0x242E5Cu);
    ctx->pc = 0x243220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243220u, 0x242E54u, 0x242E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E5Cu;
label_242e5c:
    // 0x242e5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x242e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e60: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x242e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x242e64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x242e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x242e68: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x242e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x242e6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x242E6Cu;
    {
        const bool branch_taken_0x242e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e6c) {
            ctx->pc = 0x242E9Cu;
            goto label_242e9c;
        }
    }
    ctx->pc = 0x242E74u;
label_242e74:
    // 0x242e74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x242e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e78: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x242e78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x242e7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x242e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e80: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242e84: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242e88: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x242e8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e94: 0xc090bac  jal         func_242EB0
    ctx->pc = 0x242E94u;
    SET_GPR_U32(ctx, 31, 0x242E9Cu);
    ctx->pc = 0x242EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242EB0u, 0x242E94u, 0x242E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242ea0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x242ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x242EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242EACu;
    // 0x242eac: 0x0  nop
    ctx->pc = 0x242eacu;
    // NOP
    ctx->pc = 0x242eb0u;
}
