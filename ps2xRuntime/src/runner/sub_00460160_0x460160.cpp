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

// Function: sub_00460160
// Address: 0x460160 - 0x460360
void sub_00460160_0x460160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460160_0x460160");
#endif

    switch (ctx->pc) {
        case 0x460160u: goto label_460160;
        case 0x460164u: goto label_460164;
        case 0x460168u: goto label_460168;
        case 0x46016cu: goto label_46016c;
        case 0x460170u: goto label_460170;
        case 0x460174u: goto label_460174;
        case 0x460178u: goto label_460178;
        case 0x46017cu: goto label_46017c;
        case 0x460180u: goto label_460180;
        case 0x460184u: goto label_460184;
        case 0x460188u: goto label_460188;
        case 0x46018cu: goto label_46018c;
        case 0x460190u: goto label_460190;
        case 0x460194u: goto label_460194;
        case 0x460198u: goto label_460198;
        case 0x46019cu: goto label_46019c;
        case 0x4601a0u: goto label_4601a0;
        case 0x4601a4u: goto label_4601a4;
        case 0x4601a8u: goto label_4601a8;
        case 0x4601acu: goto label_4601ac;
        case 0x4601b0u: goto label_4601b0;
        case 0x4601b4u: goto label_4601b4;
        case 0x4601b8u: goto label_4601b8;
        case 0x4601bcu: goto label_4601bc;
        case 0x4601c0u: goto label_4601c0;
        case 0x4601c4u: goto label_4601c4;
        case 0x4601c8u: goto label_4601c8;
        case 0x4601ccu: goto label_4601cc;
        case 0x4601d0u: goto label_4601d0;
        case 0x4601d4u: goto label_4601d4;
        case 0x4601d8u: goto label_4601d8;
        case 0x4601dcu: goto label_4601dc;
        case 0x4601e0u: goto label_4601e0;
        case 0x4601e4u: goto label_4601e4;
        case 0x4601e8u: goto label_4601e8;
        case 0x4601ecu: goto label_4601ec;
        case 0x4601f0u: goto label_4601f0;
        case 0x4601f4u: goto label_4601f4;
        case 0x4601f8u: goto label_4601f8;
        case 0x4601fcu: goto label_4601fc;
        case 0x460200u: goto label_460200;
        case 0x460204u: goto label_460204;
        case 0x460208u: goto label_460208;
        case 0x46020cu: goto label_46020c;
        case 0x460210u: goto label_460210;
        case 0x460214u: goto label_460214;
        case 0x460218u: goto label_460218;
        case 0x46021cu: goto label_46021c;
        case 0x460220u: goto label_460220;
        case 0x460224u: goto label_460224;
        case 0x460228u: goto label_460228;
        case 0x46022cu: goto label_46022c;
        case 0x460230u: goto label_460230;
        case 0x460234u: goto label_460234;
        case 0x460238u: goto label_460238;
        case 0x46023cu: goto label_46023c;
        case 0x460240u: goto label_460240;
        case 0x460244u: goto label_460244;
        case 0x460248u: goto label_460248;
        case 0x46024cu: goto label_46024c;
        case 0x460250u: goto label_460250;
        case 0x460254u: goto label_460254;
        case 0x460258u: goto label_460258;
        case 0x46025cu: goto label_46025c;
        case 0x460260u: goto label_460260;
        case 0x460264u: goto label_460264;
        case 0x460268u: goto label_460268;
        case 0x46026cu: goto label_46026c;
        case 0x460270u: goto label_460270;
        case 0x460274u: goto label_460274;
        case 0x460278u: goto label_460278;
        case 0x46027cu: goto label_46027c;
        case 0x460280u: goto label_460280;
        case 0x460284u: goto label_460284;
        case 0x460288u: goto label_460288;
        case 0x46028cu: goto label_46028c;
        case 0x460290u: goto label_460290;
        case 0x460294u: goto label_460294;
        case 0x460298u: goto label_460298;
        case 0x46029cu: goto label_46029c;
        case 0x4602a0u: goto label_4602a0;
        case 0x4602a4u: goto label_4602a4;
        case 0x4602a8u: goto label_4602a8;
        case 0x4602acu: goto label_4602ac;
        case 0x4602b0u: goto label_4602b0;
        case 0x4602b4u: goto label_4602b4;
        case 0x4602b8u: goto label_4602b8;
        case 0x4602bcu: goto label_4602bc;
        case 0x4602c0u: goto label_4602c0;
        case 0x4602c4u: goto label_4602c4;
        case 0x4602c8u: goto label_4602c8;
        case 0x4602ccu: goto label_4602cc;
        case 0x4602d0u: goto label_4602d0;
        case 0x4602d4u: goto label_4602d4;
        case 0x4602d8u: goto label_4602d8;
        case 0x4602dcu: goto label_4602dc;
        case 0x4602e0u: goto label_4602e0;
        case 0x4602e4u: goto label_4602e4;
        case 0x4602e8u: goto label_4602e8;
        case 0x4602ecu: goto label_4602ec;
        case 0x4602f0u: goto label_4602f0;
        case 0x4602f4u: goto label_4602f4;
        case 0x4602f8u: goto label_4602f8;
        case 0x4602fcu: goto label_4602fc;
        case 0x460300u: goto label_460300;
        case 0x460304u: goto label_460304;
        case 0x460308u: goto label_460308;
        case 0x46030cu: goto label_46030c;
        case 0x460310u: goto label_460310;
        case 0x460314u: goto label_460314;
        case 0x460318u: goto label_460318;
        case 0x46031cu: goto label_46031c;
        case 0x460320u: goto label_460320;
        case 0x460324u: goto label_460324;
        case 0x460328u: goto label_460328;
        case 0x46032cu: goto label_46032c;
        case 0x460330u: goto label_460330;
        case 0x460334u: goto label_460334;
        case 0x460338u: goto label_460338;
        case 0x46033cu: goto label_46033c;
        case 0x460340u: goto label_460340;
        case 0x460344u: goto label_460344;
        case 0x460348u: goto label_460348;
        case 0x46034cu: goto label_46034c;
        case 0x460350u: goto label_460350;
        case 0x460354u: goto label_460354;
        case 0x460358u: goto label_460358;
        case 0x46035cu: goto label_46035c;
        default: break;
    }

    ctx->pc = 0x460160u;

label_460160:
    // 0x460160: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x460160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_460164:
    // 0x460164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x460164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_460168:
    // 0x460168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x460168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46016c:
    // 0x46016c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_460170:
    // 0x460170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x460170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_460174:
    // 0x460174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460178:
    // 0x460178: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x460178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_46017c:
    // 0x46017c: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x46017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_460180:
    // 0x460180: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x460180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_460184:
    // 0x460184: 0x2785b198  addiu       $a1, $gp, -0x4E68
    ctx->pc = 0x460184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947224));
label_460188:
    // 0x460188: 0xc040304  jal         func_100C10
label_46018c:
    if (ctx->pc == 0x46018Cu) {
        ctx->pc = 0x460190u;
        goto label_460190;
    }
    ctx->pc = 0x460188u;
    SET_GPR_U32(ctx, 31, 0x460190u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x460188u, 0x460190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460190u;
label_460190:
    // 0x460190: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x460190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460194:
    // 0x460194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x460194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460198:
    // 0x460198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x460198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46019c:
    // 0x46019c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x46019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4601a0:
    // 0x4601a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4601a4:
    if (ctx->pc == 0x4601A4u) {
        ctx->pc = 0x4601A8u;
        goto label_4601a8;
    }
    ctx->pc = 0x4601A0u;
    {
        const bool branch_taken_0x4601a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601a0) {
            ctx->pc = 0x4601C4u;
            goto label_4601c4;
        }
    }
    ctx->pc = 0x4601A8u;
label_4601a8:
    // 0x4601a8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x4601a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4601ac:
    // 0x4601ac: 0xc0bc60c  jal         func_2F1830
label_4601b0:
    if (ctx->pc == 0x4601B0u) {
        ctx->pc = 0x4601B4u;
        goto label_4601b4;
    }
    ctx->pc = 0x4601ACu;
    SET_GPR_U32(ctx, 31, 0x4601B4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4601ACu, 0x4601B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4601B4u;
label_4601b4:
    // 0x4601b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4601b8:
    if (ctx->pc == 0x4601B8u) {
        ctx->pc = 0x4601BCu;
        goto label_4601bc;
    }
    ctx->pc = 0x4601B4u;
    {
        const bool branch_taken_0x4601b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601b4) {
            ctx->pc = 0x4601C4u;
            goto label_4601c4;
        }
    }
    ctx->pc = 0x4601BCu;
label_4601bc:
    // 0x4601bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4601bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4601c0:
    // 0x4601c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4601c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4601c4:
    // 0x4601c4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4601c8:
    if (ctx->pc == 0x4601C8u) {
        ctx->pc = 0x4601CCu;
        goto label_4601cc;
    }
    ctx->pc = 0x4601C4u;
    {
        const bool branch_taken_0x4601c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601c4) {
            ctx->pc = 0x4601E8u;
            goto label_4601e8;
        }
    }
    ctx->pc = 0x4601CCu;
label_4601cc:
    // 0x4601cc: 0x2784bfb8  addiu       $a0, $gp, -0x4048
    ctx->pc = 0x4601ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_4601d0:
    // 0x4601d0: 0xc0bc60c  jal         func_2F1830
label_4601d4:
    if (ctx->pc == 0x4601D4u) {
        ctx->pc = 0x4601D8u;
        goto label_4601d8;
    }
    ctx->pc = 0x4601D0u;
    SET_GPR_U32(ctx, 31, 0x4601D8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4601D0u, 0x4601D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4601D8u;
label_4601d8:
    // 0x4601d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4601dc:
    if (ctx->pc == 0x4601DCu) {
        ctx->pc = 0x4601E0u;
        goto label_4601e0;
    }
    ctx->pc = 0x4601D8u;
    {
        const bool branch_taken_0x4601d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601d8) {
            ctx->pc = 0x4601E8u;
            goto label_4601e8;
        }
    }
    ctx->pc = 0x4601E0u;
label_4601e0:
    // 0x4601e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4601e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4601e4:
    // 0x4601e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x4601e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4601e8:
    // 0x4601e8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_4601ec:
    if (ctx->pc == 0x4601ECu) {
        ctx->pc = 0x4601F0u;
        goto label_4601f0;
    }
    ctx->pc = 0x4601E8u;
    {
        const bool branch_taken_0x4601e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601e8) {
            ctx->pc = 0x460210u;
            goto label_460210;
        }
    }
    ctx->pc = 0x4601F0u;
label_4601f0:
    // 0x4601f0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4601f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_4601f4:
    // 0x4601f4: 0x24844de8  addiu       $a0, $a0, 0x4DE8
    ctx->pc = 0x4601f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19944));
label_4601f8:
    // 0x4601f8: 0xc0bc60c  jal         func_2F1830
label_4601fc:
    if (ctx->pc == 0x4601FCu) {
        ctx->pc = 0x460200u;
        goto label_460200;
    }
    ctx->pc = 0x4601F8u;
    SET_GPR_U32(ctx, 31, 0x460200u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4601F8u, 0x460200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460200u;
label_460200:
    // 0x460200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460204:
    if (ctx->pc == 0x460204u) {
        ctx->pc = 0x460208u;
        goto label_460208;
    }
    ctx->pc = 0x460200u;
    {
        const bool branch_taken_0x460200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460200) {
            ctx->pc = 0x460210u;
            goto label_460210;
        }
    }
    ctx->pc = 0x460208u;
label_460208:
    // 0x460208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46020c:
    // 0x46020c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46020cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460210:
    // 0x460210: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x460210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_460214:
    // 0x460214: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_460218:
    if (ctx->pc == 0x460218u) {
        ctx->pc = 0x46021Cu;
        goto label_46021c;
    }
    ctx->pc = 0x460214u;
    {
        const bool branch_taken_0x460214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x460214) {
            ctx->pc = 0x4602C4u;
            goto label_4602c4;
        }
    }
    ctx->pc = 0x46021Cu;
label_46021c:
    // 0x46021c: 0x8f82b1d8  lw          $v0, -0x4E28($gp)
    ctx->pc = 0x46021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947288)));
label_460220:
    // 0x460220: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_460224:
    if (ctx->pc == 0x460224u) {
        ctx->pc = 0x460228u;
        goto label_460228;
    }
    ctx->pc = 0x460220u;
    {
        const bool branch_taken_0x460220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460220) {
            ctx->pc = 0x4602C4u;
            goto label_4602c4;
        }
    }
    ctx->pc = 0x460228u;
label_460228:
    // 0x460228: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46022c:
    // 0x46022c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460230:
    // 0x460230: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x460230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_460234:
    // 0x460234: 0xc115ee8  jal         func_457BA0
label_460238:
    if (ctx->pc == 0x460238u) {
        ctx->pc = 0x46023Cu;
        goto label_46023c;
    }
    ctx->pc = 0x460234u;
    SET_GPR_U32(ctx, 31, 0x46023Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460234u, 0x46023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46023Cu;
label_46023c:
    // 0x46023c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_460240:
    if (ctx->pc == 0x460240u) {
        ctx->pc = 0x460244u;
        goto label_460244;
    }
    ctx->pc = 0x46023Cu;
    {
        const bool branch_taken_0x46023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46023c) {
            ctx->pc = 0x4602C4u;
            goto label_4602c4;
        }
    }
    ctx->pc = 0x460244u;
label_460244:
    // 0x460244: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x460244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_460248:
    // 0x460248: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46024c:
    if (ctx->pc == 0x46024Cu) {
        ctx->pc = 0x460250u;
        goto label_460250;
    }
    ctx->pc = 0x460248u;
    {
        const bool branch_taken_0x460248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460248) {
            ctx->pc = 0x4602C4u;
            goto label_4602c4;
        }
    }
    ctx->pc = 0x460250u;
label_460250:
    // 0x460250: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x460250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_460254:
    // 0x460254: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460258:
    // 0x460258: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x460258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_46025c:
    // 0x46025c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46025cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460260:
    // 0x460260: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460264:
    // 0x460264: 0x240804f4  addiu       $t0, $zero, 0x4F4
    ctx->pc = 0x460264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1268));
label_460268:
    // 0x460268: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x460268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46026c:
    // 0x46026c: 0x2529ede0  addiu       $t1, $t1, -0x1220
    ctx->pc = 0x46026cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962656));
label_460270:
    // 0x460270: 0xc113940  jal         func_44E500
label_460274:
    if (ctx->pc == 0x460274u) {
        ctx->pc = 0x460278u;
        goto label_460278;
    }
    ctx->pc = 0x460270u;
    SET_GPR_U32(ctx, 31, 0x460278u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460270u, 0x460278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460278u;
label_460278:
    // 0x460278: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x460278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_46027c:
    // 0x46027c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46027cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460280:
    // 0x460280: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x460280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
label_460284:
    // 0x460284: 0xc115c24  jal         func_457090
label_460288:
    if (ctx->pc == 0x460288u) {
        ctx->pc = 0x46028Cu;
        goto label_46028c;
    }
    ctx->pc = 0x460284u;
    SET_GPR_U32(ctx, 31, 0x46028Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460284u, 0x46028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46028Cu;
label_46028c:
    // 0x46028c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_460290:
    // 0x460290: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x460290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_460294:
    // 0x460294: 0x40f809  jalr        $v0
label_460298:
    if (ctx->pc == 0x460298u) {
        ctx->pc = 0x46029Cu;
        goto label_46029c;
    }
    ctx->pc = 0x460294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46029Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460294u, 0x46029Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46029Cu;
label_46029c:
    // 0x46029c: 0xaf82b1d8  sw          $v0, -0x4E28($gp)
    ctx->pc = 0x46029cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947288), GPR_U32(ctx, 2));
label_4602a0:
    // 0x4602a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4602a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4602a4:
    // 0x4602a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4602a8:
    if (ctx->pc == 0x4602A8u) {
        ctx->pc = 0x4602ACu;
        goto label_4602ac;
    }
    ctx->pc = 0x4602A4u;
    {
        const bool branch_taken_0x4602a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4602a4) {
            ctx->pc = 0x4602B4u;
            goto label_4602b4;
        }
    }
    ctx->pc = 0x4602ACu;
label_4602ac:
    // 0x4602ac: 0xd  break       0
    ctx->pc = 0x4602acu;
    runtime->handleBreak(rdram, ctx);
label_4602b0:
    // 0x4602b0: 0x0  nop
    ctx->pc = 0x4602b0u;
    // NOP
label_4602b4:
    // 0x4602b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4602b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4602b8:
    // 0x4602b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4602b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4602bc:
    // 0x4602bc: 0xc11392c  jal         func_44E4B0
label_4602c0:
    if (ctx->pc == 0x4602C0u) {
        ctx->pc = 0x4602C4u;
        goto label_4602c4;
    }
    ctx->pc = 0x4602BCu;
    SET_GPR_U32(ctx, 31, 0x4602C4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4602BCu, 0x4602C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4602C4u;
label_4602c4:
    // 0x4602c4: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_4602c8:
    if (ctx->pc == 0x4602C8u) {
        ctx->pc = 0x4602CCu;
        goto label_4602cc;
    }
    ctx->pc = 0x4602C4u;
    {
        const bool branch_taken_0x4602c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4602c4) {
            ctx->pc = 0x4602F8u;
            goto label_4602f8;
        }
    }
    ctx->pc = 0x4602CCu;
label_4602cc:
    // 0x4602cc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x4602ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_4602d0:
    // 0x4602d0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x4602d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4602d4:
    // 0x4602d4: 0xc042844  jal         func_10A110
label_4602d8:
    if (ctx->pc == 0x4602D8u) {
        ctx->pc = 0x4602DCu;
        goto label_4602dc;
    }
    ctx->pc = 0x4602D4u;
    SET_GPR_U32(ctx, 31, 0x4602DCu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x4602D4u, 0x4602DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4602DCu;
label_4602dc:
    // 0x4602dc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4602dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4602e0:
    // 0x4602e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4602e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4602e4:
    // 0x4602e4: 0xc0402d4  jal         func_100B50
label_4602e8:
    if (ctx->pc == 0x4602E8u) {
        ctx->pc = 0x4602ECu;
        goto label_4602ec;
    }
    ctx->pc = 0x4602E4u;
    SET_GPR_U32(ctx, 31, 0x4602ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4602E4u, 0x4602ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4602ECu;
label_4602ec:
    // 0x4602ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4602ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4602f0:
    // 0x4602f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_4602f4:
    if (ctx->pc == 0x4602F4u) {
        ctx->pc = 0x4602F8u;
        goto label_4602f8;
    }
    ctx->pc = 0x4602F0u;
    {
        const bool branch_taken_0x4602f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4602f0) {
            ctx->pc = 0x46033Cu;
            goto label_46033c;
        }
    }
    ctx->pc = 0x4602F8u;
label_4602f8:
    // 0x4602f8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4602f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4602fc:
    // 0x4602fc: 0x2785b1e0  addiu       $a1, $gp, -0x4E20
    ctx->pc = 0x4602fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947296));
label_460300:
    // 0x460300: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x460300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_460304:
    // 0x460304: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x460304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_460308:
    // 0x460308: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x460308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_46030c:
    // 0x46030c: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x46030cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_460310:
    // 0x460310: 0xc0424a8  jal         func_1092A0
label_460314:
    if (ctx->pc == 0x460314u) {
        ctx->pc = 0x460318u;
        goto label_460318;
    }
    ctx->pc = 0x460310u;
    SET_GPR_U32(ctx, 31, 0x460318u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x460310u, 0x460318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460318u;
label_460318:
    // 0x460318: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x460318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_46031c:
    // 0x46031c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x46031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_460320:
    // 0x460320: 0xc042844  jal         func_10A110
label_460324:
    if (ctx->pc == 0x460324u) {
        ctx->pc = 0x460328u;
        goto label_460328;
    }
    ctx->pc = 0x460320u;
    SET_GPR_U32(ctx, 31, 0x460328u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x460320u, 0x460328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460328u;
label_460328:
    // 0x460328: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x460328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46032c:
    // 0x46032c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46032cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460330:
    // 0x460330: 0xc0402d4  jal         func_100B50
label_460334:
    if (ctx->pc == 0x460334u) {
        ctx->pc = 0x460338u;
        goto label_460338;
    }
    ctx->pc = 0x460330u;
    SET_GPR_U32(ctx, 31, 0x460338u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x460330u, 0x460338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460338u;
label_460338:
    // 0x460338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x460338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46033c:
    // 0x46033c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_460340:
    // 0x460340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x460340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_460344:
    // 0x460344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x460344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_460348:
    // 0x460348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x460348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46034c:
    // 0x46034c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460350:
    // 0x460350: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x460350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_460354:
    // 0x460354: 0x3e00008  jr          $ra
label_460358:
    if (ctx->pc == 0x460358u) {
        ctx->pc = 0x46035Cu;
        goto label_46035c;
    }
    ctx->pc = 0x460354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46035Cu;
label_46035c:
    // 0x46035c: 0x0  nop
    ctx->pc = 0x46035cu;
    // NOP
    ctx->pc = 0x460360u;
}
