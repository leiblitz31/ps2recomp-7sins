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

// Function: sub_002CAB90
// Address: 0x2cab90 - 0x2cad70
void sub_002CAB90_0x2cab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAB90_0x2cab90");
#endif

    switch (ctx->pc) {
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabd8u: goto label_2cabd8;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac50u: goto label_2cac50;
        case 0x2cac84u: goto label_2cac84;
        case 0x2cac9cu: goto label_2cac9c;
        case 0x2cacb0u: goto label_2cacb0;
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cad2cu: goto label_2cad2c;
        default: break;
    }

    ctx->pc = 0x2cab90u;

    // 0x2cab90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cab94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cab98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cab9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2caba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2caba4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2caba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2caba8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2cabac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cabacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cabb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cabb4: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2CABB4u;
    {
        const bool branch_taken_0x2cabb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cabb4) {
            ctx->pc = 0x2CAD4Cu;
            goto label_2cad4c;
        }
    }
    ctx->pc = 0x2CABBCu;
    // 0x2cabbc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2cabbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cabc0: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2CABC0u;
    SET_GPR_U32(ctx, 31, 0x2CABC8u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2CABC0u, 0x2CABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABC8u;
label_2cabc8:
    // 0x2cabc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cabc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabcc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cabccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cabd0: 0xc0b2bcc  jal         func_2CAF30
    ctx->pc = 0x2CABD0u;
    SET_GPR_U32(ctx, 31, 0x2CABD8u);
    ctx->pc = 0x2CAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF30u, 0x2CABD0u, 0x2CABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABD8u;
label_2cabd8:
    // 0x2cabd8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2cabd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cabdc: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CABDCu;
    {
        const bool branch_taken_0x2cabdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cabdc) {
            ctx->pc = 0x2CAC44u;
            goto label_2cac44;
        }
    }
    ctx->pc = 0x2CABE4u;
    // 0x2cabe4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cabe8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2cabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cabec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cabecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cabf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cabf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabf4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cabf8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2cabf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cabfc: 0xc0b2bb0  jal         func_2CAEC0
    ctx->pc = 0x2CABFCu;
    SET_GPR_U32(ctx, 31, 0x2CAC04u);
    ctx->pc = 0x2CAEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAEC0u, 0x2CABFCu, 0x2CAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC04u;
label_2cac04:
    // 0x2cac04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cac04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac0c: 0xc09afb4  jal         func_26BED0
    ctx->pc = 0x2CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC14u);
    ctx->pc = 0x26BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BED0u, 0x2CAC0Cu, 0x2CAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC14u;
label_2cac14:
    // 0x2cac14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac18: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2cac18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2cac1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac20: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2cac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cac24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cac28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cac2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cac30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cac34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac38: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cac38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cac3c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CAC3Cu;
    {
        const bool branch_taken_0x2cac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cac3c) {
            ctx->pc = 0x2CAD2Cu;
            goto label_2cad2c;
        }
    }
    ctx->pc = 0x2CAC44u;
label_2cac44:
    // 0x2cac44: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac48: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2CAC48u;
    SET_GPR_U32(ctx, 31, 0x2CAC50u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2CAC48u, 0x2CAC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC50u;
label_2cac50:
    // 0x2cac50: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2cac50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cac54: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CAC54u;
    {
        const bool branch_taken_0x2cac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cac54) {
            ctx->pc = 0x2CACA4u;
            goto label_2caca4;
        }
    }
    ctx->pc = 0x2CAC5Cu;
    // 0x2cac5c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2cac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cac60: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cac64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac68: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2cac68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cac6c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cac70: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cac74: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2cac74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cac78: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2cac78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cac7c: 0xc0b2b7c  jal         func_2CADF0
    ctx->pc = 0x2CAC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC84u);
    ctx->pc = 0x2CADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADF0u, 0x2CAC7Cu, 0x2CAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC84u;
label_2cac84:
    // 0x2cac84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cac84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cac94: 0xc096278  jal         func_2589E0
    ctx->pc = 0x2CAC94u;
    SET_GPR_U32(ctx, 31, 0x2CAC9Cu);
    ctx->pc = 0x2589E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589E0u, 0x2CAC94u, 0x2CAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC9Cu;
label_2cac9c:
    // 0x2cac9c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CAC9Cu;
    {
        const bool branch_taken_0x2cac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cac9c) {
            ctx->pc = 0x2CAD2Cu;
            goto label_2cad2c;
        }
    }
    ctx->pc = 0x2CACA4u;
label_2caca4:
    // 0x2caca4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2caca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2caca8: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2CACA8u;
    SET_GPR_U32(ctx, 31, 0x2CACB0u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2CACA8u, 0x2CACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACB0u;
label_2cacb0:
    // 0x2cacb0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2cacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cacb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cacb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cacbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2cacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cacc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cacc4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2cacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cacc8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2caccc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cacd0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2cacd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cacd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cacd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cacd8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2cacd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cacdc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2cacdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2cace0: 0xc0b2b7c  jal         func_2CADF0
    ctx->pc = 0x2CACE0u;
    SET_GPR_U32(ctx, 31, 0x2CACE8u);
    ctx->pc = 0x2CADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADF0u, 0x2CACE0u, 0x2CACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACE8u;
label_2cace8:
    // 0x2cace8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cacec: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2CACECu;
    SET_GPR_U32(ctx, 31, 0x2CACF4u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2CACECu, 0x2CACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF4u;
label_2cacf4:
    // 0x2cacf4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2cacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cacf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cacfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cad00: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2cad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cad04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cad08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad0c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cad10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cad14: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2cad14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cad18: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2cad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cad1c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2cad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cad20: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2cad24: 0xc0b2b5c  jal         func_2CAD70
    ctx->pc = 0x2CAD24u;
    SET_GPR_U32(ctx, 31, 0x2CAD2Cu);
    ctx->pc = 0x2CAD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD70u, 0x2CAD24u, 0x2CAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD2Cu;
label_2cad2c:
    // 0x2cad2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cad30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cad34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cad38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cad3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cad40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cad48: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cad48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2cad4c:
    // 0x2cad4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cad50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cad50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cad54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cad54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cad58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cad58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cad5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cad5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad60: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cad64: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD6Cu;
    // 0x2cad6c: 0x0  nop
    ctx->pc = 0x2cad6cu;
    // NOP
    ctx->pc = 0x2cad70u;
}
