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

// Function: sub_001A1C30
// Address: 0x1a1c30 - 0x1a1cb0
void sub_001A1C30_0x1a1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C30_0x1a1c30");
#endif

    switch (ctx->pc) {
        case 0x1a1c64u: goto label_1a1c64;
        case 0x1a1c74u: goto label_1a1c74;
        case 0x1a1c94u: goto label_1a1c94;
        default: break;
    }

    ctx->pc = 0x1a1c30u;

    // 0x1a1c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1c3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1c40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1C44u;
    {
        const bool branch_taken_0x1a1c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c44) {
            ctx->pc = 0x1A1C94u;
            goto label_1a1c94;
        }
    }
    ctx->pc = 0x1A1C4Cu;
    // 0x1a1c4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1c58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a1c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1c5c: 0xc068758  jal         func_1A1D60
    ctx->pc = 0x1A1C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C64u);
    ctx->pc = 0x1A1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D60u, 0x1A1C5Cu, 0x1A1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C64u;
label_1a1c64:
    // 0x1a1c64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c6c: 0xc06872c  jal         func_1A1CB0
    ctx->pc = 0x1A1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C74u);
    ctx->pc = 0x1A1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1CB0u, 0x1A1C6Cu, 0x1A1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C74u;
label_1a1c74:
    // 0x1a1c74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1c78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1c7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1c80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1C80u;
    {
        const bool branch_taken_0x1a1c80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1c80) {
            ctx->pc = 0x1A1C94u;
            goto label_1a1c94;
        }
    }
    ctx->pc = 0x1A1C88u;
    // 0x1a1c88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1C8Cu, 0x1A1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C94u;
label_1a1c94:
    // 0x1a1c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1CA8u;
    // 0x1a1ca8: 0x0  nop
    ctx->pc = 0x1a1ca8u;
    // NOP
    // 0x1a1cac: 0x0  nop
    ctx->pc = 0x1a1cacu;
    // NOP
    ctx->pc = 0x1a1cb0u;
}
