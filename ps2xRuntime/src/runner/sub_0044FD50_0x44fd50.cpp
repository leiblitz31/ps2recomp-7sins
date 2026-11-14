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

// Function: sub_0044FD50
// Address: 0x44fd50 - 0x44fe70
void sub_0044FD50_0x44fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FD50_0x44fd50");
#endif

    switch (ctx->pc) {
        case 0x44fd50u: goto label_44fd50;
        case 0x44fd54u: goto label_44fd54;
        case 0x44fd58u: goto label_44fd58;
        case 0x44fd5cu: goto label_44fd5c;
        case 0x44fd60u: goto label_44fd60;
        case 0x44fd64u: goto label_44fd64;
        case 0x44fd68u: goto label_44fd68;
        case 0x44fd6cu: goto label_44fd6c;
        case 0x44fd70u: goto label_44fd70;
        case 0x44fd74u: goto label_44fd74;
        case 0x44fd78u: goto label_44fd78;
        case 0x44fd7cu: goto label_44fd7c;
        case 0x44fd80u: goto label_44fd80;
        case 0x44fd84u: goto label_44fd84;
        case 0x44fd88u: goto label_44fd88;
        case 0x44fd8cu: goto label_44fd8c;
        case 0x44fd90u: goto label_44fd90;
        case 0x44fd94u: goto label_44fd94;
        case 0x44fd98u: goto label_44fd98;
        case 0x44fd9cu: goto label_44fd9c;
        case 0x44fda0u: goto label_44fda0;
        case 0x44fda4u: goto label_44fda4;
        case 0x44fda8u: goto label_44fda8;
        case 0x44fdacu: goto label_44fdac;
        case 0x44fdb0u: goto label_44fdb0;
        case 0x44fdb4u: goto label_44fdb4;
        case 0x44fdb8u: goto label_44fdb8;
        case 0x44fdbcu: goto label_44fdbc;
        case 0x44fdc0u: goto label_44fdc0;
        case 0x44fdc4u: goto label_44fdc4;
        case 0x44fdc8u: goto label_44fdc8;
        case 0x44fdccu: goto label_44fdcc;
        case 0x44fdd0u: goto label_44fdd0;
        case 0x44fdd4u: goto label_44fdd4;
        case 0x44fdd8u: goto label_44fdd8;
        case 0x44fddcu: goto label_44fddc;
        case 0x44fde0u: goto label_44fde0;
        case 0x44fde4u: goto label_44fde4;
        case 0x44fde8u: goto label_44fde8;
        case 0x44fdecu: goto label_44fdec;
        case 0x44fdf0u: goto label_44fdf0;
        case 0x44fdf4u: goto label_44fdf4;
        case 0x44fdf8u: goto label_44fdf8;
        case 0x44fdfcu: goto label_44fdfc;
        case 0x44fe00u: goto label_44fe00;
        case 0x44fe04u: goto label_44fe04;
        case 0x44fe08u: goto label_44fe08;
        case 0x44fe0cu: goto label_44fe0c;
        case 0x44fe10u: goto label_44fe10;
        case 0x44fe14u: goto label_44fe14;
        case 0x44fe18u: goto label_44fe18;
        case 0x44fe1cu: goto label_44fe1c;
        case 0x44fe20u: goto label_44fe20;
        case 0x44fe24u: goto label_44fe24;
        case 0x44fe28u: goto label_44fe28;
        case 0x44fe2cu: goto label_44fe2c;
        case 0x44fe30u: goto label_44fe30;
        case 0x44fe34u: goto label_44fe34;
        case 0x44fe38u: goto label_44fe38;
        case 0x44fe3cu: goto label_44fe3c;
        case 0x44fe40u: goto label_44fe40;
        case 0x44fe44u: goto label_44fe44;
        case 0x44fe48u: goto label_44fe48;
        case 0x44fe4cu: goto label_44fe4c;
        case 0x44fe50u: goto label_44fe50;
        case 0x44fe54u: goto label_44fe54;
        case 0x44fe58u: goto label_44fe58;
        case 0x44fe5cu: goto label_44fe5c;
        case 0x44fe60u: goto label_44fe60;
        case 0x44fe64u: goto label_44fe64;
        case 0x44fe68u: goto label_44fe68;
        case 0x44fe6cu: goto label_44fe6c;
        default: break;
    }

    ctx->pc = 0x44fd50u;

label_44fd50:
    // 0x44fd50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x44fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_44fd54:
    // 0x44fd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44fd58:
    // 0x44fd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44fd5c:
    // 0x44fd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44fd60:
    // 0x44fd60: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x44fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_44fd64:
    // 0x44fd64: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x44fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_44fd68:
    // 0x44fd68: 0x8fb10170  lw          $s1, 0x170($sp)
    ctx->pc = 0x44fd68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_44fd6c:
    // 0x44fd6c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x44fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_44fd70:
    // 0x44fd70: 0xc113f40  jal         func_44FD00
label_44fd74:
    if (ctx->pc == 0x44FD74u) {
        ctx->pc = 0x44FD78u;
        goto label_44fd78;
    }
    ctx->pc = 0x44FD70u;
    SET_GPR_U32(ctx, 31, 0x44FD78u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x44FD70u, 0x44FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FD78u;
label_44fd78:
    // 0x44fd78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x44fd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44fd7c:
    // 0x44fd7c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_44fd80:
    if (ctx->pc == 0x44FD80u) {
        ctx->pc = 0x44FD84u;
        goto label_44fd84;
    }
    ctx->pc = 0x44FD7Cu;
    {
        const bool branch_taken_0x44fd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44fd7c) {
            ctx->pc = 0x44FE40u;
            goto label_44fe40;
        }
    }
    ctx->pc = 0x44FD84u;
label_44fd84:
    // 0x44fd84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x44fd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fd88:
    // 0x44fd88: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_44fd8c:
    if (ctx->pc == 0x44FD8Cu) {
        ctx->pc = 0x44FD90u;
        goto label_44fd90;
    }
    ctx->pc = 0x44FD88u;
    {
        const bool branch_taken_0x44fd88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x44fd88) {
            ctx->pc = 0x44FE34u;
            goto label_44fe34;
        }
    }
    ctx->pc = 0x44FD90u;
label_44fd90:
    // 0x44fd90: 0x8f82afb0  lw          $v0, -0x5050($gp)
    ctx->pc = 0x44fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946736)));
label_44fd94:
    // 0x44fd94: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_44fd98:
    if (ctx->pc == 0x44FD98u) {
        ctx->pc = 0x44FD9Cu;
        goto label_44fd9c;
    }
    ctx->pc = 0x44FD94u;
    {
        const bool branch_taken_0x44fd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fd94) {
            ctx->pc = 0x44FE34u;
            goto label_44fe34;
        }
    }
    ctx->pc = 0x44FD9Cu;
label_44fd9c:
    // 0x44fd9c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x44fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_44fda0:
    // 0x44fda0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44fda4:
    // 0x44fda4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x44fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_44fda8:
    // 0x44fda8: 0xc115ee8  jal         func_457BA0
label_44fdac:
    if (ctx->pc == 0x44FDACu) {
        ctx->pc = 0x44FDB0u;
        goto label_44fdb0;
    }
    ctx->pc = 0x44FDA8u;
    SET_GPR_U32(ctx, 31, 0x44FDB0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x44FDA8u, 0x44FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDB0u;
label_44fdb0:
    // 0x44fdb0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_44fdb4:
    if (ctx->pc == 0x44FDB4u) {
        ctx->pc = 0x44FDB8u;
        goto label_44fdb8;
    }
    ctx->pc = 0x44FDB0u;
    {
        const bool branch_taken_0x44fdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fdb0) {
            ctx->pc = 0x44FE34u;
            goto label_44fe34;
        }
    }
    ctx->pc = 0x44FDB8u;
label_44fdb8:
    // 0x44fdb8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x44fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_44fdbc:
    // 0x44fdbc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_44fdc0:
    if (ctx->pc == 0x44FDC0u) {
        ctx->pc = 0x44FDC4u;
        goto label_44fdc4;
    }
    ctx->pc = 0x44FDBCu;
    {
        const bool branch_taken_0x44fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fdbc) {
            ctx->pc = 0x44FE34u;
            goto label_44fe34;
        }
    }
    ctx->pc = 0x44FDC4u;
label_44fdc4:
    // 0x44fdc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44fdc8:
    // 0x44fdc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44fdcc:
    // 0x44fdcc: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x44fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_44fdd0:
    // 0x44fdd0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x44fdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_44fdd4:
    // 0x44fdd4: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x44fdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_44fdd8:
    // 0x44fdd8: 0x2408006f  addiu       $t0, $zero, 0x6F
    ctx->pc = 0x44fdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_44fddc:
    // 0x44fddc: 0x2789afb8  addiu       $t1, $gp, -0x5048
    ctx->pc = 0x44fddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946744));
label_44fde0:
    // 0x44fde0: 0xc113940  jal         func_44E500
label_44fde4:
    if (ctx->pc == 0x44FDE4u) {
        ctx->pc = 0x44FDE8u;
        goto label_44fde8;
    }
    ctx->pc = 0x44FDE0u;
    SET_GPR_U32(ctx, 31, 0x44FDE8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x44FDE0u, 0x44FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDE8u;
label_44fde8:
    // 0x44fde8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44fdec:
    // 0x44fdec: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x44fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_44fdf0:
    // 0x44fdf0: 0x24a5d9b0  addiu       $a1, $a1, -0x2650
    ctx->pc = 0x44fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957488));
label_44fdf4:
    // 0x44fdf4: 0xc115c24  jal         func_457090
label_44fdf8:
    if (ctx->pc == 0x44FDF8u) {
        ctx->pc = 0x44FDFCu;
        goto label_44fdfc;
    }
    ctx->pc = 0x44FDF4u;
    SET_GPR_U32(ctx, 31, 0x44FDFCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x44FDF4u, 0x44FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDFCu;
label_44fdfc:
    // 0x44fdfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44fe00:
    // 0x44fe00: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x44fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_44fe04:
    // 0x44fe04: 0x40f809  jalr        $v0
label_44fe08:
    if (ctx->pc == 0x44FE08u) {
        ctx->pc = 0x44FE0Cu;
        goto label_44fe0c;
    }
    ctx->pc = 0x44FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44FE0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FE04u, 0x44FE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44FE0Cu;
label_44fe0c:
    // 0x44fe0c: 0xaf82afb0  sw          $v0, -0x5050($gp)
    ctx->pc = 0x44fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946736), GPR_U32(ctx, 2));
label_44fe10:
    // 0x44fe10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_44fe14:
    // 0x44fe14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fe18:
    if (ctx->pc == 0x44FE18u) {
        ctx->pc = 0x44FE1Cu;
        goto label_44fe1c;
    }
    ctx->pc = 0x44FE14u;
    {
        const bool branch_taken_0x44fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fe14) {
            ctx->pc = 0x44FE24u;
            goto label_44fe24;
        }
    }
    ctx->pc = 0x44FE1Cu;
label_44fe1c:
    // 0x44fe1c: 0xd  break       0
    ctx->pc = 0x44fe1cu;
    runtime->handleBreak(rdram, ctx);
label_44fe20:
    // 0x44fe20: 0x0  nop
    ctx->pc = 0x44fe20u;
    // NOP
label_44fe24:
    // 0x44fe24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44fe28:
    // 0x44fe28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44fe2c:
    // 0x44fe2c: 0xc11392c  jal         func_44E4B0
label_44fe30:
    if (ctx->pc == 0x44FE30u) {
        ctx->pc = 0x44FE34u;
        goto label_44fe34;
    }
    ctx->pc = 0x44FE2Cu;
    SET_GPR_U32(ctx, 31, 0x44FE34u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x44FE2Cu, 0x44FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE34u;
label_44fe34:
    // 0x44fe34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44fe34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fe38:
    // 0x44fe38: 0x10000007  b           . + 4 + (0x7 << 2)
label_44fe3c:
    if (ctx->pc == 0x44FE3Cu) {
        ctx->pc = 0x44FE40u;
        goto label_44fe40;
    }
    ctx->pc = 0x44FE38u;
    {
        const bool branch_taken_0x44fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fe38) {
            ctx->pc = 0x44FE58u;
            goto label_44fe58;
        }
    }
    ctx->pc = 0x44FE40u;
label_44fe40:
    // 0x44fe40: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x44fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_44fe44:
    // 0x44fe44: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_44fe48:
    // 0x44fe48: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x44fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_44fe4c:
    // 0x44fe4c: 0xc113f10  jal         func_44FC40
label_44fe50:
    if (ctx->pc == 0x44FE50u) {
        ctx->pc = 0x44FE54u;
        goto label_44fe54;
    }
    ctx->pc = 0x44FE4Cu;
    SET_GPR_U32(ctx, 31, 0x44FE54u);
    ctx->pc = 0x44FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC40u, 0x44FE4Cu, 0x44FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE54u;
label_44fe54:
    // 0x44fe54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44fe58:
    // 0x44fe58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44fe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44fe5c:
    // 0x44fe5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44fe5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44fe60:
    // 0x44fe60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fe60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fe64:
    // 0x44fe64: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x44fe64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_44fe68:
    // 0x44fe68: 0x3e00008  jr          $ra
label_44fe6c:
    if (ctx->pc == 0x44FE6Cu) {
        ctx->pc = 0x44FE70u;
        goto label_fallthrough_0x44fe68;
    }
    ctx->pc = 0x44FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44fe68:
    ctx->pc = 0x44FE70u;
}
