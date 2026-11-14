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

// Function: sub_00487800
// Address: 0x487800 - 0x487840
void sub_00487800_0x487800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487800_0x487800");
#endif

    switch (ctx->pc) {
        case 0x487820u: goto label_487820;
        case 0x48782cu: goto label_48782c;
        default: break;
    }

    ctx->pc = 0x487800u;

    // 0x487800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x487800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x487804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x487808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48780c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487810: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x487810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x487814: 0x24a57840  addiu       $a1, $a1, 0x7840
    ctx->pc = 0x487814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30784));
    // 0x487818: 0xc0c88b0  jal         func_3222C0
    ctx->pc = 0x487818u;
    SET_GPR_U32(ctx, 31, 0x487820u);
    ctx->pc = 0x3222C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3222C0u, 0x487818u, 0x487820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487820u;
label_487820:
    // 0x487820: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x487820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487824: 0xc0c8958  jal         func_322560
    ctx->pc = 0x487824u;
    SET_GPR_U32(ctx, 31, 0x48782Cu);
    ctx->pc = 0x322560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322560u, 0x487824u, 0x48782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48782Cu;
label_48782c:
    // 0x48782c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487834: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x487834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x487838: 0x3e00008  jr          $ra
    ctx->pc = 0x487838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487840u;
}
