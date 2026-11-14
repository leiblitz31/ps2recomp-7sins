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

// Function: sub_003AE3E0
// Address: 0x3ae3e0 - 0x3ae440
void sub_003AE3E0_0x3ae3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE3E0_0x3ae3e0");
#endif

    switch (ctx->pc) {
        case 0x3ae424u: goto label_3ae424;
        default: break;
    }

    ctx->pc = 0x3ae3e0u;

    // 0x3ae3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae3e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae3ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae3f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae3f8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ae3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3ae3fc: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3ae3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3ae400: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ae400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae404: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae408: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3ae408u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ae40c: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3ae40cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae414: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3ae414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ae418: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ae418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ae41c: 0xc103c86  jal         func_40F218
    ctx->pc = 0x3AE41Cu;
    SET_GPR_U32(ctx, 31, 0x3AE424u);
    ctx->pc = 0x3AE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE41Cu;
    // 0x3ae420: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x3AE41Cu, 0x3AE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE424u;
label_3ae424:
    // 0x3ae424: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x3ae424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x3ae428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae42c: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x3ae42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x3ae430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae438: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE438u;
        // 0x3ae43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE440u;
}
