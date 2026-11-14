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

// Function: sub_00443208
// Address: 0x443208 - 0x443408
void sub_00443208_0x443208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443208_0x443208");
#endif

    switch (ctx->pc) {
        case 0x443208u: goto label_443208;
        case 0x44320cu: goto label_44320c;
        case 0x443210u: goto label_443210;
        case 0x443214u: goto label_443214;
        case 0x443218u: goto label_443218;
        case 0x44321cu: goto label_44321c;
        case 0x443220u: goto label_443220;
        case 0x443224u: goto label_443224;
        case 0x443228u: goto label_443228;
        case 0x44322cu: goto label_44322c;
        case 0x443230u: goto label_443230;
        case 0x443234u: goto label_443234;
        case 0x443238u: goto label_443238;
        case 0x44323cu: goto label_44323c;
        case 0x443240u: goto label_443240;
        case 0x443244u: goto label_443244;
        case 0x443248u: goto label_443248;
        case 0x44324cu: goto label_44324c;
        case 0x443250u: goto label_443250;
        case 0x443254u: goto label_443254;
        case 0x443258u: goto label_443258;
        case 0x44325cu: goto label_44325c;
        case 0x443260u: goto label_443260;
        case 0x443264u: goto label_443264;
        case 0x443268u: goto label_443268;
        case 0x44326cu: goto label_44326c;
        case 0x443270u: goto label_443270;
        case 0x443274u: goto label_443274;
        case 0x443278u: goto label_443278;
        case 0x44327cu: goto label_44327c;
        case 0x443280u: goto label_443280;
        case 0x443284u: goto label_443284;
        case 0x443288u: goto label_443288;
        case 0x44328cu: goto label_44328c;
        case 0x443290u: goto label_443290;
        case 0x443294u: goto label_443294;
        case 0x443298u: goto label_443298;
        case 0x44329cu: goto label_44329c;
        case 0x4432a0u: goto label_4432a0;
        case 0x4432a4u: goto label_4432a4;
        case 0x4432a8u: goto label_4432a8;
        case 0x4432acu: goto label_4432ac;
        case 0x4432b0u: goto label_4432b0;
        case 0x4432b4u: goto label_4432b4;
        case 0x4432b8u: goto label_4432b8;
        case 0x4432bcu: goto label_4432bc;
        case 0x4432c0u: goto label_4432c0;
        case 0x4432c4u: goto label_4432c4;
        case 0x4432c8u: goto label_4432c8;
        case 0x4432ccu: goto label_4432cc;
        case 0x4432d0u: goto label_4432d0;
        case 0x4432d4u: goto label_4432d4;
        case 0x4432d8u: goto label_4432d8;
        case 0x4432dcu: goto label_4432dc;
        case 0x4432e0u: goto label_4432e0;
        case 0x4432e4u: goto label_4432e4;
        case 0x4432e8u: goto label_4432e8;
        case 0x4432ecu: goto label_4432ec;
        case 0x4432f0u: goto label_4432f0;
        case 0x4432f4u: goto label_4432f4;
        case 0x4432f8u: goto label_4432f8;
        case 0x4432fcu: goto label_4432fc;
        case 0x443300u: goto label_443300;
        case 0x443304u: goto label_443304;
        case 0x443308u: goto label_443308;
        case 0x44330cu: goto label_44330c;
        case 0x443310u: goto label_443310;
        case 0x443314u: goto label_443314;
        case 0x443318u: goto label_443318;
        case 0x44331cu: goto label_44331c;
        case 0x443320u: goto label_443320;
        case 0x443324u: goto label_443324;
        case 0x443328u: goto label_443328;
        case 0x44332cu: goto label_44332c;
        case 0x443330u: goto label_443330;
        case 0x443334u: goto label_443334;
        case 0x443338u: goto label_443338;
        case 0x44333cu: goto label_44333c;
        case 0x443340u: goto label_443340;
        case 0x443344u: goto label_443344;
        case 0x443348u: goto label_443348;
        case 0x44334cu: goto label_44334c;
        case 0x443350u: goto label_443350;
        case 0x443354u: goto label_443354;
        case 0x443358u: goto label_443358;
        case 0x44335cu: goto label_44335c;
        case 0x443360u: goto label_443360;
        case 0x443364u: goto label_443364;
        case 0x443368u: goto label_443368;
        case 0x44336cu: goto label_44336c;
        case 0x443370u: goto label_443370;
        case 0x443374u: goto label_443374;
        case 0x443378u: goto label_443378;
        case 0x44337cu: goto label_44337c;
        case 0x443380u: goto label_443380;
        case 0x443384u: goto label_443384;
        case 0x443388u: goto label_443388;
        case 0x44338cu: goto label_44338c;
        case 0x443390u: goto label_443390;
        case 0x443394u: goto label_443394;
        case 0x443398u: goto label_443398;
        case 0x44339cu: goto label_44339c;
        case 0x4433a0u: goto label_4433a0;
        case 0x4433a4u: goto label_4433a4;
        case 0x4433a8u: goto label_4433a8;
        case 0x4433acu: goto label_4433ac;
        case 0x4433b0u: goto label_4433b0;
        case 0x4433b4u: goto label_4433b4;
        case 0x4433b8u: goto label_4433b8;
        case 0x4433bcu: goto label_4433bc;
        case 0x4433c0u: goto label_4433c0;
        case 0x4433c4u: goto label_4433c4;
        case 0x4433c8u: goto label_4433c8;
        case 0x4433ccu: goto label_4433cc;
        case 0x4433d0u: goto label_4433d0;
        case 0x4433d4u: goto label_4433d4;
        case 0x4433d8u: goto label_4433d8;
        case 0x4433dcu: goto label_4433dc;
        case 0x4433e0u: goto label_4433e0;
        case 0x4433e4u: goto label_4433e4;
        case 0x4433e8u: goto label_4433e8;
        case 0x4433ecu: goto label_4433ec;
        case 0x4433f0u: goto label_4433f0;
        case 0x4433f4u: goto label_4433f4;
        case 0x4433f8u: goto label_4433f8;
        case 0x4433fcu: goto label_4433fc;
        case 0x443400u: goto label_443400;
        case 0x443404u: goto label_443404;
        default: break;
    }

    ctx->pc = 0x443208u;

label_443208:
    // 0x443208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x443208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44320c:
    // 0x44320c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x44320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_443210:
    // 0x443210: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x443210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_443214:
    // 0x443214: 0x2447d7c0  addiu       $a3, $v0, -0x2840
    ctx->pc = 0x443214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
label_443218:
    // 0x443218: 0x8f85beb8  lw          $a1, -0x4148($gp)
    ctx->pc = 0x443218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_44321c:
    // 0x44321c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44321cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_443220:
    // 0x443220: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x443220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_443224:
    // 0x443224: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x443224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_443228:
    // 0x443228: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x443228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_44322c:
    // 0x44322c: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x44322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956992)));
label_443230:
    // 0x443230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x443230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443234:
    // 0x443234: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_443238:
    if (ctx->pc == 0x443238u) {
        ctx->pc = 0x443238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443234u;
        // 0x443238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44323Cu;
        goto label_44323c;
    }
    ctx->pc = 0x443234u;
    {
        const bool branch_taken_0x443234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443234u;
        // 0x443238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443234) {
            ctx->pc = 0x4433B8u;
            goto label_4433b8;
        }
    }
    ctx->pc = 0x44323Cu;
label_44323c:
    // 0x44323c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x44323cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_443240:
    // 0x443240: 0x10a00066  beqz        $a1, . + 4 + (0x66 << 2)
label_443244:
    if (ctx->pc == 0x443244u) {
        ctx->pc = 0x443244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443240u;
        // 0x443244: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443248u;
        goto label_443248;
    }
    ctx->pc = 0x443240u;
    {
        const bool branch_taken_0x443240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x443244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443240u;
        // 0x443244: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443240) {
            ctx->pc = 0x4433DCu;
            goto label_4433dc;
        }
    }
    ctx->pc = 0x443248u;
label_443248:
    // 0x443248: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x443248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_44324c:
    // 0x44324c: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x44324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_443250:
    // 0x443250: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x443250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_443254:
    // 0x443254: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x443254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_443258:
    // 0x443258: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x443258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44325c:
    // 0x44325c: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x44325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_443260:
    // 0x443260: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x443260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_443264:
    // 0x443264: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x443264u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_443268:
    // 0x443268: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_44326c:
    if (ctx->pc == 0x44326Cu) {
        ctx->pc = 0x44326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443268u;
        // 0x44326c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443270u;
        goto label_443270;
    }
    ctx->pc = 0x443268u;
    {
        const bool branch_taken_0x443268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x44326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443268u;
        // 0x44326c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443268) {
            ctx->pc = 0x44327Cu;
            goto label_44327c;
        }
    }
    ctx->pc = 0x443270u;
label_443270:
    // 0x443270: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_443274:
    // 0x443274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x443274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_443278:
    // 0x443278: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x443278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
label_44327c:
    // 0x44327c: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x44327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_443280:
    // 0x443280: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_443284:
    if (ctx->pc == 0x443284u) {
        ctx->pc = 0x443284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443280u;
        // 0x443284: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443288u;
        goto label_443288;
    }
    ctx->pc = 0x443280u;
    {
        const bool branch_taken_0x443280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x443280) {
            ctx->pc = 0x443284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443280u;
            // 0x443284: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443298u;
            goto label_443298;
        }
    }
    ctx->pc = 0x443288u;
label_443288:
    // 0x443288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44328c:
    // 0x44328c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_443290:
    // 0x443290: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x443290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
label_443294:
    // 0x443294: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x443294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_443298:
    // 0x443298: 0x5466001d  bnel        $v1, $a2, . + 4 + (0x1D << 2)
label_44329c:
    if (ctx->pc == 0x44329Cu) {
        ctx->pc = 0x44329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443298u;
        // 0x44329c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4432A0u;
        goto label_4432a0;
    }
    ctx->pc = 0x443298u;
    {
        const bool branch_taken_0x443298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x443298) {
            ctx->pc = 0x44329Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443298u;
            // 0x44329c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443310u;
            goto label_443310;
        }
    }
    ctx->pc = 0x4432A0u;
label_4432a0:
    // 0x4432a0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4432a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4432a4:
    // 0x4432a4: 0x10660036  beq         $v1, $a2, . + 4 + (0x36 << 2)
label_4432a8:
    if (ctx->pc == 0x4432A8u) {
        ctx->pc = 0x4432A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432A4u;
        // 0x4432a8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4432ACu;
        goto label_4432ac;
    }
    ctx->pc = 0x4432A4u;
    {
        const bool branch_taken_0x4432a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4432A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432A4u;
        // 0x4432a8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432a4) {
            ctx->pc = 0x443380u;
            goto label_443380;
        }
    }
    ctx->pc = 0x4432ACu;
label_4432ac:
    // 0x4432ac: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x4432acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_4432b0:
    // 0x4432b0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4432b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4432b4:
    // 0x4432b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4432b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4432b8:
    // 0x4432b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4432b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4432bc:
    // 0x4432bc: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_4432c0:
    if (ctx->pc == 0x4432C0u) {
        ctx->pc = 0x4432C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432BCu;
        // 0x4432c0: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4432C4u;
        goto label_4432c4;
    }
    ctx->pc = 0x4432BCu;
    {
        const bool branch_taken_0x4432bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4432C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432BCu;
        // 0x4432c0: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432bc) {
            ctx->pc = 0x443384u;
            goto label_443384;
        }
    }
    ctx->pc = 0x4432C4u;
label_4432c4:
    // 0x4432c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4432c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4432c8:
    // 0x4432c8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4432c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4432cc:
    // 0x4432cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4432d0:
    // 0x4432d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4432d4:
    if (ctx->pc == 0x4432D4u) {
        ctx->pc = 0x4432D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432D0u;
        // 0x4432d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4432D8u;
        goto label_4432d8;
    }
    ctx->pc = 0x4432D0u;
    {
        const bool branch_taken_0x4432d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4432D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432D0u;
        // 0x4432d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432d0) {
            ctx->pc = 0x4432E8u;
            goto label_4432e8;
        }
    }
    ctx->pc = 0x4432D8u;
label_4432d8:
    // 0x4432d8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4432d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4432dc:
    // 0x4432dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4432dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4432e0:
    // 0x4432e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4432e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4432e4:
    // 0x4432e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4432e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4432e8:
    // 0x4432e8: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
label_4432ec:
    if (ctx->pc == 0x4432ECu) {
        ctx->pc = 0x4432ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432E8u;
        // 0x4432ec: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4432F0u;
        goto label_4432f0;
    }
    ctx->pc = 0x4432E8u;
    {
        const bool branch_taken_0x4432e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4432ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432E8u;
        // 0x4432ec: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432e8) {
            ctx->pc = 0x443380u;
            goto label_443380;
        }
    }
    ctx->pc = 0x4432F0u;
label_4432f0:
    // 0x4432f0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4432f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4432f4:
    // 0x4432f4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4432f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4432f8:
    // 0x4432f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4432f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4432fc:
    // 0x4432fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4432fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_443300:
    // 0x443300: 0x5080fff3  beql        $a0, $zero, . + 4 + (-0xD << 2)
label_443304:
    if (ctx->pc == 0x443304u) {
        ctx->pc = 0x443304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443300u;
        // 0x443304: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443308u;
        goto label_443308;
    }
    ctx->pc = 0x443300u;
    {
        const bool branch_taken_0x443300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x443300) {
            ctx->pc = 0x443304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443300u;
            // 0x443304: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4432D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4432d0;
        }
    }
    ctx->pc = 0x443308u;
label_443308:
    // 0x443308: 0x1000001e  b           . + 4 + (0x1E << 2)
label_44330c:
    if (ctx->pc == 0x44330Cu) {
        ctx->pc = 0x44330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443308u;
        // 0x44330c: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443310u;
        goto label_443310;
    }
    ctx->pc = 0x443308u;
    {
        const bool branch_taken_0x443308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443308u;
        // 0x44330c: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443308) {
            ctx->pc = 0x443384u;
            goto label_443384;
        }
    }
    ctx->pc = 0x443310u;
label_443310:
    // 0x443310: 0x54a2001c  bnel        $a1, $v0, . + 4 + (0x1C << 2)
label_443314:
    if (ctx->pc == 0x443314u) {
        ctx->pc = 0x443314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443310u;
        // 0x443314: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443318u;
        goto label_443318;
    }
    ctx->pc = 0x443310u;
    {
        const bool branch_taken_0x443310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x443310) {
            ctx->pc = 0x443314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443310u;
            // 0x443314: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443384u;
            goto label_443384;
        }
    }
    ctx->pc = 0x443318u;
label_443318:
    // 0x443318: 0x10c50019  beq         $a2, $a1, . + 4 + (0x19 << 2)
label_44331c:
    if (ctx->pc == 0x44331Cu) {
        ctx->pc = 0x44331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443318u;
        // 0x44331c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443320u;
        goto label_443320;
    }
    ctx->pc = 0x443318u;
    {
        const bool branch_taken_0x443318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x44331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443318u;
        // 0x44331c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443318) {
            ctx->pc = 0x443380u;
            goto label_443380;
        }
    }
    ctx->pc = 0x443320u;
label_443320:
    // 0x443320: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x443320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_443324:
    // 0x443324: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x443324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_443328:
    // 0x443328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x443328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_44332c:
    // 0x44332c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_443330:
    // 0x443330: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_443334:
    if (ctx->pc == 0x443334u) {
        ctx->pc = 0x443334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443330u;
        // 0x443334: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443338u;
        goto label_443338;
    }
    ctx->pc = 0x443330u;
    {
        const bool branch_taken_0x443330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x443334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443330u;
        // 0x443334: 0x2645d7c0  addiu       $a1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443330) {
            ctx->pc = 0x443384u;
            goto label_443384;
        }
    }
    ctx->pc = 0x443338u;
label_443338:
    // 0x443338: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x443338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44333c:
    // 0x44333c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x44333cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_443340:
    // 0x443340: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x443340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_443344:
    // 0x443344: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x443344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_443348:
    // 0x443348: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x443348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44334c:
    // 0x44334c: 0x0  nop
    ctx->pc = 0x44334cu;
    // NOP
label_443350:
    // 0x443350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x443350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_443354:
    // 0x443354: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
label_443358:
    if (ctx->pc == 0x443358u) {
        ctx->pc = 0x443358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443354u;
        // 0x443358: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44335Cu;
        goto label_44335c;
    }
    ctx->pc = 0x443354u;
    {
        const bool branch_taken_0x443354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x443358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443354u;
        // 0x443358: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443354) {
            ctx->pc = 0x443360u;
            goto label_443360;
        }
    }
    ctx->pc = 0x44335Cu;
label_44335c:
    // 0x44335c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x44335cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_443360:
    // 0x443360: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x443360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_443364:
    // 0x443364: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
label_443368:
    if (ctx->pc == 0x443368u) {
        ctx->pc = 0x443368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443364u;
        // 0x443368: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44336Cu;
        goto label_44336c;
    }
    ctx->pc = 0x443364u;
    {
        const bool branch_taken_0x443364 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x443368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443364u;
        // 0x443368: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x443364) {
            ctx->pc = 0x443380u;
            goto label_443380;
        }
    }
    ctx->pc = 0x44336Cu;
label_44336c:
    // 0x44336c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x44336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_443370:
    // 0x443370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x443370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_443374:
    // 0x443374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x443374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_443378:
    // 0x443378: 0x5080fff5  beql        $a0, $zero, . + 4 + (-0xB << 2)
label_44337c:
    if (ctx->pc == 0x44337Cu) {
        ctx->pc = 0x44337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443378u;
        // 0x44337c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443380u;
        goto label_443380;
    }
    ctx->pc = 0x443378u;
    {
        const bool branch_taken_0x443378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x443378) {
            ctx->pc = 0x44337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443378u;
            // 0x44337c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443350;
        }
    }
    ctx->pc = 0x443380u;
label_443380:
    // 0x443380: 0x2645d7c0  addiu       $a1, $s2, -0x2840
    ctx->pc = 0x443380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
label_443384:
    // 0x443384: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x443384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_443388:
    // 0x443388: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x443388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44338c:
    // 0x44338c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x44338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_443390:
    // 0x443390: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x443390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_443394:
    // 0x443394: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x443394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_443398:
    // 0x443398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x443398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44339c:
    // 0x44339c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_4433a0:
    if (ctx->pc == 0x4433A0u) {
        ctx->pc = 0x4433A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44339Cu;
        // 0x4433a0: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433A4u;
        goto label_4433a4;
    }
    ctx->pc = 0x44339Cu;
    {
        const bool branch_taken_0x44339c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4433A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44339Cu;
        // 0x4433a0: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44339c) {
            ctx->pc = 0x4433DCu;
            goto label_4433dc;
        }
    }
    ctx->pc = 0x4433A4u;
label_4433a4:
    // 0x4433a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4433a8:
    // 0x4433a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4433a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4433ac:
    // 0x4433ac: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4433acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4433b0:
    // 0x4433b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_4433b4:
    if (ctx->pc == 0x4433B4u) {
        ctx->pc = 0x4433B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433B0u;
        // 0x4433b4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433B8u;
        goto label_4433b8;
    }
    ctx->pc = 0x4433B0u;
    {
        const bool branch_taken_0x4433b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4433B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433B0u;
        // 0x4433b4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4433b0) {
            ctx->pc = 0x4433DCu;
            goto label_4433dc;
        }
    }
    ctx->pc = 0x4433B8u;
label_4433b8:
    // 0x4433b8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x4433b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_4433bc:
    // 0x4433bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4433c0:
    if (ctx->pc == 0x4433C0u) {
        ctx->pc = 0x4433C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433BCu;
        // 0x4433c0: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433C4u;
        goto label_4433c4;
    }
    ctx->pc = 0x4433BCu;
    {
        const bool branch_taken_0x4433bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4433bc) {
            ctx->pc = 0x4433C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4433BCu;
            // 0x4433c0: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4433DCu;
            goto label_4433dc;
        }
    }
    ctx->pc = 0x4433C4u;
label_4433c4:
    // 0x4433c4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4433c8:
    // 0x4433c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4433cc:
    if (ctx->pc == 0x4433CCu) {
        ctx->pc = 0x4433CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433C8u;
        // 0x4433cc: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433D0u;
        goto label_4433d0;
    }
    ctx->pc = 0x4433C8u;
    {
        const bool branch_taken_0x4433c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4433c8) {
            ctx->pc = 0x4433CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4433C8u;
            // 0x4433cc: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4433DCu;
            goto label_4433dc;
        }
    }
    ctx->pc = 0x4433D0u;
label_4433d0:
    // 0x4433d0: 0x60f809  jalr        $v1
label_4433d4:
    if (ctx->pc == 0x4433D4u) {
        ctx->pc = 0x4433D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433D0u;
        // 0x4433d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433D8u;
        goto label_4433d8;
    }
    ctx->pc = 0x4433D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4433D8u);
        ctx->pc = 0x4433D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433D0u;
        // 0x4433d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4433D0u, 0x4433D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4433D8u;
label_4433d8:
    // 0x4433d8: 0x2643d7c0  addiu       $v1, $s2, -0x2840
    ctx->pc = 0x4433d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
label_4433dc:
    // 0x4433dc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4433dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4433e0:
    // 0x4433e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4433e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4433e4:
    // 0x4433e4: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_4433e8:
    if (ctx->pc == 0x4433E8u) {
        ctx->pc = 0x4433E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433E4u;
        // 0x4433e8: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4433ECu;
        goto label_4433ec;
    }
    ctx->pc = 0x4433E4u;
    {
        const bool branch_taken_0x4433e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4433e4) {
            ctx->pc = 0x4433E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4433E4u;
            // 0x4433e8: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4433ECu;
            goto label_4433ec;
        }
    }
    ctx->pc = 0x4433ECu;
label_4433ec:
    // 0x4433ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4433ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4433f0:
    // 0x4433f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4433f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4433f4:
    // 0x4433f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4433f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4433f8:
    // 0x4433f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4433f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4433fc:
    // 0x4433fc: 0x3e00008  jr          $ra
label_443400:
    if (ctx->pc == 0x443400u) {
        ctx->pc = 0x443400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433FCu;
        // 0x443400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443404u;
        goto label_443404;
    }
    ctx->pc = 0x4433FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433FCu;
        // 0x443400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4433FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443404u;
label_443404:
    // 0x443404: 0x0  nop
    ctx->pc = 0x443404u;
    // NOP
    ctx->pc = 0x443408u;
}
