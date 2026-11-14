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

// Function: sub_004A64A8
// Address: 0x4a64a8 - 0x4a64e8
void sub_004A64A8_0x4a64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A64A8_0x4a64a8");
#endif

    switch (ctx->pc) {
        case 0x4a64d4u: goto label_4a64d4;
        default: break;
    }

    ctx->pc = 0x4a64a8u;

    // 0x4a64a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a64ac: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4a64acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4a64b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a64b4: 0x24c669f8  addiu       $a2, $a2, 0x69F8
    ctx->pc = 0x4a64b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27128));
    // 0x4a64b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a64bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a64bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a64c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4a64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4a64c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a64c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a64c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4a64c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a64cc: 0xc1269c6  jal         func_49A718
    ctx->pc = 0x4A64CCu;
    SET_GPR_U32(ctx, 31, 0x4A64D4u);
    ctx->pc = 0x4A64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A64CCu;
    // 0x4a64d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x4A64CCu, 0x4A64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A64D4u;
label_4a64d4:
    // 0x4a64d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a64d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a64d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a64dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A64DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64DCu;
        // 0x4a64e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A64DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A64E4u;
    // 0x4a64e4: 0x0  nop
    ctx->pc = 0x4a64e4u;
    // NOP
    ctx->pc = 0x4a64e8u;
}
