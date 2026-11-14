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

// Function: sub_00314058
// Address: 0x314058 - 0x3143b0
void sub_00314058_0x314058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314058_0x314058");
#endif

    switch (ctx->pc) {
        case 0x314058u: goto label_314058;
        case 0x31405cu: goto label_31405c;
        case 0x314060u: goto label_314060;
        case 0x314064u: goto label_314064;
        case 0x314068u: goto label_314068;
        case 0x31406cu: goto label_31406c;
        case 0x314070u: goto label_314070;
        case 0x314074u: goto label_314074;
        case 0x314078u: goto label_314078;
        case 0x31407cu: goto label_31407c;
        case 0x314080u: goto label_314080;
        case 0x314084u: goto label_314084;
        case 0x314088u: goto label_314088;
        case 0x31408cu: goto label_31408c;
        case 0x314090u: goto label_314090;
        case 0x314094u: goto label_314094;
        case 0x314098u: goto label_314098;
        case 0x31409cu: goto label_31409c;
        case 0x3140a0u: goto label_3140a0;
        case 0x3140a4u: goto label_3140a4;
        case 0x3140a8u: goto label_3140a8;
        case 0x3140acu: goto label_3140ac;
        case 0x3140b0u: goto label_3140b0;
        case 0x3140b4u: goto label_3140b4;
        case 0x3140b8u: goto label_3140b8;
        case 0x3140bcu: goto label_3140bc;
        case 0x3140c0u: goto label_3140c0;
        case 0x3140c4u: goto label_3140c4;
        case 0x3140c8u: goto label_3140c8;
        case 0x3140ccu: goto label_3140cc;
        case 0x3140d0u: goto label_3140d0;
        case 0x3140d4u: goto label_3140d4;
        case 0x3140d8u: goto label_3140d8;
        case 0x3140dcu: goto label_3140dc;
        case 0x3140e0u: goto label_3140e0;
        case 0x3140e4u: goto label_3140e4;
        case 0x3140e8u: goto label_3140e8;
        case 0x3140ecu: goto label_3140ec;
        case 0x3140f0u: goto label_3140f0;
        case 0x3140f4u: goto label_3140f4;
        case 0x3140f8u: goto label_3140f8;
        case 0x3140fcu: goto label_3140fc;
        case 0x314100u: goto label_314100;
        case 0x314104u: goto label_314104;
        case 0x314108u: goto label_314108;
        case 0x31410cu: goto label_31410c;
        case 0x314110u: goto label_314110;
        case 0x314114u: goto label_314114;
        case 0x314118u: goto label_314118;
        case 0x31411cu: goto label_31411c;
        case 0x314120u: goto label_314120;
        case 0x314124u: goto label_314124;
        case 0x314128u: goto label_314128;
        case 0x31412cu: goto label_31412c;
        case 0x314130u: goto label_314130;
        case 0x314134u: goto label_314134;
        case 0x314138u: goto label_314138;
        case 0x31413cu: goto label_31413c;
        case 0x314140u: goto label_314140;
        case 0x314144u: goto label_314144;
        case 0x314148u: goto label_314148;
        case 0x31414cu: goto label_31414c;
        case 0x314150u: goto label_314150;
        case 0x314154u: goto label_314154;
        case 0x314158u: goto label_314158;
        case 0x31415cu: goto label_31415c;
        case 0x314160u: goto label_314160;
        case 0x314164u: goto label_314164;
        case 0x314168u: goto label_314168;
        case 0x31416cu: goto label_31416c;
        case 0x314170u: goto label_314170;
        case 0x314174u: goto label_314174;
        case 0x314178u: goto label_314178;
        case 0x31417cu: goto label_31417c;
        case 0x314180u: goto label_314180;
        case 0x314184u: goto label_314184;
        case 0x314188u: goto label_314188;
        case 0x31418cu: goto label_31418c;
        case 0x314190u: goto label_314190;
        case 0x314194u: goto label_314194;
        case 0x314198u: goto label_314198;
        case 0x31419cu: goto label_31419c;
        case 0x3141a0u: goto label_3141a0;
        case 0x3141a4u: goto label_3141a4;
        case 0x3141a8u: goto label_3141a8;
        case 0x3141acu: goto label_3141ac;
        case 0x3141b0u: goto label_3141b0;
        case 0x3141b4u: goto label_3141b4;
        case 0x3141b8u: goto label_3141b8;
        case 0x3141bcu: goto label_3141bc;
        case 0x3141c0u: goto label_3141c0;
        case 0x3141c4u: goto label_3141c4;
        case 0x3141c8u: goto label_3141c8;
        case 0x3141ccu: goto label_3141cc;
        case 0x3141d0u: goto label_3141d0;
        case 0x3141d4u: goto label_3141d4;
        case 0x3141d8u: goto label_3141d8;
        case 0x3141dcu: goto label_3141dc;
        case 0x3141e0u: goto label_3141e0;
        case 0x3141e4u: goto label_3141e4;
        case 0x3141e8u: goto label_3141e8;
        case 0x3141ecu: goto label_3141ec;
        case 0x3141f0u: goto label_3141f0;
        case 0x3141f4u: goto label_3141f4;
        case 0x3141f8u: goto label_3141f8;
        case 0x3141fcu: goto label_3141fc;
        case 0x314200u: goto label_314200;
        case 0x314204u: goto label_314204;
        case 0x314208u: goto label_314208;
        case 0x31420cu: goto label_31420c;
        case 0x314210u: goto label_314210;
        case 0x314214u: goto label_314214;
        case 0x314218u: goto label_314218;
        case 0x31421cu: goto label_31421c;
        case 0x314220u: goto label_314220;
        case 0x314224u: goto label_314224;
        case 0x314228u: goto label_314228;
        case 0x31422cu: goto label_31422c;
        case 0x314230u: goto label_314230;
        case 0x314234u: goto label_314234;
        case 0x314238u: goto label_314238;
        case 0x31423cu: goto label_31423c;
        case 0x314240u: goto label_314240;
        case 0x314244u: goto label_314244;
        case 0x314248u: goto label_314248;
        case 0x31424cu: goto label_31424c;
        case 0x314250u: goto label_314250;
        case 0x314254u: goto label_314254;
        case 0x314258u: goto label_314258;
        case 0x31425cu: goto label_31425c;
        case 0x314260u: goto label_314260;
        case 0x314264u: goto label_314264;
        case 0x314268u: goto label_314268;
        case 0x31426cu: goto label_31426c;
        case 0x314270u: goto label_314270;
        case 0x314274u: goto label_314274;
        case 0x314278u: goto label_314278;
        case 0x31427cu: goto label_31427c;
        case 0x314280u: goto label_314280;
        case 0x314284u: goto label_314284;
        case 0x314288u: goto label_314288;
        case 0x31428cu: goto label_31428c;
        case 0x314290u: goto label_314290;
        case 0x314294u: goto label_314294;
        case 0x314298u: goto label_314298;
        case 0x31429cu: goto label_31429c;
        case 0x3142a0u: goto label_3142a0;
        case 0x3142a4u: goto label_3142a4;
        case 0x3142a8u: goto label_3142a8;
        case 0x3142acu: goto label_3142ac;
        case 0x3142b0u: goto label_3142b0;
        case 0x3142b4u: goto label_3142b4;
        case 0x3142b8u: goto label_3142b8;
        case 0x3142bcu: goto label_3142bc;
        case 0x3142c0u: goto label_3142c0;
        case 0x3142c4u: goto label_3142c4;
        case 0x3142c8u: goto label_3142c8;
        case 0x3142ccu: goto label_3142cc;
        case 0x3142d0u: goto label_3142d0;
        case 0x3142d4u: goto label_3142d4;
        case 0x3142d8u: goto label_3142d8;
        case 0x3142dcu: goto label_3142dc;
        case 0x3142e0u: goto label_3142e0;
        case 0x3142e4u: goto label_3142e4;
        case 0x3142e8u: goto label_3142e8;
        case 0x3142ecu: goto label_3142ec;
        case 0x3142f0u: goto label_3142f0;
        case 0x3142f4u: goto label_3142f4;
        case 0x3142f8u: goto label_3142f8;
        case 0x3142fcu: goto label_3142fc;
        case 0x314300u: goto label_314300;
        case 0x314304u: goto label_314304;
        case 0x314308u: goto label_314308;
        case 0x31430cu: goto label_31430c;
        case 0x314310u: goto label_314310;
        case 0x314314u: goto label_314314;
        case 0x314318u: goto label_314318;
        case 0x31431cu: goto label_31431c;
        case 0x314320u: goto label_314320;
        case 0x314324u: goto label_314324;
        case 0x314328u: goto label_314328;
        case 0x31432cu: goto label_31432c;
        case 0x314330u: goto label_314330;
        case 0x314334u: goto label_314334;
        case 0x314338u: goto label_314338;
        case 0x31433cu: goto label_31433c;
        case 0x314340u: goto label_314340;
        case 0x314344u: goto label_314344;
        case 0x314348u: goto label_314348;
        case 0x31434cu: goto label_31434c;
        case 0x314350u: goto label_314350;
        case 0x314354u: goto label_314354;
        case 0x314358u: goto label_314358;
        case 0x31435cu: goto label_31435c;
        case 0x314360u: goto label_314360;
        case 0x314364u: goto label_314364;
        case 0x314368u: goto label_314368;
        case 0x31436cu: goto label_31436c;
        case 0x314370u: goto label_314370;
        case 0x314374u: goto label_314374;
        case 0x314378u: goto label_314378;
        case 0x31437cu: goto label_31437c;
        case 0x314380u: goto label_314380;
        case 0x314384u: goto label_314384;
        case 0x314388u: goto label_314388;
        case 0x31438cu: goto label_31438c;
        case 0x314390u: goto label_314390;
        case 0x314394u: goto label_314394;
        case 0x314398u: goto label_314398;
        case 0x31439cu: goto label_31439c;
        case 0x3143a0u: goto label_3143a0;
        case 0x3143a4u: goto label_3143a4;
        case 0x3143a8u: goto label_3143a8;
        case 0x3143acu: goto label_3143ac;
        default: break;
    }

    ctx->pc = 0x314058u;

label_314058:
    // 0x314058: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x314058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_31405c:
    // 0x31405c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_314060:
    // 0x314060: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x314060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_314064:
    // 0x314064: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x314064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_314068:
    // 0x314068: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x314068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31406c:
    // 0x31406c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_314070:
    // 0x314070: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x314070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_314074:
    // 0x314074: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x314074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_314078:
    // 0x314078: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x314078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31407c:
    // 0x31407c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_314080:
    // 0x314080: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x314080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_314084:
    // 0x314084: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x314084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_314088:
    // 0x314088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31408c:
    // 0x31408c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_314090:
    // 0x314090: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x314090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_314094:
    // 0x314094: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x314094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_314098:
    // 0x314098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31409c:
    // 0x31409c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x31409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3140a0:
    // 0x3140a0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x3140a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_3140a4:
    // 0x3140a4: 0x40f809  jalr        $v0
label_3140a8:
    if (ctx->pc == 0x3140A8u) {
        ctx->pc = 0x3140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140A4u;
        // 0x3140a8: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140ACu;
        goto label_3140ac;
    }
    ctx->pc = 0x3140A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3140ACu);
        ctx->pc = 0x3140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140A4u;
        // 0x3140a8: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3140A4u, 0x3140ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3140ACu;
label_3140ac:
    // 0x3140ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3140acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3140b0:
    // 0x3140b0: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_3140b4:
    if (ctx->pc == 0x3140B4u) {
        ctx->pc = 0x3140B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140B0u;
        // 0x3140b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140B8u;
        goto label_3140b8;
    }
    ctx->pc = 0x3140B0u;
    {
        const bool branch_taken_0x3140b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3140B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140B0u;
        // 0x3140b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140b0) {
            ctx->pc = 0x3140C0u;
            goto label_3140c0;
        }
    }
    ctx->pc = 0x3140B8u;
label_3140b8:
    // 0x3140b8: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3140bc:
    if (ctx->pc == 0x3140BCu) {
        ctx->pc = 0x3140BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140B8u;
        // 0x3140bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140C0u;
        goto label_3140c0;
    }
    ctx->pc = 0x3140B8u;
    {
        const bool branch_taken_0x3140b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140B8u;
        // 0x3140bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140b8) {
            ctx->pc = 0x314380u;
            goto label_314380;
        }
    }
    ctx->pc = 0x3140C0u;
label_3140c0:
    // 0x3140c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3140c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3140c4:
    // 0x3140c4: 0x2840018  mult        $zero, $s4, $a0
    ctx->pc = 0x3140c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3140c8:
    // 0x3140c8: 0x2012  mflo        $a0
    ctx->pc = 0x3140c8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3140cc:
    // 0x3140cc: 0x40f809  jalr        $v0
label_3140d0:
    if (ctx->pc == 0x3140D0u) {
        ctx->pc = 0x3140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140CCu;
        // 0x3140d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140D4u;
        goto label_3140d4;
    }
    ctx->pc = 0x3140CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3140D4u);
        ctx->pc = 0x3140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140CCu;
        // 0x3140d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3140CCu, 0x3140D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3140D4u;
label_3140d4:
    // 0x3140d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3140d8:
    if (ctx->pc == 0x3140D8u) {
        ctx->pc = 0x3140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140D4u;
        // 0x3140d8: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140DCu;
        goto label_3140dc;
    }
    ctx->pc = 0x3140D4u;
    {
        const bool branch_taken_0x3140d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140D4u;
        // 0x3140d8: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140d4) {
            ctx->pc = 0x314128u;
            goto label_314128;
        }
    }
    ctx->pc = 0x3140DCu;
label_3140dc:
    // 0x3140dc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3140e0:
    // 0x3140e0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x3140e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3140e4:
    // 0x3140e4: 0x40f809  jalr        $v0
label_3140e8:
    if (ctx->pc == 0x3140E8u) {
        ctx->pc = 0x3140E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140E4u;
        // 0x3140e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140ECu;
        goto label_3140ec;
    }
    ctx->pc = 0x3140E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3140ECu);
        ctx->pc = 0x3140E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140E4u;
        // 0x3140e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3140E4u, 0x3140ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3140ECu;
label_3140ec:
    // 0x3140ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3140f0:
    if (ctx->pc == 0x3140F0u) {
        ctx->pc = 0x3140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140ECu;
        // 0x3140f0: 0xaee20038  sw          $v0, 0x38($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3140F4u;
        goto label_3140f4;
    }
    ctx->pc = 0x3140ECu;
    {
        const bool branch_taken_0x3140ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140ECu;
        // 0x3140f0: 0xaee20038  sw          $v0, 0x38($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140ec) {
            ctx->pc = 0x314110u;
            goto label_314110;
        }
    }
    ctx->pc = 0x3140F4u;
label_3140f4:
    // 0x3140f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3140f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3140f8:
    // 0x3140f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3140f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3140fc:
    // 0x3140fc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_314100:
    // 0x314100: 0x40f809  jalr        $v0
label_314104:
    if (ctx->pc == 0x314104u) {
        ctx->pc = 0x314104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314100u;
        // 0x314104: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314108u;
        goto label_314108;
    }
    ctx->pc = 0x314100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314108u);
        ctx->pc = 0x314104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314100u;
        // 0x314104: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314100u, 0x314108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314108u;
label_314108:
    // 0x314108: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_31410c:
    if (ctx->pc == 0x31410Cu) {
        ctx->pc = 0x31410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314108u;
        // 0x31410c: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314110u;
        goto label_314110;
    }
    ctx->pc = 0x314108u;
    {
        const bool branch_taken_0x314108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314108u;
        // 0x31410c: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314108) {
            ctx->pc = 0x314168u;
            goto label_314168;
        }
    }
    ctx->pc = 0x314110u;
label_314110:
    // 0x314110: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x314110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_314114:
    // 0x314114: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_314118:
    if (ctx->pc == 0x314118u) {
        ctx->pc = 0x314118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314114u;
        // 0x314118: 0x8ee40008  lw          $a0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31411Cu;
        goto label_31411c;
    }
    ctx->pc = 0x314114u;
    {
        const bool branch_taken_0x314114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x314114) {
            ctx->pc = 0x314118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314114u;
            // 0x314118: 0x8ee40008  lw          $a0, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31412Cu;
            goto label_31412c;
        }
    }
    ctx->pc = 0x31411Cu;
label_31411c:
    // 0x31411c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x31411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_314120:
    // 0x314120: 0x40f809  jalr        $v0
label_314124:
    if (ctx->pc == 0x314124u) {
        ctx->pc = 0x314128u;
        goto label_314128;
    }
    ctx->pc = 0x314120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314120u, 0x314128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314128u;
label_314128:
    // 0x314128: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x314128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_31412c:
    // 0x31412c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_314130:
    if (ctx->pc == 0x314130u) {
        ctx->pc = 0x314130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31412Cu;
        // 0x314130: 0x8ee40038  lw          $a0, 0x38($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314134u;
        goto label_314134;
    }
    ctx->pc = 0x31412Cu;
    {
        const bool branch_taken_0x31412c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31412c) {
            ctx->pc = 0x314130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31412Cu;
            // 0x314130: 0x8ee40038  lw          $a0, 0x38($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314144u;
            goto label_314144;
        }
    }
    ctx->pc = 0x314134u;
label_314134:
    // 0x314134: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x314134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_314138:
    // 0x314138: 0x40f809  jalr        $v0
label_31413c:
    if (ctx->pc == 0x31413Cu) {
        ctx->pc = 0x314140u;
        goto label_314140;
    }
    ctx->pc = 0x314138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314138u, 0x314140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314140u;
label_314140:
    // 0x314140: 0x8ee40038  lw          $a0, 0x38($s7)
    ctx->pc = 0x314140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
label_314144:
    // 0x314144: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_314148:
    if (ctx->pc == 0x314148u) {
        ctx->pc = 0x314148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314144u;
        // 0x314148: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31414Cu;
        goto label_31414c;
    }
    ctx->pc = 0x314144u;
    {
        const bool branch_taken_0x314144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314144u;
        // 0x314148: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314144) {
            ctx->pc = 0x314158u;
            goto label_314158;
        }
    }
    ctx->pc = 0x31414Cu;
label_31414c:
    // 0x31414c: 0x40f809  jalr        $v0
label_314150:
    if (ctx->pc == 0x314150u) {
        ctx->pc = 0x314154u;
        goto label_314154;
    }
    ctx->pc = 0x31414Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314154u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31414Cu, 0x314154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314154u;
label_314154:
    // 0x314154: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x314154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_314158:
    // 0x314158: 0x40f809  jalr        $v0
label_31415c:
    if (ctx->pc == 0x31415Cu) {
        ctx->pc = 0x31415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314158u;
        // 0x31415c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314160u;
        goto label_314160;
    }
    ctx->pc = 0x314158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314160u);
        ctx->pc = 0x31415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314158u;
        // 0x31415c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314158u, 0x314160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314160u;
label_314160:
    // 0x314160: 0x10000087  b           . + 4 + (0x87 << 2)
label_314164:
    if (ctx->pc == 0x314164u) {
        ctx->pc = 0x314164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314160u;
        // 0x314164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314168u;
        goto label_314168;
    }
    ctx->pc = 0x314160u;
    {
        const bool branch_taken_0x314160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314160u;
        // 0x314164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314160) {
            ctx->pc = 0x314380u;
            goto label_314380;
        }
    }
    ctx->pc = 0x314168u;
label_314168:
    // 0x314168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x314168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31416c:
    // 0x31416c: 0x26e40014  addiu       $a0, $s7, 0x14
    ctx->pc = 0x31416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
label_314170:
    // 0x314170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x314170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314174:
    // 0x314174: 0xaee2002c  sw          $v0, 0x2C($s7)
    ctx->pc = 0x314174u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 2));
label_314178:
    // 0x314178: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x314178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_31417c:
    // 0x31417c: 0xaee00030  sw          $zero, 0x30($s7)
    ctx->pc = 0x31417cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 0));
label_314180:
    // 0x314180: 0xaef40000  sw          $s4, 0x0($s7)
    ctx->pc = 0x314180u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
label_314184:
    // 0x314184: 0xaee00010  sw          $zero, 0x10($s7)
    ctx->pc = 0x314184u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 0));
label_314188:
    // 0x314188: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x314188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31418c:
    // 0x31418c: 0xc10540a  jal         func_415028
label_314190:
    if (ctx->pc == 0x314190u) {
        ctx->pc = 0x314190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31418Cu;
        // 0x314190: 0xaee3000c  sw          $v1, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314194u;
        goto label_314194;
    }
    ctx->pc = 0x31418Cu;
    SET_GPR_U32(ctx, 31, 0x314194u);
    ctx->pc = 0x314190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31418Cu;
    // 0x314190: 0xaee3000c  sw          $v1, 0xC($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x31418Cu, 0x314194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314194u;
label_314194:
    // 0x314194: 0x1a800052  blez        $s4, . + 4 + (0x52 << 2)
label_314198:
    if (ctx->pc == 0x314198u) {
        ctx->pc = 0x314198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314194u;
        // 0x314198: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31419Cu;
        goto label_31419c;
    }
    ctx->pc = 0x314194u;
    {
        const bool branch_taken_0x314194 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x314198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314194u;
        // 0x314198: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314194) {
            ctx->pc = 0x3142E0u;
            goto label_3142e0;
        }
    }
    ctx->pc = 0x31419Cu;
label_31419c:
    // 0x31419c: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x31419cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3141a0:
    // 0x3141a0: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3141a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3141a4:
    // 0x3141a4: 0x1e1023  negu        $v0, $fp
    ctx->pc = 0x3141a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_3141a8:
    // 0x3141a8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3141a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3141ac:
    // 0x3141ac: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_3141b0:
    if (ctx->pc == 0x3141B0u) {
        ctx->pc = 0x3141B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141ACu;
        // 0x3141b0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3141B4u;
        goto label_3141b4;
    }
    ctx->pc = 0x3141ACu;
    {
        const bool branch_taken_0x3141ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141ACu;
        // 0x3141b0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141ac) {
            ctx->pc = 0x314248u;
            goto label_314248;
        }
    }
    ctx->pc = 0x3141B4u;
label_3141b4:
    // 0x3141b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3141b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3141b8:
    // 0x3141b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3141bc:
    if (ctx->pc == 0x3141BCu) {
        ctx->pc = 0x3141BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141B8u;
        // 0x3141bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3141C0u;
        goto label_3141c0;
    }
    ctx->pc = 0x3141B8u;
    {
        const bool branch_taken_0x3141b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141B8u;
        // 0x3141bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141b8) {
            ctx->pc = 0x314214u;
            goto label_314214;
        }
    }
    ctx->pc = 0x3141C0u;
label_3141c0:
    // 0x3141c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3141c4:
    if (ctx->pc == 0x3141C4u) {
        ctx->pc = 0x3141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141C0u;
        // 0x3141c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3141C8u;
        goto label_3141c8;
    }
    ctx->pc = 0x3141C0u;
    {
        const bool branch_taken_0x3141c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141C0u;
        // 0x3141c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141c0) {
            ctx->pc = 0x3141E8u;
            goto label_3141e8;
        }
    }
    ctx->pc = 0x3141C8u;
label_3141c8:
    // 0x3141c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3141c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3141cc:
    // 0x3141cc: 0xc105418  jal         func_415060
label_3141d0:
    if (ctx->pc == 0x3141D0u) {
        ctx->pc = 0x3141D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141CCu;
        // 0x3141d0: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3141D4u;
        goto label_3141d4;
    }
    ctx->pc = 0x3141CCu;
    SET_GPR_U32(ctx, 31, 0x3141D4u);
    ctx->pc = 0x3141D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3141CCu;
    // 0x3141d0: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3141CCu, 0x3141D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3141D4u;
label_3141d4:
    // 0x3141d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3141d8:
    // 0x3141d8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3141d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3141dc:
    // 0x3141dc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3141dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3141e0:
    // 0x3141e0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x3141e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_3141e4:
    // 0x3141e4: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x3141e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_3141e8:
    // 0x3141e8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3141e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3141ec:
    // 0x3141ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3141ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3141f0:
    // 0x3141f0: 0xc105418  jal         func_415060
label_3141f4:
    if (ctx->pc == 0x3141F4u) {
        ctx->pc = 0x3141F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141F0u;
        // 0x3141f4: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3141F8u;
        goto label_3141f8;
    }
    ctx->pc = 0x3141F0u;
    SET_GPR_U32(ctx, 31, 0x3141F8u);
    ctx->pc = 0x3141F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3141F0u;
    // 0x3141f4: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3141F0u, 0x3141F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3141F8u;
label_3141f8:
    // 0x3141f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3141f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3141fc:
    // 0x3141fc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3141fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_314200:
    // 0x314200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314204:
    // 0x314204: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x314204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_314208:
    // 0x314208: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x314208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_31420c:
    // 0x31420c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x31420cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_314210:
    // 0x314210: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x314210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_314214:
    // 0x314214: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x314214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_314218:
    // 0x314218: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x314218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31421c:
    // 0x31421c: 0xc105418  jal         func_415060
label_314220:
    if (ctx->pc == 0x314220u) {
        ctx->pc = 0x314220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31421Cu;
        // 0x314220: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314224u;
        goto label_314224;
    }
    ctx->pc = 0x31421Cu;
    SET_GPR_U32(ctx, 31, 0x314224u);
    ctx->pc = 0x314220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31421Cu;
    // 0x314220: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x31421Cu, 0x314224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314224u;
label_314224:
    // 0x314224: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x314224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_314228:
    // 0x314228: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x314228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_31422c:
    // 0x31422c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314230:
    // 0x314230: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x314230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_314234:
    // 0x314234: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x314234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_314238:
    // 0x314238: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x314238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_31423c:
    // 0x31423c: 0x13c00027  beqz        $fp, . + 4 + (0x27 << 2)
label_314240:
    if (ctx->pc == 0x314240u) {
        ctx->pc = 0x314240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31423Cu;
        // 0x314240: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314244u;
        goto label_314244;
    }
    ctx->pc = 0x31423Cu;
    {
        const bool branch_taken_0x31423c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x314240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31423Cu;
        // 0x314240: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31423c) {
            ctx->pc = 0x3142DCu;
            goto label_3142dc;
        }
    }
    ctx->pc = 0x314244u;
label_314244:
    // 0x314244: 0x0  nop
    ctx->pc = 0x314244u;
    // NOP
label_314248:
    // 0x314248: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31424c:
    // 0x31424c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_314250:
    // 0x314250: 0x26d1000c  addiu       $s1, $s6, 0xC
    ctx->pc = 0x314250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_314254:
    // 0x314254: 0xc105418  jal         func_415060
label_314258:
    if (ctx->pc == 0x314258u) {
        ctx->pc = 0x314258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314254u;
        // 0x314258: 0x26d20018  addiu       $s2, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31425Cu;
        goto label_31425c;
    }
    ctx->pc = 0x314254u;
    SET_GPR_U32(ctx, 31, 0x31425Cu);
    ctx->pc = 0x314258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314254u;
    // 0x314258: 0x26d20018  addiu       $s2, $s6, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x314254u, 0x31425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31425Cu;
label_31425c:
    // 0x31425c: 0x26d30024  addiu       $s3, $s6, 0x24
    ctx->pc = 0x31425cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
label_314260:
    // 0x314260: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x314260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_314264:
    // 0x314264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x314264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314268:
    // 0x314268: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x314268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_31426c:
    // 0x31426c: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x31426cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
label_314270:
    // 0x314270: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x314270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_314274:
    // 0x314274: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x314274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_314278:
    // 0x314278: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31427c:
    // 0x31427c: 0x24750018  addiu       $s5, $v1, 0x18
    ctx->pc = 0x31427cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_314280:
    // 0x314280: 0xc105418  jal         func_415060
label_314284:
    if (ctx->pc == 0x314284u) {
        ctx->pc = 0x314284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314280u;
        // 0x314284: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314288u;
        goto label_314288;
    }
    ctx->pc = 0x314280u;
    SET_GPR_U32(ctx, 31, 0x314288u);
    ctx->pc = 0x314284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314280u;
    // 0x314284: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x314280u, 0x314288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314288u;
label_314288:
    // 0x314288: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x314288u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_31428c:
    // 0x31428c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_314290:
    // 0x314290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314294:
    // 0x314294: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x314294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_314298:
    // 0x314298: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x314298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31429c:
    // 0x31429c: 0x24740024  addiu       $s4, $v1, 0x24
    ctx->pc = 0x31429cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_3142a0:
    // 0x3142a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3142a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3142a4:
    // 0x3142a4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x3142a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_3142a8:
    // 0x3142a8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3142a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_3142ac:
    // 0x3142ac: 0xc105418  jal         func_415060
label_3142b0:
    if (ctx->pc == 0x3142B0u) {
        ctx->pc = 0x3142B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142ACu;
        // 0x3142b0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142B4u;
        goto label_3142b4;
    }
    ctx->pc = 0x3142ACu;
    SET_GPR_U32(ctx, 31, 0x3142B4u);
    ctx->pc = 0x3142B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142ACu;
    // 0x3142b0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3142ACu, 0x3142B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142B4u;
label_3142b4:
    // 0x3142b4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3142b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3142b8:
    // 0x3142b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3142b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3142bc:
    // 0x3142bc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3142bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3142c0:
    // 0x3142c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3142c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3142c4:
    // 0x3142c4: 0xc105418  jal         func_415060
label_3142c8:
    if (ctx->pc == 0x3142C8u) {
        ctx->pc = 0x3142C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142C4u;
        // 0x3142c8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142CCu;
        goto label_3142cc;
    }
    ctx->pc = 0x3142C4u;
    SET_GPR_U32(ctx, 31, 0x3142CCu);
    ctx->pc = 0x3142C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142C4u;
    // 0x3142c8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3142C4u, 0x3142CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142CCu;
label_3142cc:
    // 0x3142cc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3142ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3142d0:
    // 0x3142d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3142d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3142d4:
    // 0x3142d4: 0x17c0ffdc  bnez        $fp, . + 4 + (-0x24 << 2)
label_3142d8:
    if (ctx->pc == 0x3142D8u) {
        ctx->pc = 0x3142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142D4u;
        // 0x3142d8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142DCu;
        goto label_3142dc;
    }
    ctx->pc = 0x3142D4u;
    {
        const bool branch_taken_0x3142d4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142D4u;
        // 0x3142d8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142d4) {
            ctx->pc = 0x314248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314248;
        }
    }
    ctx->pc = 0x3142DCu;
label_3142dc:
    // 0x3142dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3142e0:
    // 0x3142e0: 0x58400027  blezl       $v0, . + 4 + (0x27 << 2)
label_3142e4:
    if (ctx->pc == 0x3142E4u) {
        ctx->pc = 0x3142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E0u;
        // 0x3142e4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142E8u;
        goto label_3142e8;
    }
    ctx->pc = 0x3142E0u;
    {
        const bool branch_taken_0x3142e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3142e0) {
            ctx->pc = 0x3142E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3142E0u;
            // 0x3142e4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314380u;
            goto label_314380;
        }
    }
    ctx->pc = 0x3142E8u;
label_3142e8:
    // 0x3142e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3142e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3142ec:
    // 0x3142ec: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x3142ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3142f0:
    // 0x3142f0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_3142f4:
    // 0x3142f4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3142f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3142f8:
    // 0x3142f8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3142f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3142fc:
    // 0x3142fc: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_314300:
    if (ctx->pc == 0x314300u) {
        ctx->pc = 0x314300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142FCu;
        // 0x314300: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314304u;
        goto label_314304;
    }
    ctx->pc = 0x3142FCu;
    {
        const bool branch_taken_0x3142fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142FCu;
        // 0x314300: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142fc) {
            ctx->pc = 0x31434Cu;
            goto label_31434c;
        }
    }
    ctx->pc = 0x314304u;
label_314304:
    // 0x314304: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x314304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_314308:
    // 0x314308: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_31430c:
    if (ctx->pc == 0x31430Cu) {
        ctx->pc = 0x31430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314308u;
        // 0x31430c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314310u;
        goto label_314310;
    }
    ctx->pc = 0x314308u;
    {
        const bool branch_taken_0x314308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314308u;
        // 0x31430c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314308) {
            ctx->pc = 0x314338u;
            goto label_314338;
        }
    }
    ctx->pc = 0x314310u;
label_314310:
    // 0x314310: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_314314:
    if (ctx->pc == 0x314314u) {
        ctx->pc = 0x314314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314310u;
        // 0x314314: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314318u;
        goto label_314318;
    }
    ctx->pc = 0x314310u;
    {
        const bool branch_taken_0x314310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314310) {
            ctx->pc = 0x314314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314310u;
            // 0x314314: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31432Cu;
            goto label_31432c;
        }
    }
    ctx->pc = 0x314318u;
label_314318:
    // 0x314318: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x314318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_31431c:
    // 0x31431c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_314320:
    // 0x314320: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x314320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_314324:
    // 0x314324: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x314324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_314328:
    // 0x314328: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x314328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_31432c:
    // 0x31432c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31432cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_314330:
    // 0x314330: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_314334:
    // 0x314334: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x314334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_314338:
    // 0x314338: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x314338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_31433c:
    // 0x31433c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31433cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_314340:
    // 0x314340: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_314344:
    // 0x314344: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_314348:
    if (ctx->pc == 0x314348u) {
        ctx->pc = 0x314348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314344u;
        // 0x314348: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31434Cu;
        goto label_31434c;
    }
    ctx->pc = 0x314344u;
    {
        const bool branch_taken_0x314344 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x314348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314344u;
        // 0x314348: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314344) {
            ctx->pc = 0x31437Cu;
            goto label_31437c;
        }
    }
    ctx->pc = 0x31434Cu;
label_31434c:
    // 0x31434c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31434cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_314350:
    // 0x314350: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x314350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_314354:
    // 0x314354: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x314354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_314358:
    // 0x314358: 0x24e40018  addiu       $a0, $a3, 0x18
    ctx->pc = 0x314358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_31435c:
    // 0x31435c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x31435cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_314360:
    // 0x314360: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x314360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_314364:
    // 0x314364: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x314364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_314368:
    // 0x314368: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x314368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_31436c:
    // 0x31436c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x31436cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_314370:
    // 0x314370: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x314370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_314374:
    // 0x314374: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_314378:
    if (ctx->pc == 0x314378u) {
        ctx->pc = 0x314378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314374u;
        // 0x314378: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31437Cu;
        goto label_31437c;
    }
    ctx->pc = 0x314374u;
    {
        const bool branch_taken_0x314374 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x314378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314374u;
        // 0x314378: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314374) {
            ctx->pc = 0x314350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314350;
        }
    }
    ctx->pc = 0x31437Cu;
label_31437c:
    // 0x31437c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x31437cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_314380:
    // 0x314380: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x314380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_314384:
    // 0x314384: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x314384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_314388:
    // 0x314388: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x314388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31438c:
    // 0x31438c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31438cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_314390:
    // 0x314390: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x314390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_314394:
    // 0x314394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x314394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_314398:
    // 0x314398: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x314398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31439c:
    // 0x31439c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31439cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3143a0:
    // 0x3143a0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3143a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3143a4:
    // 0x3143a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3143a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3143a8:
    // 0x3143a8: 0x3e00008  jr          $ra
label_3143ac:
    if (ctx->pc == 0x3143ACu) {
        ctx->pc = 0x3143ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143A8u;
        // 0x3143ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3143B0u;
        goto label_fallthrough_0x3143a8;
    }
    ctx->pc = 0x3143A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3143ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143A8u;
        // 0x3143ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3143A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3143a8:
    ctx->pc = 0x3143B0u;
}
