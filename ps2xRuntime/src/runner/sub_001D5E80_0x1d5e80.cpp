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

// Function: sub_001D5E80
// Address: 0x1d5e80 - 0x1d5ee0
void sub_001D5E80_0x1d5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5E80_0x1d5e80");
#endif

    switch (ctx->pc) {
        case 0x1d5eacu: goto label_1d5eac;
        case 0x1d5eccu: goto label_1d5ecc;
        default: break;
    }

    ctx->pc = 0x1d5e80u;

    // 0x1d5e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d5e8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d5e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5E94u;
    {
        const bool branch_taken_0x1d5e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e94) {
            ctx->pc = 0x1D5ECCu;
            goto label_1d5ecc;
        }
    }
    ctx->pc = 0x1D5E9Cu;
    // 0x1d5e9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea4: 0xc0757b8  jal         func_1D5EE0
    ctx->pc = 0x1D5EA4u;
    SET_GPR_U32(ctx, 31, 0x1D5EACu);
    ctx->pc = 0x1D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5EE0u, 0x1D5EA4u, 0x1D5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EACu;
label_1d5eac:
    // 0x1d5eac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d5eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5eb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d5eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d5eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d5eb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5EB8u;
    {
        const bool branch_taken_0x1d5eb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5eb8) {
            ctx->pc = 0x1D5ECCu;
            goto label_1d5ecc;
        }
    }
    ctx->pc = 0x1D5EC0u;
    // 0x1d5ec0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ec4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D5EC4u;
    SET_GPR_U32(ctx, 31, 0x1D5ECCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D5EC4u, 0x1D5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ECCu;
label_1d5ecc:
    // 0x1d5ecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ed4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EE0u;
}
