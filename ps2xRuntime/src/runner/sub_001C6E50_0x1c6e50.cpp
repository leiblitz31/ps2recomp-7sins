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

// Function: sub_001C6E50
// Address: 0x1c6e50 - 0x1c6ed0
void sub_001C6E50_0x1c6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6E50_0x1c6e50");
#endif

    switch (ctx->pc) {
        case 0x1c6e84u: goto label_1c6e84;
        case 0x1c6e94u: goto label_1c6e94;
        case 0x1c6eb4u: goto label_1c6eb4;
        default: break;
    }

    ctx->pc = 0x1c6e50u;

    // 0x1c6e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6e5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c6e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c6e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6E64u;
    {
        const bool branch_taken_0x1c6e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e64) {
            ctx->pc = 0x1C6EB4u;
            goto label_1c6eb4;
        }
    }
    ctx->pc = 0x1C6E6Cu;
    // 0x1c6e6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6e78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6e7c: 0xc071adc  jal         func_1C6B70
    ctx->pc = 0x1C6E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E84u);
    ctx->pc = 0x1C6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B70u, 0x1C6E7Cu, 0x1C6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E84u;
label_1c6e84:
    // 0x1c6e84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e8c: 0xc071bb4  jal         func_1C6ED0
    ctx->pc = 0x1C6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E94u);
    ctx->pc = 0x1C6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6ED0u, 0x1C6E8Cu, 0x1C6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E94u;
label_1c6e94:
    // 0x1c6e94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c6e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6e98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c6e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c6e9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c6e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c6ea0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6EA0u;
    {
        const bool branch_taken_0x1c6ea0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c6ea0) {
            ctx->pc = 0x1C6EB4u;
            goto label_1c6eb4;
        }
    }
    ctx->pc = 0x1C6EA8u;
    // 0x1c6ea8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6eac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C6EACu;
    SET_GPR_U32(ctx, 31, 0x1C6EB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C6EACu, 0x1C6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EB4u;
label_1c6eb4:
    // 0x1c6eb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ebc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c6ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6EC8u;
    // 0x1c6ec8: 0x0  nop
    ctx->pc = 0x1c6ec8u;
    // NOP
    // 0x1c6ecc: 0x0  nop
    ctx->pc = 0x1c6eccu;
    // NOP
    ctx->pc = 0x1c6ed0u;
}
