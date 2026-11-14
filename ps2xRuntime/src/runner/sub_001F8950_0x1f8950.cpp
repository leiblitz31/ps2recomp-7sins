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

// Function: sub_001F8950
// Address: 0x1f8950 - 0x1f89b0
void sub_001F8950_0x1f8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8950_0x1f8950");
#endif

    switch (ctx->pc) {
        case 0x1f8968u: goto label_1f8968;
        case 0x1f8974u: goto label_1f8974;
        case 0x1f8980u: goto label_1f8980;
        case 0x1f898cu: goto label_1f898c;
        case 0x1f8998u: goto label_1f8998;
        default: break;
    }

    ctx->pc = 0x1f8950u;

    // 0x1f8950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f8958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f895c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8960: 0xc07e2fc  jal         func_1F8BF0
    ctx->pc = 0x1F8960u;
    SET_GPR_U32(ctx, 31, 0x1F8968u);
    ctx->pc = 0x1F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8BF0u, 0x1F8960u, 0x1F8968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8968u;
label_1f8968:
    // 0x1f8968: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f896c: 0xc07e358  jal         func_1F8D60
    ctx->pc = 0x1F896Cu;
    SET_GPR_U32(ctx, 31, 0x1F8974u);
    ctx->pc = 0x1F8D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D60u, 0x1F896Cu, 0x1F8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8974u;
label_1f8974:
    // 0x1f8974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f8974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8978: 0xc07e3b4  jal         func_1F8ED0
    ctx->pc = 0x1F8978u;
    SET_GPR_U32(ctx, 31, 0x1F8980u);
    ctx->pc = 0x1F8ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8ED0u, 0x1F8978u, 0x1F8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8980u;
label_1f8980:
    // 0x1f8980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8984: 0xc07e410  jal         func_1F9040
    ctx->pc = 0x1F8984u;
    SET_GPR_U32(ctx, 31, 0x1F898Cu);
    ctx->pc = 0x1F9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9040u, 0x1F8984u, 0x1F898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F898Cu;
label_1f898c:
    // 0x1f898c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8990: 0xc07e26c  jal         func_1F89B0
    ctx->pc = 0x1F8990u;
    SET_GPR_U32(ctx, 31, 0x1F8998u);
    ctx->pc = 0x1F89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B0u, 0x1F8990u, 0x1F8998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8998u;
label_1f8998:
    // 0x1f8998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f899c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f899cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f89a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F89A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89A8u;
    // 0x1f89a8: 0x0  nop
    ctx->pc = 0x1f89a8u;
    // NOP
    // 0x1f89ac: 0x0  nop
    ctx->pc = 0x1f89acu;
    // NOP
    ctx->pc = 0x1f89b0u;
}
