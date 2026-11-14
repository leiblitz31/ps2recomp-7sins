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

// Function: sub_00489A10
// Address: 0x489a10 - 0x489ae0
void sub_00489A10_0x489a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489A10_0x489a10");
#endif

    switch (ctx->pc) {
        case 0x489a34u: goto label_489a34;
        case 0x489aa0u: goto label_489aa0;
        case 0x489abcu: goto label_489abc;
        default: break;
    }

    ctx->pc = 0x489a10u;

    // 0x489a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x489a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x489a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x489a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x489a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x489a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x489a20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x489a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x489a24: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x489a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x489a28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x489a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a2c: 0xc114de4  jal         func_453790
    ctx->pc = 0x489A2Cu;
    SET_GPR_U32(ctx, 31, 0x489A34u);
    ctx->pc = 0x453790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453790u, 0x489A2Cu, 0x489A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489A34u;
label_489a34:
    // 0x489a34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x489a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a3c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x489a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x489a40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a44: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x489a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x489a48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x489A48u;
    {
        const bool branch_taken_0x489a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489a48) {
            ctx->pc = 0x489A8Cu;
            goto label_489a8c;
        }
    }
    ctx->pc = 0x489A50u;
    // 0x489a50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x489a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489a54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489A54u;
    {
        const bool branch_taken_0x489a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489a54) {
            ctx->pc = 0x489A70u;
            goto label_489a70;
        }
    }
    ctx->pc = 0x489A5Cu;
    // 0x489a5c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x489a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a64: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x489a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x489a68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x489A68u;
    {
        const bool branch_taken_0x489a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489a68) {
            ctx->pc = 0x489A94u;
            goto label_489a94;
        }
    }
    ctx->pc = 0x489A70u;
label_489a70:
    // 0x489a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a74: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x489a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x489a78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x489a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x489a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a80: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x489a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x489a84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x489A84u;
    {
        const bool branch_taken_0x489a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489a84) {
            ctx->pc = 0x489A94u;
            goto label_489a94;
        }
    }
    ctx->pc = 0x489A8Cu;
label_489a8c:
    // 0x489a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a90: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x489a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_489a94:
    // 0x489a94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x489a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489a98: 0xc122990  jal         func_48A640
    ctx->pc = 0x489A98u;
    SET_GPR_U32(ctx, 31, 0x489AA0u);
    ctx->pc = 0x48A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A640u, 0x489A98u, 0x489AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489AA0u;
label_489aa0:
    // 0x489aa0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x489aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489aa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x489AA4u;
    {
        const bool branch_taken_0x489aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489aa4) {
            ctx->pc = 0x489ABCu;
            goto label_489abc;
        }
    }
    ctx->pc = 0x489AACu;
    // 0x489aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x489aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489ab0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x489ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489ab4: 0xc1226b8  jal         func_489AE0
    ctx->pc = 0x489AB4u;
    SET_GPR_U32(ctx, 31, 0x489ABCu);
    ctx->pc = 0x489AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489AE0u, 0x489AB4u, 0x489ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489ABCu;
label_489abc:
    // 0x489abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x489abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489ac0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489ac4: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x489ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x489ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489ad0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x489ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x489ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x489AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489ADCu;
    // 0x489adc: 0x0  nop
    ctx->pc = 0x489adcu;
    // NOP
    ctx->pc = 0x489ae0u;
}
