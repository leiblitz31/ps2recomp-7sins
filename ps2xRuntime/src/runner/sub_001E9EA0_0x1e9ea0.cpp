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

// Function: sub_001E9EA0
// Address: 0x1e9ea0 - 0x1e9f20
void sub_001E9EA0_0x1e9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9EA0_0x1e9ea0");
#endif

    switch (ctx->pc) {
        case 0x1e9ed4u: goto label_1e9ed4;
        case 0x1e9ee4u: goto label_1e9ee4;
        case 0x1e9f04u: goto label_1e9f04;
        default: break;
    }

    ctx->pc = 0x1e9ea0u;

    // 0x1e9ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e9eac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1e9eacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e9eb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9eb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9EB4u;
    {
        const bool branch_taken_0x1e9eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9eb4) {
            ctx->pc = 0x1E9F04u;
            goto label_1e9f04;
        }
    }
    ctx->pc = 0x1E9EBCu;
    // 0x1e9ebc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9ec8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9ecc: 0xc07a7f4  jal         func_1E9FD0
    ctx->pc = 0x1E9ECCu;
    SET_GPR_U32(ctx, 31, 0x1E9ED4u);
    ctx->pc = 0x1E9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FD0u, 0x1E9ECCu, 0x1E9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED4u;
label_1e9ed4:
    // 0x1e9ed4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9edc: 0xc07a7c8  jal         func_1E9F20
    ctx->pc = 0x1E9EDCu;
    SET_GPR_U32(ctx, 31, 0x1E9EE4u);
    ctx->pc = 0x1E9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9F20u, 0x1E9EDCu, 0x1E9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EE4u;
label_1e9ee4:
    // 0x1e9ee4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ee8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e9eec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9eecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9ef0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9EF0u;
    {
        const bool branch_taken_0x1e9ef0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9ef0) {
            ctx->pc = 0x1E9F04u;
            goto label_1e9f04;
        }
    }
    ctx->pc = 0x1E9EF8u;
    // 0x1e9ef8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9efc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1E9EFCu;
    SET_GPR_U32(ctx, 31, 0x1E9F04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1E9EFCu, 0x1E9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F04u;
label_1e9f04:
    // 0x1e9f04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F18u;
    // 0x1e9f18: 0x0  nop
    ctx->pc = 0x1e9f18u;
    // NOP
    // 0x1e9f1c: 0x0  nop
    ctx->pc = 0x1e9f1cu;
    // NOP
    ctx->pc = 0x1e9f20u;
}
