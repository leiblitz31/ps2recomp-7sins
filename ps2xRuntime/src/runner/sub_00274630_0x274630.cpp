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

// Function: sub_00274630
// Address: 0x274630 - 0x274760
void sub_00274630_0x274630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274630_0x274630");
#endif

    switch (ctx->pc) {
        case 0x274658u: goto label_274658;
        default: break;
    }

    ctx->pc = 0x274630u;

    // 0x274630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x274630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x274634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27463c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274640: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x274640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x274644: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x274644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x274648: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x274648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x27464c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274650: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x274650u;
    SET_GPR_U32(ctx, 31, 0x274658u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x274650u, 0x274658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274658u;
label_274658:
    // 0x274658: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x274658u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27465c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x274660: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274660u;
    {
        const bool branch_taken_0x274660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274660) {
            ctx->pc = 0x274674u;
            goto label_274674;
        }
    }
    ctx->pc = 0x274668u;
    // 0x274668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27466c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27466Cu;
    {
        const bool branch_taken_0x27466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27466c) {
            ctx->pc = 0x274740u;
            goto label_274740;
        }
    }
    ctx->pc = 0x274674u;
label_274674:
    // 0x274674: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274678u;
    {
        const bool branch_taken_0x274678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274678) {
            ctx->pc = 0x274690u;
            goto label_274690;
        }
    }
    ctx->pc = 0x274680u;
    // 0x274680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274684: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x274684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274688u;
    {
        const bool branch_taken_0x274688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274688) {
            ctx->pc = 0x274694u;
            goto label_274694;
        }
    }
    ctx->pc = 0x274690u;
label_274690:
    // 0x274690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x274690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274694:
    // 0x274694: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x274698: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x274698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27469c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27469Cu;
    {
        const bool branch_taken_0x27469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27469c) {
            ctx->pc = 0x2746B0u;
            goto label_2746b0;
        }
    }
    ctx->pc = 0x2746A4u;
    // 0x2746a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2746a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2746A8u;
    {
        const bool branch_taken_0x2746a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746a8) {
            ctx->pc = 0x274740u;
            goto label_274740;
        }
    }
    ctx->pc = 0x2746B0u;
label_2746b0:
    // 0x2746b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2746b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746b8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2746b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x2746bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2746c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2746c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746c8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x2746c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x2746cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2746ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2746d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2746d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746d8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2746d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x2746dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2746dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2746e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2746e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2746e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746e8: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x2746e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x2746ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2746ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2746f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2746f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2746f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2746f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746f8: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x2746f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x2746fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2746fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274700: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x274700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274704: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274708: 0xa0430038  sb          $v1, 0x38($v0)
    ctx->pc = 0x274708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x27470c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274710: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x274710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x274714: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274718: 0xa043003b  sb          $v1, 0x3B($v0)
    ctx->pc = 0x274718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x27471c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274728: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x274728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x27472c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274730: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x274730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x274734: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274738: 0xa0430039  sb          $v1, 0x39($v0)
    ctx->pc = 0x274738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x27473c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274740:
    // 0x274740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27474c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27474cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x274750: 0x3e00008  jr          $ra
    ctx->pc = 0x274750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274758u;
    // 0x274758: 0x0  nop
    ctx->pc = 0x274758u;
    // NOP
    // 0x27475c: 0x0  nop
    ctx->pc = 0x27475cu;
    // NOP
    ctx->pc = 0x274760u;
}
