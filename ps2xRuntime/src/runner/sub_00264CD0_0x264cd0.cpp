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

// Function: sub_00264CD0
// Address: 0x264cd0 - 0x264d30
void sub_00264CD0_0x264cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CD0_0x264cd0");
#endif

    switch (ctx->pc) {
        case 0x264d04u: goto label_264d04;
        case 0x264d14u: goto label_264d14;
        default: break;
    }

    ctx->pc = 0x264cd0u;

    // 0x264cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x264cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x264cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ce0: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x264ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x264ce4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x264ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x264ce8: 0x24a54d30  addiu       $a1, $a1, 0x4D30
    ctx->pc = 0x264ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
    // 0x264cec: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x264cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x264cf0: 0x24c627b0  addiu       $a2, $a2, 0x27B0
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10160));
    // 0x264cf4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x264cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x264cf8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x264cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264cfc: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x264CFCu;
    SET_GPR_U32(ctx, 31, 0x264D04u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x264CFCu, 0x264D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D04u;
label_264d04:
    // 0x264d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264d08: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x264d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x264d0c: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x264D0Cu;
    SET_GPR_U32(ctx, 31, 0x264D14u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x264D0Cu, 0x264D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D14u;
label_264d14:
    // 0x264d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x264d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x264d20: 0x3e00008  jr          $ra
    ctx->pc = 0x264D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D28u;
    // 0x264d28: 0x0  nop
    ctx->pc = 0x264d28u;
    // NOP
    // 0x264d2c: 0x0  nop
    ctx->pc = 0x264d2cu;
    // NOP
    ctx->pc = 0x264d30u;
}
