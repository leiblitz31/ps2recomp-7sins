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

// Function: sub_00106ED0
// Address: 0x106ed0 - 0x106f10
void sub_00106ED0_0x106ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106ED0_0x106ed0");
#endif

    switch (ctx->pc) {
        case 0x106ee8u: goto label_106ee8;
        default: break;
    }

    ctx->pc = 0x106ed0u;

    // 0x106ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106edc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ee0: 0xc08dab8  jal         func_236AE0
    ctx->pc = 0x106EE0u;
    SET_GPR_U32(ctx, 31, 0x106EE8u);
    ctx->pc = 0x236AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AE0u, 0x106EE0u, 0x106EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EE8u;
label_106ee8:
    // 0x106ee8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x106eec: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x106eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
    // 0x106ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x106ef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106f00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106f04: 0x3e00008  jr          $ra
    ctx->pc = 0x106F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106F0Cu;
    // 0x106f0c: 0x0  nop
    ctx->pc = 0x106f0cu;
    // NOP
    ctx->pc = 0x106f10u;
}
