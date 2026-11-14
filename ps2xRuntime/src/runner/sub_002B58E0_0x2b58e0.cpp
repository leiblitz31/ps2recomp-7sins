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

// Function: sub_002B58E0
// Address: 0x2b58e0 - 0x2b5920
void sub_002B58E0_0x2b58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B58E0_0x2b58e0");
#endif

    switch (ctx->pc) {
        case 0x2b58f8u: goto label_2b58f8;
        default: break;
    }

    ctx->pc = 0x2b58e0u;

    // 0x2b58e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b58e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b58e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b58ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b58f0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2B58F0u;
    SET_GPR_U32(ctx, 31, 0x2B58F8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2B58F0u, 0x2B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58F8u;
label_2b58f8:
    // 0x2b58f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b58fc: 0x24636660  addiu       $v1, $v1, 0x6660
    ctx->pc = 0x2b58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26208));
    // 0x2b5900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5904: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b5904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b5908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b590c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5910: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5914: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B591Cu;
    // 0x2b591c: 0x0  nop
    ctx->pc = 0x2b591cu;
    // NOP
    ctx->pc = 0x2b5920u;
}
