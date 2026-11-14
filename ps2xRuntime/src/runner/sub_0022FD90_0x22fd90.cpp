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

// Function: sub_0022FD90
// Address: 0x22fd90 - 0x22fef0
void sub_0022FD90_0x22fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FD90_0x22fd90");
#endif

    switch (ctx->pc) {
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe70u: goto label_22fe70;
        case 0x22fea0u: goto label_22fea0;
        case 0x22feb0u: goto label_22feb0;
        case 0x22fed4u: goto label_22fed4;
        default: break;
    }

    ctx->pc = 0x22fd90u;

    // 0x22fd90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22fd94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22fd98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22fd9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22fda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fda4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x22fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x22fda8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x22fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x22fdac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x22fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x22fdb0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x22fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x22fdb4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x22fdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x22fdb8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fdbc: 0xc08bf30  jal         func_22FCC0
    ctx->pc = 0x22FDBCu;
    SET_GPR_U32(ctx, 31, 0x22FDC4u);
    ctx->pc = 0x22FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCC0u, 0x22FDBCu, 0x22FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDC4u;
label_22fdc4:
    // 0x22fdc4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x22fdc8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x22fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22fdcc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22fdd0: 0xc041954  jal         func_106550
    ctx->pc = 0x22FDD0u;
    SET_GPR_U32(ctx, 31, 0x22FDD8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x22FDD0u, 0x22FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDD8u;
label_22fdd8:
    // 0x22fdd8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x22fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22fddc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fde0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fde4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fde8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22fdec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdf4: 0xc08ca4c  jal         func_232930
    ctx->pc = 0x22FDF4u;
    SET_GPR_U32(ctx, 31, 0x22FDFCu);
    ctx->pc = 0x232930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232930u, 0x22FDF4u, 0x22FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDFCu;
label_22fdfc:
    // 0x22fdfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22fdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe00: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x22fe00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fe08: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x22fe08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fe0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fe10: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22fe14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe18: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x22fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x22fe1c: 0xc08c00c  jal         func_230030
    ctx->pc = 0x22FE1Cu;
    SET_GPR_U32(ctx, 31, 0x22FE24u);
    ctx->pc = 0x230030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230030u, 0x22FE1Cu, 0x22FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE24u;
label_22fe24:
    // 0x22fe24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe28: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22fe2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fe30: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FE30u;
    {
        const bool branch_taken_0x22fe30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fe30) {
            ctx->pc = 0x22FE54u;
            goto label_22fe54;
        }
    }
    ctx->pc = 0x22FE38u;
    // 0x22fe38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe3c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22fe40: 0xc08c02c  jal         func_2300B0
    ctx->pc = 0x22FE40u;
    SET_GPR_U32(ctx, 31, 0x22FE48u);
    ctx->pc = 0x2300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B0u, 0x22FE40u, 0x22FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE48u;
label_22fe48:
    // 0x22fe48: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22fe4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22FE4Cu;
    {
        const bool branch_taken_0x22fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe4c) {
            ctx->pc = 0x22FE74u;
            goto label_22fe74;
        }
    }
    ctx->pc = 0x22FE54u;
label_22fe54:
    // 0x22fe54: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x22fe54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fe58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe5c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22fe60: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x22fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22fe64: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x22fe68: 0xc08bfec  jal         func_22FFB0
    ctx->pc = 0x22FE68u;
    SET_GPR_U32(ctx, 31, 0x22FE70u);
    ctx->pc = 0x22FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FFB0u, 0x22FE68u, 0x22FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE70u;
label_22fe70:
    // 0x22fe70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fe70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fe74:
    // 0x22fe74: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x22fe74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22fe78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22FE78u;
    {
        const bool branch_taken_0x22fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fe78) {
            ctx->pc = 0x22FEA4u;
            goto label_22fea4;
        }
    }
    ctx->pc = 0x22FE80u;
    // 0x22fe80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fe84: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x22fe84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fe88: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22fe8c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22fe90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22fe90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe94: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x22fe94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22fe98: 0xc08c00c  jal         func_230030
    ctx->pc = 0x22FE98u;
    SET_GPR_U32(ctx, 31, 0x22FEA0u);
    ctx->pc = 0x230030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230030u, 0x22FE98u, 0x22FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEA0u;
label_22fea0:
    // 0x22fea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fea4:
    // 0x22fea4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fea8: 0xc08bfd0  jal         func_22FF40
    ctx->pc = 0x22FEA8u;
    SET_GPR_U32(ctx, 31, 0x22FEB0u);
    ctx->pc = 0x22FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF40u, 0x22FEA8u, 0x22FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEB0u;
label_22feb0:
    // 0x22feb0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x22feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22feb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22feb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22febc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x22febcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22fec0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fec8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22fec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fecc: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x22FECCu;
    SET_GPR_U32(ctx, 31, 0x22FED4u);
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x22FECCu, 0x22FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FED4u;
label_22fed4:
    // 0x22fed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fedc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fee4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22fee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22fee8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FEF0u;
}
