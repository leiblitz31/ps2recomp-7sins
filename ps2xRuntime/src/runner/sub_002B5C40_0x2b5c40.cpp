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

// Function: sub_002B5C40
// Address: 0x2b5c40 - 0x2b5c80
void sub_002B5C40_0x2b5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C40_0x2b5c40");
#endif

    switch (ctx->pc) {
        case 0x2b5c5cu: goto label_2b5c5c;
        default: break;
    }

    ctx->pc = 0x2b5c40u;

    // 0x2b5c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5c4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b5c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b5c50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5c54: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2B5C54u;
    SET_GPR_U32(ctx, 31, 0x2B5C5Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2B5C54u, 0x2B5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C5Cu;
label_2b5c5c:
    // 0x2b5c5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b5c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5c6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C78u;
    // 0x2b5c78: 0x0  nop
    ctx->pc = 0x2b5c78u;
    // NOP
    // 0x2b5c7c: 0x0  nop
    ctx->pc = 0x2b5c7cu;
    // NOP
    ctx->pc = 0x2b5c80u;
}
