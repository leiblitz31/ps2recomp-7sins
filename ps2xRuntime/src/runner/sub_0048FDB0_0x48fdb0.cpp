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

// Function: sub_0048FDB0
// Address: 0x48fdb0 - 0x48fe00
void sub_0048FDB0_0x48fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FDB0_0x48fdb0");
#endif

    switch (ctx->pc) {
        case 0x48fdd4u: goto label_48fdd4;
        case 0x48fde4u: goto label_48fde4;
        default: break;
    }

    ctx->pc = 0x48fdb0u;

    // 0x48fdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48fdb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fdb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48fdbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48fdc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fdc4: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x48fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48fdc8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fdcc: 0xc123a20  jal         func_48E880
    ctx->pc = 0x48FDCCu;
    SET_GPR_U32(ctx, 31, 0x48FDD4u);
    ctx->pc = 0x48E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E880u, 0x48FDCCu, 0x48FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FDD4u;
label_48fdd4:
    // 0x48fdd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fdd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48fdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fddc: 0xc123f80  jal         func_48FE00
    ctx->pc = 0x48FDDCu;
    SET_GPR_U32(ctx, 31, 0x48FDE4u);
    ctx->pc = 0x48FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE00u, 0x48FDDCu, 0x48FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FDE4u;
label_48fde4:
    // 0x48fde4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fde8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48fde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fdec: 0x3e00008  jr          $ra
    ctx->pc = 0x48FDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FDF4u;
    // 0x48fdf4: 0x0  nop
    ctx->pc = 0x48fdf4u;
    // NOP
    // 0x48fdf8: 0x0  nop
    ctx->pc = 0x48fdf8u;
    // NOP
    // 0x48fdfc: 0x0  nop
    ctx->pc = 0x48fdfcu;
    // NOP
    ctx->pc = 0x48fe00u;
}
