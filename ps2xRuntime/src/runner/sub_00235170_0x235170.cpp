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

// Function: sub_00235170
// Address: 0x235170 - 0x2351b0
void sub_00235170_0x235170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235170_0x235170");
#endif

    switch (ctx->pc) {
        case 0x23518cu: goto label_23518c;
        default: break;
    }

    ctx->pc = 0x235170u;

    // 0x235170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23517c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x235180: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235184: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x235184u;
    SET_GPR_U32(ctx, 31, 0x23518Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x235184u, 0x23518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23518Cu;
label_23518c:
    // 0x23518c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23518cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x235190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23519c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23519cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2351a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2351A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2351A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2351A8u;
    // 0x2351a8: 0x0  nop
    ctx->pc = 0x2351a8u;
    // NOP
    // 0x2351ac: 0x0  nop
    ctx->pc = 0x2351acu;
    // NOP
    ctx->pc = 0x2351b0u;
}
