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

// Function: sub_0032A098
// Address: 0x32a098 - 0x32a378
void sub_0032A098_0x32a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A098_0x32a098");
#endif

    switch (ctx->pc) {
        case 0x32a098u: goto label_32a098;
        case 0x32a09cu: goto label_32a09c;
        case 0x32a0a0u: goto label_32a0a0;
        case 0x32a0a4u: goto label_32a0a4;
        case 0x32a0a8u: goto label_32a0a8;
        case 0x32a0acu: goto label_32a0ac;
        case 0x32a0b0u: goto label_32a0b0;
        case 0x32a0b4u: goto label_32a0b4;
        case 0x32a0b8u: goto label_32a0b8;
        case 0x32a0bcu: goto label_32a0bc;
        case 0x32a0c0u: goto label_32a0c0;
        case 0x32a0c4u: goto label_32a0c4;
        case 0x32a0c8u: goto label_32a0c8;
        case 0x32a0ccu: goto label_32a0cc;
        case 0x32a0d0u: goto label_32a0d0;
        case 0x32a0d4u: goto label_32a0d4;
        case 0x32a0d8u: goto label_32a0d8;
        case 0x32a0dcu: goto label_32a0dc;
        case 0x32a0e0u: goto label_32a0e0;
        case 0x32a0e4u: goto label_32a0e4;
        case 0x32a0e8u: goto label_32a0e8;
        case 0x32a0ecu: goto label_32a0ec;
        case 0x32a0f0u: goto label_32a0f0;
        case 0x32a0f4u: goto label_32a0f4;
        case 0x32a0f8u: goto label_32a0f8;
        case 0x32a0fcu: goto label_32a0fc;
        case 0x32a100u: goto label_32a100;
        case 0x32a104u: goto label_32a104;
        case 0x32a108u: goto label_32a108;
        case 0x32a10cu: goto label_32a10c;
        case 0x32a110u: goto label_32a110;
        case 0x32a114u: goto label_32a114;
        case 0x32a118u: goto label_32a118;
        case 0x32a11cu: goto label_32a11c;
        case 0x32a120u: goto label_32a120;
        case 0x32a124u: goto label_32a124;
        case 0x32a128u: goto label_32a128;
        case 0x32a12cu: goto label_32a12c;
        case 0x32a130u: goto label_32a130;
        case 0x32a134u: goto label_32a134;
        case 0x32a138u: goto label_32a138;
        case 0x32a13cu: goto label_32a13c;
        case 0x32a140u: goto label_32a140;
        case 0x32a144u: goto label_32a144;
        case 0x32a148u: goto label_32a148;
        case 0x32a14cu: goto label_32a14c;
        case 0x32a150u: goto label_32a150;
        case 0x32a154u: goto label_32a154;
        case 0x32a158u: goto label_32a158;
        case 0x32a15cu: goto label_32a15c;
        case 0x32a160u: goto label_32a160;
        case 0x32a164u: goto label_32a164;
        case 0x32a168u: goto label_32a168;
        case 0x32a16cu: goto label_32a16c;
        case 0x32a170u: goto label_32a170;
        case 0x32a174u: goto label_32a174;
        case 0x32a178u: goto label_32a178;
        case 0x32a17cu: goto label_32a17c;
        case 0x32a180u: goto label_32a180;
        case 0x32a184u: goto label_32a184;
        case 0x32a188u: goto label_32a188;
        case 0x32a18cu: goto label_32a18c;
        case 0x32a190u: goto label_32a190;
        case 0x32a194u: goto label_32a194;
        case 0x32a198u: goto label_32a198;
        case 0x32a19cu: goto label_32a19c;
        case 0x32a1a0u: goto label_32a1a0;
        case 0x32a1a4u: goto label_32a1a4;
        case 0x32a1a8u: goto label_32a1a8;
        case 0x32a1acu: goto label_32a1ac;
        case 0x32a1b0u: goto label_32a1b0;
        case 0x32a1b4u: goto label_32a1b4;
        case 0x32a1b8u: goto label_32a1b8;
        case 0x32a1bcu: goto label_32a1bc;
        case 0x32a1c0u: goto label_32a1c0;
        case 0x32a1c4u: goto label_32a1c4;
        case 0x32a1c8u: goto label_32a1c8;
        case 0x32a1ccu: goto label_32a1cc;
        case 0x32a1d0u: goto label_32a1d0;
        case 0x32a1d4u: goto label_32a1d4;
        case 0x32a1d8u: goto label_32a1d8;
        case 0x32a1dcu: goto label_32a1dc;
        case 0x32a1e0u: goto label_32a1e0;
        case 0x32a1e4u: goto label_32a1e4;
        case 0x32a1e8u: goto label_32a1e8;
        case 0x32a1ecu: goto label_32a1ec;
        case 0x32a1f0u: goto label_32a1f0;
        case 0x32a1f4u: goto label_32a1f4;
        case 0x32a1f8u: goto label_32a1f8;
        case 0x32a1fcu: goto label_32a1fc;
        case 0x32a200u: goto label_32a200;
        case 0x32a204u: goto label_32a204;
        case 0x32a208u: goto label_32a208;
        case 0x32a20cu: goto label_32a20c;
        case 0x32a210u: goto label_32a210;
        case 0x32a214u: goto label_32a214;
        case 0x32a218u: goto label_32a218;
        case 0x32a21cu: goto label_32a21c;
        case 0x32a220u: goto label_32a220;
        case 0x32a224u: goto label_32a224;
        case 0x32a228u: goto label_32a228;
        case 0x32a22cu: goto label_32a22c;
        case 0x32a230u: goto label_32a230;
        case 0x32a234u: goto label_32a234;
        case 0x32a238u: goto label_32a238;
        case 0x32a23cu: goto label_32a23c;
        case 0x32a240u: goto label_32a240;
        case 0x32a244u: goto label_32a244;
        case 0x32a248u: goto label_32a248;
        case 0x32a24cu: goto label_32a24c;
        case 0x32a250u: goto label_32a250;
        case 0x32a254u: goto label_32a254;
        case 0x32a258u: goto label_32a258;
        case 0x32a25cu: goto label_32a25c;
        case 0x32a260u: goto label_32a260;
        case 0x32a264u: goto label_32a264;
        case 0x32a268u: goto label_32a268;
        case 0x32a26cu: goto label_32a26c;
        case 0x32a270u: goto label_32a270;
        case 0x32a274u: goto label_32a274;
        case 0x32a278u: goto label_32a278;
        case 0x32a27cu: goto label_32a27c;
        case 0x32a280u: goto label_32a280;
        case 0x32a284u: goto label_32a284;
        case 0x32a288u: goto label_32a288;
        case 0x32a28cu: goto label_32a28c;
        case 0x32a290u: goto label_32a290;
        case 0x32a294u: goto label_32a294;
        case 0x32a298u: goto label_32a298;
        case 0x32a29cu: goto label_32a29c;
        case 0x32a2a0u: goto label_32a2a0;
        case 0x32a2a4u: goto label_32a2a4;
        case 0x32a2a8u: goto label_32a2a8;
        case 0x32a2acu: goto label_32a2ac;
        case 0x32a2b0u: goto label_32a2b0;
        case 0x32a2b4u: goto label_32a2b4;
        case 0x32a2b8u: goto label_32a2b8;
        case 0x32a2bcu: goto label_32a2bc;
        case 0x32a2c0u: goto label_32a2c0;
        case 0x32a2c4u: goto label_32a2c4;
        case 0x32a2c8u: goto label_32a2c8;
        case 0x32a2ccu: goto label_32a2cc;
        case 0x32a2d0u: goto label_32a2d0;
        case 0x32a2d4u: goto label_32a2d4;
        case 0x32a2d8u: goto label_32a2d8;
        case 0x32a2dcu: goto label_32a2dc;
        case 0x32a2e0u: goto label_32a2e0;
        case 0x32a2e4u: goto label_32a2e4;
        case 0x32a2e8u: goto label_32a2e8;
        case 0x32a2ecu: goto label_32a2ec;
        case 0x32a2f0u: goto label_32a2f0;
        case 0x32a2f4u: goto label_32a2f4;
        case 0x32a2f8u: goto label_32a2f8;
        case 0x32a2fcu: goto label_32a2fc;
        case 0x32a300u: goto label_32a300;
        case 0x32a304u: goto label_32a304;
        case 0x32a308u: goto label_32a308;
        case 0x32a30cu: goto label_32a30c;
        case 0x32a310u: goto label_32a310;
        case 0x32a314u: goto label_32a314;
        case 0x32a318u: goto label_32a318;
        case 0x32a31cu: goto label_32a31c;
        case 0x32a320u: goto label_32a320;
        case 0x32a324u: goto label_32a324;
        case 0x32a328u: goto label_32a328;
        case 0x32a32cu: goto label_32a32c;
        case 0x32a330u: goto label_32a330;
        case 0x32a334u: goto label_32a334;
        case 0x32a338u: goto label_32a338;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a340u: goto label_32a340;
        case 0x32a344u: goto label_32a344;
        case 0x32a348u: goto label_32a348;
        case 0x32a34cu: goto label_32a34c;
        case 0x32a350u: goto label_32a350;
        case 0x32a354u: goto label_32a354;
        case 0x32a358u: goto label_32a358;
        case 0x32a35cu: goto label_32a35c;
        case 0x32a360u: goto label_32a360;
        case 0x32a364u: goto label_32a364;
        case 0x32a368u: goto label_32a368;
        case 0x32a36cu: goto label_32a36c;
        case 0x32a370u: goto label_32a370;
        case 0x32a374u: goto label_32a374;
        default: break;
    }

    ctx->pc = 0x32a098u;

label_32a098:
    // 0x32a098: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32a098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_32a09c:
    // 0x32a09c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x32a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_32a0a0:
    // 0x32a0a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x32a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_32a0a4:
    // 0x32a0a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32a0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a0a8:
    // 0x32a0a8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x32a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_32a0ac:
    // 0x32a0ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32a0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32a0b0:
    // 0x32a0b0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x32a0b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_32a0b4:
    // 0x32a0b4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x32a0b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a0b8:
    // 0x32a0b8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x32a0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_32a0bc:
    // 0x32a0bc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32a0bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_32a0c0:
    // 0x32a0c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_32a0c4:
    // 0x32a0c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x32a0c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_32a0c8:
    // 0x32a0c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x32a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_32a0cc:
    // 0x32a0cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_32a0d0:
    // 0x32a0d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x32a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_32a0d4:
    // 0x32a0d4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x32a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_32a0d8:
    // 0x32a0d8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_32a0dc:
    // 0x32a0dc: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
label_32a0e0:
    if (ctx->pc == 0x32A0E0u) {
        ctx->pc = 0x32A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0DCu;
        // 0x32a0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0E4u;
        goto label_32a0e4;
    }
    ctx->pc = 0x32A0DCu;
    {
        const bool branch_taken_0x32a0dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0DCu;
        // 0x32a0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a0dc) {
            ctx->pc = 0x32A0E8u;
            goto label_32a0e8;
        }
    }
    ctx->pc = 0x32A0E4u;
label_32a0e4:
    // 0x32a0e4: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x32a0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_32a0e8:
    // 0x32a0e8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_32a0ec:
    if (ctx->pc == 0x32A0ECu) {
        ctx->pc = 0x32A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0E8u;
        // 0x32a0ec: 0x8fd30004  lw          $s3, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0F0u;
        goto label_32a0f0;
    }
    ctx->pc = 0x32A0E8u;
    {
        const bool branch_taken_0x32a0e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0e8) {
            ctx->pc = 0x32A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0E8u;
            // 0x32a0ec: 0x8fd30004  lw          $s3, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A0F0u;
            goto label_32a0f0;
        }
    }
    ctx->pc = 0x32A0F0u;
label_32a0f0:
    // 0x32a0f0: 0x8fd60030  lw          $s6, 0x30($fp)
    ctx->pc = 0x32a0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_32a0f4:
    // 0x32a0f4: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x32a0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_32a0f8:
    // 0x32a0f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_32a0fc:
    // 0x32a0fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x32a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_32a100:
    // 0x32a100: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x32a100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_32a104:
    // 0x32a104: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x32a104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_32a108:
    // 0x32a108: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x32a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_32a10c:
    // 0x32a10c: 0x34a50123  ori         $a1, $a1, 0x123
    ctx->pc = 0x32a10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
label_32a110:
    // 0x32a110: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32a110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a114:
    // 0x32a114: 0x40f809  jalr        $v0
label_32a118:
    if (ctx->pc == 0x32A118u) {
        ctx->pc = 0x32A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A114u;
        // 0x32a118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A11Cu;
        goto label_32a11c;
    }
    ctx->pc = 0x32A114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A11Cu);
        ctx->pc = 0x32A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A114u;
        // 0x32a118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A114u, 0x32A11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A11Cu;
label_32a11c:
    // 0x32a11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a120:
    // 0x32a120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a124:
    // 0x32a124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a128:
    // 0x32a128: 0xc0bb7e6  jal         func_2EDF98
label_32a12c:
    if (ctx->pc == 0x32A12Cu) {
        ctx->pc = 0x32A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A128u;
        // 0x32a12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A130u;
        goto label_32a130;
    }
    ctx->pc = 0x32A128u;
    SET_GPR_U32(ctx, 31, 0x32A130u);
    ctx->pc = 0x32A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A128u;
    // 0x32a12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x32A128u, 0x32A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A130u;
label_32a130:
    // 0x32a130: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x32a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_32a134:
    // 0x32a134: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a138:
    // 0x32a138: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32a138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a13c:
    // 0x32a13c: 0xc0ca6d4  jal         func_329B50
label_32a140:
    if (ctx->pc == 0x32A140u) {
        ctx->pc = 0x32A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A13Cu;
        // 0x32a140: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A144u;
        goto label_32a144;
    }
    ctx->pc = 0x32A13Cu;
    SET_GPR_U32(ctx, 31, 0x32A144u);
    ctx->pc = 0x32A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A13Cu;
    // 0x32a140: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B50u, 0x32A13Cu, 0x32A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A144u;
label_32a144:
    // 0x32a144: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x32a144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_32a148:
    // 0x32a148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a14c:
    // 0x32a14c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32a14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a150:
    // 0x32a150: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32a150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a154:
    // 0x32a154: 0xc0ca782  jal         func_329E08
label_32a158:
    if (ctx->pc == 0x32A158u) {
        ctx->pc = 0x32A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A154u;
        // 0x32a158: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A15Cu;
        goto label_32a15c;
    }
    ctx->pc = 0x32A154u;
    SET_GPR_U32(ctx, 31, 0x32A15Cu);
    ctx->pc = 0x32A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A154u;
    // 0x32a158: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329E08u, 0x32A154u, 0x32A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A15Cu;
label_32a15c:
    // 0x32a15c: 0x12c0005a  beqz        $s6, . + 4 + (0x5A << 2)
label_32a160:
    if (ctx->pc == 0x32A160u) {
        ctx->pc = 0x32A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A15Cu;
        // 0x32a160: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A164u;
        goto label_32a164;
    }
    ctx->pc = 0x32A15Cu;
    {
        const bool branch_taken_0x32a15c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A15Cu;
        // 0x32a160: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a15c) {
            ctx->pc = 0x32A2C8u;
            goto label_32a2c8;
        }
    }
    ctx->pc = 0x32A164u;
label_32a164:
    // 0x32a164: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x32a164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a168:
    // 0x32a168: 0x1ac0001e  blez        $s6, . + 4 + (0x1E << 2)
label_32a16c:
    if (ctx->pc == 0x32A16Cu) {
        ctx->pc = 0x32A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A168u;
        // 0x32a16c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A170u;
        goto label_32a170;
    }
    ctx->pc = 0x32A168u;
    {
        const bool branch_taken_0x32a168 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x32A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A168u;
        // 0x32a16c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a168) {
            ctx->pc = 0x32A1E4u;
            goto label_32a1e4;
        }
    }
    ctx->pc = 0x32A170u;
label_32a170:
    // 0x32a170: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_32a174:
    if (ctx->pc == 0x32A174u) {
        ctx->pc = 0x32A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A170u;
        // 0x32a174: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A178u;
        goto label_32a178;
    }
    ctx->pc = 0x32A170u;
    {
        const bool branch_taken_0x32a170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A170u;
        // 0x32a174: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a170) {
            ctx->pc = 0x32A218u;
            goto label_32a218;
        }
    }
    ctx->pc = 0x32A178u;
label_32a178:
    // 0x32a178: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_32a17c:
    if (ctx->pc == 0x32A17Cu) {
        ctx->pc = 0x32A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A178u;
        // 0x32a17c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A180u;
        goto label_32a180;
    }
    ctx->pc = 0x32A178u;
    {
        const bool branch_taken_0x32a178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a178) {
            ctx->pc = 0x32A17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A178u;
            // 0x32a17c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1E8u;
            goto label_32a1e8;
        }
    }
    ctx->pc = 0x32A180u;
label_32a180:
    // 0x32a180: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x32a180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_32a184:
    // 0x32a184: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_32a188:
    if (ctx->pc == 0x32A188u) {
        ctx->pc = 0x32A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A184u;
        // 0x32a188: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A18Cu;
        goto label_32a18c;
    }
    ctx->pc = 0x32A184u;
    {
        const bool branch_taken_0x32a184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a184) {
            ctx->pc = 0x32A188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A184u;
            // 0x32a188: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1BCu;
            goto label_32a1bc;
        }
    }
    ctx->pc = 0x32A18Cu;
label_32a18c:
    // 0x32a18c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x32a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_32a190:
    // 0x32a190: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_32a194:
    if (ctx->pc == 0x32A194u) {
        ctx->pc = 0x32A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A190u;
        // 0x32a194: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A198u;
        goto label_32a198;
    }
    ctx->pc = 0x32A190u;
    {
        const bool branch_taken_0x32a190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a190) {
            ctx->pc = 0x32A194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A190u;
            // 0x32a194: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1A8u;
            goto label_32a1a8;
        }
    }
    ctx->pc = 0x32A198u;
label_32a198:
    // 0x32a198: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a19c:
    // 0x32a19c: 0x40f809  jalr        $v0
label_32a1a0:
    if (ctx->pc == 0x32A1A0u) {
        ctx->pc = 0x32A1A4u;
        goto label_32a1a4;
    }
    ctx->pc = 0x32A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A1A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A19Cu, 0x32A1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A1A4u;
label_32a1a4:
    // 0x32a1a4: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x32a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_32a1a8:
    // 0x32a1a8: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x32a1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_32a1ac:
    // 0x32a1ac: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x32a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_32a1b0:
    // 0x32a1b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x32a1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a1b4:
    // 0x32a1b4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x32a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_32a1b8:
    // 0x32a1b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a1bc:
    // 0x32a1bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_32a1c0:
    if (ctx->pc == 0x32A1C0u) {
        ctx->pc = 0x32A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1BCu;
        // 0x32a1c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1C4u;
        goto label_32a1c4;
    }
    ctx->pc = 0x32A1BCu;
    {
        const bool branch_taken_0x32a1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1bc) {
            ctx->pc = 0x32A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A1BCu;
            // 0x32a1c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1D4u;
            goto label_32a1d4;
        }
    }
    ctx->pc = 0x32A1C4u;
label_32a1c4:
    // 0x32a1c4: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a1c8:
    // 0x32a1c8: 0x40f809  jalr        $v0
label_32a1cc:
    if (ctx->pc == 0x32A1CCu) {
        ctx->pc = 0x32A1D0u;
        goto label_32a1d0;
    }
    ctx->pc = 0x32A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A1D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A1C8u, 0x32A1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A1D0u;
label_32a1d0:
    // 0x32a1d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_32a1d4:
    // 0x32a1d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32a1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32a1d8:
    // 0x32a1d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32a1dc:
    // 0x32a1dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32a1e0:
    // 0x32a1e0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x32a1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_32a1e4:
    // 0x32a1e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a1e8:
    // 0x32a1e8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_32a1ec:
    if (ctx->pc == 0x32A1ECu) {
        ctx->pc = 0x32A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1E8u;
        // 0x32a1ec: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1F0u;
        goto label_32a1f0;
    }
    ctx->pc = 0x32A1E8u;
    {
        const bool branch_taken_0x32a1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1e8) {
            ctx->pc = 0x32A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A1E8u;
            // 0x32a1ec: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A200u;
            goto label_32a200;
        }
    }
    ctx->pc = 0x32A1F0u;
label_32a1f0:
    // 0x32a1f0: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a1f4:
    // 0x32a1f4: 0x40f809  jalr        $v0
label_32a1f8:
    if (ctx->pc == 0x32A1F8u) {
        ctx->pc = 0x32A1FCu;
        goto label_32a1fc;
    }
    ctx->pc = 0x32A1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A1FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A1F4u, 0x32A1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A1FCu;
label_32a1fc:
    // 0x32a1fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_32a200:
    // 0x32a200: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32a200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32a204:
    // 0x32a204: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32a204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32a208:
    // 0x32a208: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x32a208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_32a20c:
    // 0x32a20c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32a210:
    // 0x32a210: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_32a214:
    if (ctx->pc == 0x32A214u) {
        ctx->pc = 0x32A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A210u;
        // 0x32a214: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A218u;
        goto label_32a218;
    }
    ctx->pc = 0x32A210u;
    {
        const bool branch_taken_0x32a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A210u;
        // 0x32a214: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a210) {
            ctx->pc = 0x32A2C8u;
            goto label_32a2c8;
        }
    }
    ctx->pc = 0x32A218u;
label_32a218:
    // 0x32a218: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x32a218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a21c:
    // 0x32a21c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32a21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a220:
    // 0x32a220: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x32a220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a224:
    // 0x32a224: 0x0  nop
    ctx->pc = 0x32a224u;
    // NOP
label_32a228:
    // 0x32a228: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32a22c:
    // 0x32a22c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_32a230:
    if (ctx->pc == 0x32A230u) {
        ctx->pc = 0x32A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A22Cu;
        // 0x32a230: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A234u;
        goto label_32a234;
    }
    ctx->pc = 0x32A22Cu;
    {
        const bool branch_taken_0x32a22c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a22c) {
            ctx->pc = 0x32A230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A22Cu;
            // 0x32a230: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A244u;
            goto label_32a244;
        }
    }
    ctx->pc = 0x32A234u;
label_32a234:
    // 0x32a234: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a238:
    // 0x32a238: 0x40f809  jalr        $v0
label_32a23c:
    if (ctx->pc == 0x32A23Cu) {
        ctx->pc = 0x32A240u;
        goto label_32a240;
    }
    ctx->pc = 0x32A238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A238u, 0x32A240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A240u;
label_32a240:
    // 0x32a240: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x32a240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_32a244:
    // 0x32a244: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x32a244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_32a248:
    // 0x32a248: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x32a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_32a24c:
    // 0x32a24c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_32a250:
    if (ctx->pc == 0x32A250u) {
        ctx->pc = 0x32A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A24Cu;
        // 0x32a250: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A254u;
        goto label_32a254;
    }
    ctx->pc = 0x32A24Cu;
    {
        const bool branch_taken_0x32a24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A24Cu;
        // 0x32a250: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a24c) {
            ctx->pc = 0x32A260u;
            goto label_32a260;
        }
    }
    ctx->pc = 0x32A254u;
label_32a254:
    // 0x32a254: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a258:
    // 0x32a258: 0x40f809  jalr        $v0
label_32a25c:
    if (ctx->pc == 0x32A25Cu) {
        ctx->pc = 0x32A260u;
        goto label_32a260;
    }
    ctx->pc = 0x32A258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A260u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A258u, 0x32A260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A260u;
label_32a260:
    // 0x32a260: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x32a260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_32a264:
    // 0x32a264: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x32a264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_32a268:
    // 0x32a268: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x32a268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_32a26c:
    // 0x32a26c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_32a270:
    if (ctx->pc == 0x32A270u) {
        ctx->pc = 0x32A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A26Cu;
        // 0x32a270: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A274u;
        goto label_32a274;
    }
    ctx->pc = 0x32A26Cu;
    {
        const bool branch_taken_0x32a26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A26Cu;
        // 0x32a270: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a26c) {
            ctx->pc = 0x32A280u;
            goto label_32a280;
        }
    }
    ctx->pc = 0x32A274u;
label_32a274:
    // 0x32a274: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a278:
    // 0x32a278: 0x40f809  jalr        $v0
label_32a27c:
    if (ctx->pc == 0x32A27Cu) {
        ctx->pc = 0x32A280u;
        goto label_32a280;
    }
    ctx->pc = 0x32A278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A280u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A278u, 0x32A280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A280u;
label_32a280:
    // 0x32a280: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x32a280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_32a284:
    // 0x32a284: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x32a284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_32a288:
    // 0x32a288: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x32a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_32a28c:
    // 0x32a28c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_32a290:
    if (ctx->pc == 0x32A290u) {
        ctx->pc = 0x32A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A28Cu;
        // 0x32a290: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A294u;
        goto label_32a294;
    }
    ctx->pc = 0x32A28Cu;
    {
        const bool branch_taken_0x32a28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A28Cu;
        // 0x32a290: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a28c) {
            ctx->pc = 0x32A2A0u;
            goto label_32a2a0;
        }
    }
    ctx->pc = 0x32A294u;
label_32a294:
    // 0x32a294: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x32a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_32a298:
    // 0x32a298: 0x40f809  jalr        $v0
label_32a29c:
    if (ctx->pc == 0x32A29Cu) {
        ctx->pc = 0x32A2A0u;
        goto label_32a2a0;
    }
    ctx->pc = 0x32A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A2A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A298u, 0x32A2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A2A0u;
label_32a2a0:
    // 0x32a2a0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x32a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_32a2a4:
    // 0x32a2a4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x32a2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_32a2a8:
    // 0x32a2a8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x32a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_32a2ac:
    // 0x32a2ac: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x32a2acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_32a2b0:
    // 0x32a2b0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x32a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_32a2b4:
    // 0x32a2b4: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x32a2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_32a2b8:
    // 0x32a2b8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x32a2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32a2bc:
    // 0x32a2bc: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x32a2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_32a2c0:
    // 0x32a2c0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_32a2c4:
    if (ctx->pc == 0x32A2C4u) {
        ctx->pc = 0x32A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2C0u;
        // 0x32a2c4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2C8u;
        goto label_32a2c8;
    }
    ctx->pc = 0x32A2C0u;
    {
        const bool branch_taken_0x32a2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2C0u;
        // 0x32a2c4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2c0) {
            ctx->pc = 0x32A228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a228;
        }
    }
    ctx->pc = 0x32A2C8u;
label_32a2c8:
    // 0x32a2c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_32a2cc:
    // 0x32a2cc: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x32a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_32a2d0:
    // 0x32a2d0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x32a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_32a2d4:
    // 0x32a2d4: 0x40f809  jalr        $v0
label_32a2d8:
    if (ctx->pc == 0x32A2D8u) {
        ctx->pc = 0x32A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2D4u;
        // 0x32a2d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2DCu;
        goto label_32a2dc;
    }
    ctx->pc = 0x32A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A2DCu);
        ctx->pc = 0x32A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2D4u;
        // 0x32a2d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A2D4u, 0x32A2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A2DCu;
label_32a2dc:
    // 0x32a2dc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x32a2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32a2e0:
    // 0x32a2e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x32a2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32a2e4:
    // 0x32a2e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x32a2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32a2e8:
    // 0x32a2e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x32a2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32a2ec:
    // 0x32a2ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x32a2ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32a2f0:
    // 0x32a2f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32a2f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32a2f4:
    // 0x32a2f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32a2f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32a2f8:
    // 0x32a2f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x32a2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a2fc:
    // 0x32a2fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x32a2fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a300:
    // 0x32a300: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x32a300u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a304:
    // 0x32a304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a308:
    // 0x32a308: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x32a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_32a30c:
    // 0x32a30c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x32a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32a310:
    // 0x32a310: 0x3e00008  jr          $ra
label_32a314:
    if (ctx->pc == 0x32A314u) {
        ctx->pc = 0x32A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A310u;
        // 0x32a314: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A318u;
        goto label_32a318;
    }
    ctx->pc = 0x32A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A310u;
        // 0x32a314: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A318u;
label_32a318:
    // 0x32a318: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_32a31c:
    // 0x32a31c: 0x8c43231c  lw          $v1, 0x231C($v0)
    ctx->pc = 0x32a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8988)));
label_32a320:
    // 0x32a320: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_32a324:
    if (ctx->pc == 0x32A324u) {
        ctx->pc = 0x32A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A320u;
        // 0x32a324: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A328u;
        goto label_32a328;
    }
    ctx->pc = 0x32A320u;
    {
        const bool branch_taken_0x32a320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A320u;
        // 0x32a324: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a320) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A328u;
label_32a328:
    // 0x32a328: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x32a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_32a32c:
    // 0x32a32c: 0x2442a480  addiu       $v0, $v0, -0x5B80
    ctx->pc = 0x32a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943872));
label_32a330:
    // 0x32a330: 0x10000002  b           . + 4 + (0x2 << 2)
label_32a334:
    if (ctx->pc == 0x32A334u) {
        ctx->pc = 0x32A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A330u;
        // 0x32a334: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A338u;
        goto label_32a338;
    }
    ctx->pc = 0x32A330u;
    {
        const bool branch_taken_0x32a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A330u;
        // 0x32a334: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a330) {
            ctx->pc = 0x32A33Cu;
            goto label_32a33c;
        }
    }
    ctx->pc = 0x32A338u;
label_32a338:
    // 0x32a338: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32a338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_32a33c:
    // 0x32a33c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x32a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_32a340:
    // 0x32a340: 0x3e00008  jr          $ra
label_32a344:
    if (ctx->pc == 0x32A344u) {
        ctx->pc = 0x32A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A340u;
        // 0x32a344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A348u;
        goto label_32a348;
    }
    ctx->pc = 0x32A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A340u;
        // 0x32a344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A348u;
label_32a348:
    // 0x32a348: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_32a34c:
    // 0x32a34c: 0x8c43231c  lw          $v1, 0x231C($v0)
    ctx->pc = 0x32a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8988)));
label_32a350:
    // 0x32a350: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_32a354:
    if (ctx->pc == 0x32A354u) {
        ctx->pc = 0x32A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A350u;
        // 0x32a354: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A358u;
        goto label_32a358;
    }
    ctx->pc = 0x32A350u;
    {
        const bool branch_taken_0x32a350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A350u;
        // 0x32a354: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a350) {
            ctx->pc = 0x32A360u;
            goto label_32a360;
        }
    }
    ctx->pc = 0x32A358u;
label_32a358:
    // 0x32a358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a35c:
    // 0x32a35c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_32a360:
    // 0x32a360: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_32a364:
    if (ctx->pc == 0x32A364u) {
        ctx->pc = 0x32A368u;
        goto label_32a368;
    }
    ctx->pc = 0x32A360u;
    {
        const bool branch_taken_0x32a360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a360) {
            ctx->pc = 0x32A370u;
            goto label_32a370;
        }
    }
    ctx->pc = 0x32A368u;
label_32a368:
    // 0x32a368: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_32a36c:
    // 0x32a36c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_32a370:
    // 0x32a370: 0x3e00008  jr          $ra
label_32a374:
    if (ctx->pc == 0x32A374u) {
        ctx->pc = 0x32A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A370u;
        // 0x32a374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A378u;
        goto label_fallthrough_0x32a370;
    }
    ctx->pc = 0x32A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A370u;
        // 0x32a374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a370:
    ctx->pc = 0x32A378u;
}
