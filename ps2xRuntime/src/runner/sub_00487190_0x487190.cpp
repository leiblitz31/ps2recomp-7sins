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

// Function: sub_00487190
// Address: 0x487190 - 0x487390
void sub_00487190_0x487190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487190_0x487190");
#endif

    switch (ctx->pc) {
        case 0x487190u: goto label_487190;
        case 0x487194u: goto label_487194;
        case 0x487198u: goto label_487198;
        case 0x48719cu: goto label_48719c;
        case 0x4871a0u: goto label_4871a0;
        case 0x4871a4u: goto label_4871a4;
        case 0x4871a8u: goto label_4871a8;
        case 0x4871acu: goto label_4871ac;
        case 0x4871b0u: goto label_4871b0;
        case 0x4871b4u: goto label_4871b4;
        case 0x4871b8u: goto label_4871b8;
        case 0x4871bcu: goto label_4871bc;
        case 0x4871c0u: goto label_4871c0;
        case 0x4871c4u: goto label_4871c4;
        case 0x4871c8u: goto label_4871c8;
        case 0x4871ccu: goto label_4871cc;
        case 0x4871d0u: goto label_4871d0;
        case 0x4871d4u: goto label_4871d4;
        case 0x4871d8u: goto label_4871d8;
        case 0x4871dcu: goto label_4871dc;
        case 0x4871e0u: goto label_4871e0;
        case 0x4871e4u: goto label_4871e4;
        case 0x4871e8u: goto label_4871e8;
        case 0x4871ecu: goto label_4871ec;
        case 0x4871f0u: goto label_4871f0;
        case 0x4871f4u: goto label_4871f4;
        case 0x4871f8u: goto label_4871f8;
        case 0x4871fcu: goto label_4871fc;
        case 0x487200u: goto label_487200;
        case 0x487204u: goto label_487204;
        case 0x487208u: goto label_487208;
        case 0x48720cu: goto label_48720c;
        case 0x487210u: goto label_487210;
        case 0x487214u: goto label_487214;
        case 0x487218u: goto label_487218;
        case 0x48721cu: goto label_48721c;
        case 0x487220u: goto label_487220;
        case 0x487224u: goto label_487224;
        case 0x487228u: goto label_487228;
        case 0x48722cu: goto label_48722c;
        case 0x487230u: goto label_487230;
        case 0x487234u: goto label_487234;
        case 0x487238u: goto label_487238;
        case 0x48723cu: goto label_48723c;
        case 0x487240u: goto label_487240;
        case 0x487244u: goto label_487244;
        case 0x487248u: goto label_487248;
        case 0x48724cu: goto label_48724c;
        case 0x487250u: goto label_487250;
        case 0x487254u: goto label_487254;
        case 0x487258u: goto label_487258;
        case 0x48725cu: goto label_48725c;
        case 0x487260u: goto label_487260;
        case 0x487264u: goto label_487264;
        case 0x487268u: goto label_487268;
        case 0x48726cu: goto label_48726c;
        case 0x487270u: goto label_487270;
        case 0x487274u: goto label_487274;
        case 0x487278u: goto label_487278;
        case 0x48727cu: goto label_48727c;
        case 0x487280u: goto label_487280;
        case 0x487284u: goto label_487284;
        case 0x487288u: goto label_487288;
        case 0x48728cu: goto label_48728c;
        case 0x487290u: goto label_487290;
        case 0x487294u: goto label_487294;
        case 0x487298u: goto label_487298;
        case 0x48729cu: goto label_48729c;
        case 0x4872a0u: goto label_4872a0;
        case 0x4872a4u: goto label_4872a4;
        case 0x4872a8u: goto label_4872a8;
        case 0x4872acu: goto label_4872ac;
        case 0x4872b0u: goto label_4872b0;
        case 0x4872b4u: goto label_4872b4;
        case 0x4872b8u: goto label_4872b8;
        case 0x4872bcu: goto label_4872bc;
        case 0x4872c0u: goto label_4872c0;
        case 0x4872c4u: goto label_4872c4;
        case 0x4872c8u: goto label_4872c8;
        case 0x4872ccu: goto label_4872cc;
        case 0x4872d0u: goto label_4872d0;
        case 0x4872d4u: goto label_4872d4;
        case 0x4872d8u: goto label_4872d8;
        case 0x4872dcu: goto label_4872dc;
        case 0x4872e0u: goto label_4872e0;
        case 0x4872e4u: goto label_4872e4;
        case 0x4872e8u: goto label_4872e8;
        case 0x4872ecu: goto label_4872ec;
        case 0x4872f0u: goto label_4872f0;
        case 0x4872f4u: goto label_4872f4;
        case 0x4872f8u: goto label_4872f8;
        case 0x4872fcu: goto label_4872fc;
        case 0x487300u: goto label_487300;
        case 0x487304u: goto label_487304;
        case 0x487308u: goto label_487308;
        case 0x48730cu: goto label_48730c;
        case 0x487310u: goto label_487310;
        case 0x487314u: goto label_487314;
        case 0x487318u: goto label_487318;
        case 0x48731cu: goto label_48731c;
        case 0x487320u: goto label_487320;
        case 0x487324u: goto label_487324;
        case 0x487328u: goto label_487328;
        case 0x48732cu: goto label_48732c;
        case 0x487330u: goto label_487330;
        case 0x487334u: goto label_487334;
        case 0x487338u: goto label_487338;
        case 0x48733cu: goto label_48733c;
        case 0x487340u: goto label_487340;
        case 0x487344u: goto label_487344;
        case 0x487348u: goto label_487348;
        case 0x48734cu: goto label_48734c;
        case 0x487350u: goto label_487350;
        case 0x487354u: goto label_487354;
        case 0x487358u: goto label_487358;
        case 0x48735cu: goto label_48735c;
        case 0x487360u: goto label_487360;
        case 0x487364u: goto label_487364;
        case 0x487368u: goto label_487368;
        case 0x48736cu: goto label_48736c;
        case 0x487370u: goto label_487370;
        case 0x487374u: goto label_487374;
        case 0x487378u: goto label_487378;
        case 0x48737cu: goto label_48737c;
        case 0x487380u: goto label_487380;
        case 0x487384u: goto label_487384;
        case 0x487388u: goto label_487388;
        case 0x48738cu: goto label_48738c;
        default: break;
    }

    ctx->pc = 0x487190u;

label_487190:
    // 0x487190: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x487190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_487194:
    // 0x487194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_487198:
    // 0x487198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48719c:
    // 0x48719c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x48719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_4871a0:
    // 0x4871a0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x4871a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_4871a4:
    // 0x4871a4: 0xe7ac0170  swc1        $f12, 0x170($sp)
    ctx->pc = 0x4871a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4871a8:
    // 0x4871a8: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x4871a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_4871ac:
    // 0x4871ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4871acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4871b0:
    // 0x4871b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4871b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4871b4:
    // 0x4871b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_4871b8:
    if (ctx->pc == 0x4871B8u) {
        ctx->pc = 0x4871BCu;
        goto label_4871bc;
    }
    ctx->pc = 0x4871B4u;
    {
        const bool branch_taken_0x4871b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4871b4) {
            ctx->pc = 0x487204u;
            goto label_487204;
        }
    }
    ctx->pc = 0x4871BCu;
label_4871bc:
    // 0x4871bc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4871bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4871c0:
    // 0x4871c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4871c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4871c4:
    // 0x4871c4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4871c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4871c8:
    // 0x4871c8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x4871c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4871cc:
    // 0x4871cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4871ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4871d0:
    // 0x4871d0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x4871d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4871d4:
    // 0x4871d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4871d8:
    if (ctx->pc == 0x4871D8u) {
        ctx->pc = 0x4871DCu;
        goto label_4871dc;
    }
    ctx->pc = 0x4871D4u;
    {
        const bool branch_taken_0x4871d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4871d4) {
            ctx->pc = 0x487200u;
            goto label_487200;
        }
    }
    ctx->pc = 0x4871DCu;
label_4871dc:
    // 0x4871dc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4871dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4871e0:
    // 0x4871e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4871e4:
    // 0x4871e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4871e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4871e8:
    // 0x4871e8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x4871e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4871ec:
    // 0x4871ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4871ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4871f0:
    // 0x4871f0: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x4871f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4871f4:
    // 0x4871f4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4871f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4871f8:
    // 0x4871f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4871fc:
    if (ctx->pc == 0x4871FCu) {
        ctx->pc = 0x487200u;
        goto label_487200;
    }
    ctx->pc = 0x4871F8u;
    {
        const bool branch_taken_0x4871f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4871f8) {
            ctx->pc = 0x487210u;
            goto label_487210;
        }
    }
    ctx->pc = 0x487200u;
label_487200:
    // 0x487200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x487200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_487204:
    // 0x487204: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x487204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_487208:
    // 0x487208: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_48720c:
    if (ctx->pc == 0x48720Cu) {
        ctx->pc = 0x487210u;
        goto label_487210;
    }
    ctx->pc = 0x487208u;
    {
        const bool branch_taken_0x487208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x487208) {
            ctx->pc = 0x4871BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4871bc;
        }
    }
    ctx->pc = 0x487210u;
label_487210:
    // 0x487210: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x487210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_487214:
    // 0x487214: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
label_487218:
    if (ctx->pc == 0x487218u) {
        ctx->pc = 0x48721Cu;
        goto label_48721c;
    }
    ctx->pc = 0x487214u;
    {
        const bool branch_taken_0x487214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x487214) {
            ctx->pc = 0x487258u;
            goto label_487258;
        }
    }
    ctx->pc = 0x48721Cu;
label_48721c:
    // 0x48721c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48721cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487220:
    // 0x487220: 0x10000002  b           . + 4 + (0x2 << 2)
label_487224:
    if (ctx->pc == 0x487224u) {
        ctx->pc = 0x487228u;
        goto label_487228;
    }
    ctx->pc = 0x487220u;
    {
        const bool branch_taken_0x487220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487220) {
            ctx->pc = 0x48722Cu;
            goto label_48722c;
        }
    }
    ctx->pc = 0x487228u;
label_487228:
    // 0x487228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x487228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48722c:
    // 0x48722c: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x48722cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_487230:
    // 0x487230: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_487234:
    if (ctx->pc == 0x487234u) {
        ctx->pc = 0x487238u;
        goto label_487238;
    }
    ctx->pc = 0x487230u;
    {
        const bool branch_taken_0x487230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x487230) {
            ctx->pc = 0x487258u;
            goto label_487258;
        }
    }
    ctx->pc = 0x487238u;
label_487238:
    // 0x487238: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x487238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_48723c:
    // 0x48723c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x48723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_487240:
    // 0x487240: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x487240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_487244:
    // 0x487244: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x487244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_487248:
    // 0x487248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x487248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48724c:
    // 0x48724c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x48724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_487250:
    // 0x487250: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_487254:
    if (ctx->pc == 0x487254u) {
        ctx->pc = 0x487258u;
        goto label_487258;
    }
    ctx->pc = 0x487250u;
    {
        const bool branch_taken_0x487250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x487250) {
            ctx->pc = 0x487228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487228;
        }
    }
    ctx->pc = 0x487258u;
label_487258:
    // 0x487258: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x487258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_48725c:
    // 0x48725c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_487260:
    // 0x487260: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_487264:
    if (ctx->pc == 0x487264u) {
        ctx->pc = 0x487268u;
        goto label_487268;
    }
    ctx->pc = 0x487260u;
    {
        const bool branch_taken_0x487260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x487260) {
            ctx->pc = 0x487314u;
            goto label_487314;
        }
    }
    ctx->pc = 0x487268u;
label_487268:
    // 0x487268: 0x8f83b5d4  lw          $v1, -0x4A2C($gp)
    ctx->pc = 0x487268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948308)));
label_48726c:
    // 0x48726c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_487270:
    if (ctx->pc == 0x487270u) {
        ctx->pc = 0x487274u;
        goto label_487274;
    }
    ctx->pc = 0x48726Cu;
    {
        const bool branch_taken_0x48726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48726c) {
            ctx->pc = 0x487314u;
            goto label_487314;
        }
    }
    ctx->pc = 0x487274u;
label_487274:
    // 0x487274: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x487274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_487278:
    // 0x487278: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x487278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48727c:
    // 0x48727c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x48727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_487280:
    // 0x487280: 0xc115ee8  jal         func_457BA0
label_487284:
    if (ctx->pc == 0x487284u) {
        ctx->pc = 0x487288u;
        goto label_487288;
    }
    ctx->pc = 0x487280u;
    SET_GPR_U32(ctx, 31, 0x487288u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x487280u, 0x487288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487288u;
label_487288:
    // 0x487288: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_48728c:
    if (ctx->pc == 0x48728Cu) {
        ctx->pc = 0x487290u;
        goto label_487290;
    }
    ctx->pc = 0x487288u;
    {
        const bool branch_taken_0x487288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487288) {
            ctx->pc = 0x487314u;
            goto label_487314;
        }
    }
    ctx->pc = 0x487290u;
label_487290:
    // 0x487290: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x487290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_487294:
    // 0x487294: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_487298:
    if (ctx->pc == 0x487298u) {
        ctx->pc = 0x48729Cu;
        goto label_48729c;
    }
    ctx->pc = 0x487294u;
    {
        const bool branch_taken_0x487294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x487294) {
            ctx->pc = 0x487314u;
            goto label_487314;
        }
    }
    ctx->pc = 0x48729Cu;
label_48729c:
    // 0x48729c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4872a0:
    // 0x4872a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4872a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4872a4:
    // 0x4872a4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x4872a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_4872a8:
    // 0x4872a8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4872a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4872ac:
    // 0x4872ac: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x4872acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_4872b0:
    // 0x4872b0: 0x24080299  addiu       $t0, $zero, 0x299
    ctx->pc = 0x4872b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_4872b4:
    // 0x4872b4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4872b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4872b8:
    // 0x4872b8: 0x25293ee0  addiu       $t1, $t1, 0x3EE0
    ctx->pc = 0x4872b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16096));
label_4872bc:
    // 0x4872bc: 0xc113940  jal         func_44E500
label_4872c0:
    if (ctx->pc == 0x4872C0u) {
        ctx->pc = 0x4872C4u;
        goto label_4872c4;
    }
    ctx->pc = 0x4872BCu;
    SET_GPR_U32(ctx, 31, 0x4872C4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4872BCu, 0x4872C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4872C4u;
label_4872c4:
    // 0x4872c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4872c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4872c8:
    // 0x4872c8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4872c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4872cc:
    // 0x4872cc: 0x24a53f00  addiu       $a1, $a1, 0x3F00
    ctx->pc = 0x4872ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
label_4872d0:
    // 0x4872d0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4872d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4872d4:
    // 0x4872d4: 0xc115c24  jal         func_457090
label_4872d8:
    if (ctx->pc == 0x4872D8u) {
        ctx->pc = 0x4872DCu;
        goto label_4872dc;
    }
    ctx->pc = 0x4872D4u;
    SET_GPR_U32(ctx, 31, 0x4872DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4872D4u, 0x4872DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4872DCu;
label_4872dc:
    // 0x4872dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4872dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4872e0:
    // 0x4872e0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x4872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_4872e4:
    // 0x4872e4: 0x40f809  jalr        $v0
label_4872e8:
    if (ctx->pc == 0x4872E8u) {
        ctx->pc = 0x4872ECu;
        goto label_4872ec;
    }
    ctx->pc = 0x4872E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4872ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4872E4u, 0x4872ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4872ECu;
label_4872ec:
    // 0x4872ec: 0xaf82b5d4  sw          $v0, -0x4A2C($gp)
    ctx->pc = 0x4872ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948308), GPR_U32(ctx, 2));
label_4872f0:
    // 0x4872f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4872f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4872f4:
    // 0x4872f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4872f8:
    if (ctx->pc == 0x4872F8u) {
        ctx->pc = 0x4872FCu;
        goto label_4872fc;
    }
    ctx->pc = 0x4872F4u;
    {
        const bool branch_taken_0x4872f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4872f4) {
            ctx->pc = 0x487304u;
            goto label_487304;
        }
    }
    ctx->pc = 0x4872FCu;
label_4872fc:
    // 0x4872fc: 0xd  break       0
    ctx->pc = 0x4872fcu;
    runtime->handleBreak(rdram, ctx);
label_487300:
    // 0x487300: 0x0  nop
    ctx->pc = 0x487300u;
    // NOP
label_487304:
    // 0x487304: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x487304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_487308:
    // 0x487308: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x487308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48730c:
    // 0x48730c: 0xc11392c  jal         func_44E4B0
label_487310:
    if (ctx->pc == 0x487310u) {
        ctx->pc = 0x487314u;
        goto label_487314;
    }
    ctx->pc = 0x48730Cu;
    SET_GPR_U32(ctx, 31, 0x487314u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48730Cu, 0x487314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487314u;
label_487314:
    // 0x487314: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x487314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_487318:
    // 0x487318: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_48731c:
    if (ctx->pc == 0x48731Cu) {
        ctx->pc = 0x487320u;
        goto label_487320;
    }
    ctx->pc = 0x487318u;
    {
        const bool branch_taken_0x487318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x487318) {
            ctx->pc = 0x487374u;
            goto label_487374;
        }
    }
    ctx->pc = 0x487320u;
label_487320:
    // 0x487320: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x487320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487324:
    // 0x487324: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x487324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_487328:
    // 0x487328: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_48732c:
    // 0x48732c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x48732cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_487330:
    // 0x487330: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x487330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_487334:
    // 0x487334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x487334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_487338:
    // 0x487338: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x487338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_48733c:
    // 0x48733c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x48733cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_487340:
    // 0x487340: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x487340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_487344:
    // 0x487344: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_487348:
    // 0x487348: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x487348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48734c:
    // 0x48734c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x48734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_487350:
    // 0x487350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x487350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_487354:
    // 0x487354: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x487354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_487358:
    // 0x487358: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x487358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48735c:
    // 0x48735c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x48735cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_487360:
    // 0x487360: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_487364:
    // 0x487364: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x487364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_487368:
    // 0x487368: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x487368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48736c:
    // 0x48736c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_487370:
    // 0x487370: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x487370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_487374:
    // 0x487374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_487378:
    // 0x487378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48737c:
    // 0x48737c: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x48737cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_487380:
    // 0x487380: 0x3e00008  jr          $ra
label_487384:
    if (ctx->pc == 0x487384u) {
        ctx->pc = 0x487388u;
        goto label_487388;
    }
    ctx->pc = 0x487380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487388u;
label_487388:
    // 0x487388: 0x0  nop
    ctx->pc = 0x487388u;
    // NOP
label_48738c:
    // 0x48738c: 0x0  nop
    ctx->pc = 0x48738cu;
    // NOP
    ctx->pc = 0x487390u;
}
