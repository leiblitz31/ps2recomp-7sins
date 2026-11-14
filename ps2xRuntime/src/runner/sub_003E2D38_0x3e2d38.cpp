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

// Function: sub_003E2D38
// Address: 0x3e2d38 - 0x3e2da0
void sub_003E2D38_0x3e2d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2D38_0x3e2d38");
#endif

    switch (ctx->pc) {
        case 0x3e2d74u: goto label_3e2d74;
        case 0x3e2d84u: goto label_3e2d84;
        default: break;
    }

    ctx->pc = 0x3e2d38u;

    // 0x3e2d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e2d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e2d3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e2d40: 0x7803c  dsll32      $s0, $a3, 0
    ctx->pc = 0x3e2d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3e2d44: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3e2d44u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3e2d48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e2d4c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e2d50: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3e2d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3e2d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e2d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e2d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3e2d60: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2D60u;
    {
        const bool branch_taken_0x3e2d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D60u;
        // 0x3e2d64: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d60) {
            ctx->pc = 0x3E2D74u;
            goto label_3e2d74;
        }
    }
    ctx->pc = 0x3E2D68u;
    // 0x3e2d68: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e2d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e2d6c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E2D6Cu;
    SET_GPR_U32(ctx, 31, 0x3E2D74u);
    ctx->pc = 0x3E2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D6Cu;
    // 0x3e2d70: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E2D6Cu, 0x3E2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D74u;
label_3e2d74:
    // 0x3e2d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e2d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d7c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E2D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E2D84u);
    ctx->pc = 0x3E2D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D7Cu;
    // 0x3e2d80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E2D7Cu, 0x3E2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D84u;
label_3e2d84:
    // 0x3e2d84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e2d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2d88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e2d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2d8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e2d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2d94: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D94u;
        // 0x3e2d98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2D9Cu;
    // 0x3e2d9c: 0x0  nop
    ctx->pc = 0x3e2d9cu;
    // NOP
    ctx->pc = 0x3e2da0u;
}
