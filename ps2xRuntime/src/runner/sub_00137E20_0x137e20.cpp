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

// Function: sub_00137E20
// Address: 0x137e20 - 0x137e80
void sub_00137E20_0x137e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E20_0x137e20");
#endif

    switch (ctx->pc) {
        case 0x137e4cu: goto label_137e4c;
        case 0x137e6cu: goto label_137e6c;
        default: break;
    }

    ctx->pc = 0x137e20u;

    // 0x137e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137e2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x137e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x137e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x137E34u;
    {
        const bool branch_taken_0x137e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e34) {
            ctx->pc = 0x137E6Cu;
            goto label_137e6c;
        }
    }
    ctx->pc = 0x137E3Cu;
    // 0x137e3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e44: 0xc04dfa0  jal         func_137E80
    ctx->pc = 0x137E44u;
    SET_GPR_U32(ctx, 31, 0x137E4Cu);
    ctx->pc = 0x137E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E80u, 0x137E44u, 0x137E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E4Cu;
label_137e4c:
    // 0x137e4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137e50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x137e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137e54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137e54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x137e58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137E58u;
    {
        const bool branch_taken_0x137e58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x137e58) {
            ctx->pc = 0x137E6Cu;
            goto label_137e6c;
        }
    }
    ctx->pc = 0x137E60u;
    // 0x137e60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x137E64u;
    SET_GPR_U32(ctx, 31, 0x137E6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x137E64u, 0x137E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E6Cu;
label_137e6c:
    // 0x137e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137e74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x137e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137e78: 0x3e00008  jr          $ra
    ctx->pc = 0x137E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E80u;
}
