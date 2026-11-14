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

// Function: sub_00458010
// Address: 0x458010 - 0x458410
void sub_00458010_0x458010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458010_0x458010");
#endif

    switch (ctx->pc) {
        case 0x458048u: goto label_458048;
        case 0x45805cu: goto label_45805c;
        case 0x458074u: goto label_458074;
        case 0x45808cu: goto label_45808c;
        case 0x4580a4u: goto label_4580a4;
        case 0x4580c8u: goto label_4580c8;
        case 0x4580dcu: goto label_4580dc;
        case 0x4580e8u: goto label_4580e8;
        case 0x4580f8u: goto label_4580f8;
        case 0x458104u: goto label_458104;
        case 0x458114u: goto label_458114;
        case 0x458134u: goto label_458134;
        case 0x458140u: goto label_458140;
        case 0x458150u: goto label_458150;
        case 0x458160u: goto label_458160;
        case 0x458178u: goto label_458178;
        case 0x458184u: goto label_458184;
        case 0x458190u: goto label_458190;
        case 0x4581a8u: goto label_4581a8;
        case 0x4581b8u: goto label_4581b8;
        case 0x4581dcu: goto label_4581dc;
        case 0x458200u: goto label_458200;
        case 0x458224u: goto label_458224;
        case 0x458248u: goto label_458248;
        case 0x458260u: goto label_458260;
        case 0x4582c4u: goto label_4582c4;
        case 0x4582d4u: goto label_4582d4;
        case 0x4582f8u: goto label_4582f8;
        case 0x45831cu: goto label_45831c;
        case 0x458330u: goto label_458330;
        case 0x45834cu: goto label_45834c;
        case 0x458370u: goto label_458370;
        case 0x458388u: goto label_458388;
        default: break;
    }

    ctx->pc = 0x458010u;

    // 0x458010: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x458010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x458014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x458014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x458018: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x458018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45801c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x458020: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x458020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x458024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x458024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x458028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x458028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45802c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x458030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458034: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x458034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
    // 0x458038: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x458038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45803c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x45803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458040: 0xc115fa8  jal         func_457EA0
    ctx->pc = 0x458040u;
    SET_GPR_U32(ctx, 31, 0x458048u);
    ctx->pc = 0x457EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EA0u, 0x458040u, 0x458048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458048u;
label_458048:
    // 0x458048: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x458048u;
    {
        const bool branch_taken_0x458048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458048) {
            ctx->pc = 0x458080u;
            goto label_458080;
        }
    }
    ctx->pc = 0x458050u;
    // 0x458050: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458054: 0xc115fa8  jal         func_457EA0
    ctx->pc = 0x458054u;
    SET_GPR_U32(ctx, 31, 0x45805Cu);
    ctx->pc = 0x457EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EA0u, 0x458054u, 0x45805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45805Cu;
label_45805c:
    // 0x45805c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x45805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x458060: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x458060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x458064: 0x2786b0e0  addiu       $a2, $gp, -0x4F20
    ctx->pc = 0x458064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947040));
    // 0x458068: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x458068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45806c: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x45806Cu;
    SET_GPR_U32(ctx, 31, 0x458074u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x45806Cu, 0x458074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458074u;
label_458074:
    // 0x458074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458078: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x458078u;
    {
        const bool branch_taken_0x458078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458078) {
            ctx->pc = 0x4580A8u;
            goto label_4580a8;
        }
    }
    ctx->pc = 0x458080u;
label_458080:
    // 0x458080: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458084: 0xc11610c  jal         func_458430
    ctx->pc = 0x458084u;
    SET_GPR_U32(ctx, 31, 0x45808Cu);
    ctx->pc = 0x458430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458430u, 0x458084u, 0x45808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45808Cu;
label_45808c:
    // 0x45808c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x45808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x458090: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x458090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x458094: 0x2786b0e4  addiu       $a2, $gp, -0x4F1C
    ctx->pc = 0x458094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947044));
    // 0x458098: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x458098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45809c: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x45809Cu;
    SET_GPR_U32(ctx, 31, 0x4580A4u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x45809Cu, 0x4580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4580A4u;
label_4580a4:
    // 0x4580a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4580a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4580a8:
    // 0x4580a8: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x4580a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4580ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4580acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4580b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4580B0u;
    {
        const bool branch_taken_0x4580b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4580b0) {
            ctx->pc = 0x4580D0u;
            goto label_4580d0;
        }
    }
    ctx->pc = 0x4580B8u;
    // 0x4580b8: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x4580b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x4580bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4580bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4580c0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4580C0u;
    SET_GPR_U32(ctx, 31, 0x4580C8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4580C0u, 0x4580C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4580C8u;
label_4580c8:
    // 0x4580c8: 0xd  break       0
    ctx->pc = 0x4580c8u;
    runtime->handleBreak(rdram, ctx);
    // 0x4580cc: 0x0  nop
    ctx->pc = 0x4580ccu;
    // NOP
label_4580d0:
    // 0x4580d0: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x4580d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4580d4: 0xc115fb8  jal         func_457EE0
    ctx->pc = 0x4580D4u;
    SET_GPR_U32(ctx, 31, 0x4580DCu);
    ctx->pc = 0x457EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EE0u, 0x4580D4u, 0x4580DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4580DCu;
label_4580dc:
    // 0x4580dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4580dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4580e0: 0xc116114  jal         func_458450
    ctx->pc = 0x4580E0u;
    SET_GPR_U32(ctx, 31, 0x4580E8u);
    ctx->pc = 0x458450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458450u, 0x4580E0u, 0x4580E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4580E8u;
label_4580e8:
    // 0x4580e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4580e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4580ec: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4580ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x4580f0: 0xc115ee4  jal         func_457B90
    ctx->pc = 0x4580F0u;
    SET_GPR_U32(ctx, 31, 0x4580F8u);
    ctx->pc = 0x457B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B90u, 0x4580F0u, 0x4580F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4580F8u;
label_4580f8:
    // 0x4580f8: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x4580f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4580fc: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x4580FCu;
    SET_GPR_U32(ctx, 31, 0x458104u);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x4580FCu, 0x458104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458104u;
label_458104:
    // 0x458104: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x458104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458108: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x45810c: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x45810Cu;
    SET_GPR_U32(ctx, 31, 0x458114u);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x45810Cu, 0x458114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458114u;
label_458114:
    // 0x458114: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458118: 0x2484e5b0  addiu       $a0, $a0, -0x1A50
    ctx->pc = 0x458118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
    // 0x45811c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45811cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458120: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x458120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458124: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x458124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x458128: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x458128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45812c: 0xc115f78  jal         func_457DE0
    ctx->pc = 0x45812Cu;
    SET_GPR_U32(ctx, 31, 0x458134u);
    ctx->pc = 0x457DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457DE0u, 0x45812Cu, 0x458134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458134u;
label_458134:
    // 0x458134: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458138: 0xc115fb8  jal         func_457EE0
    ctx->pc = 0x458138u;
    SET_GPR_U32(ctx, 31, 0x458140u);
    ctx->pc = 0x457EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EE0u, 0x458138u, 0x458140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458140u;
label_458140:
    // 0x458140: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x458140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458144: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458148: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x458148u;
    SET_GPR_U32(ctx, 31, 0x458150u);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x458148u, 0x458150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458150u;
label_458150:
    // 0x458150: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x458150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458154: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458158: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x458158u;
    SET_GPR_U32(ctx, 31, 0x458160u);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x458158u, 0x458160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458160u;
label_458160:
    // 0x458160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x458160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458164: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x458164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458168: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x458168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x45816c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x45816cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458170: 0xc115f40  jal         func_457D00
    ctx->pc = 0x458170u;
    SET_GPR_U32(ctx, 31, 0x458178u);
    ctx->pc = 0x457D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457D00u, 0x458170u, 0x458178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458178u;
label_458178:
    // 0x458178: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x458178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x45817c: 0xc115dbc  jal         func_4576F0
    ctx->pc = 0x45817Cu;
    SET_GPR_U32(ctx, 31, 0x458184u);
    ctx->pc = 0x4576F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576F0u, 0x45817Cu, 0x458184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458184u;
label_458184:
    // 0x458184: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458188: 0xc116104  jal         func_458410
    ctx->pc = 0x458188u;
    SET_GPR_U32(ctx, 31, 0x458190u);
    ctx->pc = 0x458410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458410u, 0x458188u, 0x458190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458190u;
label_458190:
    // 0x458190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x458190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458194: 0x12600048  beqz        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x458194u;
    {
        const bool branch_taken_0x458194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x458194) {
            ctx->pc = 0x4582B8u;
            goto label_4582b8;
        }
    }
    ctx->pc = 0x45819Cu;
    // 0x45819c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x45819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4581a0: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x4581A0u;
    SET_GPR_U32(ctx, 31, 0x4581A8u);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x4581A0u, 0x4581A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4581A8u;
label_4581a8:
    // 0x4581a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4581a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581ac: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x4581acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4581b0: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x4581B0u;
    SET_GPR_U32(ctx, 31, 0x4581B8u);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x4581B0u, 0x4581B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4581B8u;
label_4581b8:
    // 0x4581b8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4581b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x4581bc: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x4581bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x4581c0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x4581c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x4581c4: 0x24c6e5c0  addiu       $a2, $a2, -0x1A40
    ctx->pc = 0x4581c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960576));
    // 0x4581c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4581c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4581ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4581d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581d4: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x4581D4u;
    SET_GPR_U32(ctx, 31, 0x4581DCu);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x4581D4u, 0x4581DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4581DCu;
label_4581dc:
    // 0x4581dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4581dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581e0: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x4581e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4581e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4581e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4581e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4581E8u;
    {
        const bool branch_taken_0x4581e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4581e8) {
            ctx->pc = 0x458208u;
            goto label_458208;
        }
    }
    ctx->pc = 0x4581F0u;
    // 0x4581f0: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x4581f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x4581f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4581f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4581f8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4581F8u;
    SET_GPR_U32(ctx, 31, 0x458200u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4581F8u, 0x458200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458200u;
label_458200:
    // 0x458200: 0xd  break       0
    ctx->pc = 0x458200u;
    runtime->handleBreak(rdram, ctx);
    // 0x458204: 0x0  nop
    ctx->pc = 0x458204u;
    // NOP
label_458208:
    // 0x458208: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x458208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x45820c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x45820cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x458210: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x458210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x458214: 0x24c6e5d0  addiu       $a2, $a2, -0x1A30
    ctx->pc = 0x458214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960592));
    // 0x458218: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x458218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45821c: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x45821Cu;
    SET_GPR_U32(ctx, 31, 0x458224u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x45821Cu, 0x458224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458224u;
label_458224:
    // 0x458224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458228: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x458228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x45822c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45822cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x458230: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x458230u;
    {
        const bool branch_taken_0x458230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458230) {
            ctx->pc = 0x458250u;
            goto label_458250;
        }
    }
    ctx->pc = 0x458238u;
    // 0x458238: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x458238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x45823c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45823cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458240: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458240u;
    SET_GPR_U32(ctx, 31, 0x458248u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458240u, 0x458248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458248u;
label_458248:
    // 0x458248: 0xd  break       0
    ctx->pc = 0x458248u;
    runtime->handleBreak(rdram, ctx);
    // 0x45824c: 0x0  nop
    ctx->pc = 0x45824cu;
    // NOP
label_458250:
    // 0x458250: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x458250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x458254: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x458254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x458258: 0xc125010  jal         func_494040
    ctx->pc = 0x458258u;
    SET_GPR_U32(ctx, 31, 0x458260u);
    ctx->pc = 0x494040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494040u, 0x458258u, 0x458260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458260u;
label_458260:
    // 0x458260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x458260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x458264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x458268: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x458268u;
    {
        const bool branch_taken_0x458268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x458268) {
            ctx->pc = 0x4582A4u;
            goto label_4582a4;
        }
    }
    ctx->pc = 0x458270u;
    // 0x458270: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x458270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x458274: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x458274u;
    {
        const bool branch_taken_0x458274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x458274) {
            ctx->pc = 0x4582A4u;
            goto label_4582a4;
        }
    }
    ctx->pc = 0x45827Cu;
    // 0x45827c: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x45827Cu;
    {
        const bool branch_taken_0x45827c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45827c) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x458284u;
    // 0x458284: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458288: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x458288u;
    {
        const bool branch_taken_0x458288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x458288) {
            ctx->pc = 0x458298u;
            goto label_458298;
        }
    }
    ctx->pc = 0x458290u;
    // 0x458290: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x458290u;
    {
        const bool branch_taken_0x458290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458290) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x458298u;
label_458298:
    // 0x458298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x458298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45829c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x45829Cu;
    {
        const bool branch_taken_0x45829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45829c) {
            ctx->pc = 0x4583E4u;
            goto label_4583e4;
        }
    }
    ctx->pc = 0x4582A4u;
label_4582a4:
    // 0x4582a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4582a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4582a8: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x4582a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4582ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4582acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4582b0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4582B0u;
    {
        const bool branch_taken_0x4582b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4582b0) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x4582B8u;
label_4582b8:
    // 0x4582b8: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x4582b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4582bc: 0xc115fb0  jal         func_457EC0
    ctx->pc = 0x4582BCu;
    SET_GPR_U32(ctx, 31, 0x4582C4u);
    ctx->pc = 0x457EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EC0u, 0x4582BCu, 0x4582C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4582C4u;
label_4582c4:
    // 0x4582c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4582c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4582c8: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x4582c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4582cc: 0xc115fa0  jal         func_457E80
    ctx->pc = 0x4582CCu;
    SET_GPR_U32(ctx, 31, 0x4582D4u);
    ctx->pc = 0x457E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457E80u, 0x4582CCu, 0x4582D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4582D4u;
label_4582d4:
    // 0x4582d4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4582d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x4582d8: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x4582d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x4582dc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x4582dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x4582e0: 0x24c6e5c0  addiu       $a2, $a2, -0x1A40
    ctx->pc = 0x4582e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960576));
    // 0x4582e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4582e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4582e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4582e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4582ec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4582ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4582f0: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x4582F0u;
    SET_GPR_U32(ctx, 31, 0x4582F8u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x4582F0u, 0x4582F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4582F8u;
label_4582f8:
    // 0x4582f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4582f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4582fc: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x4582fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x458300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x458300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x458304: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x458304u;
    {
        const bool branch_taken_0x458304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458304) {
            ctx->pc = 0x458324u;
            goto label_458324;
        }
    }
    ctx->pc = 0x45830Cu;
    // 0x45830c: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x45830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x458310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458314: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458314u;
    SET_GPR_U32(ctx, 31, 0x45831Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458314u, 0x45831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45831Cu;
label_45831c:
    // 0x45831c: 0xd  break       0
    ctx->pc = 0x45831cu;
    runtime->handleBreak(rdram, ctx);
    // 0x458320: 0x0  nop
    ctx->pc = 0x458320u;
    // NOP
label_458324:
    // 0x458324: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x458324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x458328: 0xc115fa8  jal         func_457EA0
    ctx->pc = 0x458328u;
    SET_GPR_U32(ctx, 31, 0x458330u);
    ctx->pc = 0x457EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457EA0u, 0x458328u, 0x458330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458330u;
label_458330:
    // 0x458330: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x458330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x458334: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x458334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x458338: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x458338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x45833c: 0x24c6e5f0  addiu       $a2, $a2, -0x1A10
    ctx->pc = 0x45833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960624));
    // 0x458340: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x458340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458344: 0xc0bc398  jal         func_2F0E60
    ctx->pc = 0x458344u;
    SET_GPR_U32(ctx, 31, 0x45834Cu);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x458344u, 0x45834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45834Cu;
label_45834c:
    // 0x45834c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45834cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458350: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x458350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x458354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x458354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x458358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x458358u;
    {
        const bool branch_taken_0x458358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458358) {
            ctx->pc = 0x458378u;
            goto label_458378;
        }
    }
    ctx->pc = 0x458360u;
    // 0x458360: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x458360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x458364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458368: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458368u;
    SET_GPR_U32(ctx, 31, 0x458370u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458368u, 0x458370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458370u;
label_458370:
    // 0x458370: 0xd  break       0
    ctx->pc = 0x458370u;
    runtime->handleBreak(rdram, ctx);
    // 0x458374: 0x0  nop
    ctx->pc = 0x458374u;
    // NOP
label_458378:
    // 0x458378: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x458378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x45837c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x45837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x458380: 0xc125010  jal         func_494040
    ctx->pc = 0x458380u;
    SET_GPR_U32(ctx, 31, 0x458388u);
    ctx->pc = 0x494040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494040u, 0x458380u, 0x458388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458388u;
label_458388:
    // 0x458388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x458388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45838c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x458390: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x458390u;
    {
        const bool branch_taken_0x458390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x458390) {
            ctx->pc = 0x4583D4u;
            goto label_4583d4;
        }
    }
    ctx->pc = 0x458398u;
    // 0x458398: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x458398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x45839c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x45839Cu;
    {
        const bool branch_taken_0x45839c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x45839c) {
            ctx->pc = 0x4583D4u;
            goto label_4583d4;
        }
    }
    ctx->pc = 0x4583A4u;
    // 0x4583a4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4583A4u;
    {
        const bool branch_taken_0x4583a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4583a4) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x4583ACu;
    // 0x4583ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4583acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4583b0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4583B0u;
    {
        const bool branch_taken_0x4583b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4583b0) {
            ctx->pc = 0x4583C0u;
            goto label_4583c0;
        }
    }
    ctx->pc = 0x4583B8u;
    // 0x4583b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4583B8u;
    {
        const bool branch_taken_0x4583b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4583b8) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x4583C0u;
label_4583c0:
    // 0x4583c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4583c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4583c4: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x4583c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4583c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4583c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4583cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4583CCu;
    {
        const bool branch_taken_0x4583cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4583cc) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x4583D4u;
label_4583d4:
    // 0x4583d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4583d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4583d8: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x4583d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x4583dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4583dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4583e0:
    // 0x4583e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4583e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4583e4:
    // 0x4583e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4583e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4583e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4583e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4583ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4583ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4583f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4583f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4583f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4583f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4583f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4583f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4583fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4583fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458404: 0x27bd0390  addiu       $sp, $sp, 0x390
    ctx->pc = 0x458404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x458408: 0x3e00008  jr          $ra
    ctx->pc = 0x458408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458410u;
}
