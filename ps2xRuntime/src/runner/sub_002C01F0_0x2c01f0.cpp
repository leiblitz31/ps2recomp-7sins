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

// Function: sub_002C01F0
// Address: 0x2c01f0 - 0x2c0360
void sub_002C01F0_0x2c01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C01F0_0x2c01f0");
#endif

    switch (ctx->pc) {
        case 0x2c0230u: goto label_2c0230;
        case 0x2c0240u: goto label_2c0240;
        case 0x2c024cu: goto label_2c024c;
        case 0x2c028cu: goto label_2c028c;
        case 0x2c0298u: goto label_2c0298;
        case 0x2c02a4u: goto label_2c02a4;
        case 0x2c02b4u: goto label_2c02b4;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02d4u: goto label_2c02d4;
        case 0x2c02e8u: goto label_2c02e8;
        case 0x2c02f8u: goto label_2c02f8;
        case 0x2c031cu: goto label_2c031c;
        default: break;
    }

    ctx->pc = 0x2c01f0u;

    // 0x2c01f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c01f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c01f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c01fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c0200: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c0200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c0204: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c0208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c020c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c0210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c0214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0218: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2c0218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2c021c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2c021cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2c0220: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0224: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c0224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2c0228: 0xc090018  jal         func_240060
    ctx->pc = 0x2C0228u;
    SET_GPR_U32(ctx, 31, 0x2C0230u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2C0228u, 0x2C0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0230u;
label_2c0230:
    // 0x2c0230: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c0230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0238: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x2C0238u;
    SET_GPR_U32(ctx, 31, 0x2C0240u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2C0238u, 0x2C0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0240u;
label_2c0240:
    // 0x2c0240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0244: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C0244u;
    {
        const bool branch_taken_0x2c0244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0244) {
            ctx->pc = 0x2C0310u;
            goto label_2c0310;
        }
    }
    ctx->pc = 0x2C024Cu;
label_2c024c:
    // 0x2c024c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c024cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0250: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0254: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c0258: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C0258u;
    {
        const bool branch_taken_0x2c0258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0258) {
            ctx->pc = 0x2C030Cu;
            goto label_2c030c;
        }
    }
    ctx->pc = 0x2C0260u;
    // 0x2c0260: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x2c0260u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c0264: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2c0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2c0268: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c026c: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C026Cu;
    {
        const bool branch_taken_0x2c026c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c026c) {
            ctx->pc = 0x2C030Cu;
            goto label_2c030c;
        }
    }
    ctx->pc = 0x2C0274u;
    // 0x2c0274: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c0278: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2c0278u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c027c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0280: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c0280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0284: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C0284u;
    SET_GPR_U32(ctx, 31, 0x2C028Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C0284u, 0x2C028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C028Cu;
label_2c028c:
    // 0x2c028c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c028cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0290: 0xc090864  jal         func_242190
    ctx->pc = 0x2C0290u;
    SET_GPR_U32(ctx, 31, 0x2C0298u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C0290u, 0x2C0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0298u;
label_2c0298:
    // 0x2c0298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c029c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2C029Cu;
    SET_GPR_U32(ctx, 31, 0x2C02A4u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C029Cu, 0x2C02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02A4u;
label_2c02a4:
    // 0x2c02a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c02a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02a8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2c02ac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C02ACu;
    SET_GPR_U32(ctx, 31, 0x2C02B4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C02ACu, 0x2C02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02B4u;
label_2c02b4:
    // 0x2c02b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c02b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c02b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02bc: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2C02BCu;
    SET_GPR_U32(ctx, 31, 0x2C02C4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2C02BCu, 0x2C02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02C4u;
label_2c02c4:
    // 0x2c02c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c02c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02cc: 0xc048094  jal         func_120250
    ctx->pc = 0x2C02CCu;
    SET_GPR_U32(ctx, 31, 0x2C02D4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C02CCu, 0x2C02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02D4u;
label_2c02d4:
    // 0x2c02d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c02d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02d8: 0x24050475  addiu       $a1, $zero, 0x475
    ctx->pc = 0x2c02d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x2c02dc: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c02dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c02e0: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C02E0u;
    SET_GPR_U32(ctx, 31, 0x2C02E8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C02E0u, 0x2C02E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02E8u;
label_2c02e8:
    // 0x2c02e8: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c02ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c02ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02f0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C02F0u;
    SET_GPR_U32(ctx, 31, 0x2C02F8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C02F0u, 0x2C02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02F8u;
label_2c02f8:
    // 0x2c02f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c02fc: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x2c02fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0304u;
    {
        const bool branch_taken_0x2c0304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0304) {
            ctx->pc = 0x2C0328u;
            goto label_2c0328;
        }
    }
    ctx->pc = 0x2C030Cu;
label_2c030c:
    // 0x2c030c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2c030cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c0310:
    // 0x2c0310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0314: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x2C0314u;
    SET_GPR_U32(ctx, 31, 0x2C031Cu);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2C0314u, 0x2C031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C031Cu;
label_2c031c:
    // 0x2c031c: 0x1602ffcb  bne         $s0, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2C031Cu;
    {
        const bool branch_taken_0x2c031c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c031c) {
            ctx->pc = 0x2C024Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c024c;
        }
    }
    ctx->pc = 0x2C0324u;
    // 0x2c0324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0328:
    // 0x2c0328: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c0328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c032c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c032cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0330: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c0330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c0334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c0338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c033c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c033cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c034c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2c034cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c0350: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0358u;
    // 0x2c0358: 0x0  nop
    ctx->pc = 0x2c0358u;
    // NOP
    // 0x2c035c: 0x0  nop
    ctx->pc = 0x2c035cu;
    // NOP
    ctx->pc = 0x2c0360u;
}
