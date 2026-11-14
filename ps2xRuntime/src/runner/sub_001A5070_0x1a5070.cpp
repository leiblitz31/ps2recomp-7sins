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

// Function: sub_001A5070
// Address: 0x1a5070 - 0x1a58b0
void sub_001A5070_0x1a5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5070_0x1a5070");
#endif

    switch (ctx->pc) {
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a53a4u: goto label_1a53a4;
        default: break;
    }

    ctx->pc = 0x1a5070u;

    // 0x1a5070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a5074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a507c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5084: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a5084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a5088: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a508c: 0x24720054  addiu       $s2, $v1, 0x54
    ctx->pc = 0x1a508cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1a5090: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5094: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1A5094u;
    {
        const bool branch_taken_0x1a5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5094) {
            ctx->pc = 0x1A53B0u;
            goto label_1a53b0;
        }
    }
    ctx->pc = 0x1A509Cu;
label_1a509c:
    // 0x1a509c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a509cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a50a0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a50a4: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a50a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a50ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a50b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a50b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a50b4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1A50B4u;
    SET_GPR_U32(ctx, 31, 0x1A50BCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1A50B4u, 0x1A50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50BCu;
label_1a50bc:
    // 0x1a50bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a50c4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1A50C4u;
    SET_GPR_U32(ctx, 31, 0x1A50CCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1A50C4u, 0x1A50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50CCu;
label_1a50cc:
    // 0x1a50cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a50ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a50d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a50d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a50d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1A50D8u;
    SET_GPR_U32(ctx, 31, 0x1A50E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1A50D8u, 0x1A50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50E0u;
label_1a50e0:
    // 0x1a50e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a50e4: 0x122300b1  beq         $s1, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1A50E4u;
    {
        const bool branch_taken_0x1a50e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a50e4) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A50ECu;
    // 0x1a50ec: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1a50ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a50f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a50f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a50f8: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a50fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5104: 0x27859360  addiu       $a1, $gp, -0x6CA0
    ctx->pc = 0x1a5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939488));
    // 0x1a5108: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A5108u;
    SET_GPR_U32(ctx, 31, 0x1A5110u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A5108u, 0x1A5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5110u;
label_1a5110:
    // 0x1a5110: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5110u;
    {
        const bool branch_taken_0x1a5110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5110) {
            ctx->pc = 0x1A515Cu;
            goto label_1a515c;
        }
    }
    ctx->pc = 0x1A5118u;
    // 0x1a5118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a511c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A511Cu;
    SET_GPR_U32(ctx, 31, 0x1A5124u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A511Cu, 0x1A5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5124u;
label_1a5124:
    // 0x1a5124: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a5124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5128: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5128u;
    SET_GPR_U32(ctx, 31, 0x1A5130u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5128u, 0x1A5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5130u;
label_1a5130:
    // 0x1a5130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5134: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A5134u;
    SET_GPR_U32(ctx, 31, 0x1A513Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A5134u, 0x1A513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A513Cu;
label_1a513c:
    // 0x1a513c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1a513cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1a5140: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a5140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5144: 0x0  nop
    ctx->pc = 0x1a5144u;
    // NOP
    // 0x1a5148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a514c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5150: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x1a5150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x1a5154: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1A5154u;
    {
        const bool branch_taken_0x1a5154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5154) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A515Cu;
label_1a515c:
    // 0x1a515c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5160: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a5164: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a5168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a516c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5170: 0x27859364  addiu       $a1, $gp, -0x6C9C
    ctx->pc = 0x1a5170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939492));
    // 0x1a5174: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A5174u;
    SET_GPR_U32(ctx, 31, 0x1A517Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A5174u, 0x1A517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A517Cu;
label_1a517c:
    // 0x1a517c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A517Cu;
    {
        const bool branch_taken_0x1a517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a517c) {
            ctx->pc = 0x1A51C8u;
            goto label_1a51c8;
        }
    }
    ctx->pc = 0x1A5184u;
    // 0x1a5184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5188: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A5188u;
    SET_GPR_U32(ctx, 31, 0x1A5190u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A5188u, 0x1A5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5190u;
label_1a5190:
    // 0x1a5190: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5194: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5194u;
    SET_GPR_U32(ctx, 31, 0x1A519Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5194u, 0x1A519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A519Cu;
label_1a519c:
    // 0x1a519c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51a0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A51A0u;
    SET_GPR_U32(ctx, 31, 0x1A51A8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A51A0u, 0x1A51A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51A8u;
label_1a51a8:
    // 0x1a51a8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1a51ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a51acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a51b0: 0x0  nop
    ctx->pc = 0x1a51b0u;
    // NOP
    // 0x1a51b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a51b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a51b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a51bc: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1a51bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1a51c0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1A51C0u;
    {
        const bool branch_taken_0x1a51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a51c0) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A51C8u;
label_1a51c8:
    // 0x1a51c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a51cc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a51d0: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a51d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a51d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a51dc: 0x27859368  addiu       $a1, $gp, -0x6C98
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939496));
    // 0x1a51e0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A51E0u;
    SET_GPR_U32(ctx, 31, 0x1A51E8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A51E0u, 0x1A51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51E8u;
label_1a51e8:
    // 0x1a51e8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A51E8u;
    {
        const bool branch_taken_0x1a51e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51e8) {
            ctx->pc = 0x1A522Cu;
            goto label_1a522c;
        }
    }
    ctx->pc = 0x1A51F0u;
    // 0x1a51f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a51f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51f4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A51F4u;
    SET_GPR_U32(ctx, 31, 0x1A51FCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A51F4u, 0x1A51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51FCu;
label_1a51fc:
    // 0x1a51fc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5200: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5200u;
    SET_GPR_U32(ctx, 31, 0x1A5208u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5200u, 0x1A5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5208u;
label_1a5208:
    // 0x1a5208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a520c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A520Cu;
    SET_GPR_U32(ctx, 31, 0x1A5214u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A520Cu, 0x1A5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5214u;
label_1a5214:
    // 0x1a5214: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x1a5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a521c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5220: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x1a5220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x1a5224: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A5224u;
    {
        const bool branch_taken_0x1a5224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5224) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A522Cu;
label_1a522c:
    // 0x1a522c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5230: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a5234: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a5238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a523c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5240: 0x2785936c  addiu       $a1, $gp, -0x6C94
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939500));
    // 0x1a5244: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A5244u;
    SET_GPR_U32(ctx, 31, 0x1A524Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A5244u, 0x1A524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A524Cu;
label_1a524c:
    // 0x1a524c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A524Cu;
    {
        const bool branch_taken_0x1a524c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a524c) {
            ctx->pc = 0x1A5290u;
            goto label_1a5290;
        }
    }
    ctx->pc = 0x1A5254u;
    // 0x1a5254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5258: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A5258u;
    SET_GPR_U32(ctx, 31, 0x1A5260u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A5258u, 0x1A5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5260u;
label_1a5260:
    // 0x1a5260: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a5260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5264: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5264u;
    SET_GPR_U32(ctx, 31, 0x1A526Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5264u, 0x1A526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A526Cu;
label_1a526c:
    // 0x1a526c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5270: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A5270u;
    SET_GPR_U32(ctx, 31, 0x1A5278u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A5270u, 0x1A5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5278u;
label_1a5278:
    // 0x1a5278: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x1a5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a527c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a527cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5280: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5284: 0xe46000c8  swc1        $f0, 0xC8($v1)
    ctx->pc = 0x1a5284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
    // 0x1a5288: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1A5288u;
    {
        const bool branch_taken_0x1a5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5288) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A5290u;
label_1a5290:
    // 0x1a5290: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5294: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a5294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a5298: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a529c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a52a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a52a4: 0x27859370  addiu       $a1, $gp, -0x6C90
    ctx->pc = 0x1a52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939504));
    // 0x1a52a8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A52A8u;
    SET_GPR_U32(ctx, 31, 0x1A52B0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A52A8u, 0x1A52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52B0u;
label_1a52b0:
    // 0x1a52b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A52B0u;
    {
        const bool branch_taken_0x1a52b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a52b0) {
            ctx->pc = 0x1A52FCu;
            goto label_1a52fc;
        }
    }
    ctx->pc = 0x1A52B8u;
    // 0x1a52b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52bc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A52BCu;
    SET_GPR_U32(ctx, 31, 0x1A52C4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A52BCu, 0x1A52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52C4u;
label_1a52c4:
    // 0x1a52c4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a52c8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A52C8u;
    SET_GPR_U32(ctx, 31, 0x1A52D0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A52C8u, 0x1A52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52D0u;
label_1a52d0:
    // 0x1a52d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a52d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52d4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A52D4u;
    SET_GPR_U32(ctx, 31, 0x1A52DCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A52D4u, 0x1A52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52DCu;
label_1a52dc:
    // 0x1a52dc: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1a52e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a52e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a52e4: 0x0  nop
    ctx->pc = 0x1a52e4u;
    // NOP
    // 0x1a52e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a52e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a52ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a52f0: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1a52f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x1a52f4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A52F4u;
    {
        const bool branch_taken_0x1a52f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52f4) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A52FCu;
label_1a52fc:
    // 0x1a52fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5300: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a5304: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a5308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a530c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5310: 0x27859374  addiu       $a1, $gp, -0x6C8C
    ctx->pc = 0x1a5310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939508));
    // 0x1a5314: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A5314u;
    SET_GPR_U32(ctx, 31, 0x1A531Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A5314u, 0x1A531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A531Cu;
label_1a531c:
    // 0x1a531c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A531Cu;
    {
        const bool branch_taken_0x1a531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a531c) {
            ctx->pc = 0x1A5358u;
            goto label_1a5358;
        }
    }
    ctx->pc = 0x1A5324u;
    // 0x1a5324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5328: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A5328u;
    SET_GPR_U32(ctx, 31, 0x1A5330u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A5328u, 0x1A5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5330u;
label_1a5330:
    // 0x1a5330: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a5330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5334: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5334u;
    SET_GPR_U32(ctx, 31, 0x1A533Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5334u, 0x1A533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A533Cu;
label_1a533c:
    // 0x1a533c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5340: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A5340u;
    SET_GPR_U32(ctx, 31, 0x1A5348u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A5340u, 0x1A5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5348u;
label_1a5348:
    // 0x1a5348: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a534c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1a534cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1a5350: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A5350u;
    {
        const bool branch_taken_0x1a5350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5350) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A5358u;
label_1a5358:
    // 0x1a5358: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a535c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1a5360: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x1a5360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x1a5364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5368: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a536c: 0x27859378  addiu       $a1, $gp, -0x6C88
    ctx->pc = 0x1a536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939512));
    // 0x1a5370: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1A5370u;
    SET_GPR_U32(ctx, 31, 0x1A5378u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1A5370u, 0x1A5378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5378u;
label_1a5378:
    // 0x1a5378: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5378u;
    {
        const bool branch_taken_0x1a5378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5378) {
            ctx->pc = 0x1A53ACu;
            goto label_1a53ac;
        }
    }
    ctx->pc = 0x1A5380u;
    // 0x1a5380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5384: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A5384u;
    SET_GPR_U32(ctx, 31, 0x1A538Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A5384u, 0x1A538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A538Cu;
label_1a538c:
    // 0x1a538c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a5390: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1A5390u;
    SET_GPR_U32(ctx, 31, 0x1A5398u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1A5390u, 0x1A5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5398u;
label_1a5398:
    // 0x1a5398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a539c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1A539Cu;
    SET_GPR_U32(ctx, 31, 0x1A53A4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1A539Cu, 0x1A53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53A4u;
label_1a53a4:
    // 0x1a53a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a53a8: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1a53a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
label_1a53ac:
    // 0x1a53ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a53acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a53b0:
    // 0x1a53b0: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x1a53b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a53b4: 0x1460ff39  bnez        $v1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x1A53B4u;
    {
        const bool branch_taken_0x1a53b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a53b4) {
            ctx->pc = 0x1A509Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A53BCu;
    // 0x1a53bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a53c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a53c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a53c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a53c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a53c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a53c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a53cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a53ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a53d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A53D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A53D8u;
    // 0x1a53d8: 0x0  nop
    ctx->pc = 0x1a53d8u;
    // NOP
    // 0x1a53dc: 0x0  nop
    ctx->pc = 0x1a53dcu;
    // NOP
    // 0x1a53e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a53e4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a53e8: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1a53e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a53ec: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a53f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a53f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a53f4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a53f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a53f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a53fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a53fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5400: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a5404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5408: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a540c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a540cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5410: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5418: 0x0  nop
    ctx->pc = 0x1a5418u;
    // NOP
    // 0x1a541c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a541cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a5420: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5424: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a5424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a5428: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a5428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a542c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A542Cu;
    {
        const bool branch_taken_0x1a542c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a542c) {
            ctx->pc = 0x1A5448u;
            goto label_1a5448;
        }
    }
    ctx->pc = 0x1A5434u;
    // 0x1a5434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5438: 0x0  nop
    ctx->pc = 0x1a5438u;
    // NOP
    // 0x1a543c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a543cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5440u;
    {
        const bool branch_taken_0x1a5440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5440) {
            ctx->pc = 0x1A5464u;
            goto label_1a5464;
        }
    }
    ctx->pc = 0x1A5448u;
label_1a5448:
    // 0x1a5448: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a544c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5450: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a5454: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a5454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5458: 0x0  nop
    ctx->pc = 0x1a5458u;
    // NOP
    // 0x1a545c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a545cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5460: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a5460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a5464:
    // 0x1a5464: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1a5468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a546c: 0x0  nop
    ctx->pc = 0x1a546cu;
    // NOP
    // 0x1a5470: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a5470u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a5474: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5478: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a5478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a547c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5480: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5484: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x1a5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5488: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a548c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a548cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5490: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x1a5490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x1a5494: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5498: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x1a5498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a549c: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a54a0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a54a4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A54A4u;
    {
        const bool branch_taken_0x1a54a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a54a4) {
            ctx->pc = 0x1A54C0u;
            goto label_1a54c0;
        }
    }
    ctx->pc = 0x1A54ACu;
    // 0x1a54ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a54acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a54b0: 0x0  nop
    ctx->pc = 0x1a54b0u;
    // NOP
    // 0x1a54b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a54b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a54b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A54B8u;
    {
        const bool branch_taken_0x1a54b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a54b8) {
            ctx->pc = 0x1A54DCu;
            goto label_1a54dc;
        }
    }
    ctx->pc = 0x1A54C0u;
label_1a54c0:
    // 0x1a54c0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a54c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a54c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a54c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a54c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a54cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a54ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a54d0: 0x0  nop
    ctx->pc = 0x1a54d0u;
    // NOP
    // 0x1a54d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a54d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a54d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a54d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a54dc:
    // 0x1a54dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a54dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a54e0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A54E0u;
    {
        const bool branch_taken_0x1a54e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a54e0) {
            ctx->pc = 0x1A5530u;
            goto label_1a5530;
        }
    }
    ctx->pc = 0x1A54E8u;
    // 0x1a54e8: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a54ec: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a54f0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A54F0u;
    {
        const bool branch_taken_0x1a54f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a54f0) {
            ctx->pc = 0x1A550Cu;
            goto label_1a550c;
        }
    }
    ctx->pc = 0x1A54F8u;
    // 0x1a54f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a54f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a54fc: 0x0  nop
    ctx->pc = 0x1a54fcu;
    // NOP
    // 0x1a5500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5504u;
    {
        const bool branch_taken_0x1a5504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5504) {
            ctx->pc = 0x1A5528u;
            goto label_1a5528;
        }
    }
    ctx->pc = 0x1A550Cu;
label_1a550c:
    // 0x1a550c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a550cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a5510: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a5510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5514: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a5518: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a5518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a551c: 0x0  nop
    ctx->pc = 0x1a551cu;
    // NOP
    // 0x1a5520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5524: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a5524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a5528:
    // 0x1a5528: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a552c: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x1a552cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
label_1a5530:
    // 0x1a5530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5534: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A553Cu;
    // 0x1a553c: 0x0  nop
    ctx->pc = 0x1a553cu;
    // NOP
    // 0x1a5540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5544: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a5544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a5548: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1a5548u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a554c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a5550: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a5550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5554: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a5558: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a5558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a555c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a555cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5560: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5564: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a5564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5568: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a556c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a556cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5570: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5578: 0x0  nop
    ctx->pc = 0x1a5578u;
    // NOP
    // 0x1a557c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a557cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a5580: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5584: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a5588: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a5588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a558c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A558Cu;
    {
        const bool branch_taken_0x1a558c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a558c) {
            ctx->pc = 0x1A55A8u;
            goto label_1a55a8;
        }
    }
    ctx->pc = 0x1A5594u;
    // 0x1a5594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5598: 0x0  nop
    ctx->pc = 0x1a5598u;
    // NOP
    // 0x1a559c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a559cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a55a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A55A0u;
    {
        const bool branch_taken_0x1a55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55a0) {
            ctx->pc = 0x1A55C4u;
            goto label_1a55c4;
        }
    }
    ctx->pc = 0x1A55A8u;
label_1a55a8:
    // 0x1a55a8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a55ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a55acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a55b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a55b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a55b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a55b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a55b8: 0x0  nop
    ctx->pc = 0x1a55b8u;
    // NOP
    // 0x1a55bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a55bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a55c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a55c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a55c4:
    // 0x1a55c4: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1a55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1a55c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a55c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a55cc: 0x0  nop
    ctx->pc = 0x1a55ccu;
    // NOP
    // 0x1a55d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a55d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a55d4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a55d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a55d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a55d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a55dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a55dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a55e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a55e4: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x1a55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a55e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a55e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a55ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a55ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a55f0: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x1a55f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x1a55f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a55f8: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x1a55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a55fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a55fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5600: 0x0  nop
    ctx->pc = 0x1a5600u;
    // NOP
    // 0x1a5604: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5608: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5608u;
    {
        const bool branch_taken_0x1a5608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5608) {
            ctx->pc = 0x1A561Cu;
            goto label_1a561c;
        }
    }
    ctx->pc = 0x1A5610u;
    // 0x1a5610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5614: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5618: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x1a5618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
label_1a561c:
    // 0x1a561c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a561cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5620: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5628u;
    // 0x1a5628: 0x0  nop
    ctx->pc = 0x1a5628u;
    // NOP
    // 0x1a562c: 0x0  nop
    ctx->pc = 0x1a562cu;
    // NOP
    // 0x1a5630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5634: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a5634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a5638: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1a5638u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a563c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a5640: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5644: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a5648: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a564c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a564cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5650: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5654: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a5654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5658: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a565c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a565cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5660: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a5660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5668: 0x0  nop
    ctx->pc = 0x1a5668u;
    // NOP
    // 0x1a566c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a5670: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5674: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a5674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a5678: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a567c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A567Cu;
    {
        const bool branch_taken_0x1a567c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a567c) {
            ctx->pc = 0x1A5698u;
            goto label_1a5698;
        }
    }
    ctx->pc = 0x1A5684u;
    // 0x1a5684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5688: 0x0  nop
    ctx->pc = 0x1a5688u;
    // NOP
    // 0x1a568c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a568cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5690u;
    {
        const bool branch_taken_0x1a5690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5690) {
            ctx->pc = 0x1A56B4u;
            goto label_1a56b4;
        }
    }
    ctx->pc = 0x1A5698u;
label_1a5698:
    // 0x1a5698: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a569c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a56a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a56a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a56a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a56a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a56a8: 0x0  nop
    ctx->pc = 0x1a56a8u;
    // NOP
    // 0x1a56ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a56acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a56b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a56b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a56b4:
    // 0x1a56b4: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1a56b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a56b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a56bc: 0x0  nop
    ctx->pc = 0x1a56bcu;
    // NOP
    // 0x1a56c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a56c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a56c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a56c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a56c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a56c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a56cc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a56ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a56d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a56d4: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x1a56d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a56d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a56d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a56dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a56dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a56e0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1a56e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1a56e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a56e8: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x1a56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a56ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a56ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a56f0: 0x0  nop
    ctx->pc = 0x1a56f0u;
    // NOP
    // 0x1a56f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a56f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A56F8u;
    {
        const bool branch_taken_0x1a56f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56f8) {
            ctx->pc = 0x1A570Cu;
            goto label_1a570c;
        }
    }
    ctx->pc = 0x1A5700u;
    // 0x1a5700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5704: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5708: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1a5708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_1a570c:
    // 0x1a570c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a5710: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5714: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a571c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5720: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1a5720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1a5724: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5728: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5730u;
    // 0x1a5730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5734: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a5734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a5738: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1a5738u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a573c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a5740: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a5740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5744: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a5748: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a574c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a574cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5750: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5754: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a5754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5758: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a575c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a575cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5760: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5768: 0x0  nop
    ctx->pc = 0x1a5768u;
    // NOP
    // 0x1a576c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a576cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a5770: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5774: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a5774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a5778: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a5778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a577c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A577Cu;
    {
        const bool branch_taken_0x1a577c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a577c) {
            ctx->pc = 0x1A5798u;
            goto label_1a5798;
        }
    }
    ctx->pc = 0x1A5784u;
    // 0x1a5784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5788: 0x0  nop
    ctx->pc = 0x1a5788u;
    // NOP
    // 0x1a578c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a578cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5790: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5790u;
    {
        const bool branch_taken_0x1a5790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5790) {
            ctx->pc = 0x1A57B4u;
            goto label_1a57b4;
        }
    }
    ctx->pc = 0x1A5798u;
label_1a5798:
    // 0x1a5798: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a579c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a579cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a57a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a57a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a57a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a57a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a57a8: 0x0  nop
    ctx->pc = 0x1a57a8u;
    // NOP
    // 0x1a57ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a57acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a57b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a57b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a57b4:
    // 0x1a57b4: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1a57b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a57b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a57bc: 0x0  nop
    ctx->pc = 0x1a57bcu;
    // NOP
    // 0x1a57c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a57c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a57c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a57c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a57c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a57cc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a57ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a57d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57d4: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x1a57d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a57d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a57d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a57dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a57dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a57e0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1a57e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1a57e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a57e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57e8: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x1a57e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a57ec: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a57f0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a57f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a57f4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A57F4u;
    {
        const bool branch_taken_0x1a57f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a57f4) {
            ctx->pc = 0x1A5810u;
            goto label_1a5810;
        }
    }
    ctx->pc = 0x1A57FCu;
    // 0x1a57fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a57fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5800: 0x0  nop
    ctx->pc = 0x1a5800u;
    // NOP
    // 0x1a5804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5808u;
    {
        const bool branch_taken_0x1a5808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5808) {
            ctx->pc = 0x1A582Cu;
            goto label_1a582c;
        }
    }
    ctx->pc = 0x1A5810u;
label_1a5810:
    // 0x1a5810: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a5810u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a5814: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a5814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5818: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a581c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a581cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5820: 0x0  nop
    ctx->pc = 0x1a5820u;
    // NOP
    // 0x1a5824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5828: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a5828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a582c:
    // 0x1a582c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a582cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5830: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5830u;
    {
        const bool branch_taken_0x1a5830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5830) {
            ctx->pc = 0x1A5880u;
            goto label_1a5880;
        }
    }
    ctx->pc = 0x1A5838u;
    // 0x1a5838: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a583c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a5840: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5840u;
    {
        const bool branch_taken_0x1a5840 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a5840) {
            ctx->pc = 0x1A585Cu;
            goto label_1a585c;
        }
    }
    ctx->pc = 0x1A5848u;
    // 0x1a5848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a584c: 0x0  nop
    ctx->pc = 0x1a584cu;
    // NOP
    // 0x1a5850: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5854u;
    {
        const bool branch_taken_0x1a5854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5854) {
            ctx->pc = 0x1A5878u;
            goto label_1a5878;
        }
    }
    ctx->pc = 0x1A585Cu;
label_1a585c:
    // 0x1a585c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1a585cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a5860: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a5860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5864: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a5868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a5868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a586c: 0x0  nop
    ctx->pc = 0x1a586cu;
    // NOP
    // 0x1a5870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5874: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a5874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a5878:
    // 0x1a5878: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a587c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1a587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_1a5880:
    // 0x1a5880: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5884: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a5884u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1a5888: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a588c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5894: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5898: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1a5898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1a589c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a58a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58A8u;
    // 0x1a58a8: 0x0  nop
    ctx->pc = 0x1a58a8u;
    // NOP
    // 0x1a58ac: 0x0  nop
    ctx->pc = 0x1a58acu;
    // NOP
    ctx->pc = 0x1a58b0u;
}
