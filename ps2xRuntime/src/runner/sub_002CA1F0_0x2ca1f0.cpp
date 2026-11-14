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

// Function: sub_002CA1F0
// Address: 0x2ca1f0 - 0x2ca400
void sub_002CA1F0_0x2ca1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA1F0_0x2ca1f0");
#endif

    switch (ctx->pc) {
        case 0x2ca244u: goto label_2ca244;
        case 0x2ca260u: goto label_2ca260;
        case 0x2ca278u: goto label_2ca278;
        case 0x2ca28cu: goto label_2ca28c;
        case 0x2ca29cu: goto label_2ca29c;
        case 0x2ca2b4u: goto label_2ca2b4;
        case 0x2ca2c4u: goto label_2ca2c4;
        case 0x2ca2d4u: goto label_2ca2d4;
        case 0x2ca314u: goto label_2ca314;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca378u: goto label_2ca378;
        case 0x2ca390u: goto label_2ca390;
        case 0x2ca3b0u: goto label_2ca3b0;
        case 0x2ca3c4u: goto label_2ca3c4;
        default: break;
    }

    ctx->pc = 0x2ca1f0u;

    // 0x2ca1f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ca1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ca1f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ca1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ca1f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ca1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ca1fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ca1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ca200: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ca200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ca204: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ca204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ca208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ca208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ca20c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca218: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2ca218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2ca21c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2ca21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2ca220: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2ca220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2ca224: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2ca224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca228: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ca228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca22c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca234: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2ca234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ca238: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ca238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca23c: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2CA23Cu;
    SET_GPR_U32(ctx, 31, 0x2CA244u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2CA23Cu, 0x2CA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA244u;
label_2ca244:
    // 0x2ca244: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2CA244u;
    {
        const bool branch_taken_0x2ca244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca244) {
            ctx->pc = 0x2CA3CCu;
            goto label_2ca3cc;
        }
    }
    ctx->pc = 0x2CA24Cu;
    // 0x2ca24c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ca24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca254: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ca258: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2CA258u;
    {
        const bool branch_taken_0x2ca258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca258) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2CA260u;
label_2ca260:
    // 0x2ca260: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca268: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2ca268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ca26c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca270: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2CA270u;
    SET_GPR_U32(ctx, 31, 0x2CA278u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2CA270u, 0x2CA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA278u;
label_2ca278:
    // 0x2ca278: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2CA278u;
    {
        const bool branch_taken_0x2ca278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca278) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2CA280u;
    // 0x2ca280: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2ca280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ca284: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CA284u;
    SET_GPR_U32(ctx, 31, 0x2CA28Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CA284u, 0x2CA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA28Cu;
label_2ca28c:
    // 0x2ca28c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ca28cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca290: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ca294: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x2CA294u;
    SET_GPR_U32(ctx, 31, 0x2CA29Cu);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2CA294u, 0x2CA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA29Cu;
label_2ca29c:
    // 0x2ca29c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ca29cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca2a4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca2a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ca2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ca2ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA2ACu;
    SET_GPR_U32(ctx, 31, 0x2CA2B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA2ACu, 0x2CA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2B4u;
label_2ca2b4:
    // 0x2ca2b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2bc: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CA2BCu;
    SET_GPR_U32(ctx, 31, 0x2CA2C4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CA2BCu, 0x2CA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2C4u;
label_2ca2c4:
    // 0x2ca2c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ca2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2cc: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x2CA2CCu;
    SET_GPR_U32(ctx, 31, 0x2CA2D4u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2CA2CCu, 0x2CA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2D4u;
label_2ca2d4:
    // 0x2ca2d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ca2d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ca2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2e0: 0x16c00016  bnez        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA2E0u;
    {
        const bool branch_taken_0x2ca2e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2e0) {
            ctx->pc = 0x2CA33Cu;
            goto label_2ca33c;
        }
    }
    ctx->pc = 0x2CA2E8u;
    // 0x2ca2e8: 0x12f60014  beq         $s7, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CA2E8u;
    {
        const bool branch_taken_0x2ca2e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ca2e8) {
            ctx->pc = 0x2CA33Cu;
            goto label_2ca33c;
        }
    }
    ctx->pc = 0x2CA2F0u;
    // 0x2ca2f0: 0x16a00012  bnez        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA2F0u;
    {
        const bool branch_taken_0x2ca2f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2f0) {
            ctx->pc = 0x2CA33Cu;
            goto label_2ca33c;
        }
    }
    ctx->pc = 0x2CA2F8u;
    // 0x2ca2f8: 0x16b40010  bne         $s5, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA2F8u;
    {
        const bool branch_taken_0x2ca2f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ca2f8) {
            ctx->pc = 0x2CA33Cu;
            goto label_2ca33c;
        }
    }
    ctx->pc = 0x2CA300u;
    // 0x2ca300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca304: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca308: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ca308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ca30c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA30Cu;
    SET_GPR_U32(ctx, 31, 0x2CA314u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA30Cu, 0x2CA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA314u;
label_2ca314:
    // 0x2ca314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca318: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca31c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca320: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca324: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca328: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ca328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ca32c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA32Cu;
    SET_GPR_U32(ctx, 31, 0x2CA334u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA32Cu, 0x2CA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA334u;
label_2ca334:
    // 0x2ca334: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca338: 0x8fb200b0  lw          $s2, 0xB0($sp)
    ctx->pc = 0x2ca338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ca33c:
    // 0x2ca33c: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA33Cu;
    {
        const bool branch_taken_0x2ca33c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca33c) {
            ctx->pc = 0x2CA394u;
            goto label_2ca394;
        }
    }
    ctx->pc = 0x2CA344u;
    // 0x2ca344: 0x12b40013  beq         $s5, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CA344u;
    {
        const bool branch_taken_0x2ca344 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ca344) {
            ctx->pc = 0x2CA394u;
            goto label_2ca394;
        }
    }
    ctx->pc = 0x2CA34Cu;
    // 0x2ca34c: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA34Cu;
    {
        const bool branch_taken_0x2ca34c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca34c) {
            ctx->pc = 0x2CA394u;
            goto label_2ca394;
        }
    }
    ctx->pc = 0x2CA354u;
    // 0x2ca354: 0x16f6000f  bne         $s7, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA354u;
    {
        const bool branch_taken_0x2ca354 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 22));
        if (branch_taken_0x2ca354) {
            ctx->pc = 0x2CA394u;
            goto label_2ca394;
        }
    }
    ctx->pc = 0x2CA35Cu;
    // 0x2ca35c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ca35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca368: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca36c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ca36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ca370: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA370u;
    SET_GPR_U32(ctx, 31, 0x2CA378u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA370u, 0x2CA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA378u;
label_2ca378:
    // 0x2ca378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca37c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca380: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca384: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ca384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ca388: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA388u;
    SET_GPR_U32(ctx, 31, 0x2CA390u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA388u, 0x2CA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA390u;
label_2ca390:
    // 0x2ca390: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca394:
    // 0x2ca394: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA394u;
    {
        const bool branch_taken_0x2ca394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca394) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2CA39Cu;
    // 0x2ca39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ca3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ca3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a8: 0xc0b5ff8  jal         func_2D7FE0
    ctx->pc = 0x2CA3A8u;
    SET_GPR_U32(ctx, 31, 0x2CA3B0u);
    ctx->pc = 0x2D7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7FE0u, 0x2CA3A8u, 0x2CA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3B0u;
label_2ca3b0:
    // 0x2ca3b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ca3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ca3b4:
    // 0x2ca3b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ca3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca3b8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2ca3bc: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2CA3BCu;
    SET_GPR_U32(ctx, 31, 0x2CA3C4u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2CA3BCu, 0x2CA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3C4u;
label_2ca3c4:
    // 0x2ca3c4: 0x1602ffa6  bne         $s0, $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2CA3C4u;
    {
        const bool branch_taken_0x2ca3c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca3c4) {
            ctx->pc = 0x2CA260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca260;
        }
    }
    ctx->pc = 0x2CA3CCu;
label_2ca3cc:
    // 0x2ca3cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ca3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca3d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ca3d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca3d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ca3d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca3d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ca3d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca3dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca3e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca3f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2ca3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ca3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA3FCu;
    // 0x2ca3fc: 0x0  nop
    ctx->pc = 0x2ca3fcu;
    // NOP
    ctx->pc = 0x2ca400u;
}
