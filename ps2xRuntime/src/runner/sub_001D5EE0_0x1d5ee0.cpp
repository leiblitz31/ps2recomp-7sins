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

// Function: sub_001D5EE0
// Address: 0x1d5ee0 - 0x1d5f60
void sub_001D5EE0_0x1d5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5EE0_0x1d5ee0");
#endif

    switch (ctx->pc) {
        case 0x1d5f14u: goto label_1d5f14;
        case 0x1d5f24u: goto label_1d5f24;
        case 0x1d5f44u: goto label_1d5f44;
        default: break;
    }

    ctx->pc = 0x1d5ee0u;

    // 0x1d5ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d5eec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d5eecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ef4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5EF4u;
    {
        const bool branch_taken_0x1d5ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ef4) {
            ctx->pc = 0x1D5F44u;
            goto label_1d5f44;
        }
    }
    ctx->pc = 0x1D5EFCu;
    // 0x1d5efc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5f08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d5f0c: 0xc075800  jal         func_1D6000
    ctx->pc = 0x1D5F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F14u);
    ctx->pc = 0x1D6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6000u, 0x1D5F0Cu, 0x1D5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F14u;
label_1d5f14:
    // 0x1d5f14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f1c: 0xc0757d8  jal         func_1D5F60
    ctx->pc = 0x1D5F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F24u);
    ctx->pc = 0x1D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F60u, 0x1D5F1Cu, 0x1D5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F24u;
label_1d5f24:
    // 0x1d5f24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d5f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5f28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5f2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d5f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d5f30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F30u;
    {
        const bool branch_taken_0x1d5f30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5f30) {
            ctx->pc = 0x1D5F44u;
            goto label_1d5f44;
        }
    }
    ctx->pc = 0x1D5F38u;
    // 0x1d5f38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f3c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D5F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F44u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D5F3Cu, 0x1D5F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F44u;
label_1d5f44:
    // 0x1d5f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F58u;
    // 0x1d5f58: 0x0  nop
    ctx->pc = 0x1d5f58u;
    // NOP
    // 0x1d5f5c: 0x0  nop
    ctx->pc = 0x1d5f5cu;
    // NOP
    ctx->pc = 0x1d5f60u;
}
