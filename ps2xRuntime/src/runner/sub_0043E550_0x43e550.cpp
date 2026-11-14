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

// Function: sub_0043E550
// Address: 0x43e550 - 0x43e5b8
void sub_0043E550_0x43e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E550_0x43e550");
#endif

    ctx->pc = 0x43e550u;

    // 0x43e550: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e554: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43e558: 0x2463d5b0  addiu       $v1, $v1, -0x2A50
    ctx->pc = 0x43e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956464));
    // 0x43e55c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e55cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD5B0u));
    // 0x43e560: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e560u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e564: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e568: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43e568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x43e56c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43e56cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e570: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x43e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x43e574: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x43e574u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x43e578: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x43e578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x43e57c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x43e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e580: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43e580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x43e584: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e588: 0x2463d5a0  addiu       $v1, $v1, -0x2A60
    ctx->pc = 0x43e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956448));
    // 0x43e58c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x43e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x43e590: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e590u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD5A0u));
    // 0x43e594: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43e594u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x43e598: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x43e598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x43e59c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e5a0: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x43e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
    // 0x43e5a4: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x43e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x43e5a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e5a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD630u));
    // 0x43e5ac: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x43e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x43E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E5B0u;
        // 0x43e5b4: 0xaf85be20  sw          $a1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E5B8u;
}
