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

// Function: sub_00284BE0
// Address: 0x284be0 - 0x284c20
void sub_00284BE0_0x284be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284BE0_0x284be0");
#endif

    switch (ctx->pc) {
        case 0x284c04u: goto label_284c04;
        default: break;
    }

    ctx->pc = 0x284be0u;

    // 0x284be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284bec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x284becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x284bf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284bf4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x284bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x284bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bfc: 0xc0a1308  jal         func_284C20
    ctx->pc = 0x284BFCu;
    SET_GPR_U32(ctx, 31, 0x284C04u);
    ctx->pc = 0x284C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284C20u, 0x284BFCu, 0x284C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C04u;
label_284c04:
    // 0x284c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x284C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284C14u;
    // 0x284c14: 0x0  nop
    ctx->pc = 0x284c14u;
    // NOP
    // 0x284c18: 0x0  nop
    ctx->pc = 0x284c18u;
    // NOP
    // 0x284c1c: 0x0  nop
    ctx->pc = 0x284c1cu;
    // NOP
    ctx->pc = 0x284c20u;
}
