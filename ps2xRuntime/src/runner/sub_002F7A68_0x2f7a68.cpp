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

// Function: sub_002F7A68
// Address: 0x2f7a68 - 0x2f7ac0
void sub_002F7A68_0x2f7a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7A68_0x2f7a68");
#endif

    switch (ctx->pc) {
        case 0x2f7aa8u: goto label_2f7aa8;
        default: break;
    }

    ctx->pc = 0x2f7a68u;

    // 0x2f7a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7a6c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f7a70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7a74: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7a78: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x2f7a78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x2f7a7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7a80: 0x2607c740  addiu       $a3, $s0, -0x38C0
    ctx->pc = 0x2f7a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952768));
    // 0x2f7a84: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f7a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f7a88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f7a8c: 0x34a51363  ori         $a1, $a1, 0x1363
    ctx->pc = 0x2f7a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4963);
    // 0x2f7a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a94: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f7a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7a98: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f7a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a9c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f7a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7aa0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F7AA0u;
    SET_GPR_U32(ctx, 31, 0x2F7AA8u);
    ctx->pc = 0x2F7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AA0u;
    // 0x2f7aa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F7AA0u, 0x2F7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AA8u;
label_2f7aa8:
    // 0x2f7aa8: 0x8e02c740  lw          $v0, -0x38C0($s0)
    ctx->pc = 0x2f7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x2f7aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7ab0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AB4u;
        // 0x2f7ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7ABCu;
    // 0x2f7abc: 0x0  nop
    ctx->pc = 0x2f7abcu;
    // NOP
    ctx->pc = 0x2f7ac0u;
}
