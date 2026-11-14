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

// Function: sub_0013E870
// Address: 0x13e870 - 0x13eed0
void sub_0013E870_0x13e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E870_0x13e870");
#endif

    switch (ctx->pc) {
        case 0x13e894u: goto label_13e894;
        case 0x13e8bcu: goto label_13e8bc;
        case 0x13e8d4u: goto label_13e8d4;
        case 0x13e8ecu: goto label_13e8ec;
        case 0x13e904u: goto label_13e904;
        case 0x13e91cu: goto label_13e91c;
        case 0x13e934u: goto label_13e934;
        case 0x13e94cu: goto label_13e94c;
        case 0x13e964u: goto label_13e964;
        case 0x13e97cu: goto label_13e97c;
        case 0x13e994u: goto label_13e994;
        case 0x13e9acu: goto label_13e9ac;
        case 0x13e9c4u: goto label_13e9c4;
        case 0x13e9dcu: goto label_13e9dc;
        case 0x13e9f4u: goto label_13e9f4;
        case 0x13ea0cu: goto label_13ea0c;
        case 0x13ea24u: goto label_13ea24;
        case 0x13ea3cu: goto label_13ea3c;
        case 0x13ea54u: goto label_13ea54;
        case 0x13ea6cu: goto label_13ea6c;
        case 0x13ea84u: goto label_13ea84;
        case 0x13ea9cu: goto label_13ea9c;
        case 0x13eab4u: goto label_13eab4;
        case 0x13eae4u: goto label_13eae4;
        case 0x13eafcu: goto label_13eafc;
        case 0x13eb14u: goto label_13eb14;
        case 0x13eb2cu: goto label_13eb2c;
        case 0x13eb44u: goto label_13eb44;
        case 0x13eb5cu: goto label_13eb5c;
        case 0x13eb74u: goto label_13eb74;
        case 0x13eb8cu: goto label_13eb8c;
        case 0x13eba4u: goto label_13eba4;
        case 0x13ebbcu: goto label_13ebbc;
        case 0x13ebd4u: goto label_13ebd4;
        case 0x13ebecu: goto label_13ebec;
        case 0x13ec04u: goto label_13ec04;
        case 0x13ec1cu: goto label_13ec1c;
        case 0x13ec34u: goto label_13ec34;
        case 0x13ec4cu: goto label_13ec4c;
        case 0x13ec64u: goto label_13ec64;
        case 0x13ec7cu: goto label_13ec7c;
        case 0x13ec94u: goto label_13ec94;
        case 0x13ecacu: goto label_13ecac;
        case 0x13ecc4u: goto label_13ecc4;
        case 0x13ecdcu: goto label_13ecdc;
        case 0x13ecf4u: goto label_13ecf4;
        case 0x13ed0cu: goto label_13ed0c;
        case 0x13ed24u: goto label_13ed24;
        case 0x13ed3cu: goto label_13ed3c;
        case 0x13ed54u: goto label_13ed54;
        case 0x13ed6cu: goto label_13ed6c;
        case 0x13ed9cu: goto label_13ed9c;
        case 0x13edb4u: goto label_13edb4;
        case 0x13edccu: goto label_13edcc;
        case 0x13ede4u: goto label_13ede4;
        case 0x13edfcu: goto label_13edfc;
        case 0x13ee14u: goto label_13ee14;
        case 0x13ee2cu: goto label_13ee2c;
        case 0x13ee44u: goto label_13ee44;
        case 0x13ee5cu: goto label_13ee5c;
        case 0x13ee74u: goto label_13ee74;
        case 0x13ee8cu: goto label_13ee8c;
        case 0x13eea4u: goto label_13eea4;
        case 0x13eeb4u: goto label_13eeb4;
        default: break;
    }

    ctx->pc = 0x13e870u;

    // 0x13e870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e880: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13e880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13e884: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e888: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x13e88c: 0xc04738c  jal         func_11CE30
    ctx->pc = 0x13E88Cu;
    SET_GPR_U32(ctx, 31, 0x13E894u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x13E88Cu, 0x13E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E894u;
label_13e894:
    // 0x13e894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e898: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e8a0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13e8a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e8ac: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e8b0: 0x24c61d40  addiu       $a2, $a2, 0x1D40
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7488));
    // 0x13e8b4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E8B4u;
    SET_GPR_U32(ctx, 31, 0x13E8BCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E8B4u, 0x13E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8BCu;
label_13e8bc:
    // 0x13e8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e8c4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e8c8: 0x24c61e10  addiu       $a2, $a2, 0x1E10
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7696));
    // 0x13e8cc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E8CCu;
    SET_GPR_U32(ctx, 31, 0x13E8D4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E8CCu, 0x13E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8D4u;
label_13e8d4:
    // 0x13e8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x13e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13e8dc: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e8e0: 0x24c61ee0  addiu       $a2, $a2, 0x1EE0
    ctx->pc = 0x13e8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7904));
    // 0x13e8e4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E8E4u;
    SET_GPR_U32(ctx, 31, 0x13E8ECu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E8E4u, 0x13E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8ECu;
label_13e8ec:
    // 0x13e8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e8f4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e8f8: 0x24c61f80  addiu       $a2, $a2, 0x1F80
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8064));
    // 0x13e8fc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E8FCu;
    SET_GPR_U32(ctx, 31, 0x13E904u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E8FCu, 0x13E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E904u;
label_13e904:
    // 0x13e904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e908: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13e90c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e910: 0x24c61cd0  addiu       $a2, $a2, 0x1CD0
    ctx->pc = 0x13e910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7376));
    // 0x13e914: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E914u;
    SET_GPR_U32(ctx, 31, 0x13E91Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E914u, 0x13E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E91Cu;
label_13e91c:
    // 0x13e91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e920: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13e920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13e924: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13e928: 0x24c6acb0  addiu       $a2, $a2, -0x5350
    ctx->pc = 0x13e928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945968));
    // 0x13e92c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E92Cu;
    SET_GPR_U32(ctx, 31, 0x13E934u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E92Cu, 0x13E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E934u;
label_13e934:
    // 0x13e934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e938: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13e93c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13e940: 0x24c6ad70  addiu       $a2, $a2, -0x5290
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946160));
    // 0x13e944: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E944u;
    SET_GPR_U32(ctx, 31, 0x13E94Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E944u, 0x13E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E94Cu;
label_13e94c:
    // 0x13e94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e950: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13e954: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13e954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13e958: 0x24c6ae30  addiu       $a2, $a2, -0x51D0
    ctx->pc = 0x13e958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946352));
    // 0x13e95c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E95Cu;
    SET_GPR_U32(ctx, 31, 0x13E964u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E95Cu, 0x13E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E964u;
label_13e964:
    // 0x13e964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e968: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13e96c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13e970: 0x24c6aea0  addiu       $a2, $a2, -0x5160
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946464));
    // 0x13e974: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E974u;
    SET_GPR_U32(ctx, 31, 0x13E97Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E974u, 0x13E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E97Cu;
label_13e97c:
    // 0x13e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e980: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e984: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e988: 0x24c621a0  addiu       $a2, $a2, 0x21A0
    ctx->pc = 0x13e988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8608));
    // 0x13e98c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E98Cu;
    SET_GPR_U32(ctx, 31, 0x13E994u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E98Cu, 0x13E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E994u;
label_13e994:
    // 0x13e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e998: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13e99c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e9a0: 0x24c62200  addiu       $a2, $a2, 0x2200
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8704));
    // 0x13e9a4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E9A4u;
    SET_GPR_U32(ctx, 31, 0x13E9ACu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E9A4u, 0x13E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9ACu;
label_13e9ac:
    // 0x13e9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9b0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x13e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x13e9b4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e9b8: 0x24c62260  addiu       $a2, $a2, 0x2260
    ctx->pc = 0x13e9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8800));
    // 0x13e9bc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E9BCu;
    SET_GPR_U32(ctx, 31, 0x13E9C4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E9BCu, 0x13E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9C4u;
label_13e9c4:
    // 0x13e9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9c8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13e9cc: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e9d0: 0x24c622c0  addiu       $a2, $a2, 0x22C0
    ctx->pc = 0x13e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8896));
    // 0x13e9d4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E9D4u;
    SET_GPR_U32(ctx, 31, 0x13E9DCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E9D4u, 0x13E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9DCu;
label_13e9dc:
    // 0x13e9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9e0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13e9e4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e9e8: 0x24c62320  addiu       $a2, $a2, 0x2320
    ctx->pc = 0x13e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8992));
    // 0x13e9ec: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13E9ECu;
    SET_GPR_U32(ctx, 31, 0x13E9F4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13E9ECu, 0x13E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9F4u;
label_13e9f4:
    // 0x13e9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9f8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x13e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x13e9fc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x13e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x13ea00: 0x24c61e90  addiu       $a2, $a2, 0x1E90
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7824));
    // 0x13ea04: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA04u;
    SET_GPR_U32(ctx, 31, 0x13EA0Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA04u, 0x13EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA0Cu;
label_13ea0c:
    // 0x13ea0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x13ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13ea14: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ea14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ea18: 0x24c62380  addiu       $a2, $a2, 0x2380
    ctx->pc = 0x13ea18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9088));
    // 0x13ea1c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA1Cu;
    SET_GPR_U32(ctx, 31, 0x13EA24u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA1Cu, 0x13EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA24u;
label_13ea24:
    // 0x13ea24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea28: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x13ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13ea2c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x13ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x13ea30: 0x24c61d50  addiu       $a2, $a2, 0x1D50
    ctx->pc = 0x13ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7504));
    // 0x13ea34: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA34u;
    SET_GPR_U32(ctx, 31, 0x13EA3Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA34u, 0x13EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA3Cu;
label_13ea3c:
    // 0x13ea3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea40: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x13ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13ea44: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ea44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ea48: 0x24c6fcd0  addiu       $a2, $a2, -0x330
    ctx->pc = 0x13ea48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966480));
    // 0x13ea4c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA4Cu;
    SET_GPR_U32(ctx, 31, 0x13EA54u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA4Cu, 0x13EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA54u;
label_13ea54:
    // 0x13ea54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x13ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x13ea5c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ea60: 0x24c6fef0  addiu       $a2, $a2, -0x110
    ctx->pc = 0x13ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967024));
    // 0x13ea64: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA64u;
    SET_GPR_U32(ctx, 31, 0x13EA6Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA64u, 0x13EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA6Cu;
label_13ea6c:
    // 0x13ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea70: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x13ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13ea74: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ea78: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x13ea7c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA7Cu;
    SET_GPR_U32(ctx, 31, 0x13EA84u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA7Cu, 0x13EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA84u;
label_13ea84:
    // 0x13ea84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea88: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x13ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x13ea8c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ea90: 0x24c602f0  addiu       $a2, $a2, 0x2F0
    ctx->pc = 0x13ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x13ea94: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EA94u;
    SET_GPR_U32(ctx, 31, 0x13EA9Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EA94u, 0x13EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA9Cu;
label_13ea9c:
    // 0x13ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaa0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x13eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x13eaa4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eaa8: 0x24c604d0  addiu       $a2, $a2, 0x4D0
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1232));
    // 0x13eaac: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EAACu;
    SET_GPR_U32(ctx, 31, 0x13EAB4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EAACu, 0x13EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EAB4u;
label_13eab4:
    // 0x13eab4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EAB4u;
    {
        const bool branch_taken_0x13eab4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eab4) {
            ctx->pc = 0x13EACCu;
            goto label_13eacc;
        }
    }
    ctx->pc = 0x13EABCu;
    // 0x13eabc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x13eac0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x13eac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x13eac4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EAC4u;
    {
        const bool branch_taken_0x13eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eac4) {
            ctx->pc = 0x13EAE4u;
            goto label_13eae4;
        }
    }
    ctx->pc = 0x13EACCu;
label_13eacc:
    // 0x13eacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ead0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x13ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x13ead4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13ead8: 0x24c64f10  addiu       $a2, $a2, 0x4F10
    ctx->pc = 0x13ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20240));
    // 0x13eadc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EADCu;
    SET_GPR_U32(ctx, 31, 0x13EAE4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EADCu, 0x13EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EAE4u;
label_13eae4:
    // 0x13eae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eae8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x13eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13eaec: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13eaf0: 0x24c64d50  addiu       $a2, $a2, 0x4D50
    ctx->pc = 0x13eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
    // 0x13eaf4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EAF4u;
    SET_GPR_U32(ctx, 31, 0x13EAFCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EAF4u, 0x13EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EAFCu;
label_13eafc:
    // 0x13eafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb00: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13eb04: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13eb04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13eb08: 0x24c6ac00  addiu       $a2, $a2, -0x5400
    ctx->pc = 0x13eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945792));
    // 0x13eb0c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB0Cu;
    SET_GPR_U32(ctx, 31, 0x13EB14u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB0Cu, 0x13EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB14u;
label_13eb14:
    // 0x13eb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb18: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x13eb1c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eb20: 0x24c69520  addiu       $a2, $a2, -0x6AE0
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939936));
    // 0x13eb24: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB24u;
    SET_GPR_U32(ctx, 31, 0x13EB2Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB24u, 0x13EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB2Cu;
label_13eb2c:
    // 0x13eb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb30: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x13eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13eb34: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eb38: 0x24c62020  addiu       $a2, $a2, 0x2020
    ctx->pc = 0x13eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8224));
    // 0x13eb3c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB3Cu;
    SET_GPR_U32(ctx, 31, 0x13EB44u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB3Cu, 0x13EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB44u;
label_13eb44:
    // 0x13eb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb48: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13eb4c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eb50: 0x24c62080  addiu       $a2, $a2, 0x2080
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8320));
    // 0x13eb54: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB54u;
    SET_GPR_U32(ctx, 31, 0x13EB5Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB54u, 0x13EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB5Cu;
label_13eb5c:
    // 0x13eb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb60: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x13eb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13eb64: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eb68: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
    // 0x13eb6c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB6Cu;
    SET_GPR_U32(ctx, 31, 0x13EB74u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB6Cu, 0x13EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB74u;
label_13eb74:
    // 0x13eb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13eb7c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eb80: 0x24c62140  addiu       $a2, $a2, 0x2140
    ctx->pc = 0x13eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8512));
    // 0x13eb84: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB84u;
    SET_GPR_U32(ctx, 31, 0x13EB8Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB84u, 0x13EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB8Cu;
label_13eb8c:
    // 0x13eb8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb90: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13eb94: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13eb98: 0x24c64f10  addiu       $a2, $a2, 0x4F10
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20240));
    // 0x13eb9c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EB9Cu;
    SET_GPR_U32(ctx, 31, 0x13EBA4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EB9Cu, 0x13EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBA4u;
label_13eba4:
    // 0x13eba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x13ebac: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x13ebb0: 0x24c6ab60  addiu       $a2, $a2, -0x54A0
    ctx->pc = 0x13ebb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945632));
    // 0x13ebb4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EBB4u;
    SET_GPR_U32(ctx, 31, 0x13EBBCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EBB4u, 0x13EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBBCu;
label_13ebbc:
    // 0x13ebbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebc0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x13ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x13ebc4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13ebc8: 0x24c64bd0  addiu       $a2, $a2, 0x4BD0
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19408));
    // 0x13ebcc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EBCCu;
    SET_GPR_U32(ctx, 31, 0x13EBD4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EBCCu, 0x13EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBD4u;
label_13ebd4:
    // 0x13ebd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebd8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x13ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x13ebdc: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13ebe0: 0x24c64c90  addiu       $a2, $a2, 0x4C90
    ctx->pc = 0x13ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19600));
    // 0x13ebe4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EBE4u;
    SET_GPR_U32(ctx, 31, 0x13EBECu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EBE4u, 0x13EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBECu;
label_13ebec:
    // 0x13ebec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebf0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13ebf4: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ebf8: 0x24c69880  addiu       $a2, $a2, -0x6780
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940800));
    // 0x13ebfc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EBFCu;
    SET_GPR_U32(ctx, 31, 0x13EC04u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EBFCu, 0x13EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC04u;
label_13ec04:
    // 0x13ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec08: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x13ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x13ec0c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec10: 0x24c69940  addiu       $a2, $a2, -0x66C0
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940992));
    // 0x13ec14: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC14u;
    SET_GPR_U32(ctx, 31, 0x13EC1Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC14u, 0x13EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC1Cu;
label_13ec1c:
    // 0x13ec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec20: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13ec24: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec28: 0x24c69990  addiu       $a2, $a2, -0x6670
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941072));
    // 0x13ec2c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC2Cu;
    SET_GPR_U32(ctx, 31, 0x13EC34u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC2Cu, 0x13EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC34u;
label_13ec34:
    // 0x13ec34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec38: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x13ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x13ec3c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec40: 0x24c699e0  addiu       $a2, $a2, -0x6620
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941152));
    // 0x13ec44: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC44u;
    SET_GPR_U32(ctx, 31, 0x13EC4Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC44u, 0x13EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC4Cu;
label_13ec4c:
    // 0x13ec4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec50: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x13ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x13ec54: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec58: 0x24c69a10  addiu       $a2, $a2, -0x65F0
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
    // 0x13ec5c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC5Cu;
    SET_GPR_U32(ctx, 31, 0x13EC64u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC5Cu, 0x13EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC64u;
label_13ec64:
    // 0x13ec64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec68: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x13ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x13ec6c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec70: 0x24c69a40  addiu       $a2, $a2, -0x65C0
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941248));
    // 0x13ec74: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC74u;
    SET_GPR_U32(ctx, 31, 0x13EC7Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC74u, 0x13EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC7Cu;
label_13ec7c:
    // 0x13ec7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec80: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x13ec84: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13ec88: 0x24c69a70  addiu       $a2, $a2, -0x6590
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941296));
    // 0x13ec8c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EC8Cu;
    SET_GPR_U32(ctx, 31, 0x13EC94u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EC8Cu, 0x13EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC94u;
label_13ec94:
    // 0x13ec94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec98: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x13ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x13ec9c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x13eca0: 0x24c64d50  addiu       $a2, $a2, 0x4D50
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
    // 0x13eca4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ECA4u;
    SET_GPR_U32(ctx, 31, 0x13ECACu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ECA4u, 0x13ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECACu;
label_13ecac:
    // 0x13ecac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecb0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x13ecb4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ecb8: 0x24c6fc70  addiu       $a2, $a2, -0x390
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966384));
    // 0x13ecbc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ECBCu;
    SET_GPR_U32(ctx, 31, 0x13ECC4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ECBCu, 0x13ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECC4u;
label_13ecc4:
    // 0x13ecc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecc8: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x13ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x13eccc: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ecd0: 0x24c6fcd0  addiu       $a2, $a2, -0x330
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966480));
    // 0x13ecd4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ECD4u;
    SET_GPR_U32(ctx, 31, 0x13ECDCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ECD4u, 0x13ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECDCu;
label_13ecdc:
    // 0x13ecdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ece0: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x13ece4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ece8: 0x24c6fd30  addiu       $a2, $a2, -0x2D0
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966576));
    // 0x13ecec: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ECECu;
    SET_GPR_U32(ctx, 31, 0x13ECF4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ECECu, 0x13ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECF4u;
label_13ecf4:
    // 0x13ecf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecf8: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x13ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x13ecfc: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ed00: 0x24c6fd90  addiu       $a2, $a2, -0x270
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966672));
    // 0x13ed04: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED04u;
    SET_GPR_U32(ctx, 31, 0x13ED0Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED04u, 0x13ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED0Cu;
label_13ed0c:
    // 0x13ed0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed10: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x13ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13ed14: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ed18: 0x24c6fdf0  addiu       $a2, $a2, -0x210
    ctx->pc = 0x13ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966768));
    // 0x13ed1c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED1Cu;
    SET_GPR_U32(ctx, 31, 0x13ED24u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED1Cu, 0x13ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED24u;
label_13ed24:
    // 0x13ed24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed28: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x13ed2c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ed30: 0x24c6fe50  addiu       $a2, $a2, -0x1B0
    ctx->pc = 0x13ed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966864));
    // 0x13ed34: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED34u;
    SET_GPR_U32(ctx, 31, 0x13ED3Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED34u, 0x13ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED3Cu;
label_13ed3c:
    // 0x13ed3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed40: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x13ed44: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ed48: 0x24c6feb0  addiu       $a2, $a2, -0x150
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966960));
    // 0x13ed4c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED4Cu;
    SET_GPR_U32(ctx, 31, 0x13ED54u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED4Cu, 0x13ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED54u;
label_13ed54:
    // 0x13ed54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed58: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x13ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x13ed5c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x13ed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x13ed60: 0x24c6ff10  addiu       $a2, $a2, -0xF0
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967056));
    // 0x13ed64: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED64u;
    SET_GPR_U32(ctx, 31, 0x13ED6Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED64u, 0x13ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED6Cu;
label_13ed6c:
    // 0x13ed6c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13ED6Cu;
    {
        const bool branch_taken_0x13ed6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed6c) {
            ctx->pc = 0x13ED84u;
            goto label_13ed84;
        }
    }
    ctx->pc = 0x13ED74u;
    // 0x13ed74: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x13ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x13ed78: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x13ed78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x13ed7c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x13ED7Cu;
    {
        const bool branch_taken_0x13ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed7c) {
            ctx->pc = 0x13EEA4u;
            goto label_13eea4;
        }
    }
    ctx->pc = 0x13ED84u;
label_13ed84:
    // 0x13ed84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed88: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x13ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x13ed8c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ed90: 0x24c61d40  addiu       $a2, $a2, 0x1D40
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7488));
    // 0x13ed94: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13ED94u;
    SET_GPR_U32(ctx, 31, 0x13ED9Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13ED94u, 0x13ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED9Cu;
label_13ed9c:
    // 0x13ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda0: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x13eda4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13eda8: 0x24c61e10  addiu       $a2, $a2, 0x1E10
    ctx->pc = 0x13eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7696));
    // 0x13edac: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EDACu;
    SET_GPR_U32(ctx, 31, 0x13EDB4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EDACu, 0x13EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDB4u;
label_13edb4:
    // 0x13edb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edb8: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x13edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x13edbc: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13edc0: 0x24c61ee0  addiu       $a2, $a2, 0x1EE0
    ctx->pc = 0x13edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7904));
    // 0x13edc4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EDC4u;
    SET_GPR_U32(ctx, 31, 0x13EDCCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EDC4u, 0x13EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDCCu;
label_13edcc:
    // 0x13edcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edd0: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x13edd4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13edd8: 0x24c61f80  addiu       $a2, $a2, 0x1F80
    ctx->pc = 0x13edd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8064));
    // 0x13eddc: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EDDCu;
    SET_GPR_U32(ctx, 31, 0x13EDE4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EDDCu, 0x13EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDE4u;
label_13ede4:
    // 0x13ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ede8: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x13edec: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13edf0: 0x24c62020  addiu       $a2, $a2, 0x2020
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8224));
    // 0x13edf4: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EDF4u;
    SET_GPR_U32(ctx, 31, 0x13EDFCu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EDF4u, 0x13EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDFCu;
label_13edfc:
    // 0x13edfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13edfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee00: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x13ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x13ee04: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee08: 0x24c62080  addiu       $a2, $a2, 0x2080
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8320));
    // 0x13ee0c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE0Cu;
    SET_GPR_U32(ctx, 31, 0x13EE14u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE0Cu, 0x13EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE14u;
label_13ee14:
    // 0x13ee14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee18: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x13ee1c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee20: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x13ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
    // 0x13ee24: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE24u;
    SET_GPR_U32(ctx, 31, 0x13EE2Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE24u, 0x13EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE2Cu;
label_13ee2c:
    // 0x13ee2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee30: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x13ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x13ee34: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee38: 0x24c62140  addiu       $a2, $a2, 0x2140
    ctx->pc = 0x13ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8512));
    // 0x13ee3c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE3Cu;
    SET_GPR_U32(ctx, 31, 0x13EE44u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE3Cu, 0x13EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE44u;
label_13ee44:
    // 0x13ee44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee48: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x13ee4c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee50: 0x24c621a0  addiu       $a2, $a2, 0x21A0
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8608));
    // 0x13ee54: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE54u;
    SET_GPR_U32(ctx, 31, 0x13EE5Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE54u, 0x13EE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE5Cu;
label_13ee5c:
    // 0x13ee5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee60: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x13ee64: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee68: 0x24c62200  addiu       $a2, $a2, 0x2200
    ctx->pc = 0x13ee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8704));
    // 0x13ee6c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE6Cu;
    SET_GPR_U32(ctx, 31, 0x13EE74u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE6Cu, 0x13EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE74u;
label_13ee74:
    // 0x13ee74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee78: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x13ee78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x13ee7c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee80: 0x24c62260  addiu       $a2, $a2, 0x2260
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8800));
    // 0x13ee84: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE84u;
    SET_GPR_U32(ctx, 31, 0x13EE8Cu);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE84u, 0x13EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE8Cu;
label_13ee8c:
    // 0x13ee8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee90: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x13ee94: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13ee98: 0x24c622c0  addiu       $a2, $a2, 0x22C0
    ctx->pc = 0x13ee98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8896));
    // 0x13ee9c: 0xc04adc0  jal         func_12B700
    ctx->pc = 0x13EE9Cu;
    SET_GPR_U32(ctx, 31, 0x13EEA4u);
    ctx->pc = 0x12B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B700u, 0x13EE9Cu, 0x13EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEA4u;
label_13eea4:
    // 0x13eea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eea8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13eeac: 0xc04c608  jal         func_131820
    ctx->pc = 0x13EEACu;
    SET_GPR_U32(ctx, 31, 0x13EEB4u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x13EEACu, 0x13EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEB4u;
label_13eeb4:
    // 0x13eeb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13eeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eec0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13eec4: 0x3e00008  jr          $ra
    ctx->pc = 0x13EEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EECCu;
    // 0x13eecc: 0x0  nop
    ctx->pc = 0x13eeccu;
    // NOP
    ctx->pc = 0x13eed0u;
}
