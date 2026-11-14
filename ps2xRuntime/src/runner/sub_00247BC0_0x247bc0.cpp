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

// Function: sub_00247BC0
// Address: 0x247bc0 - 0x247bf0
void sub_00247BC0_0x247bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247BC0_0x247bc0");
#endif

    switch (ctx->pc) {
        case 0x247bd8u: goto label_247bd8;
        default: break;
    }

    ctx->pc = 0x247bc0u;

    // 0x247bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247bcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247bd0: 0xc091efc  jal         func_247BF0
    ctx->pc = 0x247BD0u;
    SET_GPR_U32(ctx, 31, 0x247BD8u);
    ctx->pc = 0x247BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BF0u, 0x247BD0u, 0x247BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BD8u;
label_247bd8:
    // 0x247bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x247be4: 0x3e00008  jr          $ra
    ctx->pc = 0x247BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247BECu;
    // 0x247bec: 0x0  nop
    ctx->pc = 0x247becu;
    // NOP
    ctx->pc = 0x247bf0u;
}
