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

// Function: sub_002993C0
// Address: 0x2993c0 - 0x299440
void sub_002993C0_0x2993c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002993C0_0x2993c0");
#endif

    switch (ctx->pc) {
        case 0x299428u: goto label_299428;
        default: break;
    }

    ctx->pc = 0x2993c0u;

    // 0x2993c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2993c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2993c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2993c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2993c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2993c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2993cc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2993d0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2993d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2993d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2993d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2993d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2993D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2993D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2993E0u;
    // 0x2993e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2993e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2993e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2993e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2993e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2993e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2993ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2993f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2993f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2993f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2993f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2993fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2993FCu;
    {
        const bool branch_taken_0x2993fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2993fc) {
            ctx->pc = 0x29940Cu;
            goto label_29940c;
        }
    }
    ctx->pc = 0x299404u;
    // 0x299404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299404u;
    {
        const bool branch_taken_0x299404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299404) {
            ctx->pc = 0x299428u;
            goto label_299428;
        }
    }
    ctx->pc = 0x29940Cu;
label_29940c:
    // 0x29940c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299410: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299410u;
    {
        const bool branch_taken_0x299410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x299410) {
            ctx->pc = 0x299428u;
            goto label_299428;
        }
    }
    ctx->pc = 0x299418u;
    // 0x299418: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29941c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299420: 0xc0a6510  jal         func_299440
    ctx->pc = 0x299420u;
    SET_GPR_U32(ctx, 31, 0x299428u);
    ctx->pc = 0x299440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299440u, 0x299420u, 0x299428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299428u;
label_299428:
    // 0x299428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29942c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29942cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299430: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x299434: 0x3e00008  jr          $ra
    ctx->pc = 0x299434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29943Cu;
    // 0x29943c: 0x0  nop
    ctx->pc = 0x29943cu;
    // NOP
    ctx->pc = 0x299440u;
}
