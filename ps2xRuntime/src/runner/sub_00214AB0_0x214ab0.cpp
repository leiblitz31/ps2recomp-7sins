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

// Function: sub_00214AB0
// Address: 0x214ab0 - 0x214ae0
void sub_00214AB0_0x214ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214AB0_0x214ab0");
#endif

    switch (ctx->pc) {
        case 0x214ac8u: goto label_214ac8;
        default: break;
    }

    ctx->pc = 0x214ab0u;

    // 0x214ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x214abc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ac0: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x214AC0u;
    SET_GPR_U32(ctx, 31, 0x214AC8u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x214AC0u, 0x214AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AC8u;
label_214ac8:
    // 0x214ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214acc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x214AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214AD8u;
    // 0x214ad8: 0x0  nop
    ctx->pc = 0x214ad8u;
    // NOP
    // 0x214adc: 0x0  nop
    ctx->pc = 0x214adcu;
    // NOP
    ctx->pc = 0x214ae0u;
}
