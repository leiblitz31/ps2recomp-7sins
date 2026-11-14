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

// Function: sub_00247A90
// Address: 0x247a90 - 0x247b00
void sub_00247A90_0x247a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A90_0x247a90");
#endif

    switch (ctx->pc) {
        case 0x247ac4u: goto label_247ac4;
        case 0x247ae4u: goto label_247ae4;
        default: break;
    }

    ctx->pc = 0x247a90u;

    // 0x247a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247a9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x247a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x247aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247aa4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x247AA4u;
    {
        const bool branch_taken_0x247aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247aa4) {
            ctx->pc = 0x247AE4u;
            goto label_247ae4;
        }
    }
    ctx->pc = 0x247AACu;
    // 0x247aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ab4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247ab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247abc: 0xc093b9c  jal         func_24EE70
    ctx->pc = 0x247ABCu;
    SET_GPR_U32(ctx, 31, 0x247AC4u);
    ctx->pc = 0x24EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EE70u, 0x247ABCu, 0x247AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AC4u;
label_247ac4:
    // 0x247ac4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x247ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ac8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247acc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247accu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247ad0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247AD0u;
    {
        const bool branch_taken_0x247ad0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247ad0) {
            ctx->pc = 0x247AE4u;
            goto label_247ae4;
        }
    }
    ctx->pc = 0x247AD8u;
    // 0x247ad8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247adc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247ADCu;
    SET_GPR_U32(ctx, 31, 0x247AE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247ADCu, 0x247AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AE4u;
label_247ae4:
    // 0x247ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247aec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247af0: 0x3e00008  jr          $ra
    ctx->pc = 0x247AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247AF8u;
    // 0x247af8: 0x0  nop
    ctx->pc = 0x247af8u;
    // NOP
    // 0x247afc: 0x0  nop
    ctx->pc = 0x247afcu;
    // NOP
    ctx->pc = 0x247b00u;
}
