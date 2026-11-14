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

// Function: sub_0041B100
// Address: 0x41b100 - 0x41b408
void sub_0041B100_0x41b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B100_0x41b100");
#endif

    switch (ctx->pc) {
        case 0x41b100u: goto label_41b100;
        case 0x41b104u: goto label_41b104;
        case 0x41b108u: goto label_41b108;
        case 0x41b10cu: goto label_41b10c;
        case 0x41b110u: goto label_41b110;
        case 0x41b114u: goto label_41b114;
        case 0x41b118u: goto label_41b118;
        case 0x41b11cu: goto label_41b11c;
        case 0x41b120u: goto label_41b120;
        case 0x41b124u: goto label_41b124;
        case 0x41b128u: goto label_41b128;
        case 0x41b12cu: goto label_41b12c;
        case 0x41b130u: goto label_41b130;
        case 0x41b134u: goto label_41b134;
        case 0x41b138u: goto label_41b138;
        case 0x41b13cu: goto label_41b13c;
        case 0x41b140u: goto label_41b140;
        case 0x41b144u: goto label_41b144;
        case 0x41b148u: goto label_41b148;
        case 0x41b14cu: goto label_41b14c;
        case 0x41b150u: goto label_41b150;
        case 0x41b154u: goto label_41b154;
        case 0x41b158u: goto label_41b158;
        case 0x41b15cu: goto label_41b15c;
        case 0x41b160u: goto label_41b160;
        case 0x41b164u: goto label_41b164;
        case 0x41b168u: goto label_41b168;
        case 0x41b16cu: goto label_41b16c;
        case 0x41b170u: goto label_41b170;
        case 0x41b174u: goto label_41b174;
        case 0x41b178u: goto label_41b178;
        case 0x41b17cu: goto label_41b17c;
        case 0x41b180u: goto label_41b180;
        case 0x41b184u: goto label_41b184;
        case 0x41b188u: goto label_41b188;
        case 0x41b18cu: goto label_41b18c;
        case 0x41b190u: goto label_41b190;
        case 0x41b194u: goto label_41b194;
        case 0x41b198u: goto label_41b198;
        case 0x41b19cu: goto label_41b19c;
        case 0x41b1a0u: goto label_41b1a0;
        case 0x41b1a4u: goto label_41b1a4;
        case 0x41b1a8u: goto label_41b1a8;
        case 0x41b1acu: goto label_41b1ac;
        case 0x41b1b0u: goto label_41b1b0;
        case 0x41b1b4u: goto label_41b1b4;
        case 0x41b1b8u: goto label_41b1b8;
        case 0x41b1bcu: goto label_41b1bc;
        case 0x41b1c0u: goto label_41b1c0;
        case 0x41b1c4u: goto label_41b1c4;
        case 0x41b1c8u: goto label_41b1c8;
        case 0x41b1ccu: goto label_41b1cc;
        case 0x41b1d0u: goto label_41b1d0;
        case 0x41b1d4u: goto label_41b1d4;
        case 0x41b1d8u: goto label_41b1d8;
        case 0x41b1dcu: goto label_41b1dc;
        case 0x41b1e0u: goto label_41b1e0;
        case 0x41b1e4u: goto label_41b1e4;
        case 0x41b1e8u: goto label_41b1e8;
        case 0x41b1ecu: goto label_41b1ec;
        case 0x41b1f0u: goto label_41b1f0;
        case 0x41b1f4u: goto label_41b1f4;
        case 0x41b1f8u: goto label_41b1f8;
        case 0x41b1fcu: goto label_41b1fc;
        case 0x41b200u: goto label_41b200;
        case 0x41b204u: goto label_41b204;
        case 0x41b208u: goto label_41b208;
        case 0x41b20cu: goto label_41b20c;
        case 0x41b210u: goto label_41b210;
        case 0x41b214u: goto label_41b214;
        case 0x41b218u: goto label_41b218;
        case 0x41b21cu: goto label_41b21c;
        case 0x41b220u: goto label_41b220;
        case 0x41b224u: goto label_41b224;
        case 0x41b228u: goto label_41b228;
        case 0x41b22cu: goto label_41b22c;
        case 0x41b230u: goto label_41b230;
        case 0x41b234u: goto label_41b234;
        case 0x41b238u: goto label_41b238;
        case 0x41b23cu: goto label_41b23c;
        case 0x41b240u: goto label_41b240;
        case 0x41b244u: goto label_41b244;
        case 0x41b248u: goto label_41b248;
        case 0x41b24cu: goto label_41b24c;
        case 0x41b250u: goto label_41b250;
        case 0x41b254u: goto label_41b254;
        case 0x41b258u: goto label_41b258;
        case 0x41b25cu: goto label_41b25c;
        case 0x41b260u: goto label_41b260;
        case 0x41b264u: goto label_41b264;
        case 0x41b268u: goto label_41b268;
        case 0x41b26cu: goto label_41b26c;
        case 0x41b270u: goto label_41b270;
        case 0x41b274u: goto label_41b274;
        case 0x41b278u: goto label_41b278;
        case 0x41b27cu: goto label_41b27c;
        case 0x41b280u: goto label_41b280;
        case 0x41b284u: goto label_41b284;
        case 0x41b288u: goto label_41b288;
        case 0x41b28cu: goto label_41b28c;
        case 0x41b290u: goto label_41b290;
        case 0x41b294u: goto label_41b294;
        case 0x41b298u: goto label_41b298;
        case 0x41b29cu: goto label_41b29c;
        case 0x41b2a0u: goto label_41b2a0;
        case 0x41b2a4u: goto label_41b2a4;
        case 0x41b2a8u: goto label_41b2a8;
        case 0x41b2acu: goto label_41b2ac;
        case 0x41b2b0u: goto label_41b2b0;
        case 0x41b2b4u: goto label_41b2b4;
        case 0x41b2b8u: goto label_41b2b8;
        case 0x41b2bcu: goto label_41b2bc;
        case 0x41b2c0u: goto label_41b2c0;
        case 0x41b2c4u: goto label_41b2c4;
        case 0x41b2c8u: goto label_41b2c8;
        case 0x41b2ccu: goto label_41b2cc;
        case 0x41b2d0u: goto label_41b2d0;
        case 0x41b2d4u: goto label_41b2d4;
        case 0x41b2d8u: goto label_41b2d8;
        case 0x41b2dcu: goto label_41b2dc;
        case 0x41b2e0u: goto label_41b2e0;
        case 0x41b2e4u: goto label_41b2e4;
        case 0x41b2e8u: goto label_41b2e8;
        case 0x41b2ecu: goto label_41b2ec;
        case 0x41b2f0u: goto label_41b2f0;
        case 0x41b2f4u: goto label_41b2f4;
        case 0x41b2f8u: goto label_41b2f8;
        case 0x41b2fcu: goto label_41b2fc;
        case 0x41b300u: goto label_41b300;
        case 0x41b304u: goto label_41b304;
        case 0x41b308u: goto label_41b308;
        case 0x41b30cu: goto label_41b30c;
        case 0x41b310u: goto label_41b310;
        case 0x41b314u: goto label_41b314;
        case 0x41b318u: goto label_41b318;
        case 0x41b31cu: goto label_41b31c;
        case 0x41b320u: goto label_41b320;
        case 0x41b324u: goto label_41b324;
        case 0x41b328u: goto label_41b328;
        case 0x41b32cu: goto label_41b32c;
        case 0x41b330u: goto label_41b330;
        case 0x41b334u: goto label_41b334;
        case 0x41b338u: goto label_41b338;
        case 0x41b33cu: goto label_41b33c;
        case 0x41b340u: goto label_41b340;
        case 0x41b344u: goto label_41b344;
        case 0x41b348u: goto label_41b348;
        case 0x41b34cu: goto label_41b34c;
        case 0x41b350u: goto label_41b350;
        case 0x41b354u: goto label_41b354;
        case 0x41b358u: goto label_41b358;
        case 0x41b35cu: goto label_41b35c;
        case 0x41b360u: goto label_41b360;
        case 0x41b364u: goto label_41b364;
        case 0x41b368u: goto label_41b368;
        case 0x41b36cu: goto label_41b36c;
        case 0x41b370u: goto label_41b370;
        case 0x41b374u: goto label_41b374;
        case 0x41b378u: goto label_41b378;
        case 0x41b37cu: goto label_41b37c;
        case 0x41b380u: goto label_41b380;
        case 0x41b384u: goto label_41b384;
        case 0x41b388u: goto label_41b388;
        case 0x41b38cu: goto label_41b38c;
        case 0x41b390u: goto label_41b390;
        case 0x41b394u: goto label_41b394;
        case 0x41b398u: goto label_41b398;
        case 0x41b39cu: goto label_41b39c;
        case 0x41b3a0u: goto label_41b3a0;
        case 0x41b3a4u: goto label_41b3a4;
        case 0x41b3a8u: goto label_41b3a8;
        case 0x41b3acu: goto label_41b3ac;
        case 0x41b3b0u: goto label_41b3b0;
        case 0x41b3b4u: goto label_41b3b4;
        case 0x41b3b8u: goto label_41b3b8;
        case 0x41b3bcu: goto label_41b3bc;
        case 0x41b3c0u: goto label_41b3c0;
        case 0x41b3c4u: goto label_41b3c4;
        case 0x41b3c8u: goto label_41b3c8;
        case 0x41b3ccu: goto label_41b3cc;
        case 0x41b3d0u: goto label_41b3d0;
        case 0x41b3d4u: goto label_41b3d4;
        case 0x41b3d8u: goto label_41b3d8;
        case 0x41b3dcu: goto label_41b3dc;
        case 0x41b3e0u: goto label_41b3e0;
        case 0x41b3e4u: goto label_41b3e4;
        case 0x41b3e8u: goto label_41b3e8;
        case 0x41b3ecu: goto label_41b3ec;
        case 0x41b3f0u: goto label_41b3f0;
        case 0x41b3f4u: goto label_41b3f4;
        case 0x41b3f8u: goto label_41b3f8;
        case 0x41b3fcu: goto label_41b3fc;
        case 0x41b400u: goto label_41b400;
        case 0x41b404u: goto label_41b404;
        default: break;
    }

    ctx->pc = 0x41b100u;

label_41b100:
    // 0x41b100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x41b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_41b104:
    // 0x41b104: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b108:
    // 0x41b108: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x41b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_41b10c:
    // 0x41b10c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41b110:
    // 0x41b110: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41b114:
    // 0x41b114: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x41b114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41b118:
    // 0x41b118: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x41b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_41b11c:
    // 0x41b11c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41b120:
    // 0x41b120: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x41b120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_41b124:
    // 0x41b124: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x41b124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b128:
    // 0x41b128: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x41b128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_41b12c:
    // 0x41b12c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x41b12cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41b130:
    // 0x41b130: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x41b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_41b134:
    // 0x41b134: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x41b134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_41b138:
    // 0x41b138: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x41b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_41b13c:
    // 0x41b13c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_41b140:
    // 0x41b140: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x41b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_41b144:
    // 0x41b144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41b148:
    // 0x41b148: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x41b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_41b14c:
    // 0x41b14c: 0xc1053ba  jal         func_414EE8
label_41b150:
    if (ctx->pc == 0x41B150u) {
        ctx->pc = 0x41B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B14Cu;
        // 0x41b150: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B154u;
        goto label_41b154;
    }
    ctx->pc = 0x41B14Cu;
    SET_GPR_U32(ctx, 31, 0x41B154u);
    ctx->pc = 0x41B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B14Cu;
    // 0x41b150: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414EE8u, 0x41B14Cu, 0x41B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B154u;
label_41b154:
    // 0x41b154: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41b158:
    if (ctx->pc == 0x41B158u) {
        ctx->pc = 0x41B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B154u;
        // 0x41b158: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B15Cu;
        goto label_41b15c;
    }
    ctx->pc = 0x41B154u;
    {
        const bool branch_taken_0x41b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B154u;
        // 0x41b158: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b154) {
            ctx->pc = 0x41B174u;
            goto label_41b174;
        }
    }
    ctx->pc = 0x41B15Cu;
label_41b15c:
    // 0x41b15c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_41b160:
    if (ctx->pc == 0x41B160u) {
        ctx->pc = 0x41B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B15Cu;
        // 0x41b160: 0x2451e880  addiu       $s1, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B164u;
        goto label_41b164;
    }
    ctx->pc = 0x41B15Cu;
    {
        const bool branch_taken_0x41b15c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B15Cu;
        // 0x41b160: 0x2451e880  addiu       $s1, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b15c) {
            ctx->pc = 0x41B178u;
            goto label_41b178;
        }
    }
    ctx->pc = 0x41B164u;
label_41b164:
    // 0x41b164: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x41b164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_41b168:
    // 0x41b168: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_41b16c:
    if (ctx->pc == 0x41B16Cu) {
        ctx->pc = 0x41B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B168u;
        // 0x41b16c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B170u;
        goto label_41b170;
    }
    ctx->pc = 0x41B168u;
    {
        const bool branch_taken_0x41b168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B168u;
        // 0x41b16c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b168) {
            ctx->pc = 0x41B274u;
            goto label_41b274;
        }
    }
    ctx->pc = 0x41B170u;
label_41b170:
    // 0x41b170: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41b174:
    // 0x41b174: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41b174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41b178:
    // 0x41b178: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x41b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_41b17c:
    // 0x41b17c: 0x40f809  jalr        $v0
label_41b180:
    if (ctx->pc == 0x41B180u) {
        ctx->pc = 0x41B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B17Cu;
        // 0x41b180: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B184u;
        goto label_41b184;
    }
    ctx->pc = 0x41B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B184u);
        ctx->pc = 0x41B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B17Cu;
        // 0x41b180: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B17Cu, 0x41B184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B184u;
label_41b184:
    // 0x41b184: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b188:
    // 0x41b188: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x41b188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_41b18c:
    // 0x41b18c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_41b190:
    // 0x41b190: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x41b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_41b194:
    // 0x41b194: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x41b194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_41b198:
    // 0x41b198: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_41b19c:
    if (ctx->pc == 0x41B19Cu) {
        ctx->pc = 0x41B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B198u;
        // 0x41b19c: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1A0u;
        goto label_41b1a0;
    }
    ctx->pc = 0x41B198u;
    {
        const bool branch_taken_0x41b198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B198u;
        // 0x41b19c: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b198) {
            ctx->pc = 0x41B228u;
            goto label_41b228;
        }
    }
    ctx->pc = 0x41B1A0u;
label_41b1a0:
    // 0x41b1a0: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x41b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_41b1a4:
    // 0x41b1a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_41b1a8:
    if (ctx->pc == 0x41B1A8u) {
        ctx->pc = 0x41B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1A4u;
        // 0x41b1a8: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1ACu;
        goto label_41b1ac;
    }
    ctx->pc = 0x41B1A4u;
    {
        const bool branch_taken_0x41b1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1A4u;
        // 0x41b1a8: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b1a4) {
            ctx->pc = 0x41B1C4u;
            goto label_41b1c4;
        }
    }
    ctx->pc = 0x41B1ACu;
label_41b1ac:
    // 0x41b1ac: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x41b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_41b1b0:
    // 0x41b1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b1b4:
    // 0x41b1b4: 0x40f809  jalr        $v0
label_41b1b8:
    if (ctx->pc == 0x41B1B8u) {
        ctx->pc = 0x41B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1B4u;
        // 0x41b1b8: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1BCu;
        goto label_41b1bc;
    }
    ctx->pc = 0x41B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B1BCu);
        ctx->pc = 0x41B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1B4u;
        // 0x41b1b8: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B1B4u, 0x41B1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B1BCu;
label_41b1bc:
    // 0x41b1bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_41b1c0:
    if (ctx->pc == 0x41B1C0u) {
        ctx->pc = 0x41B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1BCu;
        // 0x41b1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1C4u;
        goto label_41b1c4;
    }
    ctx->pc = 0x41B1BCu;
    {
        const bool branch_taken_0x41b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1BCu;
        // 0x41b1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b1bc) {
            ctx->pc = 0x41B1DCu;
            goto label_41b1dc;
        }
    }
    ctx->pc = 0x41B1C4u;
label_41b1c4:
    // 0x41b1c4: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x41b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_41b1c8:
    // 0x41b1c8: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x41b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_41b1cc:
    // 0x41b1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b1d0:
    // 0x41b1d0: 0x40f809  jalr        $v0
label_41b1d4:
    if (ctx->pc == 0x41B1D4u) {
        ctx->pc = 0x41B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1D0u;
        // 0x41b1d4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1D8u;
        goto label_41b1d8;
    }
    ctx->pc = 0x41B1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B1D8u);
        ctx->pc = 0x41B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1D0u;
        // 0x41b1d4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B1D0u, 0x41B1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B1D8u;
label_41b1d8:
    // 0x41b1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b1dc:
    // 0x41b1dc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_41b1e0:
    if (ctx->pc == 0x41B1E0u) {
        ctx->pc = 0x41B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1DCu;
        // 0x41b1e0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1E4u;
        goto label_41b1e4;
    }
    ctx->pc = 0x41B1DCu;
    {
        const bool branch_taken_0x41b1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1DCu;
        // 0x41b1e0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b1dc) {
            ctx->pc = 0x41B210u;
            goto label_41b210;
        }
    }
    ctx->pc = 0x41B1E4u;
label_41b1e4:
    // 0x41b1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b1e8:
    // 0x41b1e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41b1ec:
    // 0x41b1ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41b1f0:
    // 0x41b1f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b1f4:
    // 0x41b1f4: 0xc1035f6  jal         func_40D7D8
label_41b1f8:
    if (ctx->pc == 0x41B1F8u) {
        ctx->pc = 0x41B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1F4u;
        // 0x41b1f8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1FCu;
        goto label_41b1fc;
    }
    ctx->pc = 0x41B1F4u;
    SET_GPR_U32(ctx, 31, 0x41B1FCu);
    ctx->pc = 0x41B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B1F4u;
    // 0x41b1f8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41B1F4u, 0x41B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B1FCu;
label_41b1fc:
    // 0x41b1fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41b1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b200:
    // 0x41b200: 0xc103628  jal         func_40D8A0
label_41b204:
    if (ctx->pc == 0x41B204u) {
        ctx->pc = 0x41B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B200u;
        // 0x41b204: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B208u;
        goto label_41b208;
    }
    ctx->pc = 0x41B200u;
    SET_GPR_U32(ctx, 31, 0x41B208u);
    ctx->pc = 0x41B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B200u;
    // 0x41b204: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41B200u, 0x41B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B208u;
label_41b208:
    // 0x41b208: 0x1000000b  b           . + 4 + (0xB << 2)
label_41b20c:
    if (ctx->pc == 0x41B20Cu) {
        ctx->pc = 0x41B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B208u;
        // 0x41b20c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B210u;
        goto label_41b210;
    }
    ctx->pc = 0x41B208u;
    {
        const bool branch_taken_0x41b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B208u;
        // 0x41b20c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b208) {
            ctx->pc = 0x41B238u;
            goto label_41b238;
        }
    }
    ctx->pc = 0x41B210u;
label_41b210:
    // 0x41b210: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x41b210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_41b214:
    // 0x41b214: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x41b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_41b218:
    // 0x41b218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41b21c:
    // 0x41b21c: 0xac500214  sw          $s0, 0x214($v0)
    ctx->pc = 0x41b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 16));
label_41b220:
    // 0x41b220: 0xac440210  sw          $a0, 0x210($v0)
    ctx->pc = 0x41b220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 4));
label_41b224:
    // 0x41b224: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b228:
    // 0x41b228: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x41b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_41b22c:
    // 0x41b22c: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x41b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_41b230:
    // 0x41b230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41b234:
    // 0x41b234: 0x8c500210  lw          $s0, 0x210($v0)
    ctx->pc = 0x41b234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_41b238:
    // 0x41b238: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_41b23c:
    if (ctx->pc == 0x41B23Cu) {
        ctx->pc = 0x41B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B238u;
        // 0x41b23c: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B240u;
        goto label_41b240;
    }
    ctx->pc = 0x41B238u;
    {
        const bool branch_taken_0x41b238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B238u;
        // 0x41b23c: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b238) {
            ctx->pc = 0x41B248u;
            goto label_41b248;
        }
    }
    ctx->pc = 0x41B240u;
label_41b240:
    // 0x41b240: 0x10000064  b           . + 4 + (0x64 << 2)
label_41b244:
    if (ctx->pc == 0x41B244u) {
        ctx->pc = 0x41B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B240u;
        // 0x41b244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B248u;
        goto label_41b248;
    }
    ctx->pc = 0x41B240u;
    {
        const bool branch_taken_0x41b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B240u;
        // 0x41b244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b240) {
            ctx->pc = 0x41B3D4u;
            goto label_41b3d4;
        }
    }
    ctx->pc = 0x41B248u;
label_41b248:
    // 0x41b248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b24c:
    // 0x41b24c: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x41b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_41b250:
    // 0x41b250: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x41b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_41b254:
    // 0x41b254: 0x40f809  jalr        $v0
label_41b258:
    if (ctx->pc == 0x41B258u) {
        ctx->pc = 0x41B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B254u;
        // 0x41b258: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B25Cu;
        goto label_41b25c;
    }
    ctx->pc = 0x41B254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B25Cu);
        ctx->pc = 0x41B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B254u;
        // 0x41b258: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B254u, 0x41B25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B25Cu;
label_41b25c:
    // 0x41b25c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x41b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_41b260:
    // 0x41b260: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x41b260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41b264:
    // 0x41b264: 0x60f809  jalr        $v1
label_41b268:
    if (ctx->pc == 0x41B268u) {
        ctx->pc = 0x41B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B264u;
        // 0x41b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B26Cu;
        goto label_41b26c;
    }
    ctx->pc = 0x41B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B26Cu);
        ctx->pc = 0x41B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B264u;
        // 0x41b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B264u, 0x41B26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B26Cu;
label_41b26c:
    // 0x41b26c: 0x10000059  b           . + 4 + (0x59 << 2)
label_41b270:
    if (ctx->pc == 0x41B270u) {
        ctx->pc = 0x41B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B26Cu;
        // 0x41b270: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B274u;
        goto label_41b274;
    }
    ctx->pc = 0x41B26Cu;
    {
        const bool branch_taken_0x41b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B26Cu;
        // 0x41b270: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b26c) {
            ctx->pc = 0x41B3D4u;
            goto label_41b3d4;
        }
    }
    ctx->pc = 0x41B274u;
label_41b274:
    // 0x41b274: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x41b274u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41b278:
    // 0x41b278: 0x8ea200e0  lw          $v0, 0xE0($s5)
    ctx->pc = 0x41b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_41b27c:
    // 0x41b27c: 0x0  nop
    ctx->pc = 0x41b27cu;
    // NOP
label_41b280:
    // 0x41b280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b284:
    // 0x41b284: 0x40f809  jalr        $v0
label_41b288:
    if (ctx->pc == 0x41B288u) {
        ctx->pc = 0x41B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B284u;
        // 0x41b288: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B28Cu;
        goto label_41b28c;
    }
    ctx->pc = 0x41B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B28Cu);
        ctx->pc = 0x41B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B284u;
        // 0x41b288: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B284u, 0x41B28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B28Cu;
label_41b28c:
    // 0x41b28c: 0x8ea200e0  lw          $v0, 0xE0($s5)
    ctx->pc = 0x41b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_41b290:
    // 0x41b290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b294:
    // 0x41b294: 0x40f809  jalr        $v0
label_41b298:
    if (ctx->pc == 0x41B298u) {
        ctx->pc = 0x41B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B294u;
        // 0x41b298: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B29Cu;
        goto label_41b29c;
    }
    ctx->pc = 0x41B294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B29Cu);
        ctx->pc = 0x41B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B294u;
        // 0x41b298: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B294u, 0x41B29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B29Cu;
label_41b29c:
    // 0x41b29c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41b29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b2a0:
    // 0x41b2a0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_41b2a4:
    if (ctx->pc == 0x41B2A4u) {
        ctx->pc = 0x41B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2A0u;
        // 0x41b2a4: 0x253a023  subu        $s4, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B2A8u;
        goto label_41b2a8;
    }
    ctx->pc = 0x41B2A0u;
    {
        const bool branch_taken_0x41b2a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2A0u;
        // 0x41b2a4: 0x253a023  subu        $s4, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2a0) {
            ctx->pc = 0x41B2B0u;
            goto label_41b2b0;
        }
    }
    ctx->pc = 0x41B2A8u;
label_41b2a8:
    // 0x41b2a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_41b2ac:
    if (ctx->pc == 0x41B2ACu) {
        ctx->pc = 0x41B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2A8u;
        // 0x41b2ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B2B0u;
        goto label_41b2b0;
    }
    ctx->pc = 0x41B2A8u;
    {
        const bool branch_taken_0x41b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2A8u;
        // 0x41b2ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2a8) {
            ctx->pc = 0x41B2C0u;
            goto label_41b2c0;
        }
    }
    ctx->pc = 0x41B2B0u;
label_41b2b0:
    // 0x41b2b0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x41b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_41b2b4:
    // 0x41b2b4: 0x40f809  jalr        $v0
label_41b2b8:
    if (ctx->pc == 0x41B2B8u) {
        ctx->pc = 0x41B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2B4u;
        // 0x41b2b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B2BCu;
        goto label_41b2bc;
    }
    ctx->pc = 0x41B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B2BCu);
        ctx->pc = 0x41B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2B4u;
        // 0x41b2b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B2B4u, 0x41B2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B2BCu;
label_41b2bc:
    // 0x41b2bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41b2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b2c0:
    // 0x41b2c0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x41b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_41b2c4:
    // 0x41b2c4: 0x2491e880  addiu       $s1, $a0, -0x1780
    ctx->pc = 0x41b2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_41b2c8:
    // 0x41b2c8: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x41b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_41b2cc:
    // 0x41b2cc: 0x40f809  jalr        $v0
label_41b2d0:
    if (ctx->pc == 0x41B2D0u) {
        ctx->pc = 0x41B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2CCu;
        // 0x41b2d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B2D4u;
        goto label_41b2d4;
    }
    ctx->pc = 0x41B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B2D4u);
        ctx->pc = 0x41B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2CCu;
        // 0x41b2d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B2CCu, 0x41B2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B2D4u;
label_41b2d4:
    // 0x41b2d4: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b2d8:
    // 0x41b2d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x41b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_41b2dc:
    // 0x41b2dc: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x41b2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_41b2e0:
    // 0x41b2e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_41b2e4:
    // 0x41b2e4: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x41b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_41b2e8:
    // 0x41b2e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x41b2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_41b2ec:
    // 0x41b2ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_41b2f0:
    if (ctx->pc == 0x41B2F0u) {
        ctx->pc = 0x41B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2ECu;
        // 0x41b2f0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B2F4u;
        goto label_41b2f4;
    }
    ctx->pc = 0x41B2ECu;
    {
        const bool branch_taken_0x41b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2ECu;
        // 0x41b2f0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2ec) {
            ctx->pc = 0x41B378u;
            goto label_41b378;
        }
    }
    ctx->pc = 0x41B2F4u;
label_41b2f4:
    // 0x41b2f4: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x41b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_41b2f8:
    // 0x41b2f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_41b2fc:
    if (ctx->pc == 0x41B2FCu) {
        ctx->pc = 0x41B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2F8u;
        // 0x41b2fc: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B300u;
        goto label_41b300;
    }
    ctx->pc = 0x41B2F8u;
    {
        const bool branch_taken_0x41b2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2F8u;
        // 0x41b2fc: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2f8) {
            ctx->pc = 0x41B318u;
            goto label_41b318;
        }
    }
    ctx->pc = 0x41B300u;
label_41b300:
    // 0x41b300: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x41b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_41b304:
    // 0x41b304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b308:
    // 0x41b308: 0x40f809  jalr        $v0
label_41b30c:
    if (ctx->pc == 0x41B30Cu) {
        ctx->pc = 0x41B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B308u;
        // 0x41b30c: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B310u;
        goto label_41b310;
    }
    ctx->pc = 0x41B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B310u);
        ctx->pc = 0x41B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B308u;
        // 0x41b30c: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B308u, 0x41B310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B310u;
label_41b310:
    // 0x41b310: 0x10000007  b           . + 4 + (0x7 << 2)
label_41b314:
    if (ctx->pc == 0x41B314u) {
        ctx->pc = 0x41B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B310u;
        // 0x41b314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B318u;
        goto label_41b318;
    }
    ctx->pc = 0x41B310u;
    {
        const bool branch_taken_0x41b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B310u;
        // 0x41b314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b310) {
            ctx->pc = 0x41B330u;
            goto label_41b330;
        }
    }
    ctx->pc = 0x41B318u;
label_41b318:
    // 0x41b318: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x41b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_41b31c:
    // 0x41b31c: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x41b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_41b320:
    // 0x41b320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b324:
    // 0x41b324: 0x40f809  jalr        $v0
label_41b328:
    if (ctx->pc == 0x41B328u) {
        ctx->pc = 0x41B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B324u;
        // 0x41b328: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B32Cu;
        goto label_41b32c;
    }
    ctx->pc = 0x41B324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B32Cu);
        ctx->pc = 0x41B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B324u;
        // 0x41b328: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B324u, 0x41B32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B32Cu;
label_41b32c:
    // 0x41b32c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41b32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b330:
    // 0x41b330: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_41b334:
    if (ctx->pc == 0x41B334u) {
        ctx->pc = 0x41B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B330u;
        // 0x41b334: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B338u;
        goto label_41b338;
    }
    ctx->pc = 0x41B330u;
    {
        const bool branch_taken_0x41b330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B330u;
        // 0x41b334: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b330) {
            ctx->pc = 0x41B368u;
            goto label_41b368;
        }
    }
    ctx->pc = 0x41B338u;
label_41b338:
    // 0x41b338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b33c:
    // 0x41b33c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41b340:
    // 0x41b340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b344:
    // 0x41b344: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x41b344u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_41b348:
    // 0x41b348: 0xc1035f6  jal         func_40D7D8
label_41b34c:
    if (ctx->pc == 0x41B34Cu) {
        ctx->pc = 0x41B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B348u;
        // 0x41b34c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B350u;
        goto label_41b350;
    }
    ctx->pc = 0x41B348u;
    SET_GPR_U32(ctx, 31, 0x41B350u);
    ctx->pc = 0x41B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B348u;
    // 0x41b34c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41B348u, 0x41B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B350u;
label_41b350:
    // 0x41b350: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41b350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_41b354:
    // 0x41b354: 0xc103628  jal         func_40D8A0
label_41b358:
    if (ctx->pc == 0x41B358u) {
        ctx->pc = 0x41B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B354u;
        // 0x41b358: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B35Cu;
        goto label_41b35c;
    }
    ctx->pc = 0x41B354u;
    SET_GPR_U32(ctx, 31, 0x41B35Cu);
    ctx->pc = 0x41B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B354u;
    // 0x41b358: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41B354u, 0x41B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B35Cu;
label_41b35c:
    // 0x41b35c: 0x10000008  b           . + 4 + (0x8 << 2)
label_41b360:
    if (ctx->pc == 0x41B360u) {
        ctx->pc = 0x41B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B35Cu;
        // 0x41b360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B364u;
        goto label_41b364;
    }
    ctx->pc = 0x41B35Cu;
    {
        const bool branch_taken_0x41b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B35Cu;
        // 0x41b360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b35c) {
            ctx->pc = 0x41B380u;
            goto label_41b380;
        }
    }
    ctx->pc = 0x41B364u;
label_41b364:
    // 0x41b364: 0x0  nop
    ctx->pc = 0x41b364u;
    // NOP
label_41b368:
    // 0x41b368: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x41b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_41b36c:
    // 0x41b36c: 0xac500214  sw          $s0, 0x214($v0)
    ctx->pc = 0x41b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 16));
label_41b370:
    // 0x41b370: 0xac430210  sw          $v1, 0x210($v0)
    ctx->pc = 0x41b370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 3));
label_41b374:
    // 0x41b374: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b378:
    // 0x41b378: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x41b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_41b37c:
    // 0x41b37c: 0x8c500210  lw          $s0, 0x210($v0)
    ctx->pc = 0x41b37cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_41b380:
    // 0x41b380: 0x1200ffaf  beqz        $s0, . + 4 + (-0x51 << 2)
label_41b384:
    if (ctx->pc == 0x41B384u) {
        ctx->pc = 0x41B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B380u;
        // 0x41b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B388u;
        goto label_41b388;
    }
    ctx->pc = 0x41B380u;
    {
        const bool branch_taken_0x41b380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B380u;
        // 0x41b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b380) {
            ctx->pc = 0x41B240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b240;
        }
    }
    ctx->pc = 0x41B388u;
label_41b388:
    // 0x41b388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b38c:
    // 0x41b38c: 0xc0bb778  jal         func_2EDDE0
label_41b390:
    if (ctx->pc == 0x41B390u) {
        ctx->pc = 0x41B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B38Cu;
        // 0x41b390: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B394u;
        goto label_41b394;
    }
    ctx->pc = 0x41B38Cu;
    SET_GPR_U32(ctx, 31, 0x41B394u);
    ctx->pc = 0x41B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B38Cu;
    // 0x41b390: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41B38Cu, 0x41B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B394u;
label_41b394:
    // 0x41b394: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x41b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_41b398:
    // 0x41b398: 0x2142021  addu        $a0, $s0, $s4
    ctx->pc = 0x41b398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_41b39c:
    // 0x41b39c: 0x40f809  jalr        $v0
label_41b3a0:
    if (ctx->pc == 0x41B3A0u) {
        ctx->pc = 0x41B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B39Cu;
        // 0x41b3a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3A4u;
        goto label_41b3a4;
    }
    ctx->pc = 0x41B39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B3A4u);
        ctx->pc = 0x41B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B39Cu;
        // 0x41b3a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B39Cu, 0x41B3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B3A4u;
label_41b3a4:
    // 0x41b3a4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x41b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_41b3a8:
    // 0x41b3a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x41b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41b3ac:
    // 0x41b3ac: 0x60f809  jalr        $v1
label_41b3b0:
    if (ctx->pc == 0x41B3B0u) {
        ctx->pc = 0x41B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3ACu;
        // 0x41b3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3B4u;
        goto label_41b3b4;
    }
    ctx->pc = 0x41B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B3B4u);
        ctx->pc = 0x41B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3ACu;
        // 0x41b3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B3ACu, 0x41B3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B3B4u;
label_41b3b4:
    // 0x41b3b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_41b3b8:
    if (ctx->pc == 0x41B3B8u) {
        ctx->pc = 0x41B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3B4u;
        // 0x41b3b8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3BCu;
        goto label_41b3bc;
    }
    ctx->pc = 0x41B3B4u;
    {
        const bool branch_taken_0x41b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3B4u;
        // 0x41b3b8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b3b4) {
            ctx->pc = 0x41B3D4u;
            goto label_41b3d4;
        }
    }
    ctx->pc = 0x41B3BCu;
label_41b3bc:
    // 0x41b3bc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_41b3c0:
    if (ctx->pc == 0x41B3C0u) {
        ctx->pc = 0x41B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3BCu;
        // 0x41b3c0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3C4u;
        goto label_41b3c4;
    }
    ctx->pc = 0x41B3BCu;
    {
        const bool branch_taken_0x41b3bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3BCu;
        // 0x41b3c0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b3bc) {
            ctx->pc = 0x41B3D4u;
            goto label_41b3d4;
        }
    }
    ctx->pc = 0x41B3C4u;
label_41b3c4:
    // 0x41b3c4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x41b3c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_41b3c8:
    // 0x41b3c8: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
label_41b3cc:
    if (ctx->pc == 0x41B3CCu) {
        ctx->pc = 0x41B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3C8u;
        // 0x41b3cc: 0x8ea200e0  lw          $v0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3D0u;
        goto label_41b3d0;
    }
    ctx->pc = 0x41B3C8u;
    {
        const bool branch_taken_0x41b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b3c8) {
            ctx->pc = 0x41B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B3C8u;
            // 0x41b3cc: 0x8ea200e0  lw          $v0, 0xE0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b280;
        }
    }
    ctx->pc = 0x41B3D0u;
label_41b3d0:
    // 0x41b3d0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x41b3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41b3d4:
    // 0x41b3d4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x41b3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_41b3d8:
    // 0x41b3d8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x41b3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41b3dc:
    // 0x41b3dc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x41b3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41b3e0:
    // 0x41b3e0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x41b3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41b3e4:
    // 0x41b3e4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x41b3e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41b3e8:
    // 0x41b3e8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x41b3e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41b3ec:
    // 0x41b3ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41b3ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41b3f0:
    // 0x41b3f0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x41b3f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b3f4:
    // 0x41b3f4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x41b3f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b3f8:
    // 0x41b3f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41b3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41b3fc:
    // 0x41b3fc: 0x3e00008  jr          $ra
label_41b400:
    if (ctx->pc == 0x41B400u) {
        ctx->pc = 0x41B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3FCu;
        // 0x41b400: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B404u;
        goto label_41b404;
    }
    ctx->pc = 0x41B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3FCu;
        // 0x41b400: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B404u;
label_41b404:
    // 0x41b404: 0x0  nop
    ctx->pc = 0x41b404u;
    // NOP
    ctx->pc = 0x41b408u;
}
