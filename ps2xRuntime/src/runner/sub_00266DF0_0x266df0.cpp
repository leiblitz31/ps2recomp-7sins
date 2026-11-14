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

// Function: sub_00266DF0
// Address: 0x266df0 - 0x266e80
void sub_00266DF0_0x266df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266DF0_0x266df0");
#endif

    switch (ctx->pc) {
        case 0x266e2cu: goto label_266e2c;
        case 0x266e6cu: goto label_266e6c;
        default: break;
    }

    ctx->pc = 0x266df0u;

    // 0x266df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266df8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x266df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x266dfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x266dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x266e00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x266e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266e08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x266e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x266e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x266e10: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266E44u;
            goto label_266e44;
        }
    }
    ctx->pc = 0x266E18u;
    // 0x266e18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x266e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x266e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266e20: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x266e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266e24: 0xc099c34  jal         func_2670D0
    ctx->pc = 0x266E24u;
    SET_GPR_U32(ctx, 31, 0x266E2Cu);
    ctx->pc = 0x2670D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670D0u, 0x266E24u, 0x266E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E2Cu;
label_266e2c:
    // 0x266e2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x266e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x266e34: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x266e38: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x266e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x266e3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x266E3Cu;
    {
        const bool branch_taken_0x266e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e3c) {
            ctx->pc = 0x266E6Cu;
            goto label_266e6c;
        }
    }
    ctx->pc = 0x266E44u;
label_266e44:
    // 0x266e44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x266e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e48: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x266e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x266e4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x266e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e50: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266e54: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266e58: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x266e5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266e60: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266e64: 0xc099ba0  jal         func_266E80
    ctx->pc = 0x266E64u;
    SET_GPR_U32(ctx, 31, 0x266E6Cu);
    ctx->pc = 0x266E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266E80u, 0x266E64u, 0x266E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E6Cu;
label_266e6c:
    // 0x266e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266e70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266e74: 0x3e00008  jr          $ra
    ctx->pc = 0x266E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E7Cu;
    // 0x266e7c: 0x0  nop
    ctx->pc = 0x266e7cu;
    // NOP
    ctx->pc = 0x266e80u;
}
