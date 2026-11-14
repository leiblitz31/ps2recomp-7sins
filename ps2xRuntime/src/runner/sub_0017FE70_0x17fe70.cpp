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

// Function: sub_0017FE70
// Address: 0x17fe70 - 0x180030
void sub_0017FE70_0x17fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FE70_0x17fe70");
#endif

    switch (ctx->pc) {
        case 0x17fea8u: goto label_17fea8;
        case 0x17feb8u: goto label_17feb8;
        case 0x17fee4u: goto label_17fee4;
        case 0x17fef4u: goto label_17fef4;
        case 0x17ff28u: goto label_17ff28;
        case 0x17ff5cu: goto label_17ff5c;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff88u: goto label_17ff88;
        case 0x17ffb8u: goto label_17ffb8;
        case 0x17ffc4u: goto label_17ffc4;
        case 0x17fff4u: goto label_17fff4;
        default: break;
    }

    ctx->pc = 0x17fe70u;

    // 0x17fe70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17fe74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fe78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fe7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fe80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fe84: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17fe88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x17fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x17fe8c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fe90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fe94: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x17FE94u;
    {
        const bool branch_taken_0x17fe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fe94) {
            ctx->pc = 0x18000Cu;
            goto label_18000c;
        }
    }
    ctx->pc = 0x17FE9Cu;
    // 0x17fe9c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fea0: 0xc05611c  jal         func_158470
    ctx->pc = 0x17FEA0u;
    SET_GPR_U32(ctx, 31, 0x17FEA8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x17FEA0u, 0x17FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEA8u;
label_17fea8:
    // 0x17fea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17feac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17feb0: 0xc060074  jal         func_1801D0
    ctx->pc = 0x17FEB0u;
    SET_GPR_U32(ctx, 31, 0x17FEB8u);
    ctx->pc = 0x1801D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1801D0u, 0x17FEB0u, 0x17FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEB8u;
label_17feb8:
    // 0x17feb8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17feb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17febc: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x17FEBCu;
    {
        const bool branch_taken_0x17febc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17febc) {
            ctx->pc = 0x17FF1Cu;
            goto label_17ff1c;
        }
    }
    ctx->pc = 0x17FEC4u;
    // 0x17fec4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fec8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fecc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x17fed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fed8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17fedc: 0xc060058  jal         func_180160
    ctx->pc = 0x17FEDCu;
    SET_GPR_U32(ctx, 31, 0x17FEE4u);
    ctx->pc = 0x180160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180160u, 0x17FEDCu, 0x17FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEE4u;
label_17fee4:
    // 0x17fee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17fee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fee8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17feec: 0xc0561c8  jal         func_158720
    ctx->pc = 0x17FEECu;
    SET_GPR_U32(ctx, 31, 0x17FEF4u);
    ctx->pc = 0x158720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158720u, 0x17FEECu, 0x17FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEF4u;
label_17fef4:
    // 0x17fef4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fef8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x17fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x17fefc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17ff04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff10: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17ff14: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17FF14u;
    {
        const bool branch_taken_0x17ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff14) {
            ctx->pc = 0x17FFF4u;
            goto label_17fff4;
        }
    }
    ctx->pc = 0x17FF1Cu;
label_17ff1c:
    // 0x17ff1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff20: 0xc05611c  jal         func_158470
    ctx->pc = 0x17FF20u;
    SET_GPR_U32(ctx, 31, 0x17FF28u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x17FF20u, 0x17FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF28u;
label_17ff28:
    // 0x17ff28: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x17ff28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17ff2c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17FF2Cu;
    {
        const bool branch_taken_0x17ff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ff2c) {
            ctx->pc = 0x17FF7Cu;
            goto label_17ff7c;
        }
    }
    ctx->pc = 0x17FF34u;
    // 0x17ff34: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff3c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff40: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x17ff40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ff44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ff48: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x17ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17ff4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff50: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17ff54: 0xc060048  jal         func_180120
    ctx->pc = 0x17FF54u;
    SET_GPR_U32(ctx, 31, 0x17FF5Cu);
    ctx->pc = 0x180120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180120u, 0x17FF54u, 0x17FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF5Cu;
label_17ff5c:
    // 0x17ff5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17ff5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17ff6c: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x17FF6Cu;
    SET_GPR_U32(ctx, 31, 0x17FF74u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x17FF6Cu, 0x17FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17FF74u;
    {
        const bool branch_taken_0x17ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff74) {
            ctx->pc = 0x17FFF4u;
            goto label_17fff4;
        }
    }
    ctx->pc = 0x17FF7Cu;
label_17ff7c:
    // 0x17ff7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff80: 0xc05611c  jal         func_158470
    ctx->pc = 0x17FF80u;
    SET_GPR_U32(ctx, 31, 0x17FF88u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x17FF80u, 0x17FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF88u;
label_17ff88:
    // 0x17ff88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ff8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ffa0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x17ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ffa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ffa8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ffac: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17ffb0: 0xc060048  jal         func_180120
    ctx->pc = 0x17FFB0u;
    SET_GPR_U32(ctx, 31, 0x17FFB8u);
    ctx->pc = 0x180120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180120u, 0x17FFB0u, 0x17FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFB8u;
label_17ffb8:
    // 0x17ffb8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ffbc: 0xc05611c  jal         func_158470
    ctx->pc = 0x17FFBCu;
    SET_GPR_U32(ctx, 31, 0x17FFC4u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x17FFBCu, 0x17FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFC4u;
label_17ffc4:
    // 0x17ffc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ffc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ffcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ffd0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ffd4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ffd8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ffdc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x17ffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ffe0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17ffe4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17ffe8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x17ffe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x17ffec: 0xc06000c  jal         func_180030
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x180030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180030u, 0x17FFECu, 0x17FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF4u;
label_17fff4:
    // 0x17fff4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fff8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180000: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x180000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180004: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180008: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x180008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_18000c:
    // 0x18000c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x180010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18001c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18001cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180020: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x180024: 0x3e00008  jr          $ra
    ctx->pc = 0x180024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18002Cu;
    // 0x18002c: 0x0  nop
    ctx->pc = 0x18002cu;
    // NOP
    ctx->pc = 0x180030u;
}
