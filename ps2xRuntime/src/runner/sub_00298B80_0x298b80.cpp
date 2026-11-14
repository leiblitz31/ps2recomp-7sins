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

// Function: sub_00298B80
// Address: 0x298b80 - 0x298bb0
void sub_00298B80_0x298b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298B80_0x298b80");
#endif

    switch (ctx->pc) {
        case 0x298ba0u: goto label_298ba0;
        default: break;
    }

    ctx->pc = 0x298b80u;

    // 0x298b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b94: 0x90450044  lbu         $a1, 0x44($v0)
    ctx->pc = 0x298b94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x298b98: 0xc0a62ec  jal         func_298BB0
    ctx->pc = 0x298B98u;
    SET_GPR_U32(ctx, 31, 0x298BA0u);
    ctx->pc = 0x298BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298BB0u, 0x298B98u, 0x298BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BA0u;
label_298ba0:
    // 0x298ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ba4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x298BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298BB0u;
}
