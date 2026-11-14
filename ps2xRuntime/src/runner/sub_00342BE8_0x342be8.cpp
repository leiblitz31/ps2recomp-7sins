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

// Function: sub_00342BE8
// Address: 0x342be8 - 0x342c50
void sub_00342BE8_0x342be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342BE8_0x342be8");
#endif

    switch (ctx->pc) {
        case 0x342c18u: goto label_342c18;
        case 0x342c20u: goto label_342c20;
        default: break;
    }

    ctx->pc = 0x342be8u;

    // 0x342be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x342be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x342bec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x342becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x342bf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x342bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x342bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x342bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x342bfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x342bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342c04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x342c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x342c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342C08u;
    {
        const bool branch_taken_0x342c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C08u;
        // 0x342c0c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c08) {
            ctx->pc = 0x342C20u;
            goto label_342c20;
        }
    }
    ctx->pc = 0x342C10u;
    // 0x342c10: 0xc0d05d0  jal         func_341740
    ctx->pc = 0x342C10u;
    SET_GPR_U32(ctx, 31, 0x342C18u);
    ctx->pc = 0x341740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341740u, 0x342C10u, 0x342C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342C18u;
label_342c18:
    // 0x342c18: 0xc0d0ce8  jal         func_3433A0
    ctx->pc = 0x342C18u;
    SET_GPR_U32(ctx, 31, 0x342C20u);
    ctx->pc = 0x342C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342C18u;
    // 0x342c1c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x342C18u, 0x342C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342C20u;
label_342c20:
    // 0x342c20: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x342c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x342c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c28: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x342c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x342c2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x342c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x342c30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x342c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x342c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x342c38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x342c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342c3c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x342c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x342c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x342c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342c48: 0x3e00008  jr          $ra
    ctx->pc = 0x342C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C48u;
        // 0x342c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C50u;
}
