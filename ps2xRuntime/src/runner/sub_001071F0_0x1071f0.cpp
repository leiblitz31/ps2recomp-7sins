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

// Function: sub_001071F0
// Address: 0x1071f0 - 0x107560
void sub_001071F0_0x1071f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001071F0_0x1071f0");
#endif

    switch (ctx->pc) {
        case 0x107234u: goto label_107234;
        case 0x107248u: goto label_107248;
        case 0x107254u: goto label_107254;
        case 0x10726cu: goto label_10726c;
        case 0x1072b4u: goto label_1072b4;
        case 0x1072c8u: goto label_1072c8;
        case 0x1072d0u: goto label_1072d0;
        case 0x1072e4u: goto label_1072e4;
        case 0x1072f0u: goto label_1072f0;
        case 0x107300u: goto label_107300;
        case 0x10730cu: goto label_10730c;
        case 0x107318u: goto label_107318;
        case 0x10732cu: goto label_10732c;
        case 0x107344u: goto label_107344;
        case 0x107354u: goto label_107354;
        case 0x107364u: goto label_107364;
        case 0x107384u: goto label_107384;
        case 0x107394u: goto label_107394;
        case 0x1073a4u: goto label_1073a4;
        case 0x1073b4u: goto label_1073b4;
        case 0x1073c4u: goto label_1073c4;
        case 0x1073d0u: goto label_1073d0;
        case 0x1073e0u: goto label_1073e0;
        case 0x1073f4u: goto label_1073f4;
        case 0x107404u: goto label_107404;
        case 0x107440u: goto label_107440;
        case 0x107450u: goto label_107450;
        case 0x10746cu: goto label_10746c;
        case 0x10747cu: goto label_10747c;
        case 0x107494u: goto label_107494;
        case 0x1074b0u: goto label_1074b0;
        case 0x1074c4u: goto label_1074c4;
        case 0x1074d8u: goto label_1074d8;
        case 0x1074e4u: goto label_1074e4;
        case 0x1074ecu: goto label_1074ec;
        case 0x107504u: goto label_107504;
        case 0x107510u: goto label_107510;
        case 0x107518u: goto label_107518;
        case 0x107528u: goto label_107528;
        default: break;
    }

    ctx->pc = 0x1071f0u;

    // 0x1071f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1071f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1071f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1071f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1071f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1071f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1071fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1071fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x107200: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x107200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x107204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x107208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x107208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10720c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x107210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x107214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10721c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x10721cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x107220: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x107220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x107224: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107228: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x107228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10722c: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x10722Cu;
    SET_GPR_U32(ctx, 31, 0x107234u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x10722Cu, 0x107234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107234u;
label_107234:
    // 0x107234: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x107234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x107238: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10723c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x107240: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x107240u;
    SET_GPR_U32(ctx, 31, 0x107248u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x107240u, 0x107248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107248u;
label_107248:
    // 0x107248: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x107248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x10724c: 0xc08ef64  jal         func_23BD90
    ctx->pc = 0x10724Cu;
    SET_GPR_U32(ctx, 31, 0x107254u);
    ctx->pc = 0x23BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD90u, 0x10724Cu, 0x107254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107254u;
label_107254:
    // 0x107254: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x107254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107258: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x107258u;
    {
        const bool branch_taken_0x107258 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x107258) {
            ctx->pc = 0x1072F0u;
            goto label_1072f0;
        }
    }
    ctx->pc = 0x107260u;
    // 0x107260: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x107260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107264: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x107264u;
    SET_GPR_U32(ctx, 31, 0x10726Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x107264u, 0x10726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10726Cu;
label_10726c:
    // 0x10726c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107270: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x107270u;
    {
        const bool branch_taken_0x107270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107270) {
            ctx->pc = 0x1072A0u;
            goto label_1072a0;
        }
    }
    ctx->pc = 0x107278u;
    // 0x107278: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x107278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10727c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10727Cu;
    {
        const bool branch_taken_0x10727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10727c) {
            ctx->pc = 0x1072A0u;
            goto label_1072a0;
        }
    }
    ctx->pc = 0x107284u;
    // 0x107284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107288: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x107288u;
    {
        const bool branch_taken_0x107288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107288) {
            ctx->pc = 0x1072A0u;
            goto label_1072a0;
        }
    }
    ctx->pc = 0x107290u;
    // 0x107290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107290u;
    {
        const bool branch_taken_0x107290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107290) {
            ctx->pc = 0x1072A0u;
            goto label_1072a0;
        }
    }
    ctx->pc = 0x107298u;
    // 0x107298: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x107298u;
    {
        const bool branch_taken_0x107298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107298) {
            ctx->pc = 0x1072F0u;
            goto label_1072f0;
        }
    }
    ctx->pc = 0x1072A0u;
label_1072a0:
    // 0x1072a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1072a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1072a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1072a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1072a8: 0x24a51650  addiu       $a1, $a1, 0x1650
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
    // 0x1072ac: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1072ACu;
    SET_GPR_U32(ctx, 31, 0x1072B4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1072ACu, 0x1072B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072B4u;
label_1072b4:
    // 0x1072b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1072b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1072b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1072b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1072bc: 0x24a51670  addiu       $a1, $a1, 0x1670
    ctx->pc = 0x1072bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5744));
    // 0x1072c0: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x1072C0u;
    SET_GPR_U32(ctx, 31, 0x1072C8u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x1072C0u, 0x1072C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072C8u;
label_1072c8:
    // 0x1072c8: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x1072C8u;
    SET_GPR_U32(ctx, 31, 0x1072D0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1072C8u, 0x1072D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072D0u;
label_1072d0:
    // 0x1072d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1072d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1072d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1072d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1072d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1072dc: 0xc08df08  jal         func_237C20
    ctx->pc = 0x1072DCu;
    SET_GPR_U32(ctx, 31, 0x1072E4u);
    ctx->pc = 0x237C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C20u, 0x1072DCu, 0x1072E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072E4u;
label_1072e4:
    // 0x1072e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1072e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1072e8: 0xc08e054  jal         func_238150
    ctx->pc = 0x1072E8u;
    SET_GPR_U32(ctx, 31, 0x1072F0u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x1072E8u, 0x1072F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072F0u;
label_1072f0:
    // 0x1072f0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1072f4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1072f8: 0xc041db8  jal         func_1076E0
    ctx->pc = 0x1072F8u;
    SET_GPR_U32(ctx, 31, 0x107300u);
    ctx->pc = 0x1076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076E0u, 0x1072F8u, 0x107300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107300u;
label_107300:
    // 0x107300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107304: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107304u;
    {
        const bool branch_taken_0x107304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107304) {
            ctx->pc = 0x10731Cu;
            goto label_10731c;
        }
    }
    ctx->pc = 0x10730Cu;
label_10730c:
    // 0x10730c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107310: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x107310u;
    SET_GPR_U32(ctx, 31, 0x107318u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x107310u, 0x107318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107318u;
label_107318:
    // 0x107318: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x107318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_10731c:
    // 0x10731c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x10731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107320: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x107320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x107324: 0xc041db0  jal         func_1076C0
    ctx->pc = 0x107324u;
    SET_GPR_U32(ctx, 31, 0x10732Cu);
    ctx->pc = 0x1076C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076C0u, 0x107324u, 0x10732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10732Cu;
label_10732c:
    // 0x10732c: 0x1622fff7  bne         $s1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10732Cu;
    {
        const bool branch_taken_0x10732c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x10732c) {
            ctx->pc = 0x10730Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10730c;
        }
    }
    ctx->pc = 0x107334u;
    // 0x107334: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107338: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x107338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x10733c: 0xc041d6c  jal         func_1075B0
    ctx->pc = 0x10733Cu;
    SET_GPR_U32(ctx, 31, 0x107344u);
    ctx->pc = 0x1075B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075B0u, 0x10733Cu, 0x107344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107344u;
label_107344:
    // 0x107344: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107348: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x107348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10734c: 0xc090590  jal         func_241640
    ctx->pc = 0x10734Cu;
    SET_GPR_U32(ctx, 31, 0x107354u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10734Cu, 0x107354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107354u;
label_107354:
    // 0x107354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107358: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x107358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10735c: 0xc09158c  jal         func_245630
    ctx->pc = 0x10735Cu;
    SET_GPR_U32(ctx, 31, 0x107364u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x10735Cu, 0x107364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107364u;
label_107364:
    // 0x107364: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x107364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107368: 0x1015006f  beq         $zero, $s5, . + 4 + (0x6F << 2)
    ctx->pc = 0x107368u;
    {
        const bool branch_taken_0x107368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x107368) {
            ctx->pc = 0x107528u;
            goto label_107528;
        }
    }
    ctx->pc = 0x107370u;
    // 0x107370: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107374: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x107374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x107378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10737c: 0xc0a0694  jal         func_281A50
    ctx->pc = 0x10737Cu;
    SET_GPR_U32(ctx, 31, 0x107384u);
    ctx->pc = 0x281A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A50u, 0x10737Cu, 0x107384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107384u;
label_107384:
    // 0x107384: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x107384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x107388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10738c: 0xc08e668  jal         func_2399A0
    ctx->pc = 0x10738Cu;
    SET_GPR_U32(ctx, 31, 0x107394u);
    ctx->pc = 0x2399A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2399A0u, 0x10738Cu, 0x107394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107394u;
label_107394:
    // 0x107394: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x107394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107398: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x107398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10739c: 0xc090590  jal         func_241640
    ctx->pc = 0x10739Cu;
    SET_GPR_U32(ctx, 31, 0x1073A4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10739Cu, 0x1073A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073A4u;
label_1073a4:
    // 0x1073a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1073a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1073a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1073ac: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x1073ACu;
    SET_GPR_U32(ctx, 31, 0x1073B4u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1073ACu, 0x1073B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073B4u;
label_1073b4:
    // 0x1073b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1073b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1073b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073bc: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1073BCu;
    SET_GPR_U32(ctx, 31, 0x1073C4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1073BCu, 0x1073C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073C4u;
label_1073c4:
    // 0x1073c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1073c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1073C8u;
    {
        const bool branch_taken_0x1073c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073c8) {
            ctx->pc = 0x1073F8u;
            goto label_1073f8;
        }
    }
    ctx->pc = 0x1073D0u;
label_1073d0:
    // 0x1073d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1073d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1073d4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1073d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1073d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1073D8u;
    SET_GPR_U32(ctx, 31, 0x1073E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1073D8u, 0x1073E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073E0u;
label_1073e0:
    // 0x1073e0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1073e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1073e4: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x1073e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1073e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1073e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1073ec: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x1073ECu;
    SET_GPR_U32(ctx, 31, 0x1073F4u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x1073ECu, 0x1073F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073F4u;
label_1073f4:
    // 0x1073f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1073f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1073f8:
    // 0x1073f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1073f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073fc: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x1073FCu;
    SET_GPR_U32(ctx, 31, 0x107404u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1073FCu, 0x107404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107404u;
label_107404:
    // 0x107404: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x107404u;
    {
        const bool branch_taken_0x107404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x107404) {
            ctx->pc = 0x1073D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1073d0;
        }
    }
    ctx->pc = 0x10740Cu;
    // 0x10740c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x10740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x107410: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x107410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x107414: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x107414u;
    {
        const bool branch_taken_0x107414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107414) {
            ctx->pc = 0x1074D8u;
            goto label_1074d8;
        }
    }
    ctx->pc = 0x10741Cu;
    // 0x10741c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x10741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x107420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107424: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x107424u;
    {
        const bool branch_taken_0x107424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107424) {
            ctx->pc = 0x1074D8u;
            goto label_1074d8;
        }
    }
    ctx->pc = 0x10742Cu;
    // 0x10742c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x10742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x107430: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107434: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x107434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x107438: 0xc085538  jal         func_2154E0
    ctx->pc = 0x107438u;
    SET_GPR_U32(ctx, 31, 0x107440u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x107438u, 0x107440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107440u;
label_107440:
    // 0x107440: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x107440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107448: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x107448u;
    SET_GPR_U32(ctx, 31, 0x107450u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x107448u, 0x107450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107450u;
label_107450:
    // 0x107450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107454: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x107454u;
    {
        const bool branch_taken_0x107454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x107454) {
            ctx->pc = 0x10749Cu;
            goto label_10749c;
        }
    }
    ctx->pc = 0x10745Cu;
    // 0x10745c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107460: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x107460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x107464: 0xc085538  jal         func_2154E0
    ctx->pc = 0x107464u;
    SET_GPR_U32(ctx, 31, 0x10746Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x107464u, 0x10746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10746Cu;
label_10746c:
    // 0x10746c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x10746cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107474: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x107474u;
    SET_GPR_U32(ctx, 31, 0x10747Cu);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x107474u, 0x10747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10747Cu;
label_10747c:
    // 0x10747c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x10747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x107480: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x107480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107484: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x107484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x107488: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10748c: 0xc097a94  jal         func_25EA50
    ctx->pc = 0x10748Cu;
    SET_GPR_U32(ctx, 31, 0x107494u);
    ctx->pc = 0x25EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EA50u, 0x10748Cu, 0x107494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107494u;
label_107494:
    // 0x107494: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x107494u;
    {
        const bool branch_taken_0x107494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107494) {
            ctx->pc = 0x1074D8u;
            goto label_1074d8;
        }
    }
    ctx->pc = 0x10749Cu;
label_10749c:
    // 0x10749c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x10749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1074a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1074a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1074a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1074a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1074a8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1074A8u;
    SET_GPR_U32(ctx, 31, 0x1074B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1074A8u, 0x1074B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074B0u;
label_1074b0:
    // 0x1074b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1074b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1074b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1074b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1074b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074bc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x1074BCu;
    SET_GPR_U32(ctx, 31, 0x1074C4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1074BCu, 0x1074C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074C4u;
label_1074c4:
    // 0x1074c4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1074c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1074c8: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1074c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1074cc: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x1074ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1074d0: 0xc041d58  jal         func_107560
    ctx->pc = 0x1074D0u;
    SET_GPR_U32(ctx, 31, 0x1074D8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1074D0u, 0x1074D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074D8u;
label_1074d8:
    // 0x1074d8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1074d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1074dc: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1074DCu;
    SET_GPR_U32(ctx, 31, 0x1074E4u);
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1074DCu, 0x1074E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074E4u;
label_1074e4:
    // 0x1074e4: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x1074E4u;
    SET_GPR_U32(ctx, 31, 0x1074ECu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1074E4u, 0x1074ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074ECu;
label_1074ec:
    // 0x1074ec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1074f0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1074f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1074f4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1074f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1074f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1074f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074fc: 0xc042338  jal         func_108CE0
    ctx->pc = 0x1074FCu;
    SET_GPR_U32(ctx, 31, 0x107504u);
    ctx->pc = 0x108CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CE0u, 0x1074FCu, 0x107504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107504u;
label_107504:
    // 0x107504: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107508: 0xc041dc0  jal         func_107700
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x107700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107700u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0xc104212  jal         func_410848
    ctx->pc = 0x107510u;
    SET_GPR_U32(ctx, 31, 0x107518u);
    ctx->pc = 0x410848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410848u, 0x107510u, 0x107518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107518u;
label_107518:
    // 0x107518: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x107518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x10751c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107520: 0xc08e054  jal         func_238150
    ctx->pc = 0x107520u;
    SET_GPR_U32(ctx, 31, 0x107528u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x107520u, 0x107528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107528u;
label_107528:
    // 0x107528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x107528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10752c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x10752cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107530: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x107530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107534: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x107534u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107538: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x107538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10753c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10753cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x107540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10754c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107550: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x107550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x107554: 0x3e00008  jr          $ra
    ctx->pc = 0x107554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10755Cu;
    // 0x10755c: 0x0  nop
    ctx->pc = 0x10755cu;
    // NOP
    ctx->pc = 0x107560u;
}
