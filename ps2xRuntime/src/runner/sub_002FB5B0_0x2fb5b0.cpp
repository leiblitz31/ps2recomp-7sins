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

// Function: sub_002FB5B0
// Address: 0x2fb5b0 - 0x2fb608
void sub_002FB5B0_0x2fb5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB5B0_0x2fb5b0");
#endif

    switch (ctx->pc) {
        case 0x2fb5d0u: goto label_2fb5d0;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb5f0u: goto label_2fb5f0;
        case 0x2fb5f8u: goto label_2fb5f8;
        default: break;
    }

    ctx->pc = 0x2fb5b0u;

    // 0x2fb5b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb5b4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2fb5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2fb5b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fb5bc: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2fb5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2fb5c0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fb5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2fb5c4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2fb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2fb5c8: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB5C8u;
    SET_GPR_U32(ctx, 31, 0x2FB5D0u);
    ctx->pc = 0x2FB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5C8u;
    // 0x2fb5cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB5C8u, 0x2FB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5D0u;
label_2fb5d0:
    // 0x2fb5d0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fb5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fb5d4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2fb5d8: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB5D8u;
    SET_GPR_U32(ctx, 31, 0x2FB5E0u);
    ctx->pc = 0x2FB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5D8u;
    // 0x2fb5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB5D8u, 0x2FB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5E0u;
label_2fb5e0:
    // 0x2fb5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5e8: 0xc0becd4  jal         func_2FB350
    ctx->pc = 0x2FB5E8u;
    SET_GPR_U32(ctx, 31, 0x2FB5F0u);
    ctx->pc = 0x2FB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5E8u;
    // 0x2fb5ec: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB350u, 0x2FB5E8u, 0x2FB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5F0u;
label_2fb5f0:
    // 0x2fb5f0: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FB5F0u;
    SET_GPR_U32(ctx, 31, 0x2FB5F8u);
    ctx->pc = 0x2FB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5F0u;
    // 0x2fb5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FB5F0u, 0x2FB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5F8u;
label_2fb5f8:
    // 0x2fb5f8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2fb5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb5fc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2fb5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fb600: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB600u;
        // 0x2fb604: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB608u;
}
