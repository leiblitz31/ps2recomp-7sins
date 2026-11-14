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

// Function: sub_004810E0
// Address: 0x4810e0 - 0x481200
void sub_004810E0_0x4810e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004810E0_0x4810e0");
#endif

    switch (ctx->pc) {
        case 0x4810e0u: goto label_4810e0;
        case 0x4810e4u: goto label_4810e4;
        case 0x4810e8u: goto label_4810e8;
        case 0x4810ecu: goto label_4810ec;
        case 0x4810f0u: goto label_4810f0;
        case 0x4810f4u: goto label_4810f4;
        case 0x4810f8u: goto label_4810f8;
        case 0x4810fcu: goto label_4810fc;
        case 0x481100u: goto label_481100;
        case 0x481104u: goto label_481104;
        case 0x481108u: goto label_481108;
        case 0x48110cu: goto label_48110c;
        case 0x481110u: goto label_481110;
        case 0x481114u: goto label_481114;
        case 0x481118u: goto label_481118;
        case 0x48111cu: goto label_48111c;
        case 0x481120u: goto label_481120;
        case 0x481124u: goto label_481124;
        case 0x481128u: goto label_481128;
        case 0x48112cu: goto label_48112c;
        case 0x481130u: goto label_481130;
        case 0x481134u: goto label_481134;
        case 0x481138u: goto label_481138;
        case 0x48113cu: goto label_48113c;
        case 0x481140u: goto label_481140;
        case 0x481144u: goto label_481144;
        case 0x481148u: goto label_481148;
        case 0x48114cu: goto label_48114c;
        case 0x481150u: goto label_481150;
        case 0x481154u: goto label_481154;
        case 0x481158u: goto label_481158;
        case 0x48115cu: goto label_48115c;
        case 0x481160u: goto label_481160;
        case 0x481164u: goto label_481164;
        case 0x481168u: goto label_481168;
        case 0x48116cu: goto label_48116c;
        case 0x481170u: goto label_481170;
        case 0x481174u: goto label_481174;
        case 0x481178u: goto label_481178;
        case 0x48117cu: goto label_48117c;
        case 0x481180u: goto label_481180;
        case 0x481184u: goto label_481184;
        case 0x481188u: goto label_481188;
        case 0x48118cu: goto label_48118c;
        case 0x481190u: goto label_481190;
        case 0x481194u: goto label_481194;
        case 0x481198u: goto label_481198;
        case 0x48119cu: goto label_48119c;
        case 0x4811a0u: goto label_4811a0;
        case 0x4811a4u: goto label_4811a4;
        case 0x4811a8u: goto label_4811a8;
        case 0x4811acu: goto label_4811ac;
        case 0x4811b0u: goto label_4811b0;
        case 0x4811b4u: goto label_4811b4;
        case 0x4811b8u: goto label_4811b8;
        case 0x4811bcu: goto label_4811bc;
        case 0x4811c0u: goto label_4811c0;
        case 0x4811c4u: goto label_4811c4;
        case 0x4811c8u: goto label_4811c8;
        case 0x4811ccu: goto label_4811cc;
        case 0x4811d0u: goto label_4811d0;
        case 0x4811d4u: goto label_4811d4;
        case 0x4811d8u: goto label_4811d8;
        case 0x4811dcu: goto label_4811dc;
        case 0x4811e0u: goto label_4811e0;
        case 0x4811e4u: goto label_4811e4;
        case 0x4811e8u: goto label_4811e8;
        case 0x4811ecu: goto label_4811ec;
        case 0x4811f0u: goto label_4811f0;
        case 0x4811f4u: goto label_4811f4;
        case 0x4811f8u: goto label_4811f8;
        case 0x4811fcu: goto label_4811fc;
        default: break;
    }

    ctx->pc = 0x4810e0u;

label_4810e0:
    // 0x4810e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4810e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4810e4:
    // 0x4810e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4810e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4810e8:
    // 0x4810e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4810e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4810ec:
    // 0x4810ec: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x4810ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_4810f0:
    // 0x4810f0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x4810f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_4810f4:
    // 0x4810f4: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x4810f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
label_4810f8:
    // 0x4810f8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4810f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4810fc:
    // 0x4810fc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4810fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_481100:
    // 0x481100: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x481100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_481104:
    // 0x481104: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x481104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_481108:
    // 0x481108: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x481108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48110c:
    // 0x48110c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x48110cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_481110:
    // 0x481110: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x481110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_481114:
    // 0x481114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481118:
    // 0x481118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x481118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48111c:
    // 0x48111c: 0xc0f3348  jal         func_3CCD20
label_481120:
    if (ctx->pc == 0x481120u) {
        ctx->pc = 0x481124u;
        goto label_481124;
    }
    ctx->pc = 0x48111Cu;
    SET_GPR_U32(ctx, 31, 0x481124u);
    ctx->pc = 0x3CCD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCD20u, 0x48111Cu, 0x481124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481124u;
label_481124:
    // 0x481124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x481124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_481128:
    // 0x481128: 0x2001027  not         $v0, $s0
    ctx->pc = 0x481128u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_48112c:
    // 0x48112c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48112cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_481130:
    // 0x481130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x481130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_481134:
    // 0x481134: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_481138:
    if (ctx->pc == 0x481138u) {
        ctx->pc = 0x48113Cu;
        goto label_48113c;
    }
    ctx->pc = 0x481134u;
    {
        const bool branch_taken_0x481134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x481134) {
            ctx->pc = 0x4811E4u;
            goto label_4811e4;
        }
    }
    ctx->pc = 0x48113Cu;
label_48113c:
    // 0x48113c: 0x8f82b584  lw          $v0, -0x4A7C($gp)
    ctx->pc = 0x48113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948228)));
label_481140:
    // 0x481140: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_481144:
    if (ctx->pc == 0x481144u) {
        ctx->pc = 0x481148u;
        goto label_481148;
    }
    ctx->pc = 0x481140u;
    {
        const bool branch_taken_0x481140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481140) {
            ctx->pc = 0x4811E4u;
            goto label_4811e4;
        }
    }
    ctx->pc = 0x481148u;
label_481148:
    // 0x481148: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x481148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48114c:
    // 0x48114c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_481150:
    // 0x481150: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x481150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_481154:
    // 0x481154: 0xc115ee8  jal         func_457BA0
label_481158:
    if (ctx->pc == 0x481158u) {
        ctx->pc = 0x48115Cu;
        goto label_48115c;
    }
    ctx->pc = 0x481154u;
    SET_GPR_U32(ctx, 31, 0x48115Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x481154u, 0x48115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48115Cu;
label_48115c:
    // 0x48115c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_481160:
    if (ctx->pc == 0x481160u) {
        ctx->pc = 0x481164u;
        goto label_481164;
    }
    ctx->pc = 0x48115Cu;
    {
        const bool branch_taken_0x48115c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48115c) {
            ctx->pc = 0x4811E4u;
            goto label_4811e4;
        }
    }
    ctx->pc = 0x481164u;
label_481164:
    // 0x481164: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x481164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_481168:
    // 0x481168: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48116c:
    if (ctx->pc == 0x48116Cu) {
        ctx->pc = 0x481170u;
        goto label_481170;
    }
    ctx->pc = 0x481168u;
    {
        const bool branch_taken_0x481168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481168) {
            ctx->pc = 0x4811E4u;
            goto label_4811e4;
        }
    }
    ctx->pc = 0x481170u;
label_481170:
    // 0x481170: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x481170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_481174:
    // 0x481174: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x481174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_481178:
    // 0x481178: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x481178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_48117c:
    // 0x48117c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x48117cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_481180:
    // 0x481180: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x481180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_481184:
    // 0x481184: 0x24080299  addiu       $t0, $zero, 0x299
    ctx->pc = 0x481184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_481188:
    // 0x481188: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x481188u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_48118c:
    // 0x48118c: 0x25291c68  addiu       $t1, $t1, 0x1C68
    ctx->pc = 0x48118cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7272));
label_481190:
    // 0x481190: 0xc113940  jal         func_44E500
label_481194:
    if (ctx->pc == 0x481194u) {
        ctx->pc = 0x481198u;
        goto label_481198;
    }
    ctx->pc = 0x481190u;
    SET_GPR_U32(ctx, 31, 0x481198u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x481190u, 0x481198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481198u;
label_481198:
    // 0x481198: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x481198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48119c:
    // 0x48119c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x48119cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4811a0:
    // 0x4811a0: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x4811a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
label_4811a4:
    // 0x4811a4: 0xc115c24  jal         func_457090
label_4811a8:
    if (ctx->pc == 0x4811A8u) {
        ctx->pc = 0x4811ACu;
        goto label_4811ac;
    }
    ctx->pc = 0x4811A4u;
    SET_GPR_U32(ctx, 31, 0x4811ACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4811A4u, 0x4811ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4811ACu;
label_4811ac:
    // 0x4811ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4811acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4811b0:
    // 0x4811b0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x4811b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_4811b4:
    // 0x4811b4: 0x40f809  jalr        $v0
label_4811b8:
    if (ctx->pc == 0x4811B8u) {
        ctx->pc = 0x4811BCu;
        goto label_4811bc;
    }
    ctx->pc = 0x4811B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4811BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4811B4u, 0x4811BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4811BCu;
label_4811bc:
    // 0x4811bc: 0xaf82b584  sw          $v0, -0x4A7C($gp)
    ctx->pc = 0x4811bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948228), GPR_U32(ctx, 2));
label_4811c0:
    // 0x4811c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4811c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4811c4:
    // 0x4811c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4811c8:
    if (ctx->pc == 0x4811C8u) {
        ctx->pc = 0x4811CCu;
        goto label_4811cc;
    }
    ctx->pc = 0x4811C4u;
    {
        const bool branch_taken_0x4811c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4811c4) {
            ctx->pc = 0x4811D4u;
            goto label_4811d4;
        }
    }
    ctx->pc = 0x4811CCu;
label_4811cc:
    // 0x4811cc: 0xd  break       0
    ctx->pc = 0x4811ccu;
    runtime->handleBreak(rdram, ctx);
label_4811d0:
    // 0x4811d0: 0x0  nop
    ctx->pc = 0x4811d0u;
    // NOP
label_4811d4:
    // 0x4811d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4811d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4811d8:
    // 0x4811d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4811d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4811dc:
    // 0x4811dc: 0xc11392c  jal         func_44E4B0
label_4811e0:
    if (ctx->pc == 0x4811E0u) {
        ctx->pc = 0x4811E4u;
        goto label_4811e4;
    }
    ctx->pc = 0x4811DCu;
    SET_GPR_U32(ctx, 31, 0x4811E4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4811DCu, 0x4811E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4811E4u;
label_4811e4:
    // 0x4811e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4811e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4811e8:
    // 0x4811e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4811e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4811ec:
    // 0x4811ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4811ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4811f0:
    // 0x4811f0: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x4811f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4811f4:
    // 0x4811f4: 0x3e00008  jr          $ra
label_4811f8:
    if (ctx->pc == 0x4811F8u) {
        ctx->pc = 0x4811FCu;
        goto label_4811fc;
    }
    ctx->pc = 0x4811F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4811F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4811FCu;
label_4811fc:
    // 0x4811fc: 0x0  nop
    ctx->pc = 0x4811fcu;
    // NOP
    ctx->pc = 0x481200u;
}
