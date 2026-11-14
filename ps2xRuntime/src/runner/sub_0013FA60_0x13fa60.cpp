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

// Function: sub_0013FA60
// Address: 0x13fa60 - 0x13faf0
void sub_0013FA60_0x13fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FA60_0x13fa60");
#endif

    switch (ctx->pc) {
        case 0x13fa88u: goto label_13fa88;
        case 0x13fab4u: goto label_13fab4;
        case 0x13fad4u: goto label_13fad4;
        default: break;
    }

    ctx->pc = 0x13fa60u;

    // 0x13fa60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13fa64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13fa6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13fa70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13fa74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fa78: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13fa7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fa80: 0xc042288  jal         func_108A20
    ctx->pc = 0x13FA80u;
    SET_GPR_U32(ctx, 31, 0x13FA88u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13FA80u, 0x13FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA88u;
label_13fa88:
    // 0x13fa88: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13FA88u;
    {
        const bool branch_taken_0x13fa88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fa88) {
            ctx->pc = 0x13FAB4u;
            goto label_13fab4;
        }
    }
    ctx->pc = 0x13FA90u;
    // 0x13fa90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fa94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fa98: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x13fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x13fa9c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x13fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13faa0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13faa4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13faa8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13faac: 0xc04fec4  jal         func_13FB10
    ctx->pc = 0x13FAACu;
    SET_GPR_U32(ctx, 31, 0x13FAB4u);
    ctx->pc = 0x13FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB10u, 0x13FAACu, 0x13FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAB4u;
label_13fab4:
    // 0x13fab4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fab8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13fabc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x13fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x13fac0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13fac4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fac8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13facc: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13FACCu;
    SET_GPR_U32(ctx, 31, 0x13FAD4u);
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13FACCu, 0x13FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAD4u;
label_13fad4:
    // 0x13fad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fae0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fae4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FAECu;
    // 0x13faec: 0x0  nop
    ctx->pc = 0x13faecu;
    // NOP
    ctx->pc = 0x13faf0u;
}
