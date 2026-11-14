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

// Function: sub_00183E50
// Address: 0x183e50 - 0x183ec0
void sub_00183E50_0x183e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183E50_0x183e50");
#endif

    switch (ctx->pc) {
        case 0x183e84u: goto label_183e84;
        case 0x183ea4u: goto label_183ea4;
        default: break;
    }

    ctx->pc = 0x183e50u;

    // 0x183e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183e5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183E64u;
    {
        const bool branch_taken_0x183e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e64) {
            ctx->pc = 0x183EA4u;
            goto label_183ea4;
        }
    }
    ctx->pc = 0x183E6Cu;
    // 0x183e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183e7c: 0xc061cb4  jal         func_1872D0
    ctx->pc = 0x183E7Cu;
    SET_GPR_U32(ctx, 31, 0x183E84u);
    ctx->pc = 0x1872D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872D0u, 0x183E7Cu, 0x183E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E84u;
label_183e84:
    // 0x183e84: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183e88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183e90: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183E90u;
    {
        const bool branch_taken_0x183e90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183e90) {
            ctx->pc = 0x183EA4u;
            goto label_183ea4;
        }
    }
    ctx->pc = 0x183E98u;
    // 0x183e98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e9c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183E9Cu;
    SET_GPR_U32(ctx, 31, 0x183EA4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183E9Cu, 0x183EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EA4u;
label_183ea4:
    // 0x183ea4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183eac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x183EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183EB8u;
    // 0x183eb8: 0x0  nop
    ctx->pc = 0x183eb8u;
    // NOP
    // 0x183ebc: 0x0  nop
    ctx->pc = 0x183ebcu;
    // NOP
    ctx->pc = 0x183ec0u;
}
