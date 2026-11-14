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

// Function: sub_001A1E50
// Address: 0x1a1e50 - 0x1a1ed0
void sub_001A1E50_0x1a1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1E50_0x1a1e50");
#endif

    switch (ctx->pc) {
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1eb4u: goto label_1a1eb4;
        default: break;
    }

    ctx->pc = 0x1a1e50u;

    // 0x1a1e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1e5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1E64u;
    {
        const bool branch_taken_0x1a1e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e64) {
            ctx->pc = 0x1A1EB4u;
            goto label_1a1eb4;
        }
    }
    ctx->pc = 0x1A1E6Cu;
    // 0x1a1e6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a1e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1e78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a1e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1e7c: 0xc0687e0  jal         func_1A1F80
    ctx->pc = 0x1A1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E84u);
    ctx->pc = 0x1A1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F80u, 0x1A1E7Cu, 0x1A1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E84u;
label_1a1e84:
    // 0x1a1e84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e8c: 0xc0687b4  jal         func_1A1ED0
    ctx->pc = 0x1A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E94u);
    ctx->pc = 0x1A1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1ED0u, 0x1A1E8Cu, 0x1A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1e98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1e9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1ea0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1EA0u;
    {
        const bool branch_taken_0x1a1ea0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1ea0) {
            ctx->pc = 0x1A1EB4u;
            goto label_1a1eb4;
        }
    }
    ctx->pc = 0x1A1EA8u;
    // 0x1a1ea8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1eac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1EACu;
    SET_GPR_U32(ctx, 31, 0x1A1EB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1EACu, 0x1A1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EB4u;
label_1a1eb4:
    // 0x1a1eb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1ebc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1EC8u;
    // 0x1a1ec8: 0x0  nop
    ctx->pc = 0x1a1ec8u;
    // NOP
    // 0x1a1ecc: 0x0  nop
    ctx->pc = 0x1a1eccu;
    // NOP
    ctx->pc = 0x1a1ed0u;
}
