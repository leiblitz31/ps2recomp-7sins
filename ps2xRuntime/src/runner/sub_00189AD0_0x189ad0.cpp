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

// Function: sub_00189AD0
// Address: 0x189ad0 - 0x189b30
void sub_00189AD0_0x189ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189AD0_0x189ad0");
#endif

    switch (ctx->pc) {
        case 0x189af0u: goto label_189af0;
        default: break;
    }

    ctx->pc = 0x189ad0u;

    // 0x189ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x189adc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x189adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x189ae0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ae4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x189ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189ae8: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x189AE8u;
    SET_GPR_U32(ctx, 31, 0x189AF0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x189AE8u, 0x189AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AF0u;
label_189af0:
    // 0x189af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189af4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x189af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x189af8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189afc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x189afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x189b00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189b04: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x189b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b0c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x189b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x189b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x189B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189B24u;
    // 0x189b24: 0x0  nop
    ctx->pc = 0x189b24u;
    // NOP
    // 0x189b28: 0x0  nop
    ctx->pc = 0x189b28u;
    // NOP
    // 0x189b2c: 0x0  nop
    ctx->pc = 0x189b2cu;
    // NOP
    ctx->pc = 0x189b30u;
}
