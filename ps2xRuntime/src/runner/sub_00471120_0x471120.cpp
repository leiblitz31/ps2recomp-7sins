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

// Function: sub_00471120
// Address: 0x471120 - 0x4712a0
void sub_00471120_0x471120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471120_0x471120");
#endif

    switch (ctx->pc) {
        case 0x471120u: goto label_471120;
        case 0x471124u: goto label_471124;
        case 0x471128u: goto label_471128;
        case 0x47112cu: goto label_47112c;
        case 0x471130u: goto label_471130;
        case 0x471134u: goto label_471134;
        case 0x471138u: goto label_471138;
        case 0x47113cu: goto label_47113c;
        case 0x471140u: goto label_471140;
        case 0x471144u: goto label_471144;
        case 0x471148u: goto label_471148;
        case 0x47114cu: goto label_47114c;
        case 0x471150u: goto label_471150;
        case 0x471154u: goto label_471154;
        case 0x471158u: goto label_471158;
        case 0x47115cu: goto label_47115c;
        case 0x471160u: goto label_471160;
        case 0x471164u: goto label_471164;
        case 0x471168u: goto label_471168;
        case 0x47116cu: goto label_47116c;
        case 0x471170u: goto label_471170;
        case 0x471174u: goto label_471174;
        case 0x471178u: goto label_471178;
        case 0x47117cu: goto label_47117c;
        case 0x471180u: goto label_471180;
        case 0x471184u: goto label_471184;
        case 0x471188u: goto label_471188;
        case 0x47118cu: goto label_47118c;
        case 0x471190u: goto label_471190;
        case 0x471194u: goto label_471194;
        case 0x471198u: goto label_471198;
        case 0x47119cu: goto label_47119c;
        case 0x4711a0u: goto label_4711a0;
        case 0x4711a4u: goto label_4711a4;
        case 0x4711a8u: goto label_4711a8;
        case 0x4711acu: goto label_4711ac;
        case 0x4711b0u: goto label_4711b0;
        case 0x4711b4u: goto label_4711b4;
        case 0x4711b8u: goto label_4711b8;
        case 0x4711bcu: goto label_4711bc;
        case 0x4711c0u: goto label_4711c0;
        case 0x4711c4u: goto label_4711c4;
        case 0x4711c8u: goto label_4711c8;
        case 0x4711ccu: goto label_4711cc;
        case 0x4711d0u: goto label_4711d0;
        case 0x4711d4u: goto label_4711d4;
        case 0x4711d8u: goto label_4711d8;
        case 0x4711dcu: goto label_4711dc;
        case 0x4711e0u: goto label_4711e0;
        case 0x4711e4u: goto label_4711e4;
        case 0x4711e8u: goto label_4711e8;
        case 0x4711ecu: goto label_4711ec;
        case 0x4711f0u: goto label_4711f0;
        case 0x4711f4u: goto label_4711f4;
        case 0x4711f8u: goto label_4711f8;
        case 0x4711fcu: goto label_4711fc;
        case 0x471200u: goto label_471200;
        case 0x471204u: goto label_471204;
        case 0x471208u: goto label_471208;
        case 0x47120cu: goto label_47120c;
        case 0x471210u: goto label_471210;
        case 0x471214u: goto label_471214;
        case 0x471218u: goto label_471218;
        case 0x47121cu: goto label_47121c;
        case 0x471220u: goto label_471220;
        case 0x471224u: goto label_471224;
        case 0x471228u: goto label_471228;
        case 0x47122cu: goto label_47122c;
        case 0x471230u: goto label_471230;
        case 0x471234u: goto label_471234;
        case 0x471238u: goto label_471238;
        case 0x47123cu: goto label_47123c;
        case 0x471240u: goto label_471240;
        case 0x471244u: goto label_471244;
        case 0x471248u: goto label_471248;
        case 0x47124cu: goto label_47124c;
        case 0x471250u: goto label_471250;
        case 0x471254u: goto label_471254;
        case 0x471258u: goto label_471258;
        case 0x47125cu: goto label_47125c;
        case 0x471260u: goto label_471260;
        case 0x471264u: goto label_471264;
        case 0x471268u: goto label_471268;
        case 0x47126cu: goto label_47126c;
        case 0x471270u: goto label_471270;
        case 0x471274u: goto label_471274;
        case 0x471278u: goto label_471278;
        case 0x47127cu: goto label_47127c;
        case 0x471280u: goto label_471280;
        case 0x471284u: goto label_471284;
        case 0x471288u: goto label_471288;
        case 0x47128cu: goto label_47128c;
        case 0x471290u: goto label_471290;
        case 0x471294u: goto label_471294;
        case 0x471298u: goto label_471298;
        case 0x47129cu: goto label_47129c;
        default: break;
    }

    ctx->pc = 0x471120u;

label_471120:
    // 0x471120: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x471120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_471124:
    // 0x471124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x471124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_471128:
    // 0x471128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x471128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47112c:
    // 0x47112c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_471130:
    // 0x471130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x471130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471134:
    // 0x471134: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x471134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_471138:
    // 0x471138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47113c:
    if (ctx->pc == 0x47113Cu) {
        ctx->pc = 0x471140u;
        goto label_471140;
    }
    ctx->pc = 0x471138u;
    {
        const bool branch_taken_0x471138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471138) {
            ctx->pc = 0x47114Cu;
            goto label_47114c;
        }
    }
    ctx->pc = 0x471140u;
label_471140:
    // 0x471140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x471140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471144:
    // 0x471144: 0x10000050  b           . + 4 + (0x50 << 2)
label_471148:
    if (ctx->pc == 0x471148u) {
        ctx->pc = 0x47114Cu;
        goto label_47114c;
    }
    ctx->pc = 0x471144u;
    {
        const bool branch_taken_0x471144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471144) {
            ctx->pc = 0x471288u;
            goto label_471288;
        }
    }
    ctx->pc = 0x47114Cu;
label_47114c:
    // 0x47114c: 0x8f82c060  lw          $v0, -0x3FA0($gp)
    ctx->pc = 0x47114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951008)));
label_471150:
    // 0x471150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_471154:
    if (ctx->pc == 0x471154u) {
        ctx->pc = 0x471158u;
        goto label_471158;
    }
    ctx->pc = 0x471150u;
    {
        const bool branch_taken_0x471150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471150) {
            ctx->pc = 0x471164u;
            goto label_471164;
        }
    }
    ctx->pc = 0x471158u;
label_471158:
    // 0x471158: 0x8f91c060  lw          $s1, -0x3FA0($gp)
    ctx->pc = 0x471158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951008)));
label_47115c:
    // 0x47115c: 0x10000003  b           . + 4 + (0x3 << 2)
label_471160:
    if (ctx->pc == 0x471160u) {
        ctx->pc = 0x471164u;
        goto label_471164;
    }
    ctx->pc = 0x47115Cu;
    {
        const bool branch_taken_0x47115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47115c) {
            ctx->pc = 0x47116Cu;
            goto label_47116c;
        }
    }
    ctx->pc = 0x471164u;
label_471164:
    // 0x471164: 0x8f91c050  lw          $s1, -0x3FB0($gp)
    ctx->pc = 0x471164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_471168:
    // 0x471168: 0xaf80c060  sw          $zero, -0x3FA0($gp)
    ctx->pc = 0x471168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951008), GPR_U32(ctx, 0));
label_47116c:
    // 0x47116c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471170:
    // 0x471170: 0xc105f9e  jal         func_417E78
label_471174:
    if (ctx->pc == 0x471174u) {
        ctx->pc = 0x471178u;
        goto label_471178;
    }
    ctx->pc = 0x471170u;
    SET_GPR_U32(ctx, 31, 0x471178u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x471170u, 0x471178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471178u;
label_471178:
    // 0x471178: 0x8f82c060  lw          $v0, -0x3FA0($gp)
    ctx->pc = 0x471178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951008)));
label_47117c:
    // 0x47117c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_471180:
    if (ctx->pc == 0x471180u) {
        ctx->pc = 0x471184u;
        goto label_471184;
    }
    ctx->pc = 0x47117Cu;
    {
        const bool branch_taken_0x47117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47117c) {
            ctx->pc = 0x471280u;
            goto label_471280;
        }
    }
    ctx->pc = 0x471184u;
label_471184:
    // 0x471184: 0xaf80c060  sw          $zero, -0x3FA0($gp)
    ctx->pc = 0x471184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951008), GPR_U32(ctx, 0));
label_471188:
    // 0x471188: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x471188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_47118c:
    // 0x47118c: 0xc0eb742  jal         func_3ADD08
label_471190:
    if (ctx->pc == 0x471190u) {
        ctx->pc = 0x471194u;
        goto label_471194;
    }
    ctx->pc = 0x47118Cu;
    SET_GPR_U32(ctx, 31, 0x471194u);
    ctx->pc = 0x3ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADD08u, 0x47118Cu, 0x471194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471194u;
label_471194:
    // 0x471194: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x471194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_471198:
    // 0x471198: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x471198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_47119c:
    // 0x47119c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x47119cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4711a0:
    // 0x4711a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4711a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4711a4:
    // 0x4711a4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4711a8:
    if (ctx->pc == 0x4711A8u) {
        ctx->pc = 0x4711ACu;
        goto label_4711ac;
    }
    ctx->pc = 0x4711A4u;
    {
        const bool branch_taken_0x4711a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4711a4) {
            ctx->pc = 0x471250u;
            goto label_471250;
        }
    }
    ctx->pc = 0x4711ACu;
label_4711ac:
    // 0x4711ac: 0x8f82b378  lw          $v0, -0x4C88($gp)
    ctx->pc = 0x4711acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947704)));
label_4711b0:
    // 0x4711b0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4711b4:
    if (ctx->pc == 0x4711B4u) {
        ctx->pc = 0x4711B8u;
        goto label_4711b8;
    }
    ctx->pc = 0x4711B0u;
    {
        const bool branch_taken_0x4711b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4711b0) {
            ctx->pc = 0x471250u;
            goto label_471250;
        }
    }
    ctx->pc = 0x4711B8u;
label_4711b8:
    // 0x4711b8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4711b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4711bc:
    // 0x4711bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4711bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4711c0:
    // 0x4711c0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x4711c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4711c4:
    // 0x4711c4: 0xc115ee8  jal         func_457BA0
label_4711c8:
    if (ctx->pc == 0x4711C8u) {
        ctx->pc = 0x4711CCu;
        goto label_4711cc;
    }
    ctx->pc = 0x4711C4u;
    SET_GPR_U32(ctx, 31, 0x4711CCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4711C4u, 0x4711CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4711CCu;
label_4711cc:
    // 0x4711cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4711d0:
    if (ctx->pc == 0x4711D0u) {
        ctx->pc = 0x4711D4u;
        goto label_4711d4;
    }
    ctx->pc = 0x4711CCu;
    {
        const bool branch_taken_0x4711cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4711cc) {
            ctx->pc = 0x471250u;
            goto label_471250;
        }
    }
    ctx->pc = 0x4711D4u;
label_4711d4:
    // 0x4711d4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4711d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4711d8:
    // 0x4711d8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4711dc:
    if (ctx->pc == 0x4711DCu) {
        ctx->pc = 0x4711E0u;
        goto label_4711e0;
    }
    ctx->pc = 0x4711D8u;
    {
        const bool branch_taken_0x4711d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4711d8) {
            ctx->pc = 0x471250u;
            goto label_471250;
        }
    }
    ctx->pc = 0x4711E0u;
label_4711e0:
    // 0x4711e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4711e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4711e4:
    // 0x4711e4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4711e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4711e8:
    // 0x4711e8: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x4711e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_4711ec:
    // 0x4711ec: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4711ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4711f0:
    // 0x4711f0: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x4711f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4711f4:
    // 0x4711f4: 0x2408018d  addiu       $t0, $zero, 0x18D
    ctx->pc = 0x4711f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
label_4711f8:
    // 0x4711f8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4711f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4711fc:
    // 0x4711fc: 0x2529ff80  addiu       $t1, $t1, -0x80
    ctx->pc = 0x4711fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
label_471200:
    // 0x471200: 0xc113940  jal         func_44E500
label_471204:
    if (ctx->pc == 0x471204u) {
        ctx->pc = 0x471208u;
        goto label_471208;
    }
    ctx->pc = 0x471200u;
    SET_GPR_U32(ctx, 31, 0x471208u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471200u, 0x471208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471208u;
label_471208:
    // 0x471208: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x471208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47120c:
    // 0x47120c: 0x2785b350  addiu       $a1, $gp, -0x4CB0
    ctx->pc = 0x47120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947664));
label_471210:
    // 0x471210: 0xc115c24  jal         func_457090
label_471214:
    if (ctx->pc == 0x471214u) {
        ctx->pc = 0x471218u;
        goto label_471218;
    }
    ctx->pc = 0x471210u;
    SET_GPR_U32(ctx, 31, 0x471218u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471210u, 0x471218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471218u;
label_471218:
    // 0x471218: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x471218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47121c:
    // 0x47121c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x47121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_471220:
    // 0x471220: 0x40f809  jalr        $v0
label_471224:
    if (ctx->pc == 0x471224u) {
        ctx->pc = 0x471228u;
        goto label_471228;
    }
    ctx->pc = 0x471220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471220u, 0x471228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471228u;
label_471228:
    // 0x471228: 0xaf82b378  sw          $v0, -0x4C88($gp)
    ctx->pc = 0x471228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947704), GPR_U32(ctx, 2));
label_47122c:
    // 0x47122c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_471230:
    // 0x471230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471234:
    if (ctx->pc == 0x471234u) {
        ctx->pc = 0x471238u;
        goto label_471238;
    }
    ctx->pc = 0x471230u;
    {
        const bool branch_taken_0x471230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471230) {
            ctx->pc = 0x471240u;
            goto label_471240;
        }
    }
    ctx->pc = 0x471238u;
label_471238:
    // 0x471238: 0xd  break       0
    ctx->pc = 0x471238u;
    runtime->handleBreak(rdram, ctx);
label_47123c:
    // 0x47123c: 0x0  nop
    ctx->pc = 0x47123cu;
    // NOP
label_471240:
    // 0x471240: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x471240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_471244:
    // 0x471244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x471244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471248:
    // 0x471248: 0xc11392c  jal         func_44E4B0
label_47124c:
    if (ctx->pc == 0x47124Cu) {
        ctx->pc = 0x471250u;
        goto label_471250;
    }
    ctx->pc = 0x471248u;
    SET_GPR_U32(ctx, 31, 0x471250u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471248u, 0x471250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471250u;
label_471250:
    // 0x471250: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x471250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_471254:
    // 0x471254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471258:
    // 0x471258: 0x0  nop
    ctx->pc = 0x471258u;
    // NOP
label_47125c:
    // 0x47125c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x47125cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_471260:
    // 0x471260: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x471260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_471264:
    // 0x471264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471268:
    // 0x471268: 0x0  nop
    ctx->pc = 0x471268u;
    // NOP
label_47126c:
    // 0x47126c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x47126cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_471270:
    // 0x471270: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x471270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_471274:
    // 0x471274: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x471274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_471278:
    // 0x471278: 0xc0eb5ce  jal         func_3AD738
label_47127c:
    if (ctx->pc == 0x47127Cu) {
        ctx->pc = 0x471280u;
        goto label_471280;
    }
    ctx->pc = 0x471278u;
    SET_GPR_U32(ctx, 31, 0x471280u);
    ctx->pc = 0x3AD738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD738u, 0x471278u, 0x471280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471280u;
label_471280:
    // 0x471280: 0xaf80c04c  sw          $zero, -0x3FB4($gp)
    ctx->pc = 0x471280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950988), GPR_U32(ctx, 0));
label_471284:
    // 0x471284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471288:
    // 0x471288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x471288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47128c:
    // 0x47128c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47128cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471290:
    // 0x471290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x471290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_471294:
    // 0x471294: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x471294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_471298:
    // 0x471298: 0x3e00008  jr          $ra
label_47129c:
    if (ctx->pc == 0x47129Cu) {
        ctx->pc = 0x4712A0u;
        goto label_fallthrough_0x471298;
    }
    ctx->pc = 0x471298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471298:
    ctx->pc = 0x4712A0u;
}
