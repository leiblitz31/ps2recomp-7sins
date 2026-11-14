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

// Function: sub_00210A80
// Address: 0x210a80 - 0x210b00
void sub_00210A80_0x210a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210A80_0x210a80");
#endif

    switch (ctx->pc) {
        case 0x210ab0u: goto label_210ab0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ae4u: goto label_210ae4;
        default: break;
    }

    ctx->pc = 0x210a80u;

    // 0x210a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x210a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x210a8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x210a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x210a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210a94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x210A94u;
    {
        const bool branch_taken_0x210a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210a94) {
            ctx->pc = 0x210AE4u;
            goto label_210ae4;
        }
    }
    ctx->pc = 0x210A9Cu;
    // 0x210a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210aa0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x210aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210aa8: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x210AA8u;
    SET_GPR_U32(ctx, 31, 0x210AB0u);
    ctx->pc = 0x181F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F40u, 0x210AA8u, 0x210AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AB0u;
label_210ab0:
    // 0x210ab0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ab4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x210ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x210ab8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x210ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210abc: 0xc08455c  jal         func_211570
    ctx->pc = 0x210ABCu;
    SET_GPR_U32(ctx, 31, 0x210AC4u);
    ctx->pc = 0x211570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211570u, 0x210ABCu, 0x210AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AC4u;
label_210ac4:
    // 0x210ac4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x210ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210ac8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x210acc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x210accu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x210ad0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210AD0u;
    {
        const bool branch_taken_0x210ad0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x210ad0) {
            ctx->pc = 0x210AE4u;
            goto label_210ae4;
        }
    }
    ctx->pc = 0x210AD8u;
    // 0x210ad8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210adc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x210ADCu;
    SET_GPR_U32(ctx, 31, 0x210AE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x210ADCu, 0x210AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AE4u;
label_210ae4:
    // 0x210ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210aec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x210af0: 0x3e00008  jr          $ra
    ctx->pc = 0x210AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210AF8u;
    // 0x210af8: 0x0  nop
    ctx->pc = 0x210af8u;
    // NOP
    // 0x210afc: 0x0  nop
    ctx->pc = 0x210afcu;
    // NOP
    ctx->pc = 0x210b00u;
}
