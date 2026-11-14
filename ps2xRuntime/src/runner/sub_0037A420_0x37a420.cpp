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

// Function: sub_0037A420
// Address: 0x37a420 - 0x37a470
void sub_0037A420_0x37a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A420_0x37a420");
#endif

    switch (ctx->pc) {
        case 0x37a458u: goto label_37a458;
        default: break;
    }

    ctx->pc = 0x37a420u;

    // 0x37a420: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x37a420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x37a424: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37a428: 0x8c43ac50  lw          $v1, -0x53B0($v0)
    ctx->pc = 0x37a428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x37a42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37a434: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x37a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37a438: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a43c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37a43cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a444: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x37a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37a448: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x37a448u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x37a44c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x37a44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37a450: 0xc0de288  jal         func_378A20
    ctx->pc = 0x37A450u;
    SET_GPR_U32(ctx, 31, 0x37A458u);
    ctx->pc = 0x37A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A450u;
    // 0x37a454: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A20u, 0x37A450u, 0x37A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A458u;
label_37a458:
    // 0x37a458: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a45c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x37a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37a460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37a464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a468: 0x3e00008  jr          $ra
    ctx->pc = 0x37A468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A468u;
        // 0x37a46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A470u;
}
