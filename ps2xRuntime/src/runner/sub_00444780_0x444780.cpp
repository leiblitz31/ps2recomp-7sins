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

// Function: sub_00444780
// Address: 0x444780 - 0x4447e0
void sub_00444780_0x444780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444780_0x444780");
#endif

    switch (ctx->pc) {
        case 0x4447a8u: goto label_4447a8;
        case 0x4447b8u: goto label_4447b8;
        default: break;
    }

    ctx->pc = 0x444780u;

    // 0x444780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x444784: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444788: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x444788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x44478c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x444790: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x444790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x444794: 0x2610e8a0  addiu       $s0, $s0, -0x1760
    ctx->pc = 0x444794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961312));
    // 0x444798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x444798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44479c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4447a0: 0xc1135ee  jal         func_44D7B8
    ctx->pc = 0x4447A0u;
    SET_GPR_U32(ctx, 31, 0x4447A8u);
    ctx->pc = 0x4447A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4447A0u;
    // 0x4447a4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7B8u, 0x4447A0u, 0x4447A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4447A8u;
label_4447a8:
    // 0x4447a8: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4447a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4447ac: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4447acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4447b0: 0xc1135ec  jal         func_44D7B0
    ctx->pc = 0x4447B0u;
    SET_GPR_U32(ctx, 31, 0x4447B8u);
    ctx->pc = 0x4447B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4447B0u;
    // 0x4447b4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7B0u, 0x4447B0u, 0x4447B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4447B8u;
label_4447b8:
    // 0x4447b8: 0x8f83bf1c  lw          $v1, -0x40E4($gp)
    ctx->pc = 0x4447b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950684)));
    // 0x4447bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4447bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4447c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4447c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4447c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4447c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4447c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4447c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4447cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4447ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4447d0: 0xaf83bf1c  sw          $v1, -0x40E4($gp)
    ctx->pc = 0x4447d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950684), GPR_U32(ctx, 3));
    // 0x4447d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4447D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4447D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447D4u;
        // 0x4447d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4447D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4447DCu;
    // 0x4447dc: 0x0  nop
    ctx->pc = 0x4447dcu;
    // NOP
    ctx->pc = 0x4447e0u;
}
