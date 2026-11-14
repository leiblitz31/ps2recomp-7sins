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

// Function: sub_0045EAE0
// Address: 0x45eae0 - 0x45eb20
void sub_0045EAE0_0x45eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EAE0_0x45eae0");
#endif

    switch (ctx->pc) {
        case 0x45eb04u: goto label_45eb04;
        default: break;
    }

    ctx->pc = 0x45eae0u;

    // 0x45eae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45eae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45eae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45eaec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45eaf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eaf4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x45eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45eaf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45eaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eafc: 0xc117ac8  jal         func_45EB20
    ctx->pc = 0x45EAFCu;
    SET_GPR_U32(ctx, 31, 0x45EB04u);
    ctx->pc = 0x45EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EB20u, 0x45EAFCu, 0x45EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EB04u;
label_45eb04:
    // 0x45eb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45eb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45eb08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45eb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45eb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x45EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EB14u;
    // 0x45eb14: 0x0  nop
    ctx->pc = 0x45eb14u;
    // NOP
    // 0x45eb18: 0x0  nop
    ctx->pc = 0x45eb18u;
    // NOP
    // 0x45eb1c: 0x0  nop
    ctx->pc = 0x45eb1cu;
    // NOP
    ctx->pc = 0x45eb20u;
}
