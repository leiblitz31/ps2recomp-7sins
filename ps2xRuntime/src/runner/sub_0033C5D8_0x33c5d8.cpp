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

// Function: sub_0033C5D8
// Address: 0x33c5d8 - 0x33c630
void sub_0033C5D8_0x33c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C5D8_0x33c5d8");
#endif

    switch (ctx->pc) {
        case 0x33c604u: goto label_33c604;
        default: break;
    }

    ctx->pc = 0x33c5d8u;

    // 0x33c5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c5dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33c5e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c5e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c5ec: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33c5f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5f4: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33c5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33c5f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33c5fc: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C5FCu;
    SET_GPR_U32(ctx, 31, 0x33C604u);
    ctx->pc = 0x33C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5FCu;
    // 0x33c600: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C5FCu, 0x33C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C604u;
label_33c604:
    // 0x33c604: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x33c604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x33c608: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c60c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x33c60cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x33c610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c618: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x33c618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x33c61c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33c61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c624: 0x3e00008  jr          $ra
    ctx->pc = 0x33C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C624u;
        // 0x33c628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C62Cu;
    // 0x33c62c: 0x0  nop
    ctx->pc = 0x33c62cu;
    // NOP
    ctx->pc = 0x33c630u;
}
