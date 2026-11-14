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

// Function: sub_0048CD30
// Address: 0x48cd30 - 0x48ceb0
void sub_0048CD30_0x48cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CD30_0x48cd30");
#endif

    switch (ctx->pc) {
        case 0x48cd30u: goto label_48cd30;
        case 0x48cd34u: goto label_48cd34;
        case 0x48cd38u: goto label_48cd38;
        case 0x48cd3cu: goto label_48cd3c;
        case 0x48cd40u: goto label_48cd40;
        case 0x48cd44u: goto label_48cd44;
        case 0x48cd48u: goto label_48cd48;
        case 0x48cd4cu: goto label_48cd4c;
        case 0x48cd50u: goto label_48cd50;
        case 0x48cd54u: goto label_48cd54;
        case 0x48cd58u: goto label_48cd58;
        case 0x48cd5cu: goto label_48cd5c;
        case 0x48cd60u: goto label_48cd60;
        case 0x48cd64u: goto label_48cd64;
        case 0x48cd68u: goto label_48cd68;
        case 0x48cd6cu: goto label_48cd6c;
        case 0x48cd70u: goto label_48cd70;
        case 0x48cd74u: goto label_48cd74;
        case 0x48cd78u: goto label_48cd78;
        case 0x48cd7cu: goto label_48cd7c;
        case 0x48cd80u: goto label_48cd80;
        case 0x48cd84u: goto label_48cd84;
        case 0x48cd88u: goto label_48cd88;
        case 0x48cd8cu: goto label_48cd8c;
        case 0x48cd90u: goto label_48cd90;
        case 0x48cd94u: goto label_48cd94;
        case 0x48cd98u: goto label_48cd98;
        case 0x48cd9cu: goto label_48cd9c;
        case 0x48cda0u: goto label_48cda0;
        case 0x48cda4u: goto label_48cda4;
        case 0x48cda8u: goto label_48cda8;
        case 0x48cdacu: goto label_48cdac;
        case 0x48cdb0u: goto label_48cdb0;
        case 0x48cdb4u: goto label_48cdb4;
        case 0x48cdb8u: goto label_48cdb8;
        case 0x48cdbcu: goto label_48cdbc;
        case 0x48cdc0u: goto label_48cdc0;
        case 0x48cdc4u: goto label_48cdc4;
        case 0x48cdc8u: goto label_48cdc8;
        case 0x48cdccu: goto label_48cdcc;
        case 0x48cdd0u: goto label_48cdd0;
        case 0x48cdd4u: goto label_48cdd4;
        case 0x48cdd8u: goto label_48cdd8;
        case 0x48cddcu: goto label_48cddc;
        case 0x48cde0u: goto label_48cde0;
        case 0x48cde4u: goto label_48cde4;
        case 0x48cde8u: goto label_48cde8;
        case 0x48cdecu: goto label_48cdec;
        case 0x48cdf0u: goto label_48cdf0;
        case 0x48cdf4u: goto label_48cdf4;
        case 0x48cdf8u: goto label_48cdf8;
        case 0x48cdfcu: goto label_48cdfc;
        case 0x48ce00u: goto label_48ce00;
        case 0x48ce04u: goto label_48ce04;
        case 0x48ce08u: goto label_48ce08;
        case 0x48ce0cu: goto label_48ce0c;
        case 0x48ce10u: goto label_48ce10;
        case 0x48ce14u: goto label_48ce14;
        case 0x48ce18u: goto label_48ce18;
        case 0x48ce1cu: goto label_48ce1c;
        case 0x48ce20u: goto label_48ce20;
        case 0x48ce24u: goto label_48ce24;
        case 0x48ce28u: goto label_48ce28;
        case 0x48ce2cu: goto label_48ce2c;
        case 0x48ce30u: goto label_48ce30;
        case 0x48ce34u: goto label_48ce34;
        case 0x48ce38u: goto label_48ce38;
        case 0x48ce3cu: goto label_48ce3c;
        case 0x48ce40u: goto label_48ce40;
        case 0x48ce44u: goto label_48ce44;
        case 0x48ce48u: goto label_48ce48;
        case 0x48ce4cu: goto label_48ce4c;
        case 0x48ce50u: goto label_48ce50;
        case 0x48ce54u: goto label_48ce54;
        case 0x48ce58u: goto label_48ce58;
        case 0x48ce5cu: goto label_48ce5c;
        case 0x48ce60u: goto label_48ce60;
        case 0x48ce64u: goto label_48ce64;
        case 0x48ce68u: goto label_48ce68;
        case 0x48ce6cu: goto label_48ce6c;
        case 0x48ce70u: goto label_48ce70;
        case 0x48ce74u: goto label_48ce74;
        case 0x48ce78u: goto label_48ce78;
        case 0x48ce7cu: goto label_48ce7c;
        case 0x48ce80u: goto label_48ce80;
        case 0x48ce84u: goto label_48ce84;
        case 0x48ce88u: goto label_48ce88;
        case 0x48ce8cu: goto label_48ce8c;
        case 0x48ce90u: goto label_48ce90;
        case 0x48ce94u: goto label_48ce94;
        case 0x48ce98u: goto label_48ce98;
        case 0x48ce9cu: goto label_48ce9c;
        case 0x48cea0u: goto label_48cea0;
        case 0x48cea4u: goto label_48cea4;
        case 0x48cea8u: goto label_48cea8;
        case 0x48ceacu: goto label_48ceac;
        default: break;
    }

    ctx->pc = 0x48cd30u;

label_48cd30:
    // 0x48cd30: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x48cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_48cd34:
    // 0x48cd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48cd38:
    // 0x48cd38: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48cd3c:
    // 0x48cd3c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48cd40:
    // 0x48cd40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cd44:
    // 0x48cd44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48cd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48cd48:
    // 0x48cd48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48cd4c:
    // 0x48cd4c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48cd50:
    if (ctx->pc == 0x48CD50u) {
        ctx->pc = 0x48CD54u;
        goto label_48cd54;
    }
    ctx->pc = 0x48CD4Cu;
    {
        const bool branch_taken_0x48cd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cd4c) {
            ctx->pc = 0x48CDFCu;
            goto label_48cdfc;
        }
    }
    ctx->pc = 0x48CD54u;
label_48cd54:
    // 0x48cd54: 0x8f82b65c  lw          $v0, -0x49A4($gp)
    ctx->pc = 0x48cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948444)));
label_48cd58:
    // 0x48cd58: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48cd5c:
    if (ctx->pc == 0x48CD5Cu) {
        ctx->pc = 0x48CD60u;
        goto label_48cd60;
    }
    ctx->pc = 0x48CD58u;
    {
        const bool branch_taken_0x48cd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cd58) {
            ctx->pc = 0x48CDFCu;
            goto label_48cdfc;
        }
    }
    ctx->pc = 0x48CD60u;
label_48cd60:
    // 0x48cd60: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48cd64:
    // 0x48cd64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48cd68:
    // 0x48cd68: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48cd6c:
    // 0x48cd6c: 0xc115ee8  jal         func_457BA0
label_48cd70:
    if (ctx->pc == 0x48CD70u) {
        ctx->pc = 0x48CD74u;
        goto label_48cd74;
    }
    ctx->pc = 0x48CD6Cu;
    SET_GPR_U32(ctx, 31, 0x48CD74u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48CD6Cu, 0x48CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CD74u;
label_48cd74:
    // 0x48cd74: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48cd78:
    if (ctx->pc == 0x48CD78u) {
        ctx->pc = 0x48CD7Cu;
        goto label_48cd7c;
    }
    ctx->pc = 0x48CD74u;
    {
        const bool branch_taken_0x48cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cd74) {
            ctx->pc = 0x48CDFCu;
            goto label_48cdfc;
        }
    }
    ctx->pc = 0x48CD7Cu;
label_48cd7c:
    // 0x48cd7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48cd80:
    // 0x48cd80: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48cd84:
    if (ctx->pc == 0x48CD84u) {
        ctx->pc = 0x48CD88u;
        goto label_48cd88;
    }
    ctx->pc = 0x48CD80u;
    {
        const bool branch_taken_0x48cd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cd80) {
            ctx->pc = 0x48CDFCu;
            goto label_48cdfc;
        }
    }
    ctx->pc = 0x48CD88u;
label_48cd88:
    // 0x48cd88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48cd8c:
    // 0x48cd8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48cd90:
    // 0x48cd90: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48cd94:
    // 0x48cd94: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48cd94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48cd98:
    // 0x48cd98: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48cd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48cd9c:
    // 0x48cd9c: 0x24080134  addiu       $t0, $zero, 0x134
    ctx->pc = 0x48cd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_48cda0:
    // 0x48cda0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48cda0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48cda4:
    // 0x48cda4: 0x25294990  addiu       $t1, $t1, 0x4990
    ctx->pc = 0x48cda4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18832));
label_48cda8:
    // 0x48cda8: 0xc113940  jal         func_44E500
label_48cdac:
    if (ctx->pc == 0x48CDACu) {
        ctx->pc = 0x48CDB0u;
        goto label_48cdb0;
    }
    ctx->pc = 0x48CDA8u;
    SET_GPR_U32(ctx, 31, 0x48CDB0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48CDA8u, 0x48CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CDB0u;
label_48cdb0:
    // 0x48cdb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48cdb4:
    // 0x48cdb4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48cdb8:
    // 0x48cdb8: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x48cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
label_48cdbc:
    // 0x48cdbc: 0xc115c24  jal         func_457090
label_48cdc0:
    if (ctx->pc == 0x48CDC0u) {
        ctx->pc = 0x48CDC4u;
        goto label_48cdc4;
    }
    ctx->pc = 0x48CDBCu;
    SET_GPR_U32(ctx, 31, 0x48CDC4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48CDBCu, 0x48CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CDC4u;
label_48cdc4:
    // 0x48cdc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48cdc8:
    // 0x48cdc8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48cdcc:
    // 0x48cdcc: 0x40f809  jalr        $v0
label_48cdd0:
    if (ctx->pc == 0x48CDD0u) {
        ctx->pc = 0x48CDD4u;
        goto label_48cdd4;
    }
    ctx->pc = 0x48CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48CDD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CDCCu, 0x48CDD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48CDD4u;
label_48cdd4:
    // 0x48cdd4: 0xaf82b65c  sw          $v0, -0x49A4($gp)
    ctx->pc = 0x48cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948444), GPR_U32(ctx, 2));
label_48cdd8:
    // 0x48cdd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48cddc:
    // 0x48cddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48cde0:
    if (ctx->pc == 0x48CDE0u) {
        ctx->pc = 0x48CDE4u;
        goto label_48cde4;
    }
    ctx->pc = 0x48CDDCu;
    {
        const bool branch_taken_0x48cddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cddc) {
            ctx->pc = 0x48CDECu;
            goto label_48cdec;
        }
    }
    ctx->pc = 0x48CDE4u;
label_48cde4:
    // 0x48cde4: 0xd  break       0
    ctx->pc = 0x48cde4u;
    runtime->handleBreak(rdram, ctx);
label_48cde8:
    // 0x48cde8: 0x0  nop
    ctx->pc = 0x48cde8u;
    // NOP
label_48cdec:
    // 0x48cdec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48cdf0:
    // 0x48cdf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48cdf4:
    // 0x48cdf4: 0xc11392c  jal         func_44E4B0
label_48cdf8:
    if (ctx->pc == 0x48CDF8u) {
        ctx->pc = 0x48CDFCu;
        goto label_48cdfc;
    }
    ctx->pc = 0x48CDF4u;
    SET_GPR_U32(ctx, 31, 0x48CDFCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48CDF4u, 0x48CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CDFCu;
label_48cdfc:
    // 0x48cdfc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48ce00:
    // 0x48ce00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ce04:
    // 0x48ce04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_48ce08:
    if (ctx->pc == 0x48CE08u) {
        ctx->pc = 0x48CE0Cu;
        goto label_48ce0c;
    }
    ctx->pc = 0x48CE04u;
    {
        const bool branch_taken_0x48ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ce04) {
            ctx->pc = 0x48CE18u;
            goto label_48ce18;
        }
    }
    ctx->pc = 0x48CE0Cu;
label_48ce0c:
    // 0x48ce0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48ce0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ce10:
    // 0x48ce10: 0x10000020  b           . + 4 + (0x20 << 2)
label_48ce14:
    if (ctx->pc == 0x48CE14u) {
        ctx->pc = 0x48CE18u;
        goto label_48ce18;
    }
    ctx->pc = 0x48CE10u;
    {
        const bool branch_taken_0x48ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ce10) {
            ctx->pc = 0x48CE94u;
            goto label_48ce94;
        }
    }
    ctx->pc = 0x48CE18u;
label_48ce18:
    // 0x48ce18: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48ce1c:
    // 0x48ce1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48ce20:
    // 0x48ce20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_48ce24:
    if (ctx->pc == 0x48CE24u) {
        ctx->pc = 0x48CE28u;
        goto label_48ce28;
    }
    ctx->pc = 0x48CE20u;
    {
        const bool branch_taken_0x48ce20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ce20) {
            ctx->pc = 0x48CE34u;
            goto label_48ce34;
        }
    }
    ctx->pc = 0x48CE28u;
label_48ce28:
    // 0x48ce28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ce2c:
    // 0x48ce2c: 0x10000019  b           . + 4 + (0x19 << 2)
label_48ce30:
    if (ctx->pc == 0x48CE30u) {
        ctx->pc = 0x48CE34u;
        goto label_48ce34;
    }
    ctx->pc = 0x48CE2Cu;
    {
        const bool branch_taken_0x48ce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ce2c) {
            ctx->pc = 0x48CE94u;
            goto label_48ce94;
        }
    }
    ctx->pc = 0x48CE34u;
label_48ce34:
    // 0x48ce34: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x48ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_48ce38:
    // 0x48ce38: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48ce3c:
    // 0x48ce3c: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x48ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_48ce40:
    // 0x48ce40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x48ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_48ce44:
    // 0x48ce44: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x48ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_48ce48:
    // 0x48ce48: 0x40f809  jalr        $v0
label_48ce4c:
    if (ctx->pc == 0x48CE4Cu) {
        ctx->pc = 0x48CE50u;
        goto label_48ce50;
    }
    ctx->pc = 0x48CE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48CE50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CE48u, 0x48CE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48CE50u;
label_48ce50:
    // 0x48ce50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48ce54:
    // 0x48ce54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ce54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ce58:
    // 0x48ce58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x48ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_48ce5c:
    // 0x48ce5c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x48ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_48ce60:
    // 0x48ce60: 0x40f809  jalr        $v0
label_48ce64:
    if (ctx->pc == 0x48CE64u) {
        ctx->pc = 0x48CE68u;
        goto label_48ce68;
    }
    ctx->pc = 0x48CE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48CE68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CE60u, 0x48CE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48CE68u;
label_48ce68:
    // 0x48ce68: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48ce6c:
    // 0x48ce6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ce70:
    // 0x48ce70: 0xc0e26d4  jal         func_389B50
label_48ce74:
    if (ctx->pc == 0x48CE74u) {
        ctx->pc = 0x48CE78u;
        goto label_48ce78;
    }
    ctx->pc = 0x48CE70u;
    SET_GPR_U32(ctx, 31, 0x48CE78u);
    ctx->pc = 0x389B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B50u, 0x48CE70u, 0x48CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CE78u;
label_48ce78:
    // 0x48ce78: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48ce7c:
    // 0x48ce7c: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x48ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_48ce80:
    // 0x48ce80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x48ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_48ce84:
    // 0x48ce84: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x48ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_48ce88:
    // 0x48ce88: 0x40f809  jalr        $v0
label_48ce8c:
    if (ctx->pc == 0x48CE8Cu) {
        ctx->pc = 0x48CE90u;
        goto label_48ce90;
    }
    ctx->pc = 0x48CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48CE90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CE88u, 0x48CE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48CE90u;
label_48ce90:
    // 0x48ce90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ce94:
    // 0x48ce94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48ce98:
    // 0x48ce98: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x48ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48ce9c:
    // 0x48ce9c: 0x3e00008  jr          $ra
label_48cea0:
    if (ctx->pc == 0x48CEA0u) {
        ctx->pc = 0x48CEA4u;
        goto label_48cea4;
    }
    ctx->pc = 0x48CE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CEA4u;
label_48cea4:
    // 0x48cea4: 0x0  nop
    ctx->pc = 0x48cea4u;
    // NOP
label_48cea8:
    // 0x48cea8: 0x0  nop
    ctx->pc = 0x48cea8u;
    // NOP
label_48ceac:
    // 0x48ceac: 0x0  nop
    ctx->pc = 0x48ceacu;
    // NOP
    ctx->pc = 0x48ceb0u;
}
