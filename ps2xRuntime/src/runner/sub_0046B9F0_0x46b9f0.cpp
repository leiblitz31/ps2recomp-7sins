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

// Function: sub_0046B9F0
// Address: 0x46b9f0 - 0x46ba90
void sub_0046B9F0_0x46b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B9F0_0x46b9f0");
#endif

    switch (ctx->pc) {
        case 0x46ba2cu: goto label_46ba2c;
        case 0x46ba44u: goto label_46ba44;
        default: break;
    }

    ctx->pc = 0x46b9f0u;

    // 0x46b9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b9f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b9fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46ba00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46ba04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x46ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x46ba0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x46ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x46ba14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba18: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46ba1c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ba20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46ba20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ba24: 0xc11a808  jal         func_46A020
    ctx->pc = 0x46BA24u;
    SET_GPR_U32(ctx, 31, 0x46BA2Cu);
    ctx->pc = 0x46A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A020u, 0x46BA24u, 0x46BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA2Cu;
label_46ba2c:
    // 0x46ba2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba30: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46ba34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ba38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46ba38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ba3c: 0xc11ad20  jal         func_46B480
    ctx->pc = 0x46BA3Cu;
    SET_GPR_U32(ctx, 31, 0x46BA44u);
    ctx->pc = 0x46B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B480u, 0x46BA3Cu, 0x46BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA44u;
label_46ba44:
    // 0x46ba44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x46ba4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ba54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x46ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x46ba5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ba64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ba68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46ba6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x46ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46ba70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba74: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x46ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x46ba78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ba7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ba80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x46BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BA8Cu;
    // 0x46ba8c: 0x0  nop
    ctx->pc = 0x46ba8cu;
    // NOP
    ctx->pc = 0x46ba90u;
}
