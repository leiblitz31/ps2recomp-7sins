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

// Function: sub_0029D0B0
// Address: 0x29d0b0 - 0x29d140
void sub_0029D0B0_0x29d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0B0_0x29d0b0");
#endif

    switch (ctx->pc) {
        case 0x29d0d8u: goto label_29d0d8;
        case 0x29d104u: goto label_29d104;
        case 0x29d124u: goto label_29d124;
        default: break;
    }

    ctx->pc = 0x29d0b0u;

    // 0x29d0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29d0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d0bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29d0c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29d0c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d0c8: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29d0cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d0d0: 0xc0a7424  jal         func_29D090
    ctx->pc = 0x29D0D0u;
    SET_GPR_U32(ctx, 31, 0x29D0D8u);
    ctx->pc = 0x29D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D090u, 0x29D0D0u, 0x29D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0D8u;
label_29d0d8:
    // 0x29d0d8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D0D8u;
    {
        const bool branch_taken_0x29d0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29d0d8) {
            ctx->pc = 0x29D104u;
            goto label_29d104;
        }
    }
    ctx->pc = 0x29D0E0u;
    // 0x29d0e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d0e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d0e8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x29d0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d0ec: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x29d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x29d0f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d0f4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d0f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x29d0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x29d0fc: 0xc0a7450  jal         func_29D140
    ctx->pc = 0x29D0FCu;
    SET_GPR_U32(ctx, 31, 0x29D104u);
    ctx->pc = 0x29D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D140u, 0x29D0FCu, 0x29D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D104u;
label_29d104:
    // 0x29d104: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d108: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29d10c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x29d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x29d110: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x29d110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x29d114: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d118: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d11c: 0xc098a80  jal         func_262A00
    ctx->pc = 0x29D11Cu;
    SET_GPR_U32(ctx, 31, 0x29D124u);
    ctx->pc = 0x262A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A00u, 0x29D11Cu, 0x29D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D124u;
label_29d124:
    // 0x29d124: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d130: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29d134: 0x3e00008  jr          $ra
    ctx->pc = 0x29D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D13Cu;
    // 0x29d13c: 0x0  nop
    ctx->pc = 0x29d13cu;
    // NOP
    ctx->pc = 0x29d140u;
}
