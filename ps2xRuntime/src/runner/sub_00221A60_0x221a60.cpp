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

// Function: sub_00221A60
// Address: 0x221a60 - 0x221ac0
void sub_00221A60_0x221a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221A60_0x221a60");
#endif

    switch (ctx->pc) {
        case 0x221a7cu: goto label_221a7c;
        case 0x221a8cu: goto label_221a8c;
        case 0x221aa0u: goto label_221aa0;
        default: break;
    }

    ctx->pc = 0x221a60u;

    // 0x221a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221a6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x221a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x221a70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221a74: 0xc088708  jal         func_221C20
    ctx->pc = 0x221A74u;
    SET_GPR_U32(ctx, 31, 0x221A7Cu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x221A74u, 0x221A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A7Cu;
label_221a7c:
    // 0x221a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221a84: 0xc088700  jal         func_221C00
    ctx->pc = 0x221A84u;
    SET_GPR_U32(ctx, 31, 0x221A8Cu);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x221A84u, 0x221A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A8Cu;
label_221a8c:
    // 0x221a8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x221a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a98: 0xc0886b0  jal         func_221AC0
    ctx->pc = 0x221A98u;
    SET_GPR_U32(ctx, 31, 0x221AA0u);
    ctx->pc = 0x221AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AC0u, 0x221A98u, 0x221AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AA0u;
label_221aa0:
    // 0x221aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221aa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221aac: 0x3e00008  jr          $ra
    ctx->pc = 0x221AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221AB4u;
    // 0x221ab4: 0x0  nop
    ctx->pc = 0x221ab4u;
    // NOP
    // 0x221ab8: 0x0  nop
    ctx->pc = 0x221ab8u;
    // NOP
    // 0x221abc: 0x0  nop
    ctx->pc = 0x221abcu;
    // NOP
    ctx->pc = 0x221ac0u;
}
