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

// Function: sub_00142460
// Address: 0x142460 - 0x1424d0
void sub_00142460_0x142460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142460_0x142460");
#endif

    switch (ctx->pc) {
        case 0x142478u: goto label_142478;
        case 0x1424a0u: goto label_1424a0;
        default: break;
    }

    ctx->pc = 0x142460u;

    // 0x142460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x142468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14246c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142470: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x142470u;
    SET_GPR_U32(ctx, 31, 0x142478u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x142470u, 0x142478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142478u;
label_142478:
    // 0x142478: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14247c: 0x24633870  addiu       $v1, $v1, 0x3870
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14448));
    // 0x142480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142484: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x142488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14248c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x14248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x142490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142494: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x142494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x142498: 0xc05090c  jal         func_142430
    ctx->pc = 0x142498u;
    SET_GPR_U32(ctx, 31, 0x1424A0u);
    ctx->pc = 0x142430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142430u, 0x142498u, 0x1424A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424A0u;
label_1424a0:
    // 0x1424a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1424a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1424a4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1424a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1424a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1424ac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1424acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1424b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1424b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1424b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1424b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1424b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1424bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1424BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1424C4u;
    // 0x1424c4: 0x0  nop
    ctx->pc = 0x1424c4u;
    // NOP
    // 0x1424c8: 0x0  nop
    ctx->pc = 0x1424c8u;
    // NOP
    // 0x1424cc: 0x0  nop
    ctx->pc = 0x1424ccu;
    // NOP
    ctx->pc = 0x1424d0u;
}
