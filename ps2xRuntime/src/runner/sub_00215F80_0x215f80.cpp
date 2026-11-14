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

// Function: sub_00215F80
// Address: 0x215f80 - 0x215ff0
void sub_00215F80_0x215f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215F80_0x215f80");
#endif

    switch (ctx->pc) {
        case 0x215fb0u: goto label_215fb0;
        case 0x215fd0u: goto label_215fd0;
        default: break;
    }

    ctx->pc = 0x215f80u;

    // 0x215f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x215f8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x215f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x215f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x215F94u;
    {
        const bool branch_taken_0x215f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f94) {
            ctx->pc = 0x215FD0u;
            goto label_215fd0;
        }
    }
    ctx->pc = 0x215F9Cu;
    // 0x215f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215fa0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x215fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215fa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215fa8: 0xc08ebd8  jal         func_23AF60
    ctx->pc = 0x215FA8u;
    SET_GPR_U32(ctx, 31, 0x215FB0u);
    ctx->pc = 0x23AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF60u, 0x215FA8u, 0x215FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FB0u;
label_215fb0:
    // 0x215fb0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215fb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x215fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x215fb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x215fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x215fbc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215FBCu;
    {
        const bool branch_taken_0x215fbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x215fbc) {
            ctx->pc = 0x215FD0u;
            goto label_215fd0;
        }
    }
    ctx->pc = 0x215FC4u;
    // 0x215fc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215fc8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x215FC8u;
    SET_GPR_U32(ctx, 31, 0x215FD0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x215FC8u, 0x215FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FD0u;
label_215fd0:
    // 0x215fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215fd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x215fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x215FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215FE4u;
    // 0x215fe4: 0x0  nop
    ctx->pc = 0x215fe4u;
    // NOP
    // 0x215fe8: 0x0  nop
    ctx->pc = 0x215fe8u;
    // NOP
    // 0x215fec: 0x0  nop
    ctx->pc = 0x215fecu;
    // NOP
    ctx->pc = 0x215ff0u;
}
