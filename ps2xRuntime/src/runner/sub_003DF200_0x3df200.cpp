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

// Function: sub_003DF200
// Address: 0x3df200 - 0x3df3f0
void sub_003DF200_0x3df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF200_0x3df200");
#endif

    switch (ctx->pc) {
        case 0x3df200u: goto label_3df200;
        case 0x3df204u: goto label_3df204;
        case 0x3df208u: goto label_3df208;
        case 0x3df20cu: goto label_3df20c;
        case 0x3df210u: goto label_3df210;
        case 0x3df214u: goto label_3df214;
        case 0x3df218u: goto label_3df218;
        case 0x3df21cu: goto label_3df21c;
        case 0x3df220u: goto label_3df220;
        case 0x3df224u: goto label_3df224;
        case 0x3df228u: goto label_3df228;
        case 0x3df22cu: goto label_3df22c;
        case 0x3df230u: goto label_3df230;
        case 0x3df234u: goto label_3df234;
        case 0x3df238u: goto label_3df238;
        case 0x3df23cu: goto label_3df23c;
        case 0x3df240u: goto label_3df240;
        case 0x3df244u: goto label_3df244;
        case 0x3df248u: goto label_3df248;
        case 0x3df24cu: goto label_3df24c;
        case 0x3df250u: goto label_3df250;
        case 0x3df254u: goto label_3df254;
        case 0x3df258u: goto label_3df258;
        case 0x3df25cu: goto label_3df25c;
        case 0x3df260u: goto label_3df260;
        case 0x3df264u: goto label_3df264;
        case 0x3df268u: goto label_3df268;
        case 0x3df26cu: goto label_3df26c;
        case 0x3df270u: goto label_3df270;
        case 0x3df274u: goto label_3df274;
        case 0x3df278u: goto label_3df278;
        case 0x3df27cu: goto label_3df27c;
        case 0x3df280u: goto label_3df280;
        case 0x3df284u: goto label_3df284;
        case 0x3df288u: goto label_3df288;
        case 0x3df28cu: goto label_3df28c;
        case 0x3df290u: goto label_3df290;
        case 0x3df294u: goto label_3df294;
        case 0x3df298u: goto label_3df298;
        case 0x3df29cu: goto label_3df29c;
        case 0x3df2a0u: goto label_3df2a0;
        case 0x3df2a4u: goto label_3df2a4;
        case 0x3df2a8u: goto label_3df2a8;
        case 0x3df2acu: goto label_3df2ac;
        case 0x3df2b0u: goto label_3df2b0;
        case 0x3df2b4u: goto label_3df2b4;
        case 0x3df2b8u: goto label_3df2b8;
        case 0x3df2bcu: goto label_3df2bc;
        case 0x3df2c0u: goto label_3df2c0;
        case 0x3df2c4u: goto label_3df2c4;
        case 0x3df2c8u: goto label_3df2c8;
        case 0x3df2ccu: goto label_3df2cc;
        case 0x3df2d0u: goto label_3df2d0;
        case 0x3df2d4u: goto label_3df2d4;
        case 0x3df2d8u: goto label_3df2d8;
        case 0x3df2dcu: goto label_3df2dc;
        case 0x3df2e0u: goto label_3df2e0;
        case 0x3df2e4u: goto label_3df2e4;
        case 0x3df2e8u: goto label_3df2e8;
        case 0x3df2ecu: goto label_3df2ec;
        case 0x3df2f0u: goto label_3df2f0;
        case 0x3df2f4u: goto label_3df2f4;
        case 0x3df2f8u: goto label_3df2f8;
        case 0x3df2fcu: goto label_3df2fc;
        case 0x3df300u: goto label_3df300;
        case 0x3df304u: goto label_3df304;
        case 0x3df308u: goto label_3df308;
        case 0x3df30cu: goto label_3df30c;
        case 0x3df310u: goto label_3df310;
        case 0x3df314u: goto label_3df314;
        case 0x3df318u: goto label_3df318;
        case 0x3df31cu: goto label_3df31c;
        case 0x3df320u: goto label_3df320;
        case 0x3df324u: goto label_3df324;
        case 0x3df328u: goto label_3df328;
        case 0x3df32cu: goto label_3df32c;
        case 0x3df330u: goto label_3df330;
        case 0x3df334u: goto label_3df334;
        case 0x3df338u: goto label_3df338;
        case 0x3df33cu: goto label_3df33c;
        case 0x3df340u: goto label_3df340;
        case 0x3df344u: goto label_3df344;
        case 0x3df348u: goto label_3df348;
        case 0x3df34cu: goto label_3df34c;
        case 0x3df350u: goto label_3df350;
        case 0x3df354u: goto label_3df354;
        case 0x3df358u: goto label_3df358;
        case 0x3df35cu: goto label_3df35c;
        case 0x3df360u: goto label_3df360;
        case 0x3df364u: goto label_3df364;
        case 0x3df368u: goto label_3df368;
        case 0x3df36cu: goto label_3df36c;
        case 0x3df370u: goto label_3df370;
        case 0x3df374u: goto label_3df374;
        case 0x3df378u: goto label_3df378;
        case 0x3df37cu: goto label_3df37c;
        case 0x3df380u: goto label_3df380;
        case 0x3df384u: goto label_3df384;
        case 0x3df388u: goto label_3df388;
        case 0x3df38cu: goto label_3df38c;
        case 0x3df390u: goto label_3df390;
        case 0x3df394u: goto label_3df394;
        case 0x3df398u: goto label_3df398;
        case 0x3df39cu: goto label_3df39c;
        case 0x3df3a0u: goto label_3df3a0;
        case 0x3df3a4u: goto label_3df3a4;
        case 0x3df3a8u: goto label_3df3a8;
        case 0x3df3acu: goto label_3df3ac;
        case 0x3df3b0u: goto label_3df3b0;
        case 0x3df3b4u: goto label_3df3b4;
        case 0x3df3b8u: goto label_3df3b8;
        case 0x3df3bcu: goto label_3df3bc;
        case 0x3df3c0u: goto label_3df3c0;
        case 0x3df3c4u: goto label_3df3c4;
        case 0x3df3c8u: goto label_3df3c8;
        case 0x3df3ccu: goto label_3df3cc;
        case 0x3df3d0u: goto label_3df3d0;
        case 0x3df3d4u: goto label_3df3d4;
        case 0x3df3d8u: goto label_3df3d8;
        case 0x3df3dcu: goto label_3df3dc;
        case 0x3df3e0u: goto label_3df3e0;
        case 0x3df3e4u: goto label_3df3e4;
        case 0x3df3e8u: goto label_3df3e8;
        case 0x3df3ecu: goto label_3df3ec;
        default: break;
    }

    ctx->pc = 0x3df200u;

label_3df200:
    // 0x3df200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3df200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3df204:
    // 0x3df204: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3df204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3df208:
    // 0x3df208: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3df208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3df20c:
    // 0x3df20c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3df20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3df210:
    // 0x3df210: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3df210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3df214:
    // 0x3df214: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3df214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3df218:
    // 0x3df218: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3df218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3df21c:
    // 0x3df21c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df220:
    // 0x3df220: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3df220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3df224:
    // 0x3df224: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3df224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3df228:
    // 0x3df228: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3df228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3df22c:
    // 0x3df22c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x3df22cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3df230:
    // 0x3df230: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3df230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3df234:
    // 0x3df234: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3df234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3df238:
    // 0x3df238: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3df238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_3df23c:
    // 0x3df23c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3df23cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3df240:
    // 0x3df240: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3df240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3df244:
    // 0x3df244: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x3df244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_3df248:
    // 0x3df248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3df24c:
    // 0x3df24c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3df24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3df250:
    // 0x3df250: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x3df250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3df254:
    // 0x3df254: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3df254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3df258:
    // 0x3df258: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3df258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3df25c:
    // 0x3df25c: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x3df25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
label_3df260:
    // 0x3df260: 0x40f809  jalr        $v0
label_3df264:
    if (ctx->pc == 0x3DF264u) {
        ctx->pc = 0x3DF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF260u;
        // 0x3df264: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF268u;
        goto label_3df268;
    }
    ctx->pc = 0x3DF260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF268u);
        ctx->pc = 0x3DF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF260u;
        // 0x3df264: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF260u, 0x3DF268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF268u;
label_3df268:
    // 0x3df268: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3df268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df26c:
    // 0x3df26c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3df270:
    if (ctx->pc == 0x3DF270u) {
        ctx->pc = 0x3DF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF26Cu;
        // 0x3df270: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF274u;
        goto label_3df274;
    }
    ctx->pc = 0x3DF26Cu;
    {
        const bool branch_taken_0x3df26c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF26Cu;
        // 0x3df270: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df26c) {
            ctx->pc = 0x3DF27Cu;
            goto label_3df27c;
        }
    }
    ctx->pc = 0x3DF274u;
label_3df274:
    // 0x3df274: 0x10000052  b           . + 4 + (0x52 << 2)
label_3df278:
    if (ctx->pc == 0x3DF278u) {
        ctx->pc = 0x3DF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF274u;
        // 0x3df278: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF27Cu;
        goto label_3df27c;
    }
    ctx->pc = 0x3DF274u;
    {
        const bool branch_taken_0x3df274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF274u;
        // 0x3df278: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df274) {
            ctx->pc = 0x3DF3C0u;
            goto label_3df3c0;
        }
    }
    ctx->pc = 0x3DF27Cu;
label_3df27c:
    // 0x3df27c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3df27cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3df280:
    // 0x3df280: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x3df280u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_3df284:
    // 0x3df284: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3df284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df288:
    // 0x3df288: 0x24e7d508  addiu       $a3, $a3, -0x2AF8
    ctx->pc = 0x3df288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956296));
label_3df28c:
    // 0x3df28c: 0x2508d588  addiu       $t0, $t0, -0x2A78
    ctx->pc = 0x3df28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956424));
label_3df290:
    // 0x3df290: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3df290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_3df294:
    // 0x3df294: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3df294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3df298:
    // 0x3df298: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3df298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_3df29c:
    // 0x3df29c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3df29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3df2a0:
    // 0x3df2a0: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x3df2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_3df2a4:
    // 0x3df2a4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3df2a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3df2a8:
    // 0x3df2a8: 0xc0f7992  jal         func_3DE648
label_3df2ac:
    if (ctx->pc == 0x3DF2ACu) {
        ctx->pc = 0x3DF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2A8u;
        // 0x3df2ac: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2B0u;
        goto label_3df2b0;
    }
    ctx->pc = 0x3DF2A8u;
    SET_GPR_U32(ctx, 31, 0x3DF2B0u);
    ctx->pc = 0x3DF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2A8u;
    // 0x3df2ac: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE648u, 0x3DF2A8u, 0x3DF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2B0u;
label_3df2b0:
    // 0x3df2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3df2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df2b4:
    // 0x3df2b4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3df2b8:
    if (ctx->pc == 0x3DF2B8u) {
        ctx->pc = 0x3DF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2B4u;
        // 0x3df2b8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2BCu;
        goto label_3df2bc;
    }
    ctx->pc = 0x3DF2B4u;
    {
        const bool branch_taken_0x3df2b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2B4u;
        // 0x3df2b8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2b4) {
            ctx->pc = 0x3DF2CCu;
            goto label_3df2cc;
        }
    }
    ctx->pc = 0x3DF2BCu;
label_3df2bc:
    // 0x3df2bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3df2c0:
    // 0x3df2c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3df2c4:
    if (ctx->pc == 0x3DF2C4u) {
        ctx->pc = 0x3DF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2C0u;
        // 0x3df2c4: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2C8u;
        goto label_3df2c8;
    }
    ctx->pc = 0x3DF2C0u;
    {
        const bool branch_taken_0x3df2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2C0u;
        // 0x3df2c4: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2c0) {
            ctx->pc = 0x3DF2F8u;
            goto label_3df2f8;
        }
    }
    ctx->pc = 0x3DF2C8u;
label_3df2c8:
    // 0x3df2c8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3df2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df2cc:
    // 0x3df2cc: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_3df2d0:
    if (ctx->pc == 0x3DF2D0u) {
        ctx->pc = 0x3DF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2CCu;
        // 0x3df2d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2D4u;
        goto label_3df2d4;
    }
    ctx->pc = 0x3DF2CCu;
    {
        const bool branch_taken_0x3df2cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df2cc) {
            ctx->pc = 0x3DF2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF2CCu;
            // 0x3df2d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF2E0u;
            goto label_3df2e0;
        }
    }
    ctx->pc = 0x3DF2D4u;
label_3df2d4:
    // 0x3df2d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df2d8:
    // 0x3df2d8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3df2dc:
    if (ctx->pc == 0x3DF2DCu) {
        ctx->pc = 0x3DF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2D8u;
        // 0x3df2dc: 0x2442d748  addiu       $v0, $v0, -0x28B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2E0u;
        goto label_3df2e0;
    }
    ctx->pc = 0x3DF2D8u;
    {
        const bool branch_taken_0x3df2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2D8u;
        // 0x3df2dc: 0x2442d748  addiu       $v0, $v0, -0x28B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2d8) {
            ctx->pc = 0x3DF394u;
            goto label_3df394;
        }
    }
    ctx->pc = 0x3DF2E0u;
label_3df2e0:
    // 0x3df2e0: 0x5202002e  beql        $s0, $v0, . + 4 + (0x2E << 2)
label_3df2e4:
    if (ctx->pc == 0x3DF2E4u) {
        ctx->pc = 0x3DF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2E0u;
        // 0x3df2e4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2E8u;
        goto label_3df2e8;
    }
    ctx->pc = 0x3DF2E0u;
    {
        const bool branch_taken_0x3df2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3df2e0) {
            ctx->pc = 0x3DF2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF2E0u;
            // 0x3df2e4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF39Cu;
            goto label_3df39c;
        }
    }
    ctx->pc = 0x3DF2E8u;
label_3df2e8:
    // 0x3df2e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df2ec:
    // 0x3df2ec: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x3df2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df2f0:
    // 0x3df2f0: 0x10000028  b           . + 4 + (0x28 << 2)
label_3df2f4:
    if (ctx->pc == 0x3DF2F4u) {
        ctx->pc = 0x3DF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2F0u;
        // 0x3df2f4: 0x2442d770  addiu       $v0, $v0, -0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF2F8u;
        goto label_3df2f8;
    }
    ctx->pc = 0x3DF2F0u;
    {
        const bool branch_taken_0x3df2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2F0u;
        // 0x3df2f4: 0x2442d770  addiu       $v0, $v0, -0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2f0) {
            ctx->pc = 0x3DF394u;
            goto label_3df394;
        }
    }
    ctx->pc = 0x3DF2F8u;
label_3df2f8:
    // 0x3df2f8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3df2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3df2fc:
    // 0x3df2fc: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x3df2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_3df300:
    // 0x3df300: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3df300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3df304:
    // 0x3df304: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x3df304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3df308:
    // 0x3df308: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x3df308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_3df30c:
    // 0x3df30c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3df30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_3df310:
    // 0x3df310: 0x24e7d608  addiu       $a3, $a3, -0x29F8
    ctx->pc = 0x3df310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956552));
label_3df314:
    // 0x3df314: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x3df314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
label_3df318:
    // 0x3df318: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x3df318u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df31c:
    // 0x3df31c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3df31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_3df320:
    // 0x3df320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3df320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df324:
    // 0x3df324: 0xc0f7992  jal         func_3DE648
label_3df328:
    if (ctx->pc == 0x3DF328u) {
        ctx->pc = 0x3DF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF324u;
        // 0x3df328: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF32Cu;
        goto label_3df32c;
    }
    ctx->pc = 0x3DF324u;
    SET_GPR_U32(ctx, 31, 0x3DF32Cu);
    ctx->pc = 0x3DF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF324u;
    // 0x3df328: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE648u, 0x3DF324u, 0x3DF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF32Cu;
label_3df32c:
    // 0x3df32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3df32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df330:
    // 0x3df330: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_3df334:
    if (ctx->pc == 0x3DF334u) {
        ctx->pc = 0x3DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF330u;
        // 0x3df334: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF338u;
        goto label_3df338;
    }
    ctx->pc = 0x3DF330u;
    {
        const bool branch_taken_0x3df330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF330u;
        // 0x3df334: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df330) {
            ctx->pc = 0x3DF354u;
            goto label_3df354;
        }
    }
    ctx->pc = 0x3DF338u;
label_3df338:
    // 0x3df338: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3df338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3df33c:
    // 0x3df33c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_3df340:
    if (ctx->pc == 0x3DF340u) {
        ctx->pc = 0x3DF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF33Cu;
        // 0x3df340: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF344u;
        goto label_3df344;
    }
    ctx->pc = 0x3DF33Cu;
    {
        const bool branch_taken_0x3df33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df33c) {
            ctx->pc = 0x3DF340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF33Cu;
            // 0x3df340: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF3B0u;
            goto label_3df3b0;
        }
    }
    ctx->pc = 0x3DF344u;
label_3df344:
    // 0x3df344: 0x2e620102  sltiu       $v0, $s3, 0x102
    ctx->pc = 0x3df344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_3df348:
    // 0x3df348: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3df34c:
    if (ctx->pc == 0x3DF34Cu) {
        ctx->pc = 0x3DF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF348u;
        // 0x3df34c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF350u;
        goto label_3df350;
    }
    ctx->pc = 0x3DF348u;
    {
        const bool branch_taken_0x3df348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df348) {
            ctx->pc = 0x3DF34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF348u;
            // 0x3df34c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF3B0u;
            goto label_3df3b0;
        }
    }
    ctx->pc = 0x3DF350u;
label_3df350:
    // 0x3df350: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3df350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df354:
    // 0x3df354: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_3df358:
    if (ctx->pc == 0x3DF358u) {
        ctx->pc = 0x3DF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF354u;
        // 0x3df358: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF35Cu;
        goto label_3df35c;
    }
    ctx->pc = 0x3DF354u;
    {
        const bool branch_taken_0x3df354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df354) {
            ctx->pc = 0x3DF358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF354u;
            // 0x3df358: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF368u;
            goto label_3df368;
        }
    }
    ctx->pc = 0x3DF35Cu;
label_3df35c:
    // 0x3df35c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df360:
    // 0x3df360: 0x1000000c  b           . + 4 + (0xC << 2)
label_3df364:
    if (ctx->pc == 0x3DF364u) {
        ctx->pc = 0x3DF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF360u;
        // 0x3df364: 0x2442d790  addiu       $v0, $v0, -0x2870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF368u;
        goto label_3df368;
    }
    ctx->pc = 0x3DF360u;
    {
        const bool branch_taken_0x3df360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF360u;
        // 0x3df364: 0x2442d790  addiu       $v0, $v0, -0x2870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df360) {
            ctx->pc = 0x3DF394u;
            goto label_3df394;
        }
    }
    ctx->pc = 0x3DF368u;
label_3df368:
    // 0x3df368: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_3df36c:
    if (ctx->pc == 0x3DF36Cu) {
        ctx->pc = 0x3DF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF368u;
        // 0x3df36c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF370u;
        goto label_3df370;
    }
    ctx->pc = 0x3DF368u;
    {
        const bool branch_taken_0x3df368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df368) {
            ctx->pc = 0x3DF36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF368u;
            // 0x3df36c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF380u;
            goto label_3df380;
        }
    }
    ctx->pc = 0x3DF370u;
label_3df370:
    // 0x3df370: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df374:
    // 0x3df374: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x3df374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df378:
    // 0x3df378: 0x10000006  b           . + 4 + (0x6 << 2)
label_3df37c:
    if (ctx->pc == 0x3DF37Cu) {
        ctx->pc = 0x3DF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF378u;
        // 0x3df37c: 0x2442d7b0  addiu       $v0, $v0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF380u;
        goto label_3df380;
    }
    ctx->pc = 0x3DF378u;
    {
        const bool branch_taken_0x3df378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF378u;
        // 0x3df37c: 0x2442d7b0  addiu       $v0, $v0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df378) {
            ctx->pc = 0x3DF394u;
            goto label_3df394;
        }
    }
    ctx->pc = 0x3DF380u;
label_3df380:
    // 0x3df380: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_3df384:
    if (ctx->pc == 0x3DF384u) {
        ctx->pc = 0x3DF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF380u;
        // 0x3df384: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF388u;
        goto label_3df388;
    }
    ctx->pc = 0x3DF380u;
    {
        const bool branch_taken_0x3df380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3df380) {
            ctx->pc = 0x3DF384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF380u;
            // 0x3df384: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF39Cu;
            goto label_3df39c;
        }
    }
    ctx->pc = 0x3DF388u;
label_3df388:
    // 0x3df388: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df38c:
    // 0x3df38c: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x3df38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df390:
    // 0x3df390: 0x2442d7d0  addiu       $v0, $v0, -0x2830
    ctx->pc = 0x3df390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957008));
label_3df394:
    // 0x3df394: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3df394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3df398:
    // 0x3df398: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3df398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3df39c:
    // 0x3df39c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3df39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df3a0:
    // 0x3df3a0: 0x40f809  jalr        $v0
label_3df3a4:
    if (ctx->pc == 0x3DF3A4u) {
        ctx->pc = 0x3DF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3A0u;
        // 0x3df3a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3A8u;
        goto label_3df3a8;
    }
    ctx->pc = 0x3DF3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF3A8u);
        ctx->pc = 0x3DF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3A0u;
        // 0x3df3a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF3A0u, 0x3DF3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF3A8u;
label_3df3a8:
    // 0x3df3a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3df3ac:
    if (ctx->pc == 0x3DF3ACu) {
        ctx->pc = 0x3DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3A8u;
        // 0x3df3ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3B0u;
        goto label_3df3b0;
    }
    ctx->pc = 0x3DF3A8u;
    {
        const bool branch_taken_0x3df3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3A8u;
        // 0x3df3ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3a8) {
            ctx->pc = 0x3DF3C0u;
            goto label_3df3c0;
        }
    }
    ctx->pc = 0x3DF3B0u;
label_3df3b0:
    // 0x3df3b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3df3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df3b4:
    // 0x3df3b4: 0x40f809  jalr        $v0
label_3df3b8:
    if (ctx->pc == 0x3DF3B8u) {
        ctx->pc = 0x3DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B4u;
        // 0x3df3b8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3BCu;
        goto label_3df3bc;
    }
    ctx->pc = 0x3DF3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF3BCu);
        ctx->pc = 0x3DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B4u;
        // 0x3df3b8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF3B4u, 0x3DF3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF3BCu;
label_3df3bc:
    // 0x3df3bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df3c0:
    // 0x3df3c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3df3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3df3c4:
    // 0x3df3c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3df3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3df3c8:
    // 0x3df3c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3df3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3df3cc:
    // 0x3df3cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3df3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3df3d0:
    // 0x3df3d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3df3d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3df3d4:
    // 0x3df3d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3df3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3df3d8:
    // 0x3df3d8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3df3d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df3dc:
    // 0x3df3dc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3df3dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df3e0:
    // 0x3df3e0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3df3e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df3e4:
    // 0x3df3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df3e8:
    // 0x3df3e8: 0x3e00008  jr          $ra
label_3df3ec:
    if (ctx->pc == 0x3DF3ECu) {
        ctx->pc = 0x3DF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3E8u;
        // 0x3df3ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF3F0u;
        goto label_fallthrough_0x3df3e8;
    }
    ctx->pc = 0x3DF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3E8u;
        // 0x3df3ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3df3e8:
    ctx->pc = 0x3DF3F0u;
}
