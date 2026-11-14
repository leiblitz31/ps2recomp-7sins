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

// Function: sub_00211080
// Address: 0x211080 - 0x2110d0
void sub_00211080_0x211080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211080_0x211080");
#endif

    switch (ctx->pc) {
        case 0x2110a4u: goto label_2110a4;
        case 0x2110bcu: goto label_2110bc;
        default: break;
    }

    ctx->pc = 0x211080u;

    // 0x211080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21108c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x211090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211094: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x211094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x211098: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21109c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x21109Cu;
    SET_GPR_U32(ctx, 31, 0x2110A4u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x21109Cu, 0x2110A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110A4u;
label_2110a4:
    // 0x2110a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2110a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2110a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2110ac: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x2110acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2110b0: 0x24450048  addiu       $a1, $v0, 0x48
    ctx->pc = 0x2110b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2110b4: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x2110B4u;
    SET_GPR_U32(ctx, 31, 0x2110BCu);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x2110B4u, 0x2110BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110BCu;
label_2110bc:
    // 0x2110bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2110bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2110c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2110c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2110c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2110C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110CCu;
    // 0x2110cc: 0x0  nop
    ctx->pc = 0x2110ccu;
    // NOP
    ctx->pc = 0x2110d0u;
}
