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

// Function: sub_0011CCF0
// Address: 0x11ccf0 - 0x11ce30
void sub_0011CCF0_0x11ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CCF0_0x11ccf0");
#endif

    switch (ctx->pc) {
        case 0x11ccf0u: goto label_11ccf0;
        case 0x11ccf4u: goto label_11ccf4;
        case 0x11ccf8u: goto label_11ccf8;
        case 0x11ccfcu: goto label_11ccfc;
        case 0x11cd00u: goto label_11cd00;
        case 0x11cd04u: goto label_11cd04;
        case 0x11cd08u: goto label_11cd08;
        case 0x11cd0cu: goto label_11cd0c;
        case 0x11cd10u: goto label_11cd10;
        case 0x11cd14u: goto label_11cd14;
        case 0x11cd18u: goto label_11cd18;
        case 0x11cd1cu: goto label_11cd1c;
        case 0x11cd20u: goto label_11cd20;
        case 0x11cd24u: goto label_11cd24;
        case 0x11cd28u: goto label_11cd28;
        case 0x11cd2cu: goto label_11cd2c;
        case 0x11cd30u: goto label_11cd30;
        case 0x11cd34u: goto label_11cd34;
        case 0x11cd38u: goto label_11cd38;
        case 0x11cd3cu: goto label_11cd3c;
        case 0x11cd40u: goto label_11cd40;
        case 0x11cd44u: goto label_11cd44;
        case 0x11cd48u: goto label_11cd48;
        case 0x11cd4cu: goto label_11cd4c;
        case 0x11cd50u: goto label_11cd50;
        case 0x11cd54u: goto label_11cd54;
        case 0x11cd58u: goto label_11cd58;
        case 0x11cd5cu: goto label_11cd5c;
        case 0x11cd60u: goto label_11cd60;
        case 0x11cd64u: goto label_11cd64;
        case 0x11cd68u: goto label_11cd68;
        case 0x11cd6cu: goto label_11cd6c;
        case 0x11cd70u: goto label_11cd70;
        case 0x11cd74u: goto label_11cd74;
        case 0x11cd78u: goto label_11cd78;
        case 0x11cd7cu: goto label_11cd7c;
        case 0x11cd80u: goto label_11cd80;
        case 0x11cd84u: goto label_11cd84;
        case 0x11cd88u: goto label_11cd88;
        case 0x11cd8cu: goto label_11cd8c;
        case 0x11cd90u: goto label_11cd90;
        case 0x11cd94u: goto label_11cd94;
        case 0x11cd98u: goto label_11cd98;
        case 0x11cd9cu: goto label_11cd9c;
        case 0x11cda0u: goto label_11cda0;
        case 0x11cda4u: goto label_11cda4;
        case 0x11cda8u: goto label_11cda8;
        case 0x11cdacu: goto label_11cdac;
        case 0x11cdb0u: goto label_11cdb0;
        case 0x11cdb4u: goto label_11cdb4;
        case 0x11cdb8u: goto label_11cdb8;
        case 0x11cdbcu: goto label_11cdbc;
        case 0x11cdc0u: goto label_11cdc0;
        case 0x11cdc4u: goto label_11cdc4;
        case 0x11cdc8u: goto label_11cdc8;
        case 0x11cdccu: goto label_11cdcc;
        case 0x11cdd0u: goto label_11cdd0;
        case 0x11cdd4u: goto label_11cdd4;
        case 0x11cdd8u: goto label_11cdd8;
        case 0x11cddcu: goto label_11cddc;
        case 0x11cde0u: goto label_11cde0;
        case 0x11cde4u: goto label_11cde4;
        case 0x11cde8u: goto label_11cde8;
        case 0x11cdecu: goto label_11cdec;
        case 0x11cdf0u: goto label_11cdf0;
        case 0x11cdf4u: goto label_11cdf4;
        case 0x11cdf8u: goto label_11cdf8;
        case 0x11cdfcu: goto label_11cdfc;
        case 0x11ce00u: goto label_11ce00;
        case 0x11ce04u: goto label_11ce04;
        case 0x11ce08u: goto label_11ce08;
        case 0x11ce0cu: goto label_11ce0c;
        case 0x11ce10u: goto label_11ce10;
        case 0x11ce14u: goto label_11ce14;
        case 0x11ce18u: goto label_11ce18;
        case 0x11ce1cu: goto label_11ce1c;
        case 0x11ce20u: goto label_11ce20;
        case 0x11ce24u: goto label_11ce24;
        case 0x11ce28u: goto label_11ce28;
        case 0x11ce2cu: goto label_11ce2c;
        default: break;
    }

    ctx->pc = 0x11ccf0u;

label_11ccf0:
    // 0x11ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11ccf4:
    // 0x11ccf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11ccf8:
    // 0x11ccf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11ccfc:
    // 0x11ccfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11cd00:
    // 0x11cd00: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_11cd04:
    // 0x11cd04: 0xc047074  jal         func_11C1D0
label_11cd08:
    if (ctx->pc == 0x11CD08u) {
        ctx->pc = 0x11CD0Cu;
        goto label_11cd0c;
    }
    ctx->pc = 0x11CD04u;
    SET_GPR_U32(ctx, 31, 0x11CD0Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11CD04u, 0x11CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD0Cu;
label_11cd0c:
    // 0x11cd0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11cd10:
    // 0x11cd10: 0x24633410  addiu       $v1, $v1, 0x3410
    ctx->pc = 0x11cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13328));
label_11cd14:
    // 0x11cd14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11cd18:
    // 0x11cd18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11cd1c:
    // 0x11cd1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11cd20:
    // 0x11cd20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11cd24:
    // 0x11cd24: 0x24a51c90  addiu       $a1, $a1, 0x1C90
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7312));
label_11cd28:
    // 0x11cd28: 0xc04322c  jal         func_10C8B0
label_11cd2c:
    if (ctx->pc == 0x11CD2Cu) {
        ctx->pc = 0x11CD30u;
        goto label_11cd30;
    }
    ctx->pc = 0x11CD28u;
    SET_GPR_U32(ctx, 31, 0x11CD30u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11CD28u, 0x11CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD30u;
label_11cd30:
    // 0x11cd30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11cd34:
    // 0x11cd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cd38:
    // 0x11cd38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11cd3c:
    // 0x11cd3c: 0x3e00008  jr          $ra
label_11cd40:
    if (ctx->pc == 0x11CD40u) {
        ctx->pc = 0x11CD44u;
        goto label_11cd44;
    }
    ctx->pc = 0x11CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CD44u;
label_11cd44:
    // 0x11cd44: 0x0  nop
    ctx->pc = 0x11cd44u;
    // NOP
label_11cd48:
    // 0x11cd48: 0x0  nop
    ctx->pc = 0x11cd48u;
    // NOP
label_11cd4c:
    // 0x11cd4c: 0x0  nop
    ctx->pc = 0x11cd4cu;
    // NOP
label_11cd50:
    // 0x11cd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11cd54:
    // 0x11cd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11cd58:
    // 0x11cd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11cd5c:
    // 0x11cd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11cd60:
    // 0x11cd60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_11cd64:
    // 0x11cd64: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x11cd64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
label_11cd68:
    // 0x11cd68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11cd6c:
    // 0x11cd6c: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x11cd6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11cd70:
    // 0x11cd70: 0xc08edb0  jal         func_23B6C0
label_11cd74:
    if (ctx->pc == 0x11CD74u) {
        ctx->pc = 0x11CD78u;
        goto label_11cd78;
    }
    ctx->pc = 0x11CD70u;
    SET_GPR_U32(ctx, 31, 0x11CD78u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11CD70u, 0x11CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD78u;
label_11cd78:
    // 0x11cd78: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x11cd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11cd7c:
    // 0x11cd7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11cd80:
    // 0x11cd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cd84:
    // 0x11cd84: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_11cd88:
    if (ctx->pc == 0x11CD88u) {
        ctx->pc = 0x11CD8Cu;
        goto label_11cd8c;
    }
    ctx->pc = 0x11CD84u;
    {
        const bool branch_taken_0x11cd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cd84) {
            ctx->pc = 0x11CDB8u;
            goto label_11cdb8;
        }
    }
    ctx->pc = 0x11CD8Cu;
label_11cd8c:
    // 0x11cd8c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11cd90:
    // 0x11cd90: 0xc050c64  jal         func_143190
label_11cd94:
    if (ctx->pc == 0x11CD94u) {
        ctx->pc = 0x11CD98u;
        goto label_11cd98;
    }
    ctx->pc = 0x11CD90u;
    SET_GPR_U32(ctx, 31, 0x11CD98u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11CD90u, 0x11CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD98u;
label_11cd98:
    // 0x11cd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cd9c:
    // 0x11cd9c: 0xc04738c  jal         func_11CE30
label_11cda0:
    if (ctx->pc == 0x11CDA0u) {
        ctx->pc = 0x11CDA4u;
        goto label_11cda4;
    }
    ctx->pc = 0x11CD9Cu;
    SET_GPR_U32(ctx, 31, 0x11CDA4u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11CD9Cu, 0x11CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDA4u;
label_11cda4:
    // 0x11cda4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cda8:
    // 0x11cda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11cdac:
    // 0x11cdac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11cdb0:
    // 0x11cdb0: 0xc04c608  jal         func_131820
label_11cdb4:
    if (ctx->pc == 0x11CDB4u) {
        ctx->pc = 0x11CDB8u;
        goto label_11cdb8;
    }
    ctx->pc = 0x11CDB0u;
    SET_GPR_U32(ctx, 31, 0x11CDB8u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11CDB0u, 0x11CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDB8u;
label_11cdb8:
    // 0x11cdb8: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11cdbc:
    // 0x11cdbc: 0xc050c5c  jal         func_143170
label_11cdc0:
    if (ctx->pc == 0x11CDC0u) {
        ctx->pc = 0x11CDC4u;
        goto label_11cdc4;
    }
    ctx->pc = 0x11CDBCu;
    SET_GPR_U32(ctx, 31, 0x11CDC4u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11CDBCu, 0x11CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDC4u;
label_11cdc4:
    // 0x11cdc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cdc8:
    // 0x11cdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cdcc:
    // 0x11cdcc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11cdd0:
    // 0x11cdd0: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x11cdd0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11cdd4:
    // 0x11cdd4: 0xc04fbf8  jal         func_13EFE0
label_11cdd8:
    if (ctx->pc == 0x11CDD8u) {
        ctx->pc = 0x11CDDCu;
        goto label_11cddc;
    }
    ctx->pc = 0x11CDD4u;
    SET_GPR_U32(ctx, 31, 0x11CDDCu);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11CDD4u, 0x11CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDDCu;
label_11cddc:
    // 0x11cddc: 0xc05548c  jal         func_155230
label_11cde0:
    if (ctx->pc == 0x11CDE0u) {
        ctx->pc = 0x11CDE4u;
        goto label_11cde4;
    }
    ctx->pc = 0x11CDDCu;
    SET_GPR_U32(ctx, 31, 0x11CDE4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11CDDCu, 0x11CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDE4u;
label_11cde4:
    // 0x11cde4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cde8:
    // 0x11cde8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_11cdec:
    // 0x11cdec: 0xc0553d4  jal         func_154F50
label_11cdf0:
    if (ctx->pc == 0x11CDF0u) {
        ctx->pc = 0x11CDF4u;
        goto label_11cdf4;
    }
    ctx->pc = 0x11CDECu;
    SET_GPR_U32(ctx, 31, 0x11CDF4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11CDECu, 0x11CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDF4u;
label_11cdf4:
    // 0x11cdf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cdf8:
    // 0x11cdf8: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x11cdf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11cdfc:
    // 0x11cdfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11cdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11ce00:
    // 0x11ce00: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11ce00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11ce04:
    // 0x11ce04: 0x320f809  jalr        $t9
label_11ce08:
    if (ctx->pc == 0x11CE08u) {
        ctx->pc = 0x11CE0Cu;
        goto label_11ce0c;
    }
    ctx->pc = 0x11CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CE0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE04u, 0x11CE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CE0Cu;
label_11ce0c:
    // 0x11ce0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11ce10:
    // 0x11ce10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ce10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11ce14:
    // 0x11ce14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ce14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11ce18:
    // 0x11ce18: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11ce1c:
    // 0x11ce1c: 0x3e00008  jr          $ra
label_11ce20:
    if (ctx->pc == 0x11CE20u) {
        ctx->pc = 0x11CE24u;
        goto label_11ce24;
    }
    ctx->pc = 0x11CE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE24u;
label_11ce24:
    // 0x11ce24: 0x0  nop
    ctx->pc = 0x11ce24u;
    // NOP
label_11ce28:
    // 0x11ce28: 0x0  nop
    ctx->pc = 0x11ce28u;
    // NOP
label_11ce2c:
    // 0x11ce2c: 0x0  nop
    ctx->pc = 0x11ce2cu;
    // NOP
    ctx->pc = 0x11ce30u;
}
