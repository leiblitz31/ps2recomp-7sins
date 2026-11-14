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

// Function: sub_00466A10
// Address: 0x466a10 - 0x466a80
void sub_00466A10_0x466a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466A10_0x466a10");
#endif

    switch (ctx->pc) {
        case 0x466a4cu: goto label_466a4c;
        default: break;
    }

    ctx->pc = 0x466a10u;

    // 0x466a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x466a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x466a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x466a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466a20: 0x8f82c008  lw          $v0, -0x3FF8($gp)
    ctx->pc = 0x466a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x466a24: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x466a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x466a28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x466a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x466a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x466a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x466a30: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x466A30u;
    {
        const bool branch_taken_0x466a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466a30) {
            ctx->pc = 0x466A54u;
            goto label_466a54;
        }
    }
    ctx->pc = 0x466A38u;
    // 0x466a38: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x466a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x466a3c: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x466a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x466a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x466a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466a44: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x466A44u;
    SET_GPR_U32(ctx, 31, 0x466A4Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x466A44u, 0x466A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466A4Cu;
label_466a4c:
    // 0x466a4c: 0xd  break       0
    ctx->pc = 0x466a4cu;
    runtime->handleBreak(rdram, ctx);
    // 0x466a50: 0x0  nop
    ctx->pc = 0x466a50u;
    // NOP
label_466a54:
    // 0x466a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466a58: 0xaf82c008  sw          $v0, -0x3FF8($gp)
    ctx->pc = 0x466a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950920), GPR_U32(ctx, 2));
    // 0x466a5c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x466a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x466a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466a68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x466a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x466a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x466A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466A74u;
    // 0x466a74: 0x0  nop
    ctx->pc = 0x466a74u;
    // NOP
    // 0x466a78: 0x0  nop
    ctx->pc = 0x466a78u;
    // NOP
    // 0x466a7c: 0x0  nop
    ctx->pc = 0x466a7cu;
    // NOP
    ctx->pc = 0x466a80u;
}
