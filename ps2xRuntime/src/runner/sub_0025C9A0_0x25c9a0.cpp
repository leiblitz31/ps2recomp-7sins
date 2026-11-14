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

// Function: sub_0025C9A0
// Address: 0x25c9a0 - 0x25cb00
void sub_0025C9A0_0x25c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C9A0_0x25c9a0");
#endif

    switch (ctx->pc) {
        case 0x25c9d4u: goto label_25c9d4;
        case 0x25c9e8u: goto label_25c9e8;
        case 0x25ca0cu: goto label_25ca0c;
        case 0x25ca34u: goto label_25ca34;
        case 0x25ca58u: goto label_25ca58;
        case 0x25ca80u: goto label_25ca80;
        case 0x25cab0u: goto label_25cab0;
        case 0x25cac0u: goto label_25cac0;
        case 0x25cadcu: goto label_25cadc;
        default: break;
    }

    ctx->pc = 0x25c9a0u;

    // 0x25c9a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25c9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25c9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25c9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c9b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c9b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25c9b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25c9bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25c9c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x25c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x25c9c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x25c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x25c9c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c9cc: 0xc096374  jal         func_258DD0
    ctx->pc = 0x25C9CCu;
    SET_GPR_U32(ctx, 31, 0x25C9D4u);
    ctx->pc = 0x258DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258DD0u, 0x25C9CCu, 0x25C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9D4u;
label_25c9d4:
    // 0x25c9d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x25c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x25c9d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x25c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25c9dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25c9e0: 0xc041954  jal         func_106550
    ctx->pc = 0x25C9E0u;
    SET_GPR_U32(ctx, 31, 0x25C9E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x25C9E0u, 0x25C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9E8u;
label_25c9e8:
    // 0x25c9e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x25c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25c9ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c9f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25c9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c9f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c9f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25c9fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca04: 0xc0973a0  jal         func_25CE80
    ctx->pc = 0x25CA04u;
    SET_GPR_U32(ctx, 31, 0x25CA0Cu);
    ctx->pc = 0x25CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE80u, 0x25CA04u, 0x25CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA0Cu;
label_25ca0c:
    // 0x25ca0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x25ca10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ca18: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x25ca18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ca1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ca20: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ca24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca28: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x25ca28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25ca2c: 0xc097380  jal         func_25CE00
    ctx->pc = 0x25CA2Cu;
    SET_GPR_U32(ctx, 31, 0x25CA34u);
    ctx->pc = 0x25CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE00u, 0x25CA2Cu, 0x25CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA34u;
label_25ca34:
    // 0x25ca34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ca34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca38: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x25ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25ca3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ca40: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CA40u;
    {
        const bool branch_taken_0x25ca40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ca40) {
            ctx->pc = 0x25CA64u;
            goto label_25ca64;
        }
    }
    ctx->pc = 0x25CA48u;
    // 0x25ca48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca4c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x25ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ca50: 0xc097314  jal         func_25CC50
    ctx->pc = 0x25CA50u;
    SET_GPR_U32(ctx, 31, 0x25CA58u);
    ctx->pc = 0x25CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC50u, 0x25CA50u, 0x25CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA58u;
label_25ca58:
    // 0x25ca58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25ca58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25ca5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25CA5Cu;
    {
        const bool branch_taken_0x25ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca5c) {
            ctx->pc = 0x25CA84u;
            goto label_25ca84;
        }
    }
    ctx->pc = 0x25CA64u;
label_25ca64:
    // 0x25ca64: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x25ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ca68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca6c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25ca70: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25ca70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ca74: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x25ca74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x25ca78: 0xc0972f4  jal         func_25CBD0
    ctx->pc = 0x25CA78u;
    SET_GPR_U32(ctx, 31, 0x25CA80u);
    ctx->pc = 0x25CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBD0u, 0x25CA78u, 0x25CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA80u;
label_25ca80:
    // 0x25ca80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ca80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ca84:
    // 0x25ca84: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x25ca84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ca88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25CA88u;
    {
        const bool branch_taken_0x25ca88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca88) {
            ctx->pc = 0x25CAB4u;
            goto label_25cab4;
        }
    }
    ctx->pc = 0x25CA90u;
    // 0x25ca90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ca94: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x25ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ca98: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ca9c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25caa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25caa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25caa4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x25caa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25caa8: 0xc097380  jal         func_25CE00
    ctx->pc = 0x25CAA8u;
    SET_GPR_U32(ctx, 31, 0x25CAB0u);
    ctx->pc = 0x25CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE00u, 0x25CAA8u, 0x25CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAB0u;
label_25cab0:
    // 0x25cab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cab4:
    // 0x25cab4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cab8: 0xc0972d4  jal         func_25CB50
    ctx->pc = 0x25CAB8u;
    SET_GPR_U32(ctx, 31, 0x25CAC0u);
    ctx->pc = 0x25CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB50u, 0x25CAB8u, 0x25CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAC0u;
label_25cac0:
    // 0x25cac0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25cac4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x25cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25cac8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25caccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cad0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25cad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cad4: 0xc0972c0  jal         func_25CB00
    ctx->pc = 0x25CAD4u;
    SET_GPR_U32(ctx, 31, 0x25CADCu);
    ctx->pc = 0x25CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB00u, 0x25CAD4u, 0x25CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CADCu;
label_25cadc:
    // 0x25cadc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25caec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25caecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CAF8u;
    // 0x25caf8: 0x0  nop
    ctx->pc = 0x25caf8u;
    // NOP
    // 0x25cafc: 0x0  nop
    ctx->pc = 0x25cafcu;
    // NOP
    ctx->pc = 0x25cb00u;
}
