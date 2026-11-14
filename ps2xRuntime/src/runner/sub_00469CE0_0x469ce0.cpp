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

// Function: sub_00469CE0
// Address: 0x469ce0 - 0x469d30
void sub_00469CE0_0x469ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469CE0_0x469ce0");
#endif

    switch (ctx->pc) {
        case 0x469cf8u: goto label_469cf8;
        case 0x469d1cu: goto label_469d1c;
        default: break;
    }

    ctx->pc = 0x469ce0u;

    // 0x469ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469ce8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x469ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x469cec: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x469cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x469cf0: 0xc11a82c  jal         func_46A0B0
    ctx->pc = 0x469CF0u;
    SET_GPR_U32(ctx, 31, 0x469CF8u);
    ctx->pc = 0x46A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0B0u, 0x469CF0u, 0x469CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469CF8u;
label_469cf8:
    // 0x469cf8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x469cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x469cfc: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x469cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x469d00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d04: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x469d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x469d08: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x469d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x469d0c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x469d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x469d10: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x469d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469d14: 0xc11a74c  jal         func_469D30
    ctx->pc = 0x469D14u;
    SET_GPR_U32(ctx, 31, 0x469D1Cu);
    ctx->pc = 0x469D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469D30u, 0x469D14u, 0x469D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D1Cu;
label_469d1c:
    // 0x469d1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x469d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469d24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469d28: 0x3e00008  jr          $ra
    ctx->pc = 0x469D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469D30u;
}
