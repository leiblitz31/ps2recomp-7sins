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

// Function: sub_001E9E40
// Address: 0x1e9e40 - 0x1e9ea0
void sub_001E9E40_0x1e9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9E40_0x1e9e40");
#endif

    switch (ctx->pc) {
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e8cu: goto label_1e9e8c;
        default: break;
    }

    ctx->pc = 0x1e9e40u;

    // 0x1e9e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e9e4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1e9e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e9e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e54: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9E54u;
    {
        const bool branch_taken_0x1e9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e54) {
            ctx->pc = 0x1E9E8Cu;
            goto label_1e9e8c;
        }
    }
    ctx->pc = 0x1E9E5Cu;
    // 0x1e9e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e64: 0xc07a7a8  jal         func_1E9EA0
    ctx->pc = 0x1E9E64u;
    SET_GPR_U32(ctx, 31, 0x1E9E6Cu);
    ctx->pc = 0x1E9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9EA0u, 0x1E9E64u, 0x1E9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E6Cu;
label_1e9e6c:
    // 0x1e9e6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9e70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e9e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e9e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9e78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9E78u;
    {
        const bool branch_taken_0x1e9e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9e78) {
            ctx->pc = 0x1E9E8Cu;
            goto label_1e9e8c;
        }
    }
    ctx->pc = 0x1E9E80u;
    // 0x1e9e80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1E9E84u;
    SET_GPR_U32(ctx, 31, 0x1E9E8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1E9E84u, 0x1E9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E8Cu;
label_1e9e8c:
    // 0x1e9e8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9e98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9EA0u;
}
