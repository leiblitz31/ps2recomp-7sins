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

// Function: sub_0045EBD0
// Address: 0x45ebd0 - 0x45ef30
void sub_0045EBD0_0x45ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EBD0_0x45ebd0");
#endif

    switch (ctx->pc) {
        case 0x45ec24u: goto label_45ec24;
        case 0x45ec34u: goto label_45ec34;
        case 0x45ec40u: goto label_45ec40;
        case 0x45ec7cu: goto label_45ec7c;
        case 0x45eca4u: goto label_45eca4;
        case 0x45ecb4u: goto label_45ecb4;
        case 0x45ecc4u: goto label_45ecc4;
        case 0x45ecf4u: goto label_45ecf4;
        case 0x45ed20u: goto label_45ed20;
        case 0x45ed30u: goto label_45ed30;
        case 0x45ed3cu: goto label_45ed3c;
        case 0x45ed78u: goto label_45ed78;
        case 0x45eda8u: goto label_45eda8;
        case 0x45edc8u: goto label_45edc8;
        case 0x45ee04u: goto label_45ee04;
        case 0x45ee10u: goto label_45ee10;
        case 0x45ee8cu: goto label_45ee8c;
        case 0x45eec4u: goto label_45eec4;
        case 0x45eedcu: goto label_45eedc;
        case 0x45eef0u: goto label_45eef0;
        default: break;
    }

    ctx->pc = 0x45ebd0u;

    // 0x45ebd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45ebd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x45ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x45ebd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45ebdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45ebe0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45ebe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45ebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45ebe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45ebec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45ebf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ebf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ebf8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x45ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x45ebfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x45ebfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ec00: 0xaf80bf90  sw          $zero, -0x4070($gp)
    ctx->pc = 0x45ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950800), GPR_U32(ctx, 0));
    // 0x45ec04: 0x8f83bf8c  lw          $v1, -0x4074($gp)
    ctx->pc = 0x45ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950796)));
    // 0x45ec08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45ec0c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x45EC0Cu;
    {
        const bool branch_taken_0x45ec0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ec0c) {
            ctx->pc = 0x45EC88u;
            goto label_45ec88;
        }
    }
    ctx->pc = 0x45EC14u;
    // 0x45ec14: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x45ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ec18: 0x2785b170  addiu       $a1, $gp, -0x4E90
    ctx->pc = 0x45ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947184));
    // 0x45ec1c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45EC1Cu;
    SET_GPR_U32(ctx, 31, 0x45EC24u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45EC1Cu, 0x45EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EC24u;
label_45ec24:
    // 0x45ec24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45ec28: 0x2785b178  addiu       $a1, $gp, -0x4E88
    ctx->pc = 0x45ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947192));
    // 0x45ec2c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45EC2Cu;
    SET_GPR_U32(ctx, 31, 0x45EC34u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45EC2Cu, 0x45EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EC34u;
label_45ec34:
    // 0x45ec34: 0x24043040  addiu       $a0, $zero, 0x3040
    ctx->pc = 0x45ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12352));
    // 0x45ec38: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x45EC38u;
    SET_GPR_U32(ctx, 31, 0x45EC40u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45EC38u, 0x45EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EC40u;
label_45ec40:
    // 0x45ec40: 0xaf82bf80  sw          $v0, -0x4080($gp)
    ctx->pc = 0x45ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950784), GPR_U32(ctx, 2));
    // 0x45ec44: 0x8f94bf80  lw          $s4, -0x4080($gp)
    ctx->pc = 0x45ec44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950784)));
    // 0x45ec48: 0x2683003f  addiu       $v1, $s4, 0x3F
    ctx->pc = 0x45ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 63));
    // 0x45ec4c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x45ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x45ec50: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x45ec50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ec54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x45ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x45ec58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x45ec5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x45ec5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ec60: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x45ec60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x45ec64: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x45ec64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ec68: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x45ec68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45ec6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x45ec6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ec70: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x45ec70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45ec74: 0xc0f126c  jal         func_3C49B0
    ctx->pc = 0x45EC74u;
    SET_GPR_U32(ctx, 31, 0x45EC7Cu);
    ctx->pc = 0x3C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C49B0u, 0x45EC74u, 0x45EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EC7Cu;
label_45ec7c:
    // 0x45ec7c: 0xaf82bf90  sw          $v0, -0x4070($gp)
    ctx->pc = 0x45ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950800), GPR_U32(ctx, 2));
    // 0x45ec80: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x45EC80u;
    {
        const bool branch_taken_0x45ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ec80) {
            ctx->pc = 0x45ED90u;
            goto label_45ed90;
        }
    }
    ctx->pc = 0x45EC88u;
label_45ec88:
    // 0x45ec88: 0x8f82bf8c  lw          $v0, -0x4074($gp)
    ctx->pc = 0x45ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950796)));
    // 0x45ec8c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x45EC8Cu;
    {
        const bool branch_taken_0x45ec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ec8c) {
            ctx->pc = 0x45ED00u;
            goto label_45ed00;
        }
    }
    ctx->pc = 0x45EC94u;
    // 0x45ec94: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x45ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ec98: 0x2785b180  addiu       $a1, $gp, -0x4E80
    ctx->pc = 0x45ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947200));
    // 0x45ec9c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45EC9Cu;
    SET_GPR_U32(ctx, 31, 0x45ECA4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45EC9Cu, 0x45ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ECA4u;
label_45eca4:
    // 0x45eca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45eca8: 0x2785b188  addiu       $a1, $gp, -0x4E78
    ctx->pc = 0x45eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947208));
    // 0x45ecac: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45ECACu;
    SET_GPR_U32(ctx, 31, 0x45ECB4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45ECACu, 0x45ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ECB4u;
label_45ecb4:
    // 0x45ecb4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x45ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x45ecb8: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x45ecb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x45ecbc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x45ECBCu;
    SET_GPR_U32(ctx, 31, 0x45ECC4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45ECBCu, 0x45ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ECC4u;
label_45ecc4:
    // 0x45ecc4: 0xaf82bf7c  sw          $v0, -0x4084($gp)
    ctx->pc = 0x45ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950780), GPR_U32(ctx, 2));
    // 0x45ecc8: 0x8f93bf7c  lw          $s3, -0x4084($gp)
    ctx->pc = 0x45ecc8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950780)));
    // 0x45eccc: 0x2663003f  addiu       $v1, $s3, 0x3F
    ctx->pc = 0x45ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x45ecd0: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x45ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x45ecd4: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x45ecd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ecd8: 0x8f84bf94  lw          $a0, -0x406C($gp)
    ctx->pc = 0x45ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950804)));
    // 0x45ecdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45ecdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ece0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x45ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x45ece4: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x45ece4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ece8: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x45ece8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45ecec: 0xc0f0e3c  jal         func_3C38F0
    ctx->pc = 0x45ECECu;
    SET_GPR_U32(ctx, 31, 0x45ECF4u);
    ctx->pc = 0x3C38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C38F0u, 0x45ECECu, 0x45ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ECF4u;
label_45ecf4:
    // 0x45ecf4: 0xaf82bf90  sw          $v0, -0x4070($gp)
    ctx->pc = 0x45ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950800), GPR_U32(ctx, 2));
    // 0x45ecf8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x45ECF8u;
    {
        const bool branch_taken_0x45ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ecf8) {
            ctx->pc = 0x45ED90u;
            goto label_45ed90;
        }
    }
    ctx->pc = 0x45ED00u;
label_45ed00:
    // 0x45ed00: 0x8f83bf8c  lw          $v1, -0x4074($gp)
    ctx->pc = 0x45ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950796)));
    // 0x45ed04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ed08: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x45ED08u;
    {
        const bool branch_taken_0x45ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ed08) {
            ctx->pc = 0x45ED84u;
            goto label_45ed84;
        }
    }
    ctx->pc = 0x45ED10u;
    // 0x45ed10: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x45ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ed14: 0x2785b180  addiu       $a1, $gp, -0x4E80
    ctx->pc = 0x45ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947200));
    // 0x45ed18: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45ED18u;
    SET_GPR_U32(ctx, 31, 0x45ED20u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45ED18u, 0x45ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ED20u;
label_45ed20:
    // 0x45ed20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45ed24: 0x2785b188  addiu       $a1, $gp, -0x4E78
    ctx->pc = 0x45ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947208));
    // 0x45ed28: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45ED28u;
    SET_GPR_U32(ctx, 31, 0x45ED30u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45ED28u, 0x45ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ED30u;
label_45ed30:
    // 0x45ed30: 0x24043040  addiu       $a0, $zero, 0x3040
    ctx->pc = 0x45ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12352));
    // 0x45ed34: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x45ED34u;
    SET_GPR_U32(ctx, 31, 0x45ED3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45ED34u, 0x45ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ED3Cu;
label_45ed3c:
    // 0x45ed3c: 0xaf82bf84  sw          $v0, -0x407C($gp)
    ctx->pc = 0x45ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950788), GPR_U32(ctx, 2));
    // 0x45ed40: 0x8f92bf84  lw          $s2, -0x407C($gp)
    ctx->pc = 0x45ed40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950788)));
    // 0x45ed44: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x45ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x45ed48: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x45ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x45ed4c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x45ed4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ed50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x45ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x45ed54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x45ed58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45ed58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ed5c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x45ed5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x45ed60: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x45ed60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x45ed64: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x45ed64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x45ed68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x45ed68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ed6c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x45ed6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ed70: 0xc0f126c  jal         func_3C49B0
    ctx->pc = 0x45ED70u;
    SET_GPR_U32(ctx, 31, 0x45ED78u);
    ctx->pc = 0x3C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C49B0u, 0x45ED70u, 0x45ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ED78u;
label_45ed78:
    // 0x45ed78: 0xaf82bf90  sw          $v0, -0x4070($gp)
    ctx->pc = 0x45ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950800), GPR_U32(ctx, 2));
    // 0x45ed7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45ED7Cu;
    {
        const bool branch_taken_0x45ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ed7c) {
            ctx->pc = 0x45ED90u;
            goto label_45ed90;
        }
    }
    ctx->pc = 0x45ED84u;
label_45ed84:
    // 0x45ed84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ed88: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x45ED88u;
    {
        const bool branch_taken_0x45ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ed88) {
            ctx->pc = 0x45EEF4u;
            goto label_45eef4;
        }
    }
    ctx->pc = 0x45ED90u;
label_45ed90:
    // 0x45ed90: 0x8f82bf90  lw          $v0, -0x4070($gp)
    ctx->pc = 0x45ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950800)));
    // 0x45ed94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x45ED94u;
    {
        const bool branch_taken_0x45ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ed94) {
            ctx->pc = 0x45EDD0u;
            goto label_45edd0;
        }
    }
    ctx->pc = 0x45ED9Cu;
    // 0x45ed9c: 0x8f84bf90  lw          $a0, -0x4070($gp)
    ctx->pc = 0x45ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950800)));
    // 0x45eda0: 0xc0f0c02  jal         func_3C3008
    ctx->pc = 0x45EDA0u;
    SET_GPR_U32(ctx, 31, 0x45EDA8u);
    ctx->pc = 0x3C3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3008u, 0x45EDA0u, 0x45EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EDA8u;
label_45eda8:
    // 0x45eda8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EDA8u;
    {
        const bool branch_taken_0x45eda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45eda8) {
            ctx->pc = 0x45EDBCu;
            goto label_45edbc;
        }
    }
    ctx->pc = 0x45EDB0u;
    // 0x45edb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45edb4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x45EDB4u;
    {
        const bool branch_taken_0x45edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45edb4) {
            ctx->pc = 0x45EEF4u;
            goto label_45eef4;
        }
    }
    ctx->pc = 0x45EDBCu;
label_45edbc:
    // 0x45edbc: 0x8f84bf90  lw          $a0, -0x4070($gp)
    ctx->pc = 0x45edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950800)));
    // 0x45edc0: 0xc0f0c56  jal         func_3C3158
    ctx->pc = 0x45EDC0u;
    SET_GPR_U32(ctx, 31, 0x45EDC8u);
    ctx->pc = 0x3C3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3158u, 0x45EDC0u, 0x45EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EDC8u;
label_45edc8:
    // 0x45edc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45EDC8u;
    {
        const bool branch_taken_0x45edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45edc8) {
            ctx->pc = 0x45EDDCu;
            goto label_45eddc;
        }
    }
    ctx->pc = 0x45EDD0u;
label_45edd0:
    // 0x45edd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45edd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x45EDD4u;
    {
        const bool branch_taken_0x45edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45edd4) {
            ctx->pc = 0x45EEF4u;
            goto label_45eef4;
        }
    }
    ctx->pc = 0x45EDDCu;
label_45eddc:
    // 0x45eddc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x45eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45ede0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x45EDE0u;
    {
        const bool branch_taken_0x45ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ede0) {
            ctx->pc = 0x45EEF0u;
            goto label_45eef0;
        }
    }
    ctx->pc = 0x45EDE8u;
    // 0x45ede8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45edec: 0xaf82bf78  sw          $v0, -0x4088($gp)
    ctx->pc = 0x45edecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950776), GPR_U32(ctx, 2));
    // 0x45edf0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x45edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x45edf4: 0xaf82b15c  sw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947164), GPR_U32(ctx, 2));
    // 0x45edf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45edf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edfc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x45EDFCu;
    {
        const bool branch_taken_0x45edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45edfc) {
            ctx->pc = 0x45EEE0u;
            goto label_45eee0;
        }
    }
    ctx->pc = 0x45EE04u;
label_45ee04:
    // 0x45ee04: 0x24043040  addiu       $a0, $zero, 0x3040
    ctx->pc = 0x45ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12352));
    // 0x45ee08: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x45EE08u;
    SET_GPR_U32(ctx, 31, 0x45EE10u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45EE08u, 0x45EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE10u;
label_45ee10:
    // 0x45ee10: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x45ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45ee14: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45ee18: 0x24634d08  addiu       $v1, $v1, 0x4D08
    ctx->pc = 0x45ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19720));
    // 0x45ee1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45ee20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x45ee24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45ee28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45ee2c: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x45ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x45ee30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ee34: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45ee34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ee38: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x45ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x45ee3c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x45ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x45ee40: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x45ee40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ee44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45ee48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45ee4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x45ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x45ee50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x45ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x45ee54: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x45ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x45ee58: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x45ee58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ee5c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45ee60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45ee64: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x45ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x45ee68: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x45ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x45ee6c: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x45ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x45ee70: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x45ee70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ee74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x45ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45ee78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45ee78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ee7c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x45ee7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x45ee80: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x45ee80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ee84: 0xc11784c  jal         func_45E130
    ctx->pc = 0x45EE84u;
    SET_GPR_U32(ctx, 31, 0x45EE8Cu);
    ctx->pc = 0x45E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E130u, 0x45EE84u, 0x45EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE8Cu;
label_45ee8c:
    // 0x45ee8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45ee8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ee90: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45ee94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x45ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x45ee98: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x45ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x45ee9c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45eea0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45eea4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45eea8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x45eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x45eeac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x45eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x45eeb0: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x45eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x45eeb4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45eeb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45eeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eebc: 0xc1175ac  jal         func_45D6B0
    ctx->pc = 0x45EEBCu;
    SET_GPR_U32(ctx, 31, 0x45EEC4u);
    ctx->pc = 0x45D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45D6B0u, 0x45EEBCu, 0x45EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EEC4u;
label_45eec4:
    // 0x45eec4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45eec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eec8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EEC8u;
    {
        const bool branch_taken_0x45eec8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eec8) {
            ctx->pc = 0x45EEDCu;
            goto label_45eedc;
        }
    }
    ctx->pc = 0x45EED0u;
    // 0x45eed0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x45eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eed4: 0xc0f0c02  jal         func_3C3008
    ctx->pc = 0x45EED4u;
    SET_GPR_U32(ctx, 31, 0x45EEDCu);
    ctx->pc = 0x3C3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3008u, 0x45EED4u, 0x45EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EEDCu;
label_45eedc:
    // 0x45eedc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45eedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45eee0:
    // 0x45eee0: 0x1a00ffc8  blez        $s0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x45EEE0u;
    {
        const bool branch_taken_0x45eee0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x45eee0) {
            ctx->pc = 0x45EE04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ee04;
        }
    }
    ctx->pc = 0x45EEE8u;
    // 0x45eee8: 0xc0f0c7e  jal         func_3C31F8
    ctx->pc = 0x45EEE8u;
    SET_GPR_U32(ctx, 31, 0x45EEF0u);
    ctx->pc = 0x3C31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C31F8u, 0x45EEE8u, 0x45EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EEF0u;
label_45eef0:
    // 0x45eef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45eef4:
    // 0x45eef4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x45eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45eef8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45eef8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45eefc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45eefcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ef00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45ef00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ef04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45ef04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ef08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45ef08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ef0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ef0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ef10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ef10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ef14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ef14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ef18: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x45ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x45ef1c: 0x3e00008  jr          $ra
    ctx->pc = 0x45EF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EF24u;
    // 0x45ef24: 0x0  nop
    ctx->pc = 0x45ef24u;
    // NOP
    // 0x45ef28: 0x0  nop
    ctx->pc = 0x45ef28u;
    // NOP
    // 0x45ef2c: 0x0  nop
    ctx->pc = 0x45ef2cu;
    // NOP
    ctx->pc = 0x45ef30u;
}
