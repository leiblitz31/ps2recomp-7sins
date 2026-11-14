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

// Function: sub_002351F0
// Address: 0x2351f0 - 0x235230
void sub_002351F0_0x2351f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002351F0_0x2351f0");
#endif

    switch (ctx->pc) {
        case 0x23520cu: goto label_23520c;
        default: break;
    }

    ctx->pc = 0x2351f0u;

    // 0x2351f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2351f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2351f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2351f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2351f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2351fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2351fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x235200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235204: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x235204u;
    SET_GPR_U32(ctx, 31, 0x23520Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x235204u, 0x23520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23520Cu;
label_23520c:
    // 0x23520c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23520cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x235210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23521c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235220: 0x3e00008  jr          $ra
    ctx->pc = 0x235220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235228u;
    // 0x235228: 0x0  nop
    ctx->pc = 0x235228u;
    // NOP
    // 0x23522c: 0x0  nop
    ctx->pc = 0x23522cu;
    // NOP
    ctx->pc = 0x235230u;
}
