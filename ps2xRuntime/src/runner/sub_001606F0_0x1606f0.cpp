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

// Function: sub_001606F0
// Address: 0x1606f0 - 0x160730
void sub_001606F0_0x1606f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001606F0_0x1606f0");
#endif

    switch (ctx->pc) {
        case 0x16071cu: goto label_16071c;
        default: break;
    }

    ctx->pc = 0x1606f0u;

    // 0x1606f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1606f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1606f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1606f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1606f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1606f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1606fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1606fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160700: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x160700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160704: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x160704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x160708: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x160708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x16070c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16070cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160714: 0xc05831c  jal         func_160C70
    ctx->pc = 0x160714u;
    SET_GPR_U32(ctx, 31, 0x16071Cu);
    ctx->pc = 0x160C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C70u, 0x160714u, 0x16071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16071Cu;
label_16071c:
    // 0x16071c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x160720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x160724: 0x3e00008  jr          $ra
    ctx->pc = 0x160724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16072Cu;
    // 0x16072c: 0x0  nop
    ctx->pc = 0x16072cu;
    // NOP
    ctx->pc = 0x160730u;
}
