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

// Function: sub_0018E000
// Address: 0x18e000 - 0x18e080
void sub_0018E000_0x18e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E000_0x18e000");
#endif

    switch (ctx->pc) {
        case 0x18e048u: goto label_18e048;
        case 0x18e060u: goto label_18e060;
        default: break;
    }

    ctx->pc = 0x18e000u;

    // 0x18e000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18e008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18e00c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18e010: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x18e010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x18e014: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x18e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x18e018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e01c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e020: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x18e020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x18e024: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e02c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18e030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e034: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x18e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18e038: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e03c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18e040: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x18E040u;
    SET_GPR_U32(ctx, 31, 0x18E048u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x18E040u, 0x18E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E048u;
label_18e048:
    // 0x18e048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e04c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18e050: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e054: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18e058: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x18E058u;
    SET_GPR_U32(ctx, 31, 0x18E060u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x18E058u, 0x18E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E060u;
label_18e060:
    // 0x18e060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e068: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18e06c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E074u;
    // 0x18e074: 0x0  nop
    ctx->pc = 0x18e074u;
    // NOP
    // 0x18e078: 0x0  nop
    ctx->pc = 0x18e078u;
    // NOP
    // 0x18e07c: 0x0  nop
    ctx->pc = 0x18e07cu;
    // NOP
    ctx->pc = 0x18e080u;
}
