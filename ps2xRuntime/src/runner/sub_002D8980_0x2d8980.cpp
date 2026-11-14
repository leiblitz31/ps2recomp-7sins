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

// Function: sub_002D8980
// Address: 0x2d8980 - 0x2d8ac0
void sub_002D8980_0x2d8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8980_0x2d8980");
#endif

    switch (ctx->pc) {
        case 0x2d89c8u: goto label_2d89c8;
        case 0x2d89d8u: goto label_2d89d8;
        case 0x2d89f0u: goto label_2d89f0;
        case 0x2d8a0cu: goto label_2d8a0c;
        case 0x2d8a24u: goto label_2d8a24;
        case 0x2d8a34u: goto label_2d8a34;
        case 0x2d8a4cu: goto label_2d8a4c;
        case 0x2d8a6cu: goto label_2d8a6c;
        case 0x2d8a7cu: goto label_2d8a7c;
        case 0x2d8aa4u: goto label_2d8aa4;
        default: break;
    }

    ctx->pc = 0x2d8980u;

    // 0x2d8980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d898c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8990: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d8990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d8994: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x2d8994u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d8998: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d899c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D899Cu;
    {
        const bool branch_taken_0x2d899c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d899c) {
            ctx->pc = 0x2D8AA4u;
            goto label_2d8aa4;
        }
    }
    ctx->pc = 0x2D89A4u;
    // 0x2d89a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d89a8: 0x246367f8  addiu       $v1, $v1, 0x67F8
    ctx->pc = 0x2d89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26616));
    // 0x2d89ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d89b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d89b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d89b8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d89bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d89c0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D89C0u;
    SET_GPR_U32(ctx, 31, 0x2D89C8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D89C0u, 0x2D89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89C8u;
label_2d89c8:
    // 0x2d89c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d89c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d89ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89d0: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D89D0u;
    SET_GPR_U32(ctx, 31, 0x2D89D8u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D89D0u, 0x2D89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89D8u;
label_2d89d8:
    // 0x2d89d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d89dc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D89DCu;
    {
        const bool branch_taken_0x2d89dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d89dc) {
            ctx->pc = 0x2D89FCu;
            goto label_2d89fc;
        }
    }
    ctx->pc = 0x2D89E4u;
    // 0x2d89e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d89e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89e8: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D89E8u;
    SET_GPR_U32(ctx, 31, 0x2D89F0u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D89E8u, 0x2D89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89F0u;
label_2d89f0:
    // 0x2d89f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d89f4: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D89F4u;
    {
        const bool branch_taken_0x2d89f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d89f4) {
            ctx->pc = 0x2D8A4Cu;
            goto label_2d8a4c;
        }
    }
    ctx->pc = 0x2D89FCu;
label_2d89fc:
    // 0x2d89fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a00: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d8a04: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2D8A04u;
    SET_GPR_U32(ctx, 31, 0x2D8A0Cu);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2D8A04u, 0x2D8A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A0Cu;
label_2d8a0c:
    // 0x2d8a0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8A0Cu;
    {
        const bool branch_taken_0x2d8a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a0c) {
            ctx->pc = 0x2D8A4Cu;
            goto label_2d8a4c;
        }
    }
    ctx->pc = 0x2D8A14u;
    // 0x2d8a14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a18: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d8a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d8a1c: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2D8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A24u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2D8A1Cu, 0x2D8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A24u;
label_2d8a24:
    // 0x2d8a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a28: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2d8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d8a2c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D8A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A34u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D8A2Cu, 0x2D8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A34u;
label_2d8a34:
    // 0x2d8a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a40: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d8a44: 0xc0b74b8  jal         func_2DD2E0
    ctx->pc = 0x2D8A44u;
    SET_GPR_U32(ctx, 31, 0x2D8A4Cu);
    ctx->pc = 0x2DD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD2E0u, 0x2D8A44u, 0x2D8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A4Cu;
label_2d8a4c:
    // 0x2d8a4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a50: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d8a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8A54u;
    {
        const bool branch_taken_0x2d8a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a54) {
            ctx->pc = 0x2D8A84u;
            goto label_2d8a84;
        }
    }
    ctx->pc = 0x2D8A5Cu;
    // 0x2d8a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a60: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d8a64: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D8A64u;
    SET_GPR_U32(ctx, 31, 0x2D8A6Cu);
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D8A64u, 0x2D8A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A6Cu;
label_2d8a6c:
    // 0x2d8a6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a70: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d8a74: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D8A74u;
    SET_GPR_U32(ctx, 31, 0x2D8A7Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D8A74u, 0x2D8A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A7Cu;
label_2d8a7c:
    // 0x2d8a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a80: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2d8a84:
    // 0x2d8a84: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x2d8a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8a88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d8a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8a8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d8a90: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8A90u;
    {
        const bool branch_taken_0x2d8a90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8a90) {
            ctx->pc = 0x2D8AA4u;
            goto label_2d8aa4;
        }
    }
    ctx->pc = 0x2D8A98u;
    // 0x2d8a98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a9c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D8A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8AA4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D8A9Cu, 0x2D8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AA4u;
label_2d8aa4:
    // 0x2d8aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ab4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d8ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d8ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8AC0u;
}
