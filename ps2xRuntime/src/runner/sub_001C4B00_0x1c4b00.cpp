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

// Function: sub_001C4B00
// Address: 0x1c4b00 - 0x1c4ba0
void sub_001C4B00_0x1c4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4B00_0x1c4b00");
#endif

    switch (ctx->pc) {
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b54u: goto label_1c4b54;
        default: break;
    }

    ctx->pc = 0x1c4b00u;

    // 0x1c4b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c4b0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c4b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c4b10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c4b14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c4b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c4b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b28: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c4b2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b34: 0xc044820  jal         func_112080
    ctx->pc = 0x1C4B34u;
    SET_GPR_U32(ctx, 31, 0x1C4B3Cu);
    ctx->pc = 0x112080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112080u, 0x1C4B34u, 0x1C4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B3Cu;
label_1c4b3c:
    // 0x1c4b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b40: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c4b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c4b44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b4c: 0xc04484c  jal         func_112130
    ctx->pc = 0x1C4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B54u);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x1C4B4Cu, 0x1C4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B54u;
label_1c4b54:
    // 0x1c4b54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c4b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4b64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b68: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1c4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1c4b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4b74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4b78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4b7c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b84: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c4b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4b90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4B9Cu;
    // 0x1c4b9c: 0x0  nop
    ctx->pc = 0x1c4b9cu;
    // NOP
    ctx->pc = 0x1c4ba0u;
}
