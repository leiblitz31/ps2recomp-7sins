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

// Function: sub_0033F970
// Address: 0x33f970 - 0x33f9c8
void sub_0033F970_0x33f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F970_0x33f970");
#endif

    switch (ctx->pc) {
        case 0x33f99cu: goto label_33f99c;
        default: break;
    }

    ctx->pc = 0x33f970u;

    // 0x33f970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33f978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33f97c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33f97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f984: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33f988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f98c: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33f98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33f990: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33f994: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F994u;
    SET_GPR_U32(ctx, 31, 0x33F99Cu);
    ctx->pc = 0x33F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F994u;
    // 0x33f998: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F994u, 0x33F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F99Cu;
label_33f99c:
    // 0x33f99c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33F99Cu;
    {
        const bool branch_taken_0x33f99c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F99Cu;
        // 0x33f9a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f99c) {
            ctx->pc = 0x33F9A8u;
            goto label_33f9a8;
        }
    }
    ctx->pc = 0x33F9A4u;
    // 0x33f9a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x33f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33f9a8:
    // 0x33f9a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x33f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x33f9ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33f9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33f9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f9b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x33F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9BCu;
        // 0x33f9c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F9C4u;
    // 0x33f9c4: 0x0  nop
    ctx->pc = 0x33f9c4u;
    // NOP
    ctx->pc = 0x33f9c8u;
}
