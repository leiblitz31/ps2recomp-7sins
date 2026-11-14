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

// Function: sub_00478030
// Address: 0x478030 - 0x478080
void sub_00478030_0x478030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478030_0x478030");
#endif

    switch (ctx->pc) {
        case 0x478054u: goto label_478054;
        case 0x478064u: goto label_478064;
        default: break;
    }

    ctx->pc = 0x478030u;

    // 0x478030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x478030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x478034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47803c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478040: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x478040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x478044: 0x24a584a0  addiu       $a1, $a1, -0x7B60
    ctx->pc = 0x478044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935712));
    // 0x478048: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x478048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47804c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x47804Cu;
    SET_GPR_U32(ctx, 31, 0x478054u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x47804Cu, 0x478054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478054u;
label_478054:
    // 0x478054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x478058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47805c: 0xc11e050  jal         func_478140
    ctx->pc = 0x47805Cu;
    SET_GPR_U32(ctx, 31, 0x478064u);
    ctx->pc = 0x478140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478140u, 0x47805Cu, 0x478064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478064u;
label_478064:
    // 0x478064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478068: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x478068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47806c: 0x3e00008  jr          $ra
    ctx->pc = 0x47806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478074u;
    // 0x478074: 0x0  nop
    ctx->pc = 0x478074u;
    // NOP
    // 0x478078: 0x0  nop
    ctx->pc = 0x478078u;
    // NOP
    // 0x47807c: 0x0  nop
    ctx->pc = 0x47807cu;
    // NOP
    ctx->pc = 0x478080u;
}
