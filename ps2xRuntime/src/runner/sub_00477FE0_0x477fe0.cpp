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

// Function: sub_00477FE0
// Address: 0x477fe0 - 0x478030
void sub_00477FE0_0x477fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477FE0_0x477fe0");
#endif

    switch (ctx->pc) {
        case 0x478004u: goto label_478004;
        case 0x478014u: goto label_478014;
        default: break;
    }

    ctx->pc = 0x477fe0u;

    // 0x477fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x477fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x477fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x477fec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477ff0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x477ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x477ff4: 0x24a58600  addiu       $a1, $a1, -0x7A00
    ctx->pc = 0x477ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936064));
    // 0x477ff8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x477ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477ffc: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x477FFCu;
    SET_GPR_U32(ctx, 31, 0x478004u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x477FFCu, 0x478004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478004u;
label_478004:
    // 0x478004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x478008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47800c: 0xc11e08c  jal         func_478230
    ctx->pc = 0x47800Cu;
    SET_GPR_U32(ctx, 31, 0x478014u);
    ctx->pc = 0x478230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478230u, 0x47800Cu, 0x478014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478014u;
label_478014:
    // 0x478014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478018: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x478018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47801c: 0x3e00008  jr          $ra
    ctx->pc = 0x47801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478024u;
    // 0x478024: 0x0  nop
    ctx->pc = 0x478024u;
    // NOP
    // 0x478028: 0x0  nop
    ctx->pc = 0x478028u;
    // NOP
    // 0x47802c: 0x0  nop
    ctx->pc = 0x47802cu;
    // NOP
    ctx->pc = 0x478030u;
}
