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

// Function: sub_0020FCF0
// Address: 0x20fcf0 - 0x20fe00
void sub_0020FCF0_0x20fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FCF0_0x20fcf0");
#endif

    switch (ctx->pc) {
        case 0x20fd1cu: goto label_20fd1c;
        case 0x20fd30u: goto label_20fd30;
        case 0x20fd3cu: goto label_20fd3c;
        case 0x20fd48u: goto label_20fd48;
        case 0x20fd64u: goto label_20fd64;
        case 0x20fd78u: goto label_20fd78;
        case 0x20fd94u: goto label_20fd94;
        case 0x20fdb0u: goto label_20fdb0;
        case 0x20fdc4u: goto label_20fdc4;
        case 0x20fde4u: goto label_20fde4;
        default: break;
    }

    ctx->pc = 0x20fcf0u;

    // 0x20fcf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20fcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20fcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20fd00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20fd04: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x20fd04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x20fd08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fd0c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20FD0Cu;
    {
        const bool branch_taken_0x20fd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fd0c) {
            ctx->pc = 0x20FDE4u;
            goto label_20fde4;
        }
    }
    ctx->pc = 0x20FD14u;
    // 0x20fd14: 0xc122430  jal         func_4890C0
    ctx->pc = 0x20FD14u;
    SET_GPR_U32(ctx, 31, 0x20FD1Cu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x20FD14u, 0x20FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD1Cu;
label_20fd1c:
    // 0x20fd1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20fd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fd24: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fd28: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x20FD28u;
    SET_GPR_U32(ctx, 31, 0x20FD30u);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x20FD28u, 0x20FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD30u;
label_20fd30:
    // 0x20fd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20fd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20FD34u;
    {
        const bool branch_taken_0x20fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fd34) {
            ctx->pc = 0x20FD68u;
            goto label_20fd68;
        }
    }
    ctx->pc = 0x20FD3Cu;
label_20fd3c:
    // 0x20fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd40: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20FD40u;
    SET_GPR_U32(ctx, 31, 0x20FD48u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20FD40u, 0x20FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD48u;
label_20fd48:
    // 0x20fd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20fd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20fd54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20fd58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd5c: 0xc121290  jal         func_484A40
    ctx->pc = 0x20FD5Cu;
    SET_GPR_U32(ctx, 31, 0x20FD64u);
    ctx->pc = 0x484A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A40u, 0x20FD5Cu, 0x20FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD64u;
label_20fd64:
    // 0x20fd64: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x20fd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_20fd68:
    // 0x20fd68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fd6c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fd70: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x20FD70u;
    SET_GPR_U32(ctx, 31, 0x20FD78u);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x20FD70u, 0x20FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD78u;
label_20fd78:
    // 0x20fd78: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20FD78u;
    {
        const bool branch_taken_0x20fd78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20fd78) {
            ctx->pc = 0x20FD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd3c;
        }
    }
    ctx->pc = 0x20FD80u;
    // 0x20fd80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fd84: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x20fd88: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20fd8c: 0xc08a614  jal         func_229850
    ctx->pc = 0x20FD8Cu;
    SET_GPR_U32(ctx, 31, 0x20FD94u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x20FD8Cu, 0x20FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD94u;
label_20fd94:
    // 0x20fd94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fd98: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x20fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x20fd9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fda0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x20fda4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fda8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x20FDA8u;
    SET_GPR_U32(ctx, 31, 0x20FDB0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x20FDA8u, 0x20FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDB0u;
label_20fdb0:
    // 0x20fdb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fdb4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fdb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fdbc: 0xc045280  jal         func_114A00
    ctx->pc = 0x20FDBCu;
    SET_GPR_U32(ctx, 31, 0x20FDC4u);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x20FDBCu, 0x20FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDC4u;
label_20fdc4:
    // 0x20fdc4: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fdc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20fdcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20fdccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20fdd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20FDD0u;
    {
        const bool branch_taken_0x20fdd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20fdd0) {
            ctx->pc = 0x20FDE4u;
            goto label_20fde4;
        }
    }
    ctx->pc = 0x20FDD8u;
    // 0x20fdd8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fddc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x20FDDCu;
    SET_GPR_U32(ctx, 31, 0x20FDE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x20FDDCu, 0x20FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDE4u;
label_20fde4:
    // 0x20fde4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fde8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fdec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20fdecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fdf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20fdf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fdf4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20fdf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x20FDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FE00u;
}
