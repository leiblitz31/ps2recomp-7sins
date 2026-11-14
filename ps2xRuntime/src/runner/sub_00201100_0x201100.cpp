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

// Function: sub_00201100
// Address: 0x201100 - 0x202390
void sub_00201100_0x201100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201100_0x201100");
#endif

    switch (ctx->pc) {
        case 0x2011b0u: goto label_2011b0;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011f8u: goto label_2011f8;
        case 0x20120cu: goto label_20120c;
        case 0x201218u: goto label_201218;
        case 0x201230u: goto label_201230;
        case 0x201248u: goto label_201248;
        case 0x20125cu: goto label_20125c;
        case 0x201268u: goto label_201268;
        case 0x201280u: goto label_201280;
        case 0x20129cu: goto label_20129c;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012f4u: goto label_2012f4;
        case 0x201338u: goto label_201338;
        case 0x201350u: goto label_201350;
        case 0x201374u: goto label_201374;
        case 0x201398u: goto label_201398;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013f4u: goto label_2013f4;
        case 0x201408u: goto label_201408;
        case 0x201414u: goto label_201414;
        case 0x20142cu: goto label_20142c;
        case 0x201480u: goto label_201480;
        case 0x201490u: goto label_201490;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014f0u: goto label_2014f0;
        case 0x201504u: goto label_201504;
        case 0x201510u: goto label_201510;
        case 0x201530u: goto label_201530;
        case 0x201584u: goto label_201584;
        case 0x201590u: goto label_201590;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015c0u: goto label_2015c0;
        case 0x2015e0u: goto label_2015e0;
        case 0x201644u: goto label_201644;
        case 0x2016bcu: goto label_2016bc;
        case 0x2016e4u: goto label_2016e4;
        case 0x201728u: goto label_201728;
        case 0x201758u: goto label_201758;
        case 0x201774u: goto label_201774;
        case 0x201794u: goto label_201794;
        case 0x2017a8u: goto label_2017a8;
        case 0x2017b4u: goto label_2017b4;
        case 0x2017d4u: goto label_2017d4;
        case 0x2017e4u: goto label_2017e4;
        case 0x201848u: goto label_201848;
        case 0x201878u: goto label_201878;
        case 0x201890u: goto label_201890;
        case 0x2018b0u: goto label_2018b0;
        case 0x201910u: goto label_201910;
        case 0x201948u: goto label_201948;
        case 0x201960u: goto label_201960;
        case 0x201974u: goto label_201974;
        case 0x201988u: goto label_201988;
        case 0x201a00u: goto label_201a00;
        case 0x201a34u: goto label_201a34;
        case 0x201a58u: goto label_201a58;
        case 0x201a74u: goto label_201a74;
        case 0x201a88u: goto label_201a88;
        case 0x201aacu: goto label_201aac;
        case 0x201ac8u: goto label_201ac8;
        case 0x201bd8u: goto label_201bd8;
        case 0x201becu: goto label_201bec;
        case 0x201c08u: goto label_201c08;
        case 0x201d2cu: goto label_201d2c;
        case 0x201e54u: goto label_201e54;
        case 0x201e74u: goto label_201e74;
        case 0x201e88u: goto label_201e88;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f7cu: goto label_201f7c;
        case 0x201fa4u: goto label_201fa4;
        case 0x201fb8u: goto label_201fb8;
        case 0x201fd8u: goto label_201fd8;
        case 0x201ff4u: goto label_201ff4;
        case 0x202020u: goto label_202020;
        case 0x202048u: goto label_202048;
        case 0x202068u: goto label_202068;
        case 0x202084u: goto label_202084;
        case 0x202094u: goto label_202094;
        case 0x2020b8u: goto label_2020b8;
        case 0x2020fcu: goto label_2020fc;
        case 0x202110u: goto label_202110;
        case 0x202128u: goto label_202128;
        case 0x20213cu: goto label_20213c;
        case 0x202148u: goto label_202148;
        case 0x202164u: goto label_202164;
        case 0x2021a8u: goto label_2021a8;
        case 0x2021b4u: goto label_2021b4;
        case 0x2021ccu: goto label_2021cc;
        case 0x2021f8u: goto label_2021f8;
        case 0x202204u: goto label_202204;
        case 0x20221cu: goto label_20221c;
        case 0x202240u: goto label_202240;
        case 0x202250u: goto label_202250;
        case 0x202268u: goto label_202268;
        case 0x202280u: goto label_202280;
        case 0x202298u: goto label_202298;
        case 0x2022b4u: goto label_2022b4;
        case 0x202300u: goto label_202300;
        case 0x202310u: goto label_202310;
        case 0x20232cu: goto label_20232c;
        case 0x202350u: goto label_202350;
        default: break;
    }

    ctx->pc = 0x201100u;

    // 0x201100: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x201104: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x201104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x201108: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x201108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x20110c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x201110: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x201110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x201114: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x201114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x201118: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x201118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20111c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x201120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x201120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x201124: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x201124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x201128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20112c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20112cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x201130: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x201130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x201134: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x201134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
    // 0x201138: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20113c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x201140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201144: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201144u;
    {
        const bool branch_taken_0x201144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201144) {
            ctx->pc = 0x20115Cu;
            goto label_20115c;
        }
    }
    ctx->pc = 0x20114Cu;
    // 0x20114c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201150: 0xa3a202be  sb          $v0, 0x2BE($sp)
    ctx->pc = 0x201150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 702), (uint8_t)GPR_U32(ctx, 2));
    // 0x201154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x201154u;
    {
        const bool branch_taken_0x201154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201154) {
            ctx->pc = 0x201160u;
            goto label_201160;
        }
    }
    ctx->pc = 0x20115Cu;
label_20115c:
    // 0x20115c: 0xa3a002be  sb          $zero, 0x2BE($sp)
    ctx->pc = 0x20115cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 702), (uint8_t)GPR_U32(ctx, 0));
label_201160:
    // 0x201160: 0x93a202be  lbu         $v0, 0x2BE($sp)
    ctx->pc = 0x201160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 702)));
    // 0x201164: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x201164u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201168: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20116c: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x201170: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x201170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x201174: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x201174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x201178: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x201178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x20117c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20117Cu;
    {
        const bool branch_taken_0x20117c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20117c) {
            ctx->pc = 0x201194u;
            goto label_201194;
        }
    }
    ctx->pc = 0x201184u;
    // 0x201184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201188: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x201188u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20118c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20118Cu;
    {
        const bool branch_taken_0x20118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20118c) {
            ctx->pc = 0x201198u;
            goto label_201198;
        }
    }
    ctx->pc = 0x201194u;
label_201194:
    // 0x201194: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x201194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201198:
    // 0x201198: 0xa3be02bf  sb          $fp, 0x2BF($sp)
    ctx->pc = 0x201198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 703), (uint8_t)GPR_U32(ctx, 30));
    // 0x20119c: 0x27a20288  addiu       $v0, $sp, 0x288
    ctx->pc = 0x20119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x2011a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2011a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2011a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x2011CCu;
            goto label_2011cc;
        }
    }
    ctx->pc = 0x2011ACu;
    // 0x2011ac: 0x403021  addu        $a2, $v0, $zero
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_2011b0:
    // 0x2011b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2011b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2011b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2011b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2011b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2011b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2011bc: 0x0  nop
    ctx->pc = 0x2011bcu;
    // NOP
    // 0x2011c0: 0x0  nop
    ctx->pc = 0x2011c0u;
    // NOP
    // 0x2011c4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2011C4u;
    {
        const bool branch_taken_0x2011c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2011c4) {
            ctx->pc = 0x2011B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2011b0;
        }
    }
    ctx->pc = 0x2011CCu;
label_2011cc:
    // 0x2011cc: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2011ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2011d0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2011D0u;
    SET_GPR_U32(ctx, 31, 0x2011D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2011D0u, 0x2011D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011D8u;
label_2011d8:
    // 0x2011d8: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x2011d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x2011dc: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2011e0: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2011e4: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x2011e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x2011e8: 0x7ba40250  lq          $a0, 0x250($sp)
    ctx->pc = 0x2011e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2011ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2011f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2011F0u;
    SET_GPR_U32(ctx, 31, 0x2011F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2011F0u, 0x2011F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011F8u;
label_2011f8:
    // 0x2011f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2011fc: 0x7ba40260  lq          $a0, 0x260($sp)
    ctx->pc = 0x2011fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x201200: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x201200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201204: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x201204u;
    SET_GPR_U32(ctx, 31, 0x20120Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x201204u, 0x20120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20120Cu;
label_20120c:
    // 0x20120c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201210: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201210u;
    SET_GPR_U32(ctx, 31, 0x201218u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201210u, 0x201218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x201218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x20121c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x20121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201220: 0x246400d8  addiu       $a0, $v1, 0xD8
    ctx->pc = 0x201220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
    // 0x201224: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x201224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x201228: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201228u;
    SET_GPR_U32(ctx, 31, 0x201230u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201228u, 0x201230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201230u;
label_201230:
    // 0x201230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201234: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201238: 0x7ba40240  lq          $a0, 0x240($sp)
    ctx->pc = 0x201238u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x20123c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201240: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x201240u;
    SET_GPR_U32(ctx, 31, 0x201248u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x201240u, 0x201248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201248u;
label_201248:
    // 0x201248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20124c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x20124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x201250: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x201250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201254: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x201254u;
    {
        const bool branch_taken_0x201254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201254) {
            ctx->pc = 0x2012A4u;
            goto label_2012a4;
        }
    }
    ctx->pc = 0x20125Cu;
label_20125c:
    // 0x20125c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201260: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201260u;
    SET_GPR_U32(ctx, 31, 0x201268u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201260u, 0x201268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201268u;
label_201268:
    // 0x201268: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x201268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x20126c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201270: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201278: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201278u;
    SET_GPR_U32(ctx, 31, 0x201280u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201278u, 0x201280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201280u;
label_201280:
    // 0x201280: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x201280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x201284: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x201284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x201288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20128c: 0x7ba40230  lq          $a0, 0x230($sp)
    ctx->pc = 0x20128cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x201290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201294: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x201294u;
    SET_GPR_U32(ctx, 31, 0x20129Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x201294u, 0x20129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20129Cu;
label_20129c:
    // 0x20129c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2012a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2012a4:
    // 0x2012a4: 0x2e06002c  sltiu       $a2, $s0, 0x2C
    ctx->pc = 0x2012a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x2012a8: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2012A8u;
    {
        const bool branch_taken_0x2012a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2012a8) {
            ctx->pc = 0x20125Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20125c;
        }
    }
    ctx->pc = 0x2012B0u;
    // 0x2012b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2012b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2012B4u;
    {
        const bool branch_taken_0x2012b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012b4) {
            ctx->pc = 0x2012FCu;
            goto label_2012fc;
        }
    }
    ctx->pc = 0x2012BCu;
label_2012bc:
    // 0x2012bc: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2012c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2012C0u;
    SET_GPR_U32(ctx, 31, 0x2012C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2012C0u, 0x2012C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012C8u;
label_2012c8:
    // 0x2012c8: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x2012c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x2012cc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2012ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2012d0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2012d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2012d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2012D8u;
    SET_GPR_U32(ctx, 31, 0x2012E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2012D8u, 0x2012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012E0u;
label_2012e0:
    // 0x2012e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2012e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2012e4: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x2012e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2012e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2012e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012ec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x2012ECu;
    SET_GPR_U32(ctx, 31, 0x2012F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2012ECu, 0x2012F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012F4u;
label_2012f4:
    // 0x2012f4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2012f8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2012f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2012fc:
    // 0x2012fc: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x2012fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x201300: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201300u;
    {
        const bool branch_taken_0x201300 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201300) {
            ctx->pc = 0x2012BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2012bc;
        }
    }
    ctx->pc = 0x201308u;
    // 0x201308: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x201308u;
    {
        const bool branch_taken_0x201308 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x201308) {
            ctx->pc = 0x20131Cu;
            goto label_20131c;
        }
    }
    ctx->pc = 0x201310u;
    // 0x201310: 0x93a202bf  lbu         $v0, 0x2BF($sp)
    ctx->pc = 0x201310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 703)));
    // 0x201314: 0x1040028a  beqz        $v0, . + 4 + (0x28A << 2)
    ctx->pc = 0x201314u;
    {
        const bool branch_taken_0x201314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201314) {
            ctx->pc = 0x201D40u;
            goto label_201d40;
        }
    }
    ctx->pc = 0x20131Cu;
label_20131c:
    // 0x20131c: 0x12800099  beqz        $s4, . + 4 + (0x99 << 2)
    ctx->pc = 0x20131Cu;
    {
        const bool branch_taken_0x20131c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20131c) {
            ctx->pc = 0x201584u;
            goto label_201584;
        }
    }
    ctx->pc = 0x201324u;
    // 0x201324: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201328: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x20132c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x201330: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x201330u;
    SET_GPR_U32(ctx, 31, 0x201338u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x201330u, 0x201338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201338u;
label_201338:
    // 0x201338: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x201338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20133c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201340: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x201344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201348: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x201348u;
    SET_GPR_U32(ctx, 31, 0x201350u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x201348u, 0x201350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201350u;
label_201350:
    // 0x201350: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x201350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201354: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x201354u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x201358: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20135c: 0xc45400e4  lwc1        $f20, 0xE4($v0)
    ctx->pc = 0x20135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x201360: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201364: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x201368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20136c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x20136Cu;
    SET_GPR_U32(ctx, 31, 0x201374u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20136Cu, 0x201374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201374u;
label_201374:
    // 0x201374: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x201374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20137c: 0x0  nop
    ctx->pc = 0x20137cu;
    // NOP
    // 0x201380: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201380u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201384: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x201384u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x201388: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x201388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x20138c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201390: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201390u;
    SET_GPR_U32(ctx, 31, 0x201398u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201390u, 0x201398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201398u;
label_201398:
    // 0x201398: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x201398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x20139c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2013a0: 0x246400d8  addiu       $a0, $v1, 0xD8
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
    // 0x2013a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2013a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2013a8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2013A8u;
    SET_GPR_U32(ctx, 31, 0x2013B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2013A8u, 0x2013B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013B0u;
label_2013b0:
    // 0x2013b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2013b4: 0x7ba40200  lq          $a0, 0x200($sp)
    ctx->pc = 0x2013b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2013b8: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2013bc: 0xc08c744  jal         func_231D10
    ctx->pc = 0x2013BCu;
    SET_GPR_U32(ctx, 31, 0x2013C4u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x2013BCu, 0x2013C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013C4u;
label_2013c4:
    // 0x2013c4: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x2013c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x2013c8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2013c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2013cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2013CCu;
    SET_GPR_U32(ctx, 31, 0x2013D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2013CCu, 0x2013D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013D4u;
label_2013d4:
    // 0x2013d4: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x2013d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x2013d8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2013dc: 0x244500d8  addiu       $a1, $v0, 0xD8
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2013e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2013e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013e4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2013e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2013e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2013ECu;
    SET_GPR_U32(ctx, 31, 0x2013F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2013ECu, 0x2013F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013F4u;
label_2013f4:
    // 0x2013f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2013f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2013f8: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x2013f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2013fc: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x201400: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x201400u;
    SET_GPR_U32(ctx, 31, 0x201408u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x201400u, 0x201408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201408u;
label_201408:
    // 0x201408: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20140c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x20140Cu;
    SET_GPR_U32(ctx, 31, 0x201414u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20140Cu, 0x201414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201414u;
label_201414:
    // 0x201414: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x201414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x201418: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20141c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x20141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201420: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201424: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201424u;
    SET_GPR_U32(ctx, 31, 0x20142Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201424u, 0x20142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20142Cu;
label_20142c:
    // 0x20142c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201430: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x201434: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x201434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201438: 0xc7a20290  lwc1        $f2, 0x290($sp)
    ctx->pc = 0x201438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20143c: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x20143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201444: 0x0  nop
    ctx->pc = 0x201444u;
    // NOP
    // 0x201448: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201448u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20144c: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x20144cu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201450: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x201454: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x201454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201458: 0xc7a20294  lwc1        $f2, 0x294($sp)
    ctx->pc = 0x201458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20145c: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x20145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201464: 0x0  nop
    ctx->pc = 0x201464u;
    // NOP
    // 0x201468: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201468u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20146c: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x20146cu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201470: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x201470u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x201474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201478: 0xc08c208  jal         func_230820
    ctx->pc = 0x201478u;
    SET_GPR_U32(ctx, 31, 0x201480u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x201478u, 0x201480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201480u;
label_201480:
    // 0x201480: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x201480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x201484: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201488: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201488u;
    SET_GPR_U32(ctx, 31, 0x201490u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201488u, 0x201490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201490u;
label_201490:
    // 0x201490: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x201490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x201494: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201498: 0x24a400d8  addiu       $a0, $a1, 0xD8
    ctx->pc = 0x201498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x20149c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2014a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2014A0u;
    SET_GPR_U32(ctx, 31, 0x2014A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2014A0u, 0x2014A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014A8u;
label_2014a8:
    // 0x2014a8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2014a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2014ac: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x2014acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2014b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014b4: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2014b8: 0xc08c744  jal         func_231D10
    ctx->pc = 0x2014B8u;
    SET_GPR_U32(ctx, 31, 0x2014C0u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x2014B8u, 0x2014C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014C0u;
label_2014c0:
    // 0x2014c0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2014c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2014c4: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2014c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x2014c8: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x2014c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2014cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2014CCu;
    SET_GPR_U32(ctx, 31, 0x2014D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2014CCu, 0x2014D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014D4u;
label_2014d4:
    // 0x2014d4: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x2014d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x2014d8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2014dc: 0x248500d8  addiu       $a1, $a0, 0xD8
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2014e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2014e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014e4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2014e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2014e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2014E8u;
    SET_GPR_U32(ctx, 31, 0x2014F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2014E8u, 0x2014F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014F0u;
label_2014f0:
    // 0x2014f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2014f4: 0x7ba40190  lq          $a0, 0x190($sp)
    ctx->pc = 0x2014f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2014f8: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2014fc: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x2014FCu;
    SET_GPR_U32(ctx, 31, 0x201504u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x2014FCu, 0x201504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201504u;
label_201504:
    // 0x201504: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201508: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201508u;
    SET_GPR_U32(ctx, 31, 0x201510u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201508u, 0x201510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201510u;
label_201510:
    // 0x201510: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x201510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x201514: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201518: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x201518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x20151c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x20151cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x201520: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201524: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x201528: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201528u;
    SET_GPR_U32(ctx, 31, 0x201530u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201528u, 0x201530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201530u;
label_201530:
    // 0x201530: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201534: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x201534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x201538: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x201538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20153c: 0xc7a20290  lwc1        $f2, 0x290($sp)
    ctx->pc = 0x20153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201540: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x201540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201548: 0x0  nop
    ctx->pc = 0x201548u;
    // NOP
    // 0x20154c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20154cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201550: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x201550u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201554: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x201554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x201558: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x201558u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20155c: 0xc7a20294  lwc1        $f2, 0x294($sp)
    ctx->pc = 0x20155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201560: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x201560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201568: 0x0  nop
    ctx->pc = 0x201568u;
    // NOP
    // 0x20156c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20156cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201570: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x201570u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201574: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x201574u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x201578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20157c: 0xc08c208  jal         func_230820
    ctx->pc = 0x20157Cu;
    SET_GPR_U32(ctx, 31, 0x201584u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x20157Cu, 0x201584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201584u;
label_201584:
    // 0x201584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x201584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201588: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x201588u;
    {
        const bool branch_taken_0x201588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201588) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201590u;
label_201590:
    // 0x201590: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x201590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x201594: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x201594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201598: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x201598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20159c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20159Cu;
    {
        const bool branch_taken_0x20159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20159c) {
            ctx->pc = 0x2015F8u;
            goto label_2015f8;
        }
    }
    ctx->pc = 0x2015A4u;
label_2015a4:
    // 0x2015a4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2015a8: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x2015a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x2015ac: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x2015acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2015b0: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x2015b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2015b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2015B8u;
    SET_GPR_U32(ctx, 31, 0x2015C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2015B8u, 0x2015C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015C0u;
label_2015c0:
    // 0x2015c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2015c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2015c4: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2015c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x2015c8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2015c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2015cc: 0x244500f4  addiu       $a1, $v0, 0xF4
    ctx->pc = 0x2015ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x2015d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2015d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2015d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2015D8u;
    SET_GPR_U32(ctx, 31, 0x2015E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2015D8u, 0x2015E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015E0u;
label_2015e0:
    // 0x2015e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2015e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2015e4: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2015e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2015e8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2015E8u;
    {
        const bool branch_taken_0x2015e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2015e8) {
            ctx->pc = 0x2015F4u;
            goto label_2015f4;
        }
    }
    ctx->pc = 0x2015F0u;
    // 0x2015f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2015f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2015f4:
    // 0x2015f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2015f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2015f8:
    // 0x2015f8: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x2015f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2015fc: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2015fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x201600: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x201600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x201604: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x201604u;
    {
        const bool branch_taken_0x201604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201604) {
            ctx->pc = 0x2015A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2015a4;
        }
    }
    ctx->pc = 0x20160Cu;
    // 0x20160c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201610: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x201610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x201614: 0x204282b  sltu        $a1, $s0, $a0
    ctx->pc = 0x201614u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x201618: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201618u;
    {
        const bool branch_taken_0x201618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x201618) {
            ctx->pc = 0x20162Cu;
            goto label_20162c;
        }
    }
    ctx->pc = 0x201620u;
    // 0x201620: 0x93a202bf  lbu         $v0, 0x2BF($sp)
    ctx->pc = 0x201620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 703)));
    // 0x201624: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x201624u;
    {
        const bool branch_taken_0x201624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201624) {
            ctx->pc = 0x201668u;
            goto label_201668;
        }
    }
    ctx->pc = 0x20162Cu;
label_20162c:
    // 0x20162c: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x20162cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201630: 0x24a600f4  addiu       $a2, $a1, 0xF4
    ctx->pc = 0x201630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x201634: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x201634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20163c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20163Cu;
    SET_GPR_U32(ctx, 31, 0x201644u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20163Cu, 0x201644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201644u;
label_201644:
    // 0x201644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x201644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201648: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x201648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20164c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x20164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x201650: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x201650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x201654: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x201654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x201658: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20165c: 0x24910003  addiu       $s1, $a0, 0x3
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x201660: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x201660u;
    {
        const bool branch_taken_0x201660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201660) {
            ctx->pc = 0x201768u;
            goto label_201768;
        }
    }
    ctx->pc = 0x201668u;
label_201668:
    // 0x201668: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x201668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20166c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x20166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201670: 0xafa502b4  sw          $a1, 0x2B4($sp)
    ctx->pc = 0x201670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 5));
    // 0x201674: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201678: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x201678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20167c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20167cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201680: 0x0  nop
    ctx->pc = 0x201680u;
    // NOP
    // 0x201684: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x201684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201688: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x201688u;
    {
        const bool branch_taken_0x201688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201688) {
            ctx->pc = 0x2016FCu;
            goto label_2016fc;
        }
    }
    ctx->pc = 0x201690u;
    // 0x201690: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201694: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x201694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x201698: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x201698u;
    {
        const bool branch_taken_0x201698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x201698) {
            ctx->pc = 0x2016D0u;
            goto label_2016d0;
        }
    }
    ctx->pc = 0x2016A0u;
    // 0x2016a0: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2016a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2016a4: 0x248200f4  addiu       $v0, $a0, 0xF4
    ctx->pc = 0x2016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 244));
    // 0x2016a8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2016a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2016ac: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x2016acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2016b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2016b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2016B4u;
    SET_GPR_U32(ctx, 31, 0x2016BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2016B4u, 0x2016BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016BCu;
label_2016bc:
    // 0x2016bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2016c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2016c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2016c4: 0x24b10013  addiu       $s1, $a1, 0x13
    ctx->pc = 0x2016c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2016c8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2016C8u;
    {
        const bool branch_taken_0x2016c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016c8) {
            ctx->pc = 0x201768u;
            goto label_201768;
        }
    }
    ctx->pc = 0x2016D0u;
label_2016d0:
    // 0x2016d0: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2016d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2016d4: 0x24a400f4  addiu       $a0, $a1, 0xF4
    ctx->pc = 0x2016d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x2016d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2016d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2016DCu;
    SET_GPR_U32(ctx, 31, 0x2016E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2016DCu, 0x2016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016E4u;
label_2016e4:
    // 0x2016e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2016e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2016e8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2016e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2016ec: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2016ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2016f0: 0x2648821  addu        $s1, $s3, $a0
    ctx->pc = 0x2016f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2016f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2016F4u;
    {
        const bool branch_taken_0x2016f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016f4) {
            ctx->pc = 0x201768u;
            goto label_201768;
        }
    }
    ctx->pc = 0x2016FCu;
label_2016fc:
    // 0x2016fc: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x201700: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201704: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x201704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x201708: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x201708) {
            ctx->pc = 0x20173Cu;
            goto label_20173c;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201714: 0x244500f4  addiu       $a1, $v0, 0xF4
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x201718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x201718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20171c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201720: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201720u;
    SET_GPR_U32(ctx, 31, 0x201728u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201720u, 0x201728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201728u;
label_201728:
    // 0x201728: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20172c: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201730: 0x24f10012  addiu       $s1, $a3, 0x12
    ctx->pc = 0x201730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 18));
    // 0x201734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201734u;
    {
        const bool branch_taken_0x201734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201734) {
            ctx->pc = 0x201768u;
            goto label_201768;
        }
    }
    ctx->pc = 0x20173Cu;
label_20173c:
    // 0x20173c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201740: 0x248200f4  addiu       $v0, $a0, 0xF4
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 244));
    // 0x201744: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x201744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x201748: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x201748u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20174c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201750: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201750u;
    SET_GPR_U32(ctx, 31, 0x201758u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201750u, 0x201758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201758u;
label_201758:
    // 0x201758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x201758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20175c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201760: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x201764: 0x2658821  addu        $s1, $s3, $a1
    ctx->pc = 0x201764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_201768:
    // 0x201768: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20176c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x20176Cu;
    SET_GPR_U32(ctx, 31, 0x201774u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20176Cu, 0x201774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201774u;
label_201774:
    // 0x201774: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x201774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x201778: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20177c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x20177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x201780: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x201780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x201784: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20178c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20178Cu;
    SET_GPR_U32(ctx, 31, 0x201794u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20178Cu, 0x201794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201794u;
label_201794:
    // 0x201794: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201798: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x201798u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20179c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2017a0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x2017A0u;
    SET_GPR_U32(ctx, 31, 0x2017A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2017A0u, 0x2017A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017A8u;
label_2017a8:
    // 0x2017a8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2017ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2017ACu;
    SET_GPR_U32(ctx, 31, 0x2017B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2017ACu, 0x2017B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017B4u;
label_2017b4:
    // 0x2017b4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2017b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2017b8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2017b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2017bc: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2017c0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2017c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2017c4: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2017c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2017c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2017c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2017CCu;
    SET_GPR_U32(ctx, 31, 0x2017D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2017CCu, 0x2017D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017D4u;
label_2017d4:
    // 0x2017d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2017d8: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2017d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2017dc: 0xc08c7c8  jal         func_231F20
    ctx->pc = 0x2017DCu;
    SET_GPR_U32(ctx, 31, 0x2017E4u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x2017DCu, 0x2017E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017E4u;
label_2017e4:
    // 0x2017e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2017e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2017e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2017ec: 0x0  nop
    ctx->pc = 0x2017ecu;
    // NOP
    // 0x2017f0: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x2017f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2017f4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2017f8: 0xc441011c  lwc1        $f1, 0x11C($v0)
    ctx->pc = 0x2017f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2017fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2017fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201800: 0x0  nop
    ctx->pc = 0x201800u;
    // NOP
    // 0x201804: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x201804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201808: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x201808u;
    {
        const bool branch_taken_0x201808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201808) {
            ctx->pc = 0x20186Cu;
            goto label_20186c;
        }
    }
    ctx->pc = 0x201810u;
    // 0x201810: 0x8fa602c0  lw          $a2, 0x2C0($sp)
    ctx->pc = 0x201810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201814: 0x8cc70128  lw          $a3, 0x128($a2)
    ctx->pc = 0x201814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x201818: 0x14f00014  bne         $a3, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x201818u;
    {
        const bool branch_taken_0x201818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x201818) {
            ctx->pc = 0x20186Cu;
            goto label_20186c;
        }
    }
    ctx->pc = 0x201820u;
    // 0x201820: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201824: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x201828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x201828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20182c: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x20182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201830: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x201830u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x201834: 0x0  nop
    ctx->pc = 0x201834u;
    // NOP
    // 0x201838: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x201838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20183c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x20183cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201840: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x201840u;
    SET_GPR_U32(ctx, 31, 0x201848u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x201840u, 0x201848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x201848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20184c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x201854: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x201854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201858: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x201858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20185c: 0x0  nop
    ctx->pc = 0x20185cu;
    // NOP
    // 0x201860: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x201860u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x201864: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x201864u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x201868: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x201868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_20186c:
    // 0x20186c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201870: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201870u;
    SET_GPR_U32(ctx, 31, 0x201878u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201870u, 0x201878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201878u;
label_201878:
    // 0x201878: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x201878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x20187c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201880: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201888: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201888u;
    SET_GPR_U32(ctx, 31, 0x201890u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201888u, 0x201890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201890u;
label_201890:
    // 0x201890: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201894: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x201894u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x201898: 0xc7ac02b0  lwc1        $f12, 0x2B0($sp)
    ctx->pc = 0x201898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20189c: 0xc7ad02b0  lwc1        $f13, 0x2B0($sp)
    ctx->pc = 0x20189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2018a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2018a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2018a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2018a8: 0xc08c544  jal         func_231510
    ctx->pc = 0x2018A8u;
    SET_GPR_U32(ctx, 31, 0x2018B0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x2018A8u, 0x2018B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018B0u;
label_2018b0:
    // 0x2018b0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2018b4: 0xc4400134  lwc1        $f0, 0x134($v0)
    ctx->pc = 0x2018b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2018b8: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x2018b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x2018bc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2018c0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2018c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2018c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2018c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2018c8: 0x0  nop
    ctx->pc = 0x2018c8u;
    // NOP
    // 0x2018cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2018ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2018d0: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2018D0u;
    {
        const bool branch_taken_0x2018d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2018d0) {
            ctx->pc = 0x20193Cu;
            goto label_20193c;
        }
    }
    ctx->pc = 0x2018D8u;
    // 0x2018d8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2018dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2018e0: 0x14500016  bne         $v0, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2018E0u;
    {
        const bool branch_taken_0x2018e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2018e0) {
            ctx->pc = 0x20193Cu;
            goto label_20193c;
        }
    }
    ctx->pc = 0x2018E8u;
    // 0x2018e8: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2018ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2018ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2018f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2018f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2018f4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2018f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2018f8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2018f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2018fc: 0x0  nop
    ctx->pc = 0x2018fcu;
    // NOP
    // 0x201900: 0xc7808334  lwc1        $f0, -0x7CCC($gp)
    ctx->pc = 0x201900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201904: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x201904u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201908: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x201908u;
    SET_GPR_U32(ctx, 31, 0x201910u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x201908u, 0x201910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201910u;
label_201910:
    // 0x201910: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x201914: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x201914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201918: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x201918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20191c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20191cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201920: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x201920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201924: 0x0  nop
    ctx->pc = 0x201924u;
    // NOP
    // 0x201928: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x201928u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20192c: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x20192cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x201930: 0xc7a002ac  lwc1        $f0, 0x2AC($sp)
    ctx->pc = 0x201930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x201934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201938: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x201938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_20193c:
    // 0x20193c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201940: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201940u;
    SET_GPR_U32(ctx, 31, 0x201948u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201940u, 0x201948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201948u;
label_201948:
    // 0x201948: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x201948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x20194c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201950: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201958: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201958u;
    SET_GPR_U32(ctx, 31, 0x201960u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201958u, 0x201960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201960u;
label_201960:
    // 0x201960: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201964: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x201964u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x201968: 0xc7ac02ac  lwc1        $f12, 0x2AC($sp)
    ctx->pc = 0x201968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20196c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x20196Cu;
    SET_GPR_U32(ctx, 31, 0x201974u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x20196Cu, 0x201974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201974u;
label_201974:
    // 0x201974: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x201974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x201978: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20197c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20197Cu;
    {
        const bool branch_taken_0x20197c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20197c) {
            ctx->pc = 0x2019A4u;
            goto label_2019a4;
        }
    }
    ctx->pc = 0x201984u;
    // 0x201984: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x201984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_201988:
    // 0x201988: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x201988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20198c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x201990: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x201990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x201994: 0x0  nop
    ctx->pc = 0x201994u;
    // NOP
    // 0x201998: 0x0  nop
    ctx->pc = 0x201998u;
    // NOP
    // 0x20199c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20199Cu;
    {
        const bool branch_taken_0x20199c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20199c) {
            ctx->pc = 0x201988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201988;
        }
    }
    ctx->pc = 0x2019A4u;
label_2019a4:
    // 0x2019a4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2019a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2019a8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2019a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2019ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2019acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019b0: 0x0  nop
    ctx->pc = 0x2019b0u;
    // NOP
    // 0x2019b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2019b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2019b8: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2019B8u;
    {
        const bool branch_taken_0x2019b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2019b8) {
            ctx->pc = 0x201A4Cu;
            goto label_201a4c;
        }
    }
    ctx->pc = 0x2019C0u;
    // 0x2019c0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2019c4: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x2019c8: 0x14500020  bne         $v0, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2019C8u;
    {
        const bool branch_taken_0x2019c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2019c8) {
            ctx->pc = 0x201A4Cu;
            goto label_201a4c;
        }
    }
    ctx->pc = 0x2019D0u;
    // 0x2019d0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2019d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2019d4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2019d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2019d8: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x2019d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2019dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2019dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2019e0: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x2019e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2019e4: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x2019e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2019e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2019ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2019ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2019f0: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x2019f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2019f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2019f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2019f8: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2019F8u;
    SET_GPR_U32(ctx, 31, 0x201A00u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2019F8u, 0x201A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A00u;
label_201a00:
    // 0x201a00: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x201a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x201a04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x201a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201a08: 0xc7a102a8  lwc1        $f1, 0x2A8($sp)
    ctx->pc = 0x201a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201a0c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x201a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x201a10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x201a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201a14: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x201a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x201a18: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201a1c: 0x3c1442ca  lui         $s4, 0x42CA
    ctx->pc = 0x201a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17098 << 16));
    // 0x201a20: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x201a20u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201a24: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x201a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201a28: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x201a28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201a2c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x201A2Cu;
    SET_GPR_U32(ctx, 31, 0x201A34u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x201A2Cu, 0x201A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A34u;
label_201a34:
    // 0x201a34: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x201a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x201a38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x201a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201a3c: 0xc7a102a8  lwc1        $f1, 0x2A8($sp)
    ctx->pc = 0x201a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201a40: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x201a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x201a44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x201a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201a48: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x201a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_201a4c:
    // 0x201a4c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201a50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201A50u;
    SET_GPR_U32(ctx, 31, 0x201A58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201A50u, 0x201A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A58u;
label_201a58:
    // 0x201a58: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x201a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x201a5c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201a60: 0x245e00d8  addiu       $fp, $v0, 0xD8
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201a64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x201a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201A6Cu;
    SET_GPR_U32(ctx, 31, 0x201A74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201A6Cu, 0x201A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A74u;
label_201a74:
    // 0x201a74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201a78: 0x7ba40270  lq          $a0, 0x270($sp)
    ctx->pc = 0x201a78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x201a7c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x201a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x201a80: 0xc08c688  jal         func_231A20
    ctx->pc = 0x201A80u;
    SET_GPR_U32(ctx, 31, 0x201A88u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x201A80u, 0x201A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A88u;
label_201a88:
    // 0x201a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a8c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x201a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x201a90: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x201a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x201a94: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x201a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x201a98: 0x16220051  bne         $s1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x201A98u;
    {
        const bool branch_taken_0x201a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x201a98) {
            ctx->pc = 0x201BE0u;
            goto label_201be0;
        }
    }
    ctx->pc = 0x201AA0u;
    // 0x201aa0: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201aa4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201AA4u;
    SET_GPR_U32(ctx, 31, 0x201AACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201AA4u, 0x201AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AACu;
label_201aac:
    // 0x201aac: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x201aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x201ab0: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201ab4: 0x24a200d8  addiu       $v0, $a1, 0xD8
    ctx->pc = 0x201ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x201ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ac0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201AC0u;
    SET_GPR_U32(ctx, 31, 0x201AC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201AC0u, 0x201AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AC8u;
label_201ac8:
    // 0x201ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201acc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201ad0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x201ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x201ad4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x201ad4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201ad8: 0xc7a20290  lwc1        $f2, 0x290($sp)
    ctx->pc = 0x201ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201adc: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x201adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x201ae0: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x201ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
    // 0x201ae4: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x201ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x201ae8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x201aec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201AECu;
    {
        const bool branch_taken_0x201aec = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x201aec) {
            ctx->pc = 0x201B08u;
            goto label_201b08;
        }
    }
    ctx->pc = 0x201AF4u;
    // 0x201af4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201af8: 0x0  nop
    ctx->pc = 0x201af8u;
    // NOP
    // 0x201afc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201B00u;
    {
        const bool branch_taken_0x201b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b00) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201B08u;
label_201b08:
    // 0x201b08: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x201b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x201b0c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x201b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x201b10: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x201b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x201b14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201b14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b18: 0x0  nop
    ctx->pc = 0x201b18u;
    // NOP
    // 0x201b1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201b20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x201b20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_201b24:
    // 0x201b24: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x201b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x201b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b2c: 0x0  nop
    ctx->pc = 0x201b2cu;
    // NOP
    // 0x201b30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x201b30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201b34: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x201b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x201b38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x201b38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b3c: 0x0  nop
    ctx->pc = 0x201b3cu;
    // NOP
    // 0x201b40: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x201b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201b44: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201B44u;
    {
        const bool branch_taken_0x201b44 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x201b44) {
            ctx->pc = 0x201B60u;
            goto label_201b60;
        }
    }
    ctx->pc = 0x201B4Cu;
    // 0x201b4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x201b4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b50: 0x0  nop
    ctx->pc = 0x201b50u;
    // NOP
    // 0x201b54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201b58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201B58u;
    {
        const bool branch_taken_0x201b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b58) {
            ctx->pc = 0x201B7Cu;
            goto label_201b7c;
        }
    }
    ctx->pc = 0x201B60u;
label_201b60:
    // 0x201b60: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x201b64: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x201b68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x201b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x201b6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b70: 0x0  nop
    ctx->pc = 0x201b70u;
    // NOP
    // 0x201b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201b78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x201b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_201b7c:
    // 0x201b7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x201b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b84: 0x0  nop
    ctx->pc = 0x201b84u;
    // NOP
    // 0x201b88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201b88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201b8c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x201b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201b90: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x201b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201b94: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x201b94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201b98: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x201b9c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x201b9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201ba0: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x201ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201ba4: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x201ba4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x201ba8: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x201ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201bb0: 0x0  nop
    ctx->pc = 0x201bb0u;
    // NOP
    // 0x201bb4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201bb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201bb8: 0x46021b5c  madd.s      $f13, $f3, $f2
    ctx->pc = 0x201bb8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201bbc: 0x7ba40250  lq          $a0, 0x250($sp)
    ctx->pc = 0x201bbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x201bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201bc8: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x201bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x201bcc: 0x7ba60230  lq          $a2, 0x230($sp)
    ctx->pc = 0x201bccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x201bd0: 0xc08c208  jal         func_230820
    ctx->pc = 0x201BD0u;
    SET_GPR_U32(ctx, 31, 0x201BD8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x201BD0u, 0x201BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BD8u;
label_201bd8:
    // 0x201bd8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x201BD8u;
    {
        const bool branch_taken_0x201bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201bd8) {
            ctx->pc = 0x201D2Cu;
            goto label_201d2c;
        }
    }
    ctx->pc = 0x201BE0u;
label_201be0:
    // 0x201be0: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201be4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201BE4u;
    SET_GPR_U32(ctx, 31, 0x201BECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201BE4u, 0x201BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BECu;
label_201bec:
    // 0x201bec: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x201becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x201bf0: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201bf4: 0x24a200d8  addiu       $v0, $a1, 0xD8
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x201bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c00: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201C00u;
    SET_GPR_U32(ctx, 31, 0x201C08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201C00u, 0x201C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C08u;
label_201c08:
    // 0x201c08: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x201c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201c0c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x201c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x201c10: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x201c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x201c14: 0xc7a40290  lwc1        $f4, 0x290($sp)
    ctx->pc = 0x201c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x201c18: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x201c1c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x201c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x201c20: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x201c20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x201c24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x201c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x201c28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201C28u;
    {
        const bool branch_taken_0x201c28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x201c28) {
            ctx->pc = 0x201C44u;
            goto label_201c44;
        }
    }
    ctx->pc = 0x201C30u;
    // 0x201c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c34: 0x0  nop
    ctx->pc = 0x201c34u;
    // NOP
    // 0x201c38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201C3Cu;
    {
        const bool branch_taken_0x201c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c3c) {
            ctx->pc = 0x201C60u;
            goto label_201c60;
        }
    }
    ctx->pc = 0x201C44u;
label_201c44:
    // 0x201c44: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x201c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201c4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x201c50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201c50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c54: 0x0  nop
    ctx->pc = 0x201c54u;
    // NOP
    // 0x201c58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201c5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x201c5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_201c60:
    // 0x201c60: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
    // 0x201c64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x201c64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c68: 0x0  nop
    ctx->pc = 0x201c68u;
    // NOP
    // 0x201c6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x201c6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201c70: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x201c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c78: 0x0  nop
    ctx->pc = 0x201c78u;
    // NOP
    // 0x201c7c: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x201c7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201c80: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201C80u;
    {
        const bool branch_taken_0x201c80 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x201c80) {
            ctx->pc = 0x201C9Cu;
            goto label_201c9c;
        }
    }
    ctx->pc = 0x201C88u;
    // 0x201c88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x201c88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c8c: 0x0  nop
    ctx->pc = 0x201c8cu;
    // NOP
    // 0x201c90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x201c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x201c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201C94u;
    {
        const bool branch_taken_0x201c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c94) {
            ctx->pc = 0x201CB8u;
            goto label_201cb8;
        }
    }
    ctx->pc = 0x201C9Cu;
label_201c9c:
    // 0x201c9c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x201ca0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x201ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x201ca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201cac: 0x0  nop
    ctx->pc = 0x201cacu;
    // NOP
    // 0x201cb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x201cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x201cb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x201cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_201cb8:
    // 0x201cb8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201cbc: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x201cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201cc4: 0x0  nop
    ctx->pc = 0x201cc4u;
    // NOP
    // 0x201cc8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201cc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201ccc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x201cccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x201cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201cd4: 0x0  nop
    ctx->pc = 0x201cd4u;
    // NOP
    // 0x201cd8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201cd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201cdc: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x201cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x201ce0: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x201ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201ce4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x201ce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201ce8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x201cec: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x201cecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201cf0: 0xc7a20294  lwc1        $f2, 0x294($sp)
    ctx->pc = 0x201cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201cf4: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x201cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201cf8: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x201cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x201cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201d00: 0x0  nop
    ctx->pc = 0x201d00u;
    // NOP
    // 0x201d04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x201d04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x201d08: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x201d08u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x201d0c: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x201d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d10: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x201d10u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201d14: 0x7ba40220  lq          $a0, 0x220($sp)
    ctx->pc = 0x201d14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x201d18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x201d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d24: 0xc08c208  jal         func_230820
    ctx->pc = 0x201D24u;
    SET_GPR_U32(ctx, 31, 0x201D2Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x201D24u, 0x201D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D2Cu;
label_201d2c:
    // 0x201d2c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x201d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201d34:
    // 0x201d34: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x201d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x201d38: 0x1440fe15  bnez        $v0, . + 4 + (-0x1EB << 2)
    ctx->pc = 0x201D38u;
    {
        const bool branch_taken_0x201d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201d38) {
            ctx->pc = 0x201590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201590;
        }
    }
    ctx->pc = 0x201D40u;
label_201d40:
    // 0x201d40: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201d44: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x201d48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D48u;
    {
        const bool branch_taken_0x201d48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x201d48) {
            ctx->pc = 0x201D64u;
            goto label_201d64;
        }
    }
    ctx->pc = 0x201D50u;
    // 0x201d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201d54: 0x0  nop
    ctx->pc = 0x201d54u;
    // NOP
    // 0x201d58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201D5Cu;
    {
        const bool branch_taken_0x201d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d5c) {
            ctx->pc = 0x201D80u;
            goto label_201d80;
        }
    }
    ctx->pc = 0x201D64u;
label_201d64:
    // 0x201d64: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x201d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201d6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x201d70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201d74: 0x0  nop
    ctx->pc = 0x201d74u;
    // NOP
    // 0x201d78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201d7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x201d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_201d80:
    // 0x201d80: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201d84: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x201d88: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x201d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x201d8c: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x201d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x201d90: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201D90u;
    {
        const bool branch_taken_0x201d90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x201d90) {
            ctx->pc = 0x201DB0u;
            goto label_201db0;
        }
    }
    ctx->pc = 0x201D98u;
    // 0x201d98: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x201d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x201d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201da0: 0x0  nop
    ctx->pc = 0x201da0u;
    // NOP
    // 0x201da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201da8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201DA8u;
    {
        const bool branch_taken_0x201da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201da8) {
            ctx->pc = 0x201DD4u;
            goto label_201dd4;
        }
    }
    ctx->pc = 0x201DB0u;
label_201db0:
    // 0x201db0: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x201db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x201db4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x201db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x201db8: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x201db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x201dbc: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x201dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201dc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x201dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x201dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201dc8: 0x0  nop
    ctx->pc = 0x201dc8u;
    // NOP
    // 0x201dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201dd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x201dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_201dd4:
    // 0x201dd4: 0x0  nop
    ctx->pc = 0x201dd4u;
    // NOP
    // 0x201dd8: 0x0  nop
    ctx->pc = 0x201dd8u;
    // NOP
    // 0x201ddc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x201ddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201de0: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x201de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x201de4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x201de4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201de8: 0x0  nop
    ctx->pc = 0x201de8u;
    // NOP
    // 0x201dec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x201decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201df0: 0xc7808338  lwc1        $f0, -0x7CC8($gp)
    ctx->pc = 0x201df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201df4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x201df4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x201df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x201dfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x201dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x201e00: 0x0  nop
    ctx->pc = 0x201e00u;
    // NOP
    // 0x201e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e08: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x201E08u;
    {
        const bool branch_taken_0x201e08 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x201e08) {
            ctx->pc = 0x201E1Cu;
            goto label_201e1c;
        }
    }
    ctx->pc = 0x201E10u;
    // 0x201e10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x201e10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201E14u;
    {
        const bool branch_taken_0x201e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e14) {
            ctx->pc = 0x201E40u;
            goto label_201e40;
        }
    }
    ctx->pc = 0x201E1Cu;
label_201e1c:
    // 0x201e1c: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x201e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x201e20: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x201E20u;
    {
        const bool branch_taken_0x201e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201e20) {
            ctx->pc = 0x201E38u;
            goto label_201e38;
        }
    }
    ctx->pc = 0x201E28u;
    // 0x201e28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x201e2c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x201e2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x201E30u;
    {
        const bool branch_taken_0x201e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e30) {
            ctx->pc = 0x201E3Cu;
            goto label_201e3c;
        }
    }
    ctx->pc = 0x201E38u;
label_201e38:
    // 0x201e38: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x201e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201e3c:
    // 0x201e3c: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x201e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_201e40:
    // 0x201e40: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x201e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e44: 0x8fa602c0  lw          $a2, 0x2C0($sp)
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201e48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x201e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201E4Cu;
    SET_GPR_U32(ctx, 31, 0x201E54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201E4Cu, 0x201E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E54u;
label_201e54:
    // 0x201e54: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x201e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x201e58: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201e5c: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x201e60: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x201e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x201e64: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x201e64u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x201e68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201E6Cu;
    SET_GPR_U32(ctx, 31, 0x201E74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201E6Cu, 0x201E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E74u;
label_201e74:
    // 0x201e74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201e78: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x201e78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x201e7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201e80: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x201E80u;
    SET_GPR_U32(ctx, 31, 0x201E88u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x201E80u, 0x201E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E88u;
label_201e88:
    // 0x201e88: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201e8c: 0x8ca60138  lw          $a2, 0x138($a1)
    ctx->pc = 0x201e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x201e90: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E90u;
    {
        const bool branch_taken_0x201e90 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x201e90) {
            ctx->pc = 0x201EACu;
            goto label_201eac;
        }
    }
    ctx->pc = 0x201E98u;
    // 0x201e98: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x201e98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201e9c: 0x0  nop
    ctx->pc = 0x201e9cu;
    // NOP
    // 0x201ea0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201ea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201EA4u;
    {
        const bool branch_taken_0x201ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ea4) {
            ctx->pc = 0x201EC8u;
            goto label_201ec8;
        }
    }
    ctx->pc = 0x201EACu;
label_201eac:
    // 0x201eac: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x201eb0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x201eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x201eb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x201eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x201eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201ebc: 0x0  nop
    ctx->pc = 0x201ebcu;
    // NOP
    // 0x201ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201ec4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x201ec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_201ec8:
    // 0x201ec8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201ecc: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x201eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x201ed0: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x201ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x201ed4: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x201ed8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201ED8u;
    {
        const bool branch_taken_0x201ed8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x201ed8) {
            ctx->pc = 0x201EF4u;
            goto label_201ef4;
        }
    }
    ctx->pc = 0x201EE0u;
    // 0x201ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201ee4: 0x0  nop
    ctx->pc = 0x201ee4u;
    // NOP
    // 0x201ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201eec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201EECu;
    {
        const bool branch_taken_0x201eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201eec) {
            ctx->pc = 0x201F10u;
            goto label_201f10;
        }
    }
    ctx->pc = 0x201EF4u;
label_201ef4:
    // 0x201ef4: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x201ef8: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x201ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201efc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x201efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x201f00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201f00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201f04: 0x0  nop
    ctx->pc = 0x201f04u;
    // NOP
    // 0x201f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201f0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x201f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_201f10:
    // 0x201f10: 0x0  nop
    ctx->pc = 0x201f10u;
    // NOP
    // 0x201f14: 0x0  nop
    ctx->pc = 0x201f14u;
    // NOP
    // 0x201f18: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x201f18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201f1c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x201f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x201f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201f24: 0x0  nop
    ctx->pc = 0x201f24u;
    // NOP
    // 0x201f28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x201f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x201f2c: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x201f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x201f30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x201f30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201f34: 0x0  nop
    ctx->pc = 0x201f34u;
    // NOP
    // 0x201f38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x201f38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x201f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x201f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201f44: 0x0  nop
    ctx->pc = 0x201f44u;
    // NOP
    // 0x201f48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x201f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201f4c: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x201f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x201f50: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201f54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201F54u;
    SET_GPR_U32(ctx, 31, 0x201F5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201F54u, 0x201F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F5Cu;
label_201f5c:
    // 0x201f5c: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x201f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x201f60: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201f64: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x201f68: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x201f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x201f6c: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x201f6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x201f70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x201f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x201f74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201F74u;
    SET_GPR_U32(ctx, 31, 0x201F7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201F74u, 0x201F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F7Cu;
label_201f7c:
    // 0x201f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201f84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x201f88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x201f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201f8c: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x201f8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x201f90: 0xc7ad02a4  lwc1        $f13, 0x2A4($sp)
    ctx->pc = 0x201f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x201f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201f9c: 0xc08c544  jal         func_231510
    ctx->pc = 0x201F9Cu;
    SET_GPR_U32(ctx, 31, 0x201FA4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x201F9Cu, 0x201FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FA4u;
label_201fa4:
    // 0x201fa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fa8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fb0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x201FB0u;
    SET_GPR_U32(ctx, 31, 0x201FB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x201FB0u, 0x201FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FB8u;
label_201fb8:
    // 0x201fb8: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x201fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x201fbc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201fc0: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x201fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x201fc4: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x201fc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x201fc8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x201fcc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x201fd0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x201FD0u;
    SET_GPR_U32(ctx, 31, 0x201FD8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x201FD0u, 0x201FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FD8u;
label_201fd8:
    // 0x201fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201fe0: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x201fe0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x201fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x201FECu;
    SET_GPR_U32(ctx, 31, 0x201FF4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x201FECu, 0x201FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FF4u;
label_201ff4:
    // 0x201ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ff8: 0x8fa602c0  lw          $a2, 0x2C0($sp)
    ctx->pc = 0x201ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x201ffc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x201ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202000: 0xc4c10144  lwc1        $f1, 0x144($a2)
    ctx->pc = 0x202000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202004: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x202004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202008: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20200c: 0xc780833c  lwc1        $f0, -0x7CC4($gp)
    ctx->pc = 0x20200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202010: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x202010u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202014: 0xc78281b8  lwc1        $f2, -0x7E48($gp)
    ctx->pc = 0x202014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202018: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x202018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x20201c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x20201cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202020:
    // 0x202020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202024: 0x0  nop
    ctx->pc = 0x202024u;
    // NOP
    // 0x202028: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x202028u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20202c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x20202cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x202030: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x202030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x202034: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202038: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x202038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x20203c: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x20203cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x202040: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202040u;
    SET_GPR_U32(ctx, 31, 0x202048u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202040u, 0x202048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202048u;
label_202048:
    // 0x202048: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x202048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x20204c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202050: 0x248500d8  addiu       $a1, $a0, 0xD8
    ctx->pc = 0x202050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x202054: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x202054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202058: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20205c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202060: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202060u;
    SET_GPR_U32(ctx, 31, 0x202068u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202060u, 0x202068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202068u;
label_202068:
    // 0x202068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20206c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202070: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x202070u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x202074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202078: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x202078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x20207c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x20207Cu;
    SET_GPR_U32(ctx, 31, 0x202084u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x20207Cu, 0x202084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202084u;
label_202084:
    // 0x202084: 0x8fb102c0  lw          $s1, 0x2C0($sp)
    ctx->pc = 0x202084u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20208c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x20208Cu;
    SET_GPR_U32(ctx, 31, 0x202094u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20208Cu, 0x202094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202094u;
label_202094:
    // 0x202094: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x202094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x202098: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x202098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20209c: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x20209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2020a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2020a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2020a8: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2020a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x2020ac: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x2020acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2020b0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2020B0u;
    SET_GPR_U32(ctx, 31, 0x2020B8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2020B0u, 0x2020B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020B8u;
label_2020b8:
    // 0x2020b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2020b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2020bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2020bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2020c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2020c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2020c4: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x2020c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2020c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2020cc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2020ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2020d0: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2020d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2020d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2020d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2020d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2020d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2020dc: 0x0  nop
    ctx->pc = 0x2020dcu;
    // NOP
    // 0x2020e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2020e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2020e4: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x2020e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2020e8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2020e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2020ec: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x2020ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2020f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2020f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f4: 0xc08c208  jal         func_230820
    ctx->pc = 0x2020F4u;
    SET_GPR_U32(ctx, 31, 0x2020FCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2020F4u, 0x2020FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020FCu;
label_2020fc:
    // 0x2020fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202100: 0x8fb502c0  lw          $s5, 0x2C0($sp)
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202108: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202108u;
    SET_GPR_U32(ctx, 31, 0x202110u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202108u, 0x202110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202110u;
label_202110:
    // 0x202110: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x202110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x202114: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202118: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20211c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202120: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202120u;
    SET_GPR_U32(ctx, 31, 0x202128u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202120u, 0x202128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202128u;
label_202128:
    // 0x202128: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20212c: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x20212cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x202130: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x202134: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x202134u;
    SET_GPR_U32(ctx, 31, 0x20213Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x202134u, 0x20213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20213Cu;
label_20213c:
    // 0x20213c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202140: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202140u;
    SET_GPR_U32(ctx, 31, 0x202148u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202140u, 0x202148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202148u;
label_202148:
    // 0x202148: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x202148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x20214c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x20214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202150: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202154: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x202154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20215c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20215Cu;
    SET_GPR_U32(ctx, 31, 0x202164u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20215Cu, 0x202164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202164u;
label_202164:
    // 0x202164: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202168: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x202168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20216c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20216cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202170: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x202170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202174: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x202174u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x202178: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x202178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20217c: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x20217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202180: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202188: 0x0  nop
    ctx->pc = 0x202188u;
    // NOP
    // 0x20218c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20218cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x202190: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x202190u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x202194: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x202194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202198: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x202198u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20219c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021a0: 0xc08c208  jal         func_230820
    ctx->pc = 0x2021A0u;
    SET_GPR_U32(ctx, 31, 0x2021A8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2021A0u, 0x2021A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021A8u;
label_2021a8:
    // 0x2021a8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2021ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2021ACu;
    SET_GPR_U32(ctx, 31, 0x2021B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2021ACu, 0x2021B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021B4u;
label_2021b4:
    // 0x2021b4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2021b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2021b8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2021bc: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2021bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2021c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2021c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2021c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2021C4u;
    SET_GPR_U32(ctx, 31, 0x2021CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2021C4u, 0x2021CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021CCu;
label_2021cc:
    // 0x2021cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2021ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2021d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2021d4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2021d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2021d8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2021d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2021dc: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x2021dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2021e0: 0xc7ac02a0  lwc1        $f12, 0x2A0($sp)
    ctx->pc = 0x2021e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2021e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2021e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2021e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2021f0: 0xc08c544  jal         func_231510
    ctx->pc = 0x2021F0u;
    SET_GPR_U32(ctx, 31, 0x2021F8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x2021F0u, 0x2021F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021F8u;
label_2021f8:
    // 0x2021f8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2021fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2021FCu;
    SET_GPR_U32(ctx, 31, 0x202204u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2021FCu, 0x202204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202204u;
label_202204:
    // 0x202204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202208: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x20220c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202210: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202214: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202214u;
    SET_GPR_U32(ctx, 31, 0x20221Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202214u, 0x20221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20221Cu;
label_20221c:
    // 0x20221c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202220: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202224: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x202224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20222c: 0xc7ac02a0  lwc1        $f12, 0x2A0($sp)
    ctx->pc = 0x20222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202234: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202238: 0xc08c544  jal         func_231510
    ctx->pc = 0x202238u;
    SET_GPR_U32(ctx, 31, 0x202240u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x202238u, 0x202240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202240u;
label_202240:
    // 0x202240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202244: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x202244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202248: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202248u;
    SET_GPR_U32(ctx, 31, 0x202250u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202248u, 0x202250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202250u;
label_202250:
    // 0x202250: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x202250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x202254: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202258: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20225c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202260: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202260u;
    SET_GPR_U32(ctx, 31, 0x202268u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202260u, 0x202268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202268u;
label_202268:
    // 0x202268: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20226c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x20226cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x202270: 0x27b10290  addiu       $s1, $sp, 0x290
    ctx->pc = 0x202270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x202274: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x202274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202278: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x202278u;
    SET_GPR_U32(ctx, 31, 0x202280u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x202278u, 0x202280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202280u;
label_202280:
    // 0x202280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202284: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202288: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x202288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x20228c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x20228cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202290: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202290u;
    SET_GPR_U32(ctx, 31, 0x202298u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202290u, 0x202298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202298u;
label_202298:
    // 0x202298: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x202298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x20229c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x20229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2022a0: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x2022a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2022a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2022a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2022a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2022ACu;
    SET_GPR_U32(ctx, 31, 0x2022B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2022ACu, 0x2022B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022B4u;
label_2022b4:
    // 0x2022b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2022b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2022b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2022bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2022c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2022c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2022c4: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x2022c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2022c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2022cc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2022ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2022d0: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2022d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2022d4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2022d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2022d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2022dc: 0x0  nop
    ctx->pc = 0x2022dcu;
    // NOP
    // 0x2022e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2022e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2022e4: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x2022e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2022e8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2022e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2022ec: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x2022ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2022f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2022f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2022f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022f8: 0xc08c208  jal         func_230820
    ctx->pc = 0x2022F8u;
    SET_GPR_U32(ctx, 31, 0x202300u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2022F8u, 0x202300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202300u;
label_202300:
    // 0x202300: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x202300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x202304: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x202304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202308: 0xc06479c  jal         func_191E70
    ctx->pc = 0x202308u;
    SET_GPR_U32(ctx, 31, 0x202310u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x202308u, 0x202310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202310u;
label_202310:
    // 0x202310: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x202310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x202314: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x202314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x202318: 0x244500d8  addiu       $a1, $v0, 0xD8
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20231c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202324: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202324u;
    SET_GPR_U32(ctx, 31, 0x20232Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202324u, 0x20232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20232Cu;
label_20232c:
    // 0x20232c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202334: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x202334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202338: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x202338u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20233c: 0xc7ac02a0  lwc1        $f12, 0x2A0($sp)
    ctx->pc = 0x20233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202348: 0xc08c544  jal         func_231510
    ctx->pc = 0x202348u;
    SET_GPR_U32(ctx, 31, 0x202350u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x202348u, 0x202350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202350u;
label_202350:
    // 0x202350: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x202350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202354: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x202354u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202358: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x202358u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20235c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20235cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202360: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x202360u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202364: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x202364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202368: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x202368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20236c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20236cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202370: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202374: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202378: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x202378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20237c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202380: 0x27bd02d0  addiu       $sp, $sp, 0x2D0
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x202384: 0x3e00008  jr          $ra
    ctx->pc = 0x202384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20238Cu;
    // 0x20238c: 0x0  nop
    ctx->pc = 0x20238cu;
    // NOP
    ctx->pc = 0x202390u;
}
