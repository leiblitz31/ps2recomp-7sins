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

// Function: sub_00420170
// Address: 0x420170 - 0x420370
void sub_00420170_0x420170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420170_0x420170");
#endif

    switch (ctx->pc) {
        case 0x420170u: goto label_420170;
        case 0x420174u: goto label_420174;
        case 0x420178u: goto label_420178;
        case 0x42017cu: goto label_42017c;
        case 0x420180u: goto label_420180;
        case 0x420184u: goto label_420184;
        case 0x420188u: goto label_420188;
        case 0x42018cu: goto label_42018c;
        case 0x420190u: goto label_420190;
        case 0x420194u: goto label_420194;
        case 0x420198u: goto label_420198;
        case 0x42019cu: goto label_42019c;
        case 0x4201a0u: goto label_4201a0;
        case 0x4201a4u: goto label_4201a4;
        case 0x4201a8u: goto label_4201a8;
        case 0x4201acu: goto label_4201ac;
        case 0x4201b0u: goto label_4201b0;
        case 0x4201b4u: goto label_4201b4;
        case 0x4201b8u: goto label_4201b8;
        case 0x4201bcu: goto label_4201bc;
        case 0x4201c0u: goto label_4201c0;
        case 0x4201c4u: goto label_4201c4;
        case 0x4201c8u: goto label_4201c8;
        case 0x4201ccu: goto label_4201cc;
        case 0x4201d0u: goto label_4201d0;
        case 0x4201d4u: goto label_4201d4;
        case 0x4201d8u: goto label_4201d8;
        case 0x4201dcu: goto label_4201dc;
        case 0x4201e0u: goto label_4201e0;
        case 0x4201e4u: goto label_4201e4;
        case 0x4201e8u: goto label_4201e8;
        case 0x4201ecu: goto label_4201ec;
        case 0x4201f0u: goto label_4201f0;
        case 0x4201f4u: goto label_4201f4;
        case 0x4201f8u: goto label_4201f8;
        case 0x4201fcu: goto label_4201fc;
        case 0x420200u: goto label_420200;
        case 0x420204u: goto label_420204;
        case 0x420208u: goto label_420208;
        case 0x42020cu: goto label_42020c;
        case 0x420210u: goto label_420210;
        case 0x420214u: goto label_420214;
        case 0x420218u: goto label_420218;
        case 0x42021cu: goto label_42021c;
        case 0x420220u: goto label_420220;
        case 0x420224u: goto label_420224;
        case 0x420228u: goto label_420228;
        case 0x42022cu: goto label_42022c;
        case 0x420230u: goto label_420230;
        case 0x420234u: goto label_420234;
        case 0x420238u: goto label_420238;
        case 0x42023cu: goto label_42023c;
        case 0x420240u: goto label_420240;
        case 0x420244u: goto label_420244;
        case 0x420248u: goto label_420248;
        case 0x42024cu: goto label_42024c;
        case 0x420250u: goto label_420250;
        case 0x420254u: goto label_420254;
        case 0x420258u: goto label_420258;
        case 0x42025cu: goto label_42025c;
        case 0x420260u: goto label_420260;
        case 0x420264u: goto label_420264;
        case 0x420268u: goto label_420268;
        case 0x42026cu: goto label_42026c;
        case 0x420270u: goto label_420270;
        case 0x420274u: goto label_420274;
        case 0x420278u: goto label_420278;
        case 0x42027cu: goto label_42027c;
        case 0x420280u: goto label_420280;
        case 0x420284u: goto label_420284;
        case 0x420288u: goto label_420288;
        case 0x42028cu: goto label_42028c;
        case 0x420290u: goto label_420290;
        case 0x420294u: goto label_420294;
        case 0x420298u: goto label_420298;
        case 0x42029cu: goto label_42029c;
        case 0x4202a0u: goto label_4202a0;
        case 0x4202a4u: goto label_4202a4;
        case 0x4202a8u: goto label_4202a8;
        case 0x4202acu: goto label_4202ac;
        case 0x4202b0u: goto label_4202b0;
        case 0x4202b4u: goto label_4202b4;
        case 0x4202b8u: goto label_4202b8;
        case 0x4202bcu: goto label_4202bc;
        case 0x4202c0u: goto label_4202c0;
        case 0x4202c4u: goto label_4202c4;
        case 0x4202c8u: goto label_4202c8;
        case 0x4202ccu: goto label_4202cc;
        case 0x4202d0u: goto label_4202d0;
        case 0x4202d4u: goto label_4202d4;
        case 0x4202d8u: goto label_4202d8;
        case 0x4202dcu: goto label_4202dc;
        case 0x4202e0u: goto label_4202e0;
        case 0x4202e4u: goto label_4202e4;
        case 0x4202e8u: goto label_4202e8;
        case 0x4202ecu: goto label_4202ec;
        case 0x4202f0u: goto label_4202f0;
        case 0x4202f4u: goto label_4202f4;
        case 0x4202f8u: goto label_4202f8;
        case 0x4202fcu: goto label_4202fc;
        case 0x420300u: goto label_420300;
        case 0x420304u: goto label_420304;
        case 0x420308u: goto label_420308;
        case 0x42030cu: goto label_42030c;
        case 0x420310u: goto label_420310;
        case 0x420314u: goto label_420314;
        case 0x420318u: goto label_420318;
        case 0x42031cu: goto label_42031c;
        case 0x420320u: goto label_420320;
        case 0x420324u: goto label_420324;
        case 0x420328u: goto label_420328;
        case 0x42032cu: goto label_42032c;
        case 0x420330u: goto label_420330;
        case 0x420334u: goto label_420334;
        case 0x420338u: goto label_420338;
        case 0x42033cu: goto label_42033c;
        case 0x420340u: goto label_420340;
        case 0x420344u: goto label_420344;
        case 0x420348u: goto label_420348;
        case 0x42034cu: goto label_42034c;
        case 0x420350u: goto label_420350;
        case 0x420354u: goto label_420354;
        case 0x420358u: goto label_420358;
        case 0x42035cu: goto label_42035c;
        case 0x420360u: goto label_420360;
        case 0x420364u: goto label_420364;
        case 0x420368u: goto label_420368;
        case 0x42036cu: goto label_42036c;
        default: break;
    }

    ctx->pc = 0x420170u;

label_420170:
    // 0x420170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x420170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_420174:
    // 0x420174: 0xaf85be18  sw          $a1, -0x41E8($gp)
    ctx->pc = 0x420174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950424), GPR_U32(ctx, 5));
label_420178:
    // 0x420178: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x420178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_42017c:
    // 0x42017c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x42017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_420180:
    // 0x420180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x420180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420184:
    // 0x420184: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x420184u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_420188:
    // 0x420188: 0x8c44ca10  lw          $a0, -0x35F0($v0)
    ctx->pc = 0x420188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953488)));
label_42018c:
    // 0x42018c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x42018cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_420190:
    // 0x420190: 0x8f85adc0  lw          $a1, -0x5240($gp)
    ctx->pc = 0x420190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946240)));
label_420194:
    // 0x420194: 0x25082920  addiu       $t0, $t0, 0x2920
    ctx->pc = 0x420194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10528));
label_420198:
    // 0x420198: 0x8f87adc4  lw          $a3, -0x523C($gp)
    ctx->pc = 0x420198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946244)));
label_42019c:
    // 0x42019c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x42019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4201a0:
    // 0x4201a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4201a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4201a4:
    // 0x4201a4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4201a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4201a8:
    // 0x4201a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4201a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4201ac:
    // 0x4201ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4201acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4201b0:
    // 0x4201b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4201b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4201b4:
    // 0x4201b4: 0xc10408c  jal         func_410230
label_4201b8:
    if (ctx->pc == 0x4201B8u) {
        ctx->pc = 0x4201B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201B4u;
        // 0x4201b8: 0x35290006  ori         $t1, $t1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201BCu;
        goto label_4201bc;
    }
    ctx->pc = 0x4201B4u;
    SET_GPR_U32(ctx, 31, 0x4201BCu);
    ctx->pc = 0x4201B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4201B4u;
    // 0x4201b8: 0x35290006  ori         $t1, $t1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x4201B4u, 0x4201BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4201BCu;
label_4201bc:
    // 0x4201bc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4201bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_4201c0:
    // 0x4201c0: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4201c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4201c4:
    // 0x4201c4: 0x2491e880  addiu       $s1, $a0, -0x1780
    ctx->pc = 0x4201c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_4201c8:
    // 0x4201c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4201c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4201cc:
    // 0x4201cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4201ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4201d0:
    // 0x4201d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4201d4:
    if (ctx->pc == 0x4201D4u) {
        ctx->pc = 0x4201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201D0u;
        // 0x4201d4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201D8u;
        goto label_4201d8;
    }
    ctx->pc = 0x4201D0u;
    {
        const bool branch_taken_0x4201d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201D0u;
        // 0x4201d4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201d0) {
            ctx->pc = 0x4201E0u;
            goto label_4201e0;
        }
    }
    ctx->pc = 0x4201D8u;
label_4201d8:
    // 0x4201d8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4201dc:
    if (ctx->pc == 0x4201DCu) {
        ctx->pc = 0x4201DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201D8u;
        // 0x4201dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201E0u;
        goto label_4201e0;
    }
    ctx->pc = 0x4201D8u;
    {
        const bool branch_taken_0x4201d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4201DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201D8u;
        // 0x4201dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201d8) {
            ctx->pc = 0x42034Cu;
            goto label_42034c;
        }
    }
    ctx->pc = 0x4201E0u;
label_4201e0:
    // 0x4201e0: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x4201e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_4201e4:
    // 0x4201e4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4201e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_4201e8:
    // 0x4201e8: 0x8e44ca28  lw          $a0, -0x35D8($s2)
    ctx->pc = 0x4201e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953512)));
label_4201ec:
    // 0x4201ec: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4201ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4201f0:
    // 0x4201f0: 0x8f85adc8  lw          $a1, -0x5238($gp)
    ctx->pc = 0x4201f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946248)));
label_4201f4:
    // 0x4201f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4201f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4201f8:
    // 0x4201f8: 0x8f87adcc  lw          $a3, -0x5234($gp)
    ctx->pc = 0x4201f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946252)));
label_4201fc:
    // 0x4201fc: 0x25082948  addiu       $t0, $t0, 0x2948
    ctx->pc = 0x4201fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10568));
label_420200:
    // 0x420200: 0xc10408c  jal         func_410230
label_420204:
    if (ctx->pc == 0x420204u) {
        ctx->pc = 0x420204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420200u;
        // 0x420204: 0x35290408  ori         $t1, $t1, 0x408 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420208u;
        goto label_420208;
    }
    ctx->pc = 0x420200u;
    SET_GPR_U32(ctx, 31, 0x420208u);
    ctx->pc = 0x420204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420200u;
    // 0x420204: 0x35290408  ori         $t1, $t1, 0x408 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x420200u, 0x420208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420208u;
label_420208:
    // 0x420208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x420208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42020c:
    // 0x42020c: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x42020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420210:
    // 0x420210: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x420210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_420214:
    // 0x420214: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_420218:
    if (ctx->pc == 0x420218u) {
        ctx->pc = 0x420218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420214u;
        // 0x420218: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42021Cu;
        goto label_42021c;
    }
    ctx->pc = 0x420214u;
    {
        const bool branch_taken_0x420214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x420218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420214u;
        // 0x420218: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420214) {
            ctx->pc = 0x420234u;
            goto label_420234;
        }
    }
    ctx->pc = 0x42021Cu;
label_42021c:
    // 0x42021c: 0xc104284  jal         func_410A10
label_420220:
    if (ctx->pc == 0x420220u) {
        ctx->pc = 0x420220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42021Cu;
        // 0x420220: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420224u;
        goto label_420224;
    }
    ctx->pc = 0x42021Cu;
    SET_GPR_U32(ctx, 31, 0x420224u);
    ctx->pc = 0x420220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42021Cu;
    // 0x420220: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x42021Cu, 0x420224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420224u;
label_420224:
    // 0x420224: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420228:
    // 0x420228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x420228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42022c:
    // 0x42022c: 0x10000046  b           . + 4 + (0x46 << 2)
label_420230:
    if (ctx->pc == 0x420230u) {
        ctx->pc = 0x420230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42022Cu;
        // 0x420230: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420234u;
        goto label_420234;
    }
    ctx->pc = 0x42022Cu;
    {
        const bool branch_taken_0x42022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42022Cu;
        // 0x420230: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42022c) {
            ctx->pc = 0x420348u;
            goto label_420348;
        }
    }
    ctx->pc = 0x420234u;
label_420234:
    // 0x420234: 0x8f83be1c  lw          $v1, -0x41E4($gp)
    ctx->pc = 0x420234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950428)));
label_420238:
    // 0x420238: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x420238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_42023c:
    // 0x42023c: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x42023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_420240:
    // 0x420240: 0x34a50016  ori         $a1, $a1, 0x16
    ctx->pc = 0x420240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
label_420244:
    // 0x420244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x420244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_420248:
    // 0x420248: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x420248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
label_42024c:
    // 0x42024c: 0xaf83be1c  sw          $v1, -0x41E4($gp)
    ctx->pc = 0x42024cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950428), GPR_U32(ctx, 3));
label_420250:
    // 0x420250: 0x40f809  jalr        $v0
label_420254:
    if (ctx->pc == 0x420254u) {
        ctx->pc = 0x420254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420250u;
        // 0x420254: 0xacc60000  sw          $a2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420258u;
        goto label_420258;
    }
    ctx->pc = 0x420250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420258u);
        ctx->pc = 0x420254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420250u;
        // 0x420254: 0xacc60000  sw          $a2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420250u, 0x420258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420258u;
label_420258:
    // 0x420258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x420258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42025c:
    // 0x42025c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_420260:
    if (ctx->pc == 0x420260u) {
        ctx->pc = 0x420260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42025Cu;
        // 0x420260: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420264u;
        goto label_420264;
    }
    ctx->pc = 0x42025Cu;
    {
        const bool branch_taken_0x42025c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x420260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42025Cu;
        // 0x420260: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42025c) {
            ctx->pc = 0x42026Cu;
            goto label_42026c;
        }
    }
    ctx->pc = 0x420264u;
label_420264:
    // 0x420264: 0x10000016  b           . + 4 + (0x16 << 2)
label_420268:
    if (ctx->pc == 0x420268u) {
        ctx->pc = 0x420268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420264u;
        // 0x420268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42026Cu;
        goto label_42026c;
    }
    ctx->pc = 0x420264u;
    {
        const bool branch_taken_0x420264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420264u;
        // 0x420268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420264) {
            ctx->pc = 0x4202C0u;
            goto label_4202c0;
        }
    }
    ctx->pc = 0x42026Cu;
label_42026c:
    // 0x42026c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x42026cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_420270:
    // 0x420270: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x420270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_420274:
    // 0x420274: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x420274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_420278:
    // 0x420278: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x420278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_42027c:
    // 0x42027c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x42027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_420280:
    // 0x420280: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420284:
    // 0x420284: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x420284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_420288:
    // 0x420288: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x420288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42028c:
    // 0x42028c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420290:
    // 0x420290: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x420290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_420294:
    // 0x420294: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x420294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_420298:
    // 0x420298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42029c:
    // 0x42029c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x42029cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4202a0:
    // 0x4202a0: 0x2644ca28  addiu       $a0, $s2, -0x35D8
    ctx->pc = 0x4202a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953512));
label_4202a4:
    // 0x4202a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4202a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4202a8:
    // 0x4202a8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x4202a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_4202ac:
    // 0x4202ac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4202acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_4202b0:
    // 0x4202b0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4202b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4202b4:
    // 0x4202b4: 0xc104c80  jal         func_413200
label_4202b8:
    if (ctx->pc == 0x4202B8u) {
        ctx->pc = 0x4202B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202B4u;
        // 0x4202b8: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202BCu;
        goto label_4202bc;
    }
    ctx->pc = 0x4202B4u;
    SET_GPR_U32(ctx, 31, 0x4202BCu);
    ctx->pc = 0x4202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4202B4u;
    // 0x4202b8: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x4202B4u, 0x4202BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4202BCu;
label_4202bc:
    // 0x4202bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4202bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4202c0:
    // 0x4202c0: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x4202c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4202c4:
    // 0x4202c4: 0x2690e880  addiu       $s0, $s4, -0x1780
    ctx->pc = 0x4202c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_4202c8:
    // 0x4202c8: 0xaf85ada8  sw          $a1, -0x5258($gp)
    ctx->pc = 0x4202c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946216), GPR_U32(ctx, 5));
label_4202cc:
    // 0x4202cc: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x4202ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4202d0:
    // 0x4202d0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_4202d4:
    if (ctx->pc == 0x4202D4u) {
        ctx->pc = 0x4202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202D0u;
        // 0x4202d4: 0xad050010  sw          $a1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202D8u;
        goto label_4202d8;
    }
    ctx->pc = 0x4202D0u;
    {
        const bool branch_taken_0x4202d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202D0u;
        // 0x4202d4: 0xad050010  sw          $a1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4202d0) {
            ctx->pc = 0x420320u;
            goto label_420320;
        }
    }
    ctx->pc = 0x4202D8u;
label_4202d8:
    // 0x4202d8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x4202d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_4202dc:
    // 0x4202dc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x4202dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_4202e0:
    // 0x4202e0: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x4202e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
label_4202e4:
    // 0x4202e4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x4202e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_4202e8:
    // 0x4202e8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x4202e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_4202ec:
    // 0x4202ec: 0x24630dd8  addiu       $v1, $v1, 0xDD8
    ctx->pc = 0x4202ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3544));
label_4202f0:
    // 0x4202f0: 0x2484f8d0  addiu       $a0, $a0, -0x730
    ctx->pc = 0x4202f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
label_4202f4:
    // 0x4202f4: 0x24a50d38  addiu       $a1, $a1, 0xD38
    ctx->pc = 0x4202f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3384));
label_4202f8:
    // 0x4202f8: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x4202f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
label_4202fc:
    // 0x4202fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4202fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_420300:
    // 0x420300: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x420300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_420304:
    // 0x420304: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x420304u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
label_420308:
    // 0x420308: 0xad050030  sw          $a1, 0x30($t0)
    ctx->pc = 0x420308u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 5));
label_42030c:
    // 0x42030c: 0xa5000028  sh          $zero, 0x28($t0)
    ctx->pc = 0x42030cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 40), (uint16_t)GPR_U32(ctx, 0));
label_420310:
    // 0x420310: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x420310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
label_420314:
    // 0x420314: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x420314u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
label_420318:
    // 0x420318: 0x1000000c  b           . + 4 + (0xC << 2)
label_42031c:
    if (ctx->pc == 0x42031Cu) {
        ctx->pc = 0x42031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420318u;
        // 0x42031c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420320u;
        goto label_420320;
    }
    ctx->pc = 0x420318u;
    {
        const bool branch_taken_0x420318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420318u;
        // 0x42031c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420318) {
            ctx->pc = 0x42034Cu;
            goto label_42034c;
        }
    }
    ctx->pc = 0x420320u;
label_420320:
    // 0x420320: 0xc104284  jal         func_410A10
label_420324:
    if (ctx->pc == 0x420324u) {
        ctx->pc = 0x420324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420320u;
        // 0x420324: 0x8d04000c  lw          $a0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420328u;
        goto label_420328;
    }
    ctx->pc = 0x420320u;
    SET_GPR_U32(ctx, 31, 0x420328u);
    ctx->pc = 0x420324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420320u;
    // 0x420324: 0x8d04000c  lw          $a0, 0xC($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x420320u, 0x420328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420328u;
label_420328:
    // 0x420328: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_42032c:
    // 0x42032c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x42032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_420330:
    // 0x420330: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x420330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_420334:
    // 0x420334: 0xc104284  jal         func_410A10
label_420338:
    if (ctx->pc == 0x420338u) {
        ctx->pc = 0x420338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420334u;
        // 0x420338: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42033Cu;
        goto label_42033c;
    }
    ctx->pc = 0x420334u;
    SET_GPR_U32(ctx, 31, 0x42033Cu);
    ctx->pc = 0x420338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420334u;
    // 0x420338: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x420334u, 0x42033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42033Cu;
label_42033c:
    // 0x42033c: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x42033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420340:
    // 0x420340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x420340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420344:
    // 0x420344: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x420344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_420348:
    // 0x420348: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x420348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_42034c:
    // 0x42034c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x42034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_420350:
    // 0x420350: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x420350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420354:
    // 0x420354: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x420354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420358:
    // 0x420358: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x420358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42035c:
    // 0x42035c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x42035cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420360:
    // 0x420360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420364:
    // 0x420364: 0x3e00008  jr          $ra
label_420368:
    if (ctx->pc == 0x420368u) {
        ctx->pc = 0x420368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420364u;
        // 0x420368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42036Cu;
        goto label_42036c;
    }
    ctx->pc = 0x420364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420364u;
        // 0x420368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42036Cu;
label_42036c:
    // 0x42036c: 0x0  nop
    ctx->pc = 0x42036cu;
    // NOP
    ctx->pc = 0x420370u;
}
