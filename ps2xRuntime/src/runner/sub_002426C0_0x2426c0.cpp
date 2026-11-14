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

// Function: sub_002426C0
// Address: 0x2426c0 - 0x242710
void sub_002426C0_0x2426c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002426C0_0x2426c0");
#endif

    switch (ctx->pc) {
        case 0x2426dcu: goto label_2426dc;
        case 0x2426fcu: goto label_2426fc;
        default: break;
    }

    ctx->pc = 0x2426c0u;

    // 0x2426c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2426c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2426c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2426c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2426c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2426c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2426cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2426ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2426d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2426d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2426d4: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2426D4u;
    SET_GPR_U32(ctx, 31, 0x2426DCu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2426D4u, 0x2426DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426DCu;
label_2426dc:
    // 0x2426dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2426dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2426e0: 0x246356e0  addiu       $v1, $v1, 0x56E0
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22240));
    // 0x2426e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2426e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2426e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2426ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2426ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2426f0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2426f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2426f4: 0xc090a64  jal         func_242990
    ctx->pc = 0x2426F4u;
    SET_GPR_U32(ctx, 31, 0x2426FCu);
    ctx->pc = 0x242990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242990u, 0x2426F4u, 0x2426FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426FCu;
label_2426fc:
    // 0x2426fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242704: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242708: 0x3e00008  jr          $ra
    ctx->pc = 0x242708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242710u;
}
