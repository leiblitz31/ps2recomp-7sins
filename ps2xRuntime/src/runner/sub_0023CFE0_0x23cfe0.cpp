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

// Function: sub_0023CFE0
// Address: 0x23cfe0 - 0x23d030
void sub_0023CFE0_0x23cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CFE0_0x23cfe0");
#endif

    switch (ctx->pc) {
        case 0x23d004u: goto label_23d004;
        case 0x23d014u: goto label_23d014;
        default: break;
    }

    ctx->pc = 0x23cfe0u;

    // 0x23cfe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cfe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23cfec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23cff0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23cff4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cff8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cffc: 0xc08f40c  jal         func_23D030
    ctx->pc = 0x23CFFCu;
    SET_GPR_U32(ctx, 31, 0x23D004u);
    ctx->pc = 0x23D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D030u, 0x23CFFCu, 0x23D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D004u;
label_23d004:
    // 0x23d004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d00c: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x23D00Cu;
    SET_GPR_U32(ctx, 31, 0x23D014u);
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x23D00Cu, 0x23D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D014u;
label_23d014:
    // 0x23d014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d018: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D024u;
    // 0x23d024: 0x0  nop
    ctx->pc = 0x23d024u;
    // NOP
    // 0x23d028: 0x0  nop
    ctx->pc = 0x23d028u;
    // NOP
    // 0x23d02c: 0x0  nop
    ctx->pc = 0x23d02cu;
    // NOP
    ctx->pc = 0x23d030u;
}
