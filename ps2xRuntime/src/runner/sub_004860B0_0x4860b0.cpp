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

// Function: sub_004860B0
// Address: 0x4860b0 - 0x486330
void sub_004860B0_0x4860b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004860B0_0x4860b0");
#endif

    switch (ctx->pc) {
        case 0x4860b0u: goto label_4860b0;
        case 0x4860b4u: goto label_4860b4;
        case 0x4860b8u: goto label_4860b8;
        case 0x4860bcu: goto label_4860bc;
        case 0x4860c0u: goto label_4860c0;
        case 0x4860c4u: goto label_4860c4;
        case 0x4860c8u: goto label_4860c8;
        case 0x4860ccu: goto label_4860cc;
        case 0x4860d0u: goto label_4860d0;
        case 0x4860d4u: goto label_4860d4;
        case 0x4860d8u: goto label_4860d8;
        case 0x4860dcu: goto label_4860dc;
        case 0x4860e0u: goto label_4860e0;
        case 0x4860e4u: goto label_4860e4;
        case 0x4860e8u: goto label_4860e8;
        case 0x4860ecu: goto label_4860ec;
        case 0x4860f0u: goto label_4860f0;
        case 0x4860f4u: goto label_4860f4;
        case 0x4860f8u: goto label_4860f8;
        case 0x4860fcu: goto label_4860fc;
        case 0x486100u: goto label_486100;
        case 0x486104u: goto label_486104;
        case 0x486108u: goto label_486108;
        case 0x48610cu: goto label_48610c;
        case 0x486110u: goto label_486110;
        case 0x486114u: goto label_486114;
        case 0x486118u: goto label_486118;
        case 0x48611cu: goto label_48611c;
        case 0x486120u: goto label_486120;
        case 0x486124u: goto label_486124;
        case 0x486128u: goto label_486128;
        case 0x48612cu: goto label_48612c;
        case 0x486130u: goto label_486130;
        case 0x486134u: goto label_486134;
        case 0x486138u: goto label_486138;
        case 0x48613cu: goto label_48613c;
        case 0x486140u: goto label_486140;
        case 0x486144u: goto label_486144;
        case 0x486148u: goto label_486148;
        case 0x48614cu: goto label_48614c;
        case 0x486150u: goto label_486150;
        case 0x486154u: goto label_486154;
        case 0x486158u: goto label_486158;
        case 0x48615cu: goto label_48615c;
        case 0x486160u: goto label_486160;
        case 0x486164u: goto label_486164;
        case 0x486168u: goto label_486168;
        case 0x48616cu: goto label_48616c;
        case 0x486170u: goto label_486170;
        case 0x486174u: goto label_486174;
        case 0x486178u: goto label_486178;
        case 0x48617cu: goto label_48617c;
        case 0x486180u: goto label_486180;
        case 0x486184u: goto label_486184;
        case 0x486188u: goto label_486188;
        case 0x48618cu: goto label_48618c;
        case 0x486190u: goto label_486190;
        case 0x486194u: goto label_486194;
        case 0x486198u: goto label_486198;
        case 0x48619cu: goto label_48619c;
        case 0x4861a0u: goto label_4861a0;
        case 0x4861a4u: goto label_4861a4;
        case 0x4861a8u: goto label_4861a8;
        case 0x4861acu: goto label_4861ac;
        case 0x4861b0u: goto label_4861b0;
        case 0x4861b4u: goto label_4861b4;
        case 0x4861b8u: goto label_4861b8;
        case 0x4861bcu: goto label_4861bc;
        case 0x4861c0u: goto label_4861c0;
        case 0x4861c4u: goto label_4861c4;
        case 0x4861c8u: goto label_4861c8;
        case 0x4861ccu: goto label_4861cc;
        case 0x4861d0u: goto label_4861d0;
        case 0x4861d4u: goto label_4861d4;
        case 0x4861d8u: goto label_4861d8;
        case 0x4861dcu: goto label_4861dc;
        case 0x4861e0u: goto label_4861e0;
        case 0x4861e4u: goto label_4861e4;
        case 0x4861e8u: goto label_4861e8;
        case 0x4861ecu: goto label_4861ec;
        case 0x4861f0u: goto label_4861f0;
        case 0x4861f4u: goto label_4861f4;
        case 0x4861f8u: goto label_4861f8;
        case 0x4861fcu: goto label_4861fc;
        case 0x486200u: goto label_486200;
        case 0x486204u: goto label_486204;
        case 0x486208u: goto label_486208;
        case 0x48620cu: goto label_48620c;
        case 0x486210u: goto label_486210;
        case 0x486214u: goto label_486214;
        case 0x486218u: goto label_486218;
        case 0x48621cu: goto label_48621c;
        case 0x486220u: goto label_486220;
        case 0x486224u: goto label_486224;
        case 0x486228u: goto label_486228;
        case 0x48622cu: goto label_48622c;
        case 0x486230u: goto label_486230;
        case 0x486234u: goto label_486234;
        case 0x486238u: goto label_486238;
        case 0x48623cu: goto label_48623c;
        case 0x486240u: goto label_486240;
        case 0x486244u: goto label_486244;
        case 0x486248u: goto label_486248;
        case 0x48624cu: goto label_48624c;
        case 0x486250u: goto label_486250;
        case 0x486254u: goto label_486254;
        case 0x486258u: goto label_486258;
        case 0x48625cu: goto label_48625c;
        case 0x486260u: goto label_486260;
        case 0x486264u: goto label_486264;
        case 0x486268u: goto label_486268;
        case 0x48626cu: goto label_48626c;
        case 0x486270u: goto label_486270;
        case 0x486274u: goto label_486274;
        case 0x486278u: goto label_486278;
        case 0x48627cu: goto label_48627c;
        case 0x486280u: goto label_486280;
        case 0x486284u: goto label_486284;
        case 0x486288u: goto label_486288;
        case 0x48628cu: goto label_48628c;
        case 0x486290u: goto label_486290;
        case 0x486294u: goto label_486294;
        case 0x486298u: goto label_486298;
        case 0x48629cu: goto label_48629c;
        case 0x4862a0u: goto label_4862a0;
        case 0x4862a4u: goto label_4862a4;
        case 0x4862a8u: goto label_4862a8;
        case 0x4862acu: goto label_4862ac;
        case 0x4862b0u: goto label_4862b0;
        case 0x4862b4u: goto label_4862b4;
        case 0x4862b8u: goto label_4862b8;
        case 0x4862bcu: goto label_4862bc;
        case 0x4862c0u: goto label_4862c0;
        case 0x4862c4u: goto label_4862c4;
        case 0x4862c8u: goto label_4862c8;
        case 0x4862ccu: goto label_4862cc;
        case 0x4862d0u: goto label_4862d0;
        case 0x4862d4u: goto label_4862d4;
        case 0x4862d8u: goto label_4862d8;
        case 0x4862dcu: goto label_4862dc;
        case 0x4862e0u: goto label_4862e0;
        case 0x4862e4u: goto label_4862e4;
        case 0x4862e8u: goto label_4862e8;
        case 0x4862ecu: goto label_4862ec;
        case 0x4862f0u: goto label_4862f0;
        case 0x4862f4u: goto label_4862f4;
        case 0x4862f8u: goto label_4862f8;
        case 0x4862fcu: goto label_4862fc;
        case 0x486300u: goto label_486300;
        case 0x486304u: goto label_486304;
        case 0x486308u: goto label_486308;
        case 0x48630cu: goto label_48630c;
        case 0x486310u: goto label_486310;
        case 0x486314u: goto label_486314;
        case 0x486318u: goto label_486318;
        case 0x48631cu: goto label_48631c;
        case 0x486320u: goto label_486320;
        case 0x486324u: goto label_486324;
        case 0x486328u: goto label_486328;
        case 0x48632cu: goto label_48632c;
        default: break;
    }

    ctx->pc = 0x4860b0u;

label_4860b0:
    // 0x4860b0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4860b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4860b4:
    // 0x4860b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4860b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4860b8:
    // 0x4860b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4860b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4860bc:
    // 0x4860bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4860bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4860c0:
    // 0x4860c0: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x4860c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_4860c4:
    // 0x4860c4: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x4860c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_4860c8:
    // 0x4860c8: 0xe7ac0180  swc1        $f12, 0x180($sp)
    ctx->pc = 0x4860c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_4860cc:
    // 0x4860cc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4860ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4860d0:
    // 0x4860d0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4860d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4860d4:
    // 0x4860d4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4860d8:
    if (ctx->pc == 0x4860D8u) {
        ctx->pc = 0x4860DCu;
        goto label_4860dc;
    }
    ctx->pc = 0x4860D4u;
    {
        const bool branch_taken_0x4860d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4860d4) {
            ctx->pc = 0x486184u;
            goto label_486184;
        }
    }
    ctx->pc = 0x4860DCu;
label_4860dc:
    // 0x4860dc: 0x8f82b5bc  lw          $v0, -0x4A44($gp)
    ctx->pc = 0x4860dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948284)));
label_4860e0:
    // 0x4860e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4860e4:
    if (ctx->pc == 0x4860E4u) {
        ctx->pc = 0x4860E8u;
        goto label_4860e8;
    }
    ctx->pc = 0x4860E0u;
    {
        const bool branch_taken_0x4860e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4860e0) {
            ctx->pc = 0x486184u;
            goto label_486184;
        }
    }
    ctx->pc = 0x4860E8u;
label_4860e8:
    // 0x4860e8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4860e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4860ec:
    // 0x4860ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4860ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4860f0:
    // 0x4860f0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x4860f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4860f4:
    // 0x4860f4: 0xc115ee8  jal         func_457BA0
label_4860f8:
    if (ctx->pc == 0x4860F8u) {
        ctx->pc = 0x4860FCu;
        goto label_4860fc;
    }
    ctx->pc = 0x4860F4u;
    SET_GPR_U32(ctx, 31, 0x4860FCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4860F4u, 0x4860FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4860FCu;
label_4860fc:
    // 0x4860fc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_486100:
    if (ctx->pc == 0x486100u) {
        ctx->pc = 0x486104u;
        goto label_486104;
    }
    ctx->pc = 0x4860FCu;
    {
        const bool branch_taken_0x4860fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4860fc) {
            ctx->pc = 0x486184u;
            goto label_486184;
        }
    }
    ctx->pc = 0x486104u;
label_486104:
    // 0x486104: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x486104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_486108:
    // 0x486108: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48610c:
    if (ctx->pc == 0x48610Cu) {
        ctx->pc = 0x486110u;
        goto label_486110;
    }
    ctx->pc = 0x486108u;
    {
        const bool branch_taken_0x486108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486108) {
            ctx->pc = 0x486184u;
            goto label_486184;
        }
    }
    ctx->pc = 0x486110u;
label_486110:
    // 0x486110: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x486110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_486114:
    // 0x486114: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486118:
    // 0x486118: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x486118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_48611c:
    // 0x48611c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48611cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_486120:
    // 0x486120: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x486120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_486124:
    // 0x486124: 0x240800ad  addiu       $t0, $zero, 0xAD
    ctx->pc = 0x486124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_486128:
    // 0x486128: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x486128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48612c:
    // 0x48612c: 0x25293d80  addiu       $t1, $t1, 0x3D80
    ctx->pc = 0x48612cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15744));
label_486130:
    // 0x486130: 0xc113940  jal         func_44E500
label_486134:
    if (ctx->pc == 0x486134u) {
        ctx->pc = 0x486138u;
        goto label_486138;
    }
    ctx->pc = 0x486130u;
    SET_GPR_U32(ctx, 31, 0x486138u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x486130u, 0x486138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486138u;
label_486138:
    // 0x486138: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x486138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48613c:
    // 0x48613c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48613cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_486140:
    // 0x486140: 0x24a53d90  addiu       $a1, $a1, 0x3D90
    ctx->pc = 0x486140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
label_486144:
    // 0x486144: 0xc115c24  jal         func_457090
label_486148:
    if (ctx->pc == 0x486148u) {
        ctx->pc = 0x48614Cu;
        goto label_48614c;
    }
    ctx->pc = 0x486144u;
    SET_GPR_U32(ctx, 31, 0x48614Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x486144u, 0x48614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48614Cu;
label_48614c:
    // 0x48614c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_486150:
    // 0x486150: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x486150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_486154:
    // 0x486154: 0x40f809  jalr        $v0
label_486158:
    if (ctx->pc == 0x486158u) {
        ctx->pc = 0x48615Cu;
        goto label_48615c;
    }
    ctx->pc = 0x486154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48615Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486154u, 0x48615Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48615Cu;
label_48615c:
    // 0x48615c: 0xaf82b5bc  sw          $v0, -0x4A44($gp)
    ctx->pc = 0x48615cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948284), GPR_U32(ctx, 2));
label_486160:
    // 0x486160: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x486160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_486164:
    // 0x486164: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_486168:
    if (ctx->pc == 0x486168u) {
        ctx->pc = 0x48616Cu;
        goto label_48616c;
    }
    ctx->pc = 0x486164u;
    {
        const bool branch_taken_0x486164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486164) {
            ctx->pc = 0x486174u;
            goto label_486174;
        }
    }
    ctx->pc = 0x48616Cu;
label_48616c:
    // 0x48616c: 0xd  break       0
    ctx->pc = 0x48616cu;
    runtime->handleBreak(rdram, ctx);
label_486170:
    // 0x486170: 0x0  nop
    ctx->pc = 0x486170u;
    // NOP
label_486174:
    // 0x486174: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x486174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_486178:
    // 0x486178: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x486178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48617c:
    // 0x48617c: 0xc11392c  jal         func_44E4B0
label_486180:
    if (ctx->pc == 0x486180u) {
        ctx->pc = 0x486184u;
        goto label_486184;
    }
    ctx->pc = 0x48617Cu;
    SET_GPR_U32(ctx, 31, 0x486184u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48617Cu, 0x486184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486184u;
label_486184:
    // 0x486184: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486188:
    // 0x486188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x486188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48618c:
    // 0x48618c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486190:
    // 0x486190: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x486190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_486194:
    // 0x486194: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_486198:
    if (ctx->pc == 0x486198u) {
        ctx->pc = 0x48619Cu;
        goto label_48619c;
    }
    ctx->pc = 0x486194u;
    {
        const bool branch_taken_0x486194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486194) {
            ctx->pc = 0x4861B4u;
            goto label_4861b4;
        }
    }
    ctx->pc = 0x48619Cu;
label_48619c:
    // 0x48619c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861a0:
    // 0x4861a0: 0x8c50007c  lw          $s0, 0x7C($v0)
    ctx->pc = 0x4861a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_4861a4:
    // 0x4861a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4861a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861a8:
    // 0x4861a8: 0x8c510078  lw          $s1, 0x78($v0)
    ctx->pc = 0x4861a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_4861ac:
    // 0x4861ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4861b0:
    if (ctx->pc == 0x4861B0u) {
        ctx->pc = 0x4861B4u;
        goto label_4861b4;
    }
    ctx->pc = 0x4861ACu;
    {
        const bool branch_taken_0x4861ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4861ac) {
            ctx->pc = 0x4861C4u;
            goto label_4861c4;
        }
    }
    ctx->pc = 0x4861B4u;
label_4861b4:
    // 0x4861b4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4861b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861b8:
    // 0x4861b8: 0x8c500078  lw          $s0, 0x78($v0)
    ctx->pc = 0x4861b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_4861bc:
    // 0x4861bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4861bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861c0:
    // 0x4861c0: 0x8c51007c  lw          $s1, 0x7C($v0)
    ctx->pc = 0x4861c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_4861c4:
    // 0x4861c4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4861c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861c8:
    // 0x4861c8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4861cc:
    // 0x4861cc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4861ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4861d0:
    // 0x4861d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4861d4:
    if (ctx->pc == 0x4861D4u) {
        ctx->pc = 0x4861D8u;
        goto label_4861d8;
    }
    ctx->pc = 0x4861D0u;
    {
        const bool branch_taken_0x4861d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4861d0) {
            ctx->pc = 0x4861ECu;
            goto label_4861ec;
        }
    }
    ctx->pc = 0x4861D8u;
label_4861d8:
    // 0x4861d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4861d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4861dc:
    // 0x4861dc: 0x0  nop
    ctx->pc = 0x4861dcu;
    // NOP
label_4861e0:
    // 0x4861e0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x4861e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_4861e4:
    // 0x4861e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_4861e8:
    if (ctx->pc == 0x4861E8u) {
        ctx->pc = 0x4861ECu;
        goto label_4861ec;
    }
    ctx->pc = 0x4861E4u;
    {
        const bool branch_taken_0x4861e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4861e4) {
            ctx->pc = 0x486210u;
            goto label_486210;
        }
    }
    ctx->pc = 0x4861ECu;
label_4861ec:
    // 0x4861ec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4861ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4861f0:
    // 0x4861f0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4861f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4861f4:
    // 0x4861f4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4861f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4861f8:
    // 0x4861f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4861f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4861fc:
    // 0x4861fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_486200:
    if (ctx->pc == 0x486200u) {
        ctx->pc = 0x486204u;
        goto label_486204;
    }
    ctx->pc = 0x4861FCu;
    {
        const bool branch_taken_0x4861fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4861fc) {
            ctx->pc = 0x486210u;
            goto label_486210;
        }
    }
    ctx->pc = 0x486204u;
label_486204:
    // 0x486204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486208:
    // 0x486208: 0x0  nop
    ctx->pc = 0x486208u;
    // NOP
label_48620c:
    // 0x48620c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x48620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_486210:
    // 0x486210: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x486210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486214:
    // 0x486214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486218:
    // 0x486218: 0x0  nop
    ctx->pc = 0x486218u;
    // NOP
label_48621c:
    // 0x48621c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486220:
    // 0x486220: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_486224:
    if (ctx->pc == 0x486224u) {
        ctx->pc = 0x486228u;
        goto label_486228;
    }
    ctx->pc = 0x486220u;
    {
        const bool branch_taken_0x486220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x486220) {
            ctx->pc = 0x48629Cu;
            goto label_48629c;
        }
    }
    ctx->pc = 0x486228u;
label_486228:
    // 0x486228: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x486228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48622c:
    // 0x48622c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_486230:
    // 0x486230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x486230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486234:
    // 0x486234: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_486238:
    if (ctx->pc == 0x486238u) {
        ctx->pc = 0x48623Cu;
        goto label_48623c;
    }
    ctx->pc = 0x486234u;
    {
        const bool branch_taken_0x486234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x486234) {
            ctx->pc = 0x486250u;
            goto label_486250;
        }
    }
    ctx->pc = 0x48623Cu;
label_48623c:
    // 0x48623c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486240:
    // 0x486240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x486240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486244:
    // 0x486244: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x486244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_486248:
    // 0x486248: 0xc0ef404  jal         func_3BD010
label_48624c:
    if (ctx->pc == 0x48624Cu) {
        ctx->pc = 0x486250u;
        goto label_486250;
    }
    ctx->pc = 0x486248u;
    SET_GPR_U32(ctx, 31, 0x486250u);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x486248u, 0x486250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486250u;
label_486250:
    // 0x486250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x486250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486254:
    // 0x486254: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x486254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486258:
    // 0x486258: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x486258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_48625c:
    // 0x48625c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486260:
    // 0x486260: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x486260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_486264:
    // 0x486264: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x486264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486268:
    // 0x486268: 0xc0eee8c  jal         func_3BBA30
label_48626c:
    if (ctx->pc == 0x48626Cu) {
        ctx->pc = 0x486270u;
        goto label_486270;
    }
    ctx->pc = 0x486268u;
    SET_GPR_U32(ctx, 31, 0x486270u);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x486268u, 0x486270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486270u;
label_486270:
    // 0x486270: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x486270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486274:
    // 0x486274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x486274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_486278:
    // 0x486278: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x486278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_48627c:
    // 0x48627c: 0xc0ef412  jal         func_3BD048
label_486280:
    if (ctx->pc == 0x486280u) {
        ctx->pc = 0x486284u;
        goto label_486284;
    }
    ctx->pc = 0x48627Cu;
    SET_GPR_U32(ctx, 31, 0x486284u);
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x48627Cu, 0x486284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486284u;
label_486284:
    // 0x486284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x486284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486288:
    // 0x486288: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x486288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48628c:
    // 0x48628c: 0xc0eee8c  jal         func_3BBA30
label_486290:
    if (ctx->pc == 0x486290u) {
        ctx->pc = 0x486294u;
        goto label_486294;
    }
    ctx->pc = 0x48628Cu;
    SET_GPR_U32(ctx, 31, 0x486294u);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x48628Cu, 0x486294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486294u;
label_486294:
    // 0x486294: 0x1000000b  b           . + 4 + (0xB << 2)
label_486298:
    if (ctx->pc == 0x486298u) {
        ctx->pc = 0x48629Cu;
        goto label_48629c;
    }
    ctx->pc = 0x486294u;
    {
        const bool branch_taken_0x486294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486294) {
            ctx->pc = 0x4862C4u;
            goto label_4862c4;
        }
    }
    ctx->pc = 0x48629Cu;
label_48629c:
    // 0x48629c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4862a0:
    // 0x4862a0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x4862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4862a4:
    // 0x4862a4: 0xc0eee8c  jal         func_3BBA30
label_4862a8:
    if (ctx->pc == 0x4862A8u) {
        ctx->pc = 0x4862ACu;
        goto label_4862ac;
    }
    ctx->pc = 0x4862A4u;
    SET_GPR_U32(ctx, 31, 0x4862ACu);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x4862A4u, 0x4862ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4862ACu;
label_4862ac:
    // 0x4862ac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4862acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4862b0:
    // 0x4862b0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4862b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4862b4:
    // 0x4862b4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x4862b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4862b8:
    // 0x4862b8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x4862b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4862bc:
    // 0x4862bc: 0xc0eee8c  jal         func_3BBA30
label_4862c0:
    if (ctx->pc == 0x4862C0u) {
        ctx->pc = 0x4862C4u;
        goto label_4862c4;
    }
    ctx->pc = 0x4862BCu;
    SET_GPR_U32(ctx, 31, 0x4862C4u);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x4862BCu, 0x4862C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4862C4u;
label_4862c4:
    // 0x4862c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4862c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4862c8:
    // 0x4862c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4862c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4862cc:
    // 0x4862cc: 0xc0ef412  jal         func_3BD048
label_4862d0:
    if (ctx->pc == 0x4862D0u) {
        ctx->pc = 0x4862D4u;
        goto label_4862d4;
    }
    ctx->pc = 0x4862CCu;
    SET_GPR_U32(ctx, 31, 0x4862D4u);
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x4862CCu, 0x4862D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4862D4u;
label_4862d4:
    // 0x4862d4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4862d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4862d8:
    // 0x4862d8: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x4862d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_4862dc:
    // 0x4862dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4862e0:
    if (ctx->pc == 0x4862E0u) {
        ctx->pc = 0x4862E4u;
        goto label_4862e4;
    }
    ctx->pc = 0x4862DCu;
    {
        const bool branch_taken_0x4862dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4862dc) {
            ctx->pc = 0x4862F4u;
            goto label_4862f4;
        }
    }
    ctx->pc = 0x4862E4u;
label_4862e4:
    // 0x4862e4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4862e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4862e8:
    // 0x4862e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4862e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4862ec:
    // 0x4862ec: 0xc121fd0  jal         func_487F40
label_4862f0:
    if (ctx->pc == 0x4862F0u) {
        ctx->pc = 0x4862F4u;
        goto label_4862f4;
    }
    ctx->pc = 0x4862ECu;
    SET_GPR_U32(ctx, 31, 0x4862F4u);
    ctx->pc = 0x487F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487F40u, 0x4862ECu, 0x4862F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4862F4u;
label_4862f4:
    // 0x4862f4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x4862f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4862f8:
    // 0x4862f8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4862f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4862fc:
    // 0x4862fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4862fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_486300:
    // 0x486300: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x486300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_486304:
    // 0x486304: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x486304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_486308:
    // 0x486308: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x486308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48630c:
    // 0x48630c: 0xc121cf4  jal         func_4873D0
label_486310:
    if (ctx->pc == 0x486310u) {
        ctx->pc = 0x486314u;
        goto label_486314;
    }
    ctx->pc = 0x48630Cu;
    SET_GPR_U32(ctx, 31, 0x486314u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x48630Cu, 0x486314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486314u;
label_486314:
    // 0x486314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x486314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486318:
    // 0x486318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48631c:
    // 0x48631c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48631cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486320:
    // 0x486320: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x486320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_486324:
    // 0x486324: 0x3e00008  jr          $ra
label_486328:
    if (ctx->pc == 0x486328u) {
        ctx->pc = 0x48632Cu;
        goto label_48632c;
    }
    ctx->pc = 0x486324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48632Cu;
label_48632c:
    // 0x48632c: 0x0  nop
    ctx->pc = 0x48632cu;
    // NOP
    ctx->pc = 0x486330u;
}
