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

// Function: sub_004B3500
// Address: 0x4b3500 - 0x4b3560
void sub_004B3500_0x4b3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3500_0x4b3500");
#endif

    ctx->pc = 0x4b3500u;

    // 0x4b3500: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b3500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b3504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b3504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b3508: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b3508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b350c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x4b350cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4b3510: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4b3510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4b3514: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x4b3514u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3518: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x4b3518u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4b351c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B351Cu;
        // 0x4b3520: 0xe48c0088  swc1        $f12, 0x88($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3524u;
    // 0x4b3524: 0x0  nop
    ctx->pc = 0x4b3524u;
    // NOP
    // 0x4b3528: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3528u;
        // 0x4b352c: 0xc4800088  lwc1        $f0, 0x88($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3530u;
    // 0x4b3530: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x4b3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x4b3534: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3534u;
        // 0x4b3538: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B353Cu;
    // 0x4b353c: 0x0  nop
    ctx->pc = 0x4b353cu;
    // NOP
    // 0x4b3540: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x4b3540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b3544: 0xe48c0080  swc1        $f12, 0x80($a0)
    ctx->pc = 0x4b3544u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x4b3548: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4b3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4b354c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B354Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B354Cu;
        // 0x4b3550: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B354Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3554u;
    // 0x4b3554: 0x0  nop
    ctx->pc = 0x4b3554u;
    // NOP
    // 0x4b3558: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3558u;
        // 0x4b355c: 0xc4800080  lwc1        $f0, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3560u;
}
