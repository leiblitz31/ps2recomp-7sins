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

// Function: sub_002E0AB0
// Address: 0x2e0ab0 - 0x2e0b80
void sub_002E0AB0_0x2e0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0AB0_0x2e0ab0");
#endif

    switch (ctx->pc) {
        case 0x2e0ad4u: goto label_2e0ad4;
        case 0x2e0ae0u: goto label_2e0ae0;
        case 0x2e0b0cu: goto label_2e0b0c;
        case 0x2e0b24u: goto label_2e0b24;
        case 0x2e0b30u: goto label_2e0b30;
        case 0x2e0b48u: goto label_2e0b48;
        case 0x2e0b64u: goto label_2e0b64;
        default: break;
    }

    ctx->pc = 0x2e0ab0u;

    // 0x2e0ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0abc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e0ac0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e0ac4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0ac8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e0acc: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E0ACCu;
    SET_GPR_U32(ctx, 31, 0x2E0AD4u);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E0ACCu, 0x2E0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AD4u;
label_2e0ad4:
    // 0x2e0ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ad8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E0AD8u;
    {
        const bool branch_taken_0x2e0ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ad8) {
            ctx->pc = 0x2E0B54u;
            goto label_2e0b54;
        }
    }
    ctx->pc = 0x2E0AE0u;
label_2e0ae0:
    // 0x2e0ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0ae4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2e0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e0ae8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2e0aec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0af0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0AF0u;
    {
        const bool branch_taken_0x2e0af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0af0) {
            ctx->pc = 0x2E0B50u;
            goto label_2e0b50;
        }
    }
    ctx->pc = 0x2E0AF8u;
    // 0x2e0af8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0afc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2e0afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e0b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b04: 0xc096fe0  jal         func_25BF80
    ctx->pc = 0x2E0B04u;
    SET_GPR_U32(ctx, 31, 0x2E0B0Cu);
    ctx->pc = 0x25BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF80u, 0x2E0B04u, 0x2E0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B0Cu;
label_2e0b0c:
    // 0x2e0b0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0b10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0B10u;
    {
        const bool branch_taken_0x2e0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b10) {
            ctx->pc = 0x2E0B34u;
            goto label_2e0b34;
        }
    }
    ctx->pc = 0x2E0B18u;
    // 0x2e0b18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0b1c: 0xc0b7ef8  jal         func_2DFBE0
    ctx->pc = 0x2E0B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B24u);
    ctx->pc = 0x2DFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBE0u, 0x2E0B1Cu, 0x2E0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B24u;
label_2e0b24:
    // 0x2e0b24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0b28: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E0B28u;
    SET_GPR_U32(ctx, 31, 0x2E0B30u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E0B28u, 0x2E0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B30u;
label_2e0b30:
    // 0x2e0b30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e0b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e0b34:
    // 0x2e0b34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b38: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e0b3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b40: 0xc0b80b0  jal         func_2E02C0
    ctx->pc = 0x2E0B40u;
    SET_GPR_U32(ctx, 31, 0x2E0B48u);
    ctx->pc = 0x2E02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E02C0u, 0x2E0B40u, 0x2E0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B48u;
label_2e0b48:
    // 0x2e0b48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0B48u;
    {
        const bool branch_taken_0x2e0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b48) {
            ctx->pc = 0x2E0B6Cu;
            goto label_2e0b6c;
        }
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e0b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e0b54:
    // 0x2e0b54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b58: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e0b5c: 0xc0b7ef0  jal         func_2DFBC0
    ctx->pc = 0x2E0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B64u);
    ctx->pc = 0x2DFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBC0u, 0x2E0B5Cu, 0x2E0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B64u;
label_2e0b64:
    // 0x2e0b64: 0x1602ffde  bne         $s0, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E0B64u;
    {
        const bool branch_taken_0x2e0b64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0b64) {
            ctx->pc = 0x2E0AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E0B6Cu;
label_2e0b6c:
    // 0x2e0b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0b74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B80u;
}
