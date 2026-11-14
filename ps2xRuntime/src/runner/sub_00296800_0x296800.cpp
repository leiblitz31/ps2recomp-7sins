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

// Function: sub_00296800
// Address: 0x296800 - 0x296830
void sub_00296800_0x296800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296800_0x296800");
#endif

    switch (ctx->pc) {
        case 0x29681cu: goto label_29681c;
        default: break;
    }

    ctx->pc = 0x296800u;

    // 0x296800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29680c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296810: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296814: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x296814u;
    SET_GPR_U32(ctx, 31, 0x29681Cu);
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x296814u, 0x29681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29681Cu;
label_29681c:
    // 0x29681c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296824: 0x3e00008  jr          $ra
    ctx->pc = 0x296824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29682Cu;
    // 0x29682c: 0x0  nop
    ctx->pc = 0x29682cu;
    // NOP
    ctx->pc = 0x296830u;
}
