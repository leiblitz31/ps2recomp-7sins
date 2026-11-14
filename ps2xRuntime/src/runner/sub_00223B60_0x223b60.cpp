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

// Function: sub_00223B60
// Address: 0x223b60 - 0x223bc0
void sub_00223B60_0x223b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B60_0x223b60");
#endif

    switch (ctx->pc) {
        case 0x223b7cu: goto label_223b7c;
        case 0x223b8cu: goto label_223b8c;
        case 0x223ba0u: goto label_223ba0;
        default: break;
    }

    ctx->pc = 0x223b60u;

    // 0x223b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223b6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x223b70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x223b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b74: 0xc088d6c  jal         func_2235B0
    ctx->pc = 0x223B74u;
    SET_GPR_U32(ctx, 31, 0x223B7Cu);
    ctx->pc = 0x2235B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235B0u, 0x223B74u, 0x223B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B7Cu;
label_223b7c:
    // 0x223b7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x223b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b84: 0xc088f54  jal         func_223D50
    ctx->pc = 0x223B84u;
    SET_GPR_U32(ctx, 31, 0x223B8Cu);
    ctx->pc = 0x223D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D50u, 0x223B84u, 0x223B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B8Cu;
label_223b8c:
    // 0x223b8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x223b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b98: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x223B98u;
    SET_GPR_U32(ctx, 31, 0x223BA0u);
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x223B98u, 0x223BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BA0u;
label_223ba0:
    // 0x223ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ba8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223bac: 0x3e00008  jr          $ra
    ctx->pc = 0x223BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223BB4u;
    // 0x223bb4: 0x0  nop
    ctx->pc = 0x223bb4u;
    // NOP
    // 0x223bb8: 0x0  nop
    ctx->pc = 0x223bb8u;
    // NOP
    // 0x223bbc: 0x0  nop
    ctx->pc = 0x223bbcu;
    // NOP
    ctx->pc = 0x223bc0u;
}
