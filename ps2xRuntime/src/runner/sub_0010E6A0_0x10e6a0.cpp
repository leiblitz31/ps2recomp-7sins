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

// Function: sub_0010E6A0
// Address: 0x10e6a0 - 0x10e710
void sub_0010E6A0_0x10e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E6A0_0x10e6a0");
#endif

    switch (ctx->pc) {
        case 0x10e6d0u: goto label_10e6d0;
        case 0x10e6f0u: goto label_10e6f0;
        default: break;
    }

    ctx->pc = 0x10e6a0u;

    // 0x10e6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e6ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10e6b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e6b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10E6B4u;
    {
        const bool branch_taken_0x10e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e6b4) {
            ctx->pc = 0x10E6F0u;
            goto label_10e6f0;
        }
    }
    ctx->pc = 0x10E6BCu;
    // 0x10e6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e6c0: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x10e6c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e6c8: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x10E6C8u;
    SET_GPR_U32(ctx, 31, 0x10E6D0u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x10E6C8u, 0x10E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6D0u;
label_10e6d0:
    // 0x10e6d0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e6d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10e6d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10e6d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10e6dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E6DCu;
    {
        const bool branch_taken_0x10e6dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10e6dc) {
            ctx->pc = 0x10E6F0u;
            goto label_10e6f0;
        }
    }
    ctx->pc = 0x10E6E4u;
    // 0x10e6e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e6e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10E6E8u;
    SET_GPR_U32(ctx, 31, 0x10E6F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10E6E8u, 0x10E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6F0u;
label_10e6f0:
    // 0x10e6f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E704u;
    // 0x10e704: 0x0  nop
    ctx->pc = 0x10e704u;
    // NOP
    // 0x10e708: 0x0  nop
    ctx->pc = 0x10e708u;
    // NOP
    // 0x10e70c: 0x0  nop
    ctx->pc = 0x10e70cu;
    // NOP
    ctx->pc = 0x10e710u;
}
