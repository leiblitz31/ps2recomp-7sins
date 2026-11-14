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

// Function: sub_0025FCE0
// Address: 0x25fce0 - 0x25fe30
void sub_0025FCE0_0x25fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCE0_0x25fce0");
#endif

    switch (ctx->pc) {
        case 0x25fd04u: goto label_25fd04;
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fdb4u: goto label_25fdb4;
        case 0x25fdc0u: goto label_25fdc0;
        case 0x25fdd4u: goto label_25fdd4;
        case 0x25fdf8u: goto label_25fdf8;
        case 0x25fe04u: goto label_25fe04;
        default: break;
    }

    ctx->pc = 0x25fce0u;

    // 0x25fce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25fce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25fce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fcec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25fcf0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25fcf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25fcf8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fcfc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25FCFCu;
    SET_GPR_U32(ctx, 31, 0x25FD04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25FCFCu, 0x25FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD04u;
label_25fd04:
    // 0x25fd04: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x25fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x25fd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD08u;
    {
        const bool branch_taken_0x25fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd08) {
            ctx->pc = 0x25FD20u;
            goto label_25fd20;
        }
    }
    ctx->pc = 0x25FD10u;
    // 0x25fd10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fd14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fd18: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x25fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25fd1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_25fd20:
    // 0x25fd20: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x25fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25fd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fd2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25fd30: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD38u;
    // 0x25fd38: 0x0  nop
    ctx->pc = 0x25fd38u;
    // NOP
    // 0x25fd3c: 0x0  nop
    ctx->pc = 0x25fd3cu;
    // NOP
    // 0x25fd40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25fd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fd50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25fd54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25fd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd58: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25FD58u;
    {
        const bool branch_taken_0x25fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd58) {
            ctx->pc = 0x25FDDCu;
            goto label_25fddc;
        }
    }
    ctx->pc = 0x25FD60u;
label_25fd60:
    // 0x25fd60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fd64: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25fd68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd6c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25FD6Cu;
    SET_GPR_U32(ctx, 31, 0x25FD74u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25FD6Cu, 0x25FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD74u;
label_25fd74:
    // 0x25fd74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fd78: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25FD78u;
    {
        const bool branch_taken_0x25fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd78) {
            ctx->pc = 0x25FDD8u;
            goto label_25fdd8;
        }
    }
    ctx->pc = 0x25FD80u;
    // 0x25fd80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fd84: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25fd88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd8c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25FD8Cu;
    SET_GPR_U32(ctx, 31, 0x25FD94u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25FD8Cu, 0x25FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD94u;
label_25fd94:
    // 0x25fd94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fd98: 0xc097fd8  jal         func_25FF60
    ctx->pc = 0x25FD98u;
    SET_GPR_U32(ctx, 31, 0x25FDA0u);
    ctx->pc = 0x25FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF60u, 0x25FD98u, 0x25FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDA0u;
label_25fda0:
    // 0x25fda0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fda4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25fda8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25FDACu;
    SET_GPR_U32(ctx, 31, 0x25FDB4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25FDACu, 0x25FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDB4u;
label_25fdb4:
    // 0x25fdb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fdb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25FDB8u;
    SET_GPR_U32(ctx, 31, 0x25FDC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25FDB8u, 0x25FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDC0u;
label_25fdc0:
    // 0x25fdc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fdc4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25fdc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdcc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25FDCCu;
    SET_GPR_U32(ctx, 31, 0x25FDD4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25FDCCu, 0x25FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDD4u;
label_25fdd4:
    // 0x25fdd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25fdd8:
    // 0x25fdd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25fdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25fddc:
    // 0x25fddc: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x25fddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x25fde0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x25FDE0u;
    {
        const bool branch_taken_0x25fde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fde0) {
            ctx->pc = 0x25FD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fd60;
        }
    }
    ctx->pc = 0x25FDE8u;
    // 0x25fde8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fdec: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25fdf0: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x25FDF0u;
    SET_GPR_U32(ctx, 31, 0x25FDF8u);
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25FDF0u, 0x25FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDF8u;
label_25fdf8:
    // 0x25fdf8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fdfc: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x25FDFCu;
    SET_GPR_U32(ctx, 31, 0x25FE04u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x25FDFCu, 0x25FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE04u;
label_25fe04:
    // 0x25fe04: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25fe04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25fe08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25fe08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25fe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fe10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fe10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fe14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25fe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE24u;
    // 0x25fe24: 0x0  nop
    ctx->pc = 0x25fe24u;
    // NOP
    // 0x25fe28: 0x0  nop
    ctx->pc = 0x25fe28u;
    // NOP
    // 0x25fe2c: 0x0  nop
    ctx->pc = 0x25fe2cu;
    // NOP
    ctx->pc = 0x25fe30u;
}
