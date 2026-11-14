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

// Function: sub_0031E1A8
// Address: 0x31e1a8 - 0x31e440
void sub_0031E1A8_0x31e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E1A8_0x31e1a8");
#endif

    switch (ctx->pc) {
        case 0x31e1a8u: goto label_31e1a8;
        case 0x31e1acu: goto label_31e1ac;
        case 0x31e1b0u: goto label_31e1b0;
        case 0x31e1b4u: goto label_31e1b4;
        case 0x31e1b8u: goto label_31e1b8;
        case 0x31e1bcu: goto label_31e1bc;
        case 0x31e1c0u: goto label_31e1c0;
        case 0x31e1c4u: goto label_31e1c4;
        case 0x31e1c8u: goto label_31e1c8;
        case 0x31e1ccu: goto label_31e1cc;
        case 0x31e1d0u: goto label_31e1d0;
        case 0x31e1d4u: goto label_31e1d4;
        case 0x31e1d8u: goto label_31e1d8;
        case 0x31e1dcu: goto label_31e1dc;
        case 0x31e1e0u: goto label_31e1e0;
        case 0x31e1e4u: goto label_31e1e4;
        case 0x31e1e8u: goto label_31e1e8;
        case 0x31e1ecu: goto label_31e1ec;
        case 0x31e1f0u: goto label_31e1f0;
        case 0x31e1f4u: goto label_31e1f4;
        case 0x31e1f8u: goto label_31e1f8;
        case 0x31e1fcu: goto label_31e1fc;
        case 0x31e200u: goto label_31e200;
        case 0x31e204u: goto label_31e204;
        case 0x31e208u: goto label_31e208;
        case 0x31e20cu: goto label_31e20c;
        case 0x31e210u: goto label_31e210;
        case 0x31e214u: goto label_31e214;
        case 0x31e218u: goto label_31e218;
        case 0x31e21cu: goto label_31e21c;
        case 0x31e220u: goto label_31e220;
        case 0x31e224u: goto label_31e224;
        case 0x31e228u: goto label_31e228;
        case 0x31e22cu: goto label_31e22c;
        case 0x31e230u: goto label_31e230;
        case 0x31e234u: goto label_31e234;
        case 0x31e238u: goto label_31e238;
        case 0x31e23cu: goto label_31e23c;
        case 0x31e240u: goto label_31e240;
        case 0x31e244u: goto label_31e244;
        case 0x31e248u: goto label_31e248;
        case 0x31e24cu: goto label_31e24c;
        case 0x31e250u: goto label_31e250;
        case 0x31e254u: goto label_31e254;
        case 0x31e258u: goto label_31e258;
        case 0x31e25cu: goto label_31e25c;
        case 0x31e260u: goto label_31e260;
        case 0x31e264u: goto label_31e264;
        case 0x31e268u: goto label_31e268;
        case 0x31e26cu: goto label_31e26c;
        case 0x31e270u: goto label_31e270;
        case 0x31e274u: goto label_31e274;
        case 0x31e278u: goto label_31e278;
        case 0x31e27cu: goto label_31e27c;
        case 0x31e280u: goto label_31e280;
        case 0x31e284u: goto label_31e284;
        case 0x31e288u: goto label_31e288;
        case 0x31e28cu: goto label_31e28c;
        case 0x31e290u: goto label_31e290;
        case 0x31e294u: goto label_31e294;
        case 0x31e298u: goto label_31e298;
        case 0x31e29cu: goto label_31e29c;
        case 0x31e2a0u: goto label_31e2a0;
        case 0x31e2a4u: goto label_31e2a4;
        case 0x31e2a8u: goto label_31e2a8;
        case 0x31e2acu: goto label_31e2ac;
        case 0x31e2b0u: goto label_31e2b0;
        case 0x31e2b4u: goto label_31e2b4;
        case 0x31e2b8u: goto label_31e2b8;
        case 0x31e2bcu: goto label_31e2bc;
        case 0x31e2c0u: goto label_31e2c0;
        case 0x31e2c4u: goto label_31e2c4;
        case 0x31e2c8u: goto label_31e2c8;
        case 0x31e2ccu: goto label_31e2cc;
        case 0x31e2d0u: goto label_31e2d0;
        case 0x31e2d4u: goto label_31e2d4;
        case 0x31e2d8u: goto label_31e2d8;
        case 0x31e2dcu: goto label_31e2dc;
        case 0x31e2e0u: goto label_31e2e0;
        case 0x31e2e4u: goto label_31e2e4;
        case 0x31e2e8u: goto label_31e2e8;
        case 0x31e2ecu: goto label_31e2ec;
        case 0x31e2f0u: goto label_31e2f0;
        case 0x31e2f4u: goto label_31e2f4;
        case 0x31e2f8u: goto label_31e2f8;
        case 0x31e2fcu: goto label_31e2fc;
        case 0x31e300u: goto label_31e300;
        case 0x31e304u: goto label_31e304;
        case 0x31e308u: goto label_31e308;
        case 0x31e30cu: goto label_31e30c;
        case 0x31e310u: goto label_31e310;
        case 0x31e314u: goto label_31e314;
        case 0x31e318u: goto label_31e318;
        case 0x31e31cu: goto label_31e31c;
        case 0x31e320u: goto label_31e320;
        case 0x31e324u: goto label_31e324;
        case 0x31e328u: goto label_31e328;
        case 0x31e32cu: goto label_31e32c;
        case 0x31e330u: goto label_31e330;
        case 0x31e334u: goto label_31e334;
        case 0x31e338u: goto label_31e338;
        case 0x31e33cu: goto label_31e33c;
        case 0x31e340u: goto label_31e340;
        case 0x31e344u: goto label_31e344;
        case 0x31e348u: goto label_31e348;
        case 0x31e34cu: goto label_31e34c;
        case 0x31e350u: goto label_31e350;
        case 0x31e354u: goto label_31e354;
        case 0x31e358u: goto label_31e358;
        case 0x31e35cu: goto label_31e35c;
        case 0x31e360u: goto label_31e360;
        case 0x31e364u: goto label_31e364;
        case 0x31e368u: goto label_31e368;
        case 0x31e36cu: goto label_31e36c;
        case 0x31e370u: goto label_31e370;
        case 0x31e374u: goto label_31e374;
        case 0x31e378u: goto label_31e378;
        case 0x31e37cu: goto label_31e37c;
        case 0x31e380u: goto label_31e380;
        case 0x31e384u: goto label_31e384;
        case 0x31e388u: goto label_31e388;
        case 0x31e38cu: goto label_31e38c;
        case 0x31e390u: goto label_31e390;
        case 0x31e394u: goto label_31e394;
        case 0x31e398u: goto label_31e398;
        case 0x31e39cu: goto label_31e39c;
        case 0x31e3a0u: goto label_31e3a0;
        case 0x31e3a4u: goto label_31e3a4;
        case 0x31e3a8u: goto label_31e3a8;
        case 0x31e3acu: goto label_31e3ac;
        case 0x31e3b0u: goto label_31e3b0;
        case 0x31e3b4u: goto label_31e3b4;
        case 0x31e3b8u: goto label_31e3b8;
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e3c0u: goto label_31e3c0;
        case 0x31e3c4u: goto label_31e3c4;
        case 0x31e3c8u: goto label_31e3c8;
        case 0x31e3ccu: goto label_31e3cc;
        case 0x31e3d0u: goto label_31e3d0;
        case 0x31e3d4u: goto label_31e3d4;
        case 0x31e3d8u: goto label_31e3d8;
        case 0x31e3dcu: goto label_31e3dc;
        case 0x31e3e0u: goto label_31e3e0;
        case 0x31e3e4u: goto label_31e3e4;
        case 0x31e3e8u: goto label_31e3e8;
        case 0x31e3ecu: goto label_31e3ec;
        case 0x31e3f0u: goto label_31e3f0;
        case 0x31e3f4u: goto label_31e3f4;
        case 0x31e3f8u: goto label_31e3f8;
        case 0x31e3fcu: goto label_31e3fc;
        case 0x31e400u: goto label_31e400;
        case 0x31e404u: goto label_31e404;
        case 0x31e408u: goto label_31e408;
        case 0x31e40cu: goto label_31e40c;
        case 0x31e410u: goto label_31e410;
        case 0x31e414u: goto label_31e414;
        case 0x31e418u: goto label_31e418;
        case 0x31e41cu: goto label_31e41c;
        case 0x31e420u: goto label_31e420;
        case 0x31e424u: goto label_31e424;
        case 0x31e428u: goto label_31e428;
        case 0x31e42cu: goto label_31e42c;
        case 0x31e430u: goto label_31e430;
        case 0x31e434u: goto label_31e434;
        case 0x31e438u: goto label_31e438;
        case 0x31e43cu: goto label_31e43c;
        default: break;
    }

    ctx->pc = 0x31e1a8u;

label_31e1a8:
    // 0x31e1a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31e1ac:
    // 0x31e1ac: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e1b0:
    // 0x31e1b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31e1b4:
    // 0x31e1b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31e1b8:
    // 0x31e1b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31e1b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e1bc:
    // 0x31e1bc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31e1c0:
    // 0x31e1c0: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x31e1c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_31e1c4:
    // 0x31e1c4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31e1c8:
    // 0x31e1c8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x31e1c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e1cc:
    // 0x31e1cc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31e1d0:
    // 0x31e1d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31e1d4:
    // 0x31e1d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31e1d8:
    // 0x31e1d8: 0x16c00014  bnez        $s6, . + 4 + (0x14 << 2)
label_31e1dc:
    if (ctx->pc == 0x31E1DCu) {
        ctx->pc = 0x31E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1D8u;
        // 0x31e1dc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1E0u;
        goto label_31e1e0;
    }
    ctx->pc = 0x31E1D8u;
    {
        const bool branch_taken_0x31e1d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1D8u;
        // 0x31e1dc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1d8) {
            ctx->pc = 0x31E22Cu;
            goto label_31e22c;
        }
    }
    ctx->pc = 0x31E1E0u;
label_31e1e0:
    // 0x31e1e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31e1e4:
    // 0x31e1e4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_31e1e8:
    if (ctx->pc == 0x31E1E8u) {
        ctx->pc = 0x31E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E4u;
        // 0x31e1e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1ECu;
        goto label_31e1ec;
    }
    ctx->pc = 0x31E1E4u;
    {
        const bool branch_taken_0x31e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E4u;
        // 0x31e1e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1e4) {
            ctx->pc = 0x31E414u;
            goto label_31e414;
        }
    }
    ctx->pc = 0x31E1ECu;
label_31e1ec:
    // 0x31e1ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e1f0:
    if (ctx->pc == 0x31E1F0u) {
        ctx->pc = 0x31E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1ECu;
        // 0x31e1f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1F4u;
        goto label_31e1f4;
    }
    ctx->pc = 0x31E1ECu;
    {
        const bool branch_taken_0x31e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1ECu;
        // 0x31e1f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1ec) {
            ctx->pc = 0x31E20Cu;
            goto label_31e20c;
        }
    }
    ctx->pc = 0x31E1F4u;
label_31e1f4:
    // 0x31e1f4: 0x0  nop
    ctx->pc = 0x31e1f4u;
    // NOP
label_31e1f8:
    // 0x31e1f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31e1fc:
    // 0x31e1fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31e200:
    // 0x31e200: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31e204:
    // 0x31e204: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31e204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_31e208:
    // 0x31e208: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x31e208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_31e20c:
    // 0x31e20c: 0xc0c7620  jal         func_31D880
label_31e210:
    if (ctx->pc == 0x31E210u) {
        ctx->pc = 0x31E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E20Cu;
        // 0x31e210: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E214u;
        goto label_31e214;
    }
    ctx->pc = 0x31E20Cu;
    SET_GPR_U32(ctx, 31, 0x31E214u);
    ctx->pc = 0x31E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E20Cu;
    // 0x31e210: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E20Cu, 0x31E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E214u;
label_31e214:
    // 0x31e214: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31e214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31e218:
    // 0x31e218: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_31e21c:
    if (ctx->pc == 0x31E21Cu) {
        ctx->pc = 0x31E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E218u;
        // 0x31e21c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E220u;
        goto label_31e220;
    }
    ctx->pc = 0x31E218u;
    {
        const bool branch_taken_0x31e218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e218) {
            ctx->pc = 0x31E21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E218u;
            // 0x31e21c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e1f8;
        }
    }
    ctx->pc = 0x31E220u;
label_31e220:
    // 0x31e220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31e224:
    // 0x31e224: 0x1000007b  b           . + 4 + (0x7B << 2)
label_31e228:
    if (ctx->pc == 0x31E228u) {
        ctx->pc = 0x31E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E224u;
        // 0x31e228: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E22Cu;
        goto label_31e22c;
    }
    ctx->pc = 0x31E224u;
    {
        const bool branch_taken_0x31e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E224u;
        // 0x31e228: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e224) {
            ctx->pc = 0x31E414u;
            goto label_31e414;
        }
    }
    ctx->pc = 0x31E22Cu;
label_31e22c:
    // 0x31e22c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31e230:
    // 0x31e230: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_31e234:
    if (ctx->pc == 0x31E234u) {
        ctx->pc = 0x31E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E230u;
        // 0x31e234: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E238u;
        goto label_31e238;
    }
    ctx->pc = 0x31E230u;
    {
        const bool branch_taken_0x31e230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e230) {
            ctx->pc = 0x31E234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E230u;
            // 0x31e234: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E2DCu;
            goto label_31e2dc;
        }
    }
    ctx->pc = 0x31E238u;
label_31e238:
    // 0x31e238: 0xc0c7620  jal         func_31D880
label_31e23c:
    if (ctx->pc == 0x31E23Cu) {
        ctx->pc = 0x31E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E238u;
        // 0x31e23c: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E240u;
        goto label_31e240;
    }
    ctx->pc = 0x31E238u;
    SET_GPR_U32(ctx, 31, 0x31E240u);
    ctx->pc = 0x31E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E238u;
    // 0x31e23c: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E238u, 0x31E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E240u;
label_31e240:
    // 0x31e240: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e244:
    // 0x31e244: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31e244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31e248:
    // 0x31e248: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x31e248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_31e24c:
    // 0x31e24c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31e250:
    // 0x31e250: 0x24910018  addiu       $s1, $a0, 0x18
    ctx->pc = 0x31e250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_31e254:
    // 0x31e254: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31e254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31e258:
    // 0x31e258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e25c:
    // 0x31e25c: 0x40f809  jalr        $v0
label_31e260:
    if (ctx->pc == 0x31E260u) {
        ctx->pc = 0x31E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E25Cu;
        // 0x31e260: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E264u;
        goto label_31e264;
    }
    ctx->pc = 0x31E25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E264u);
        ctx->pc = 0x31E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E25Cu;
        // 0x31e260: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E25Cu, 0x31E264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E264u;
label_31e264:
    // 0x31e264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e268:
    // 0x31e268: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_31e26c:
    if (ctx->pc == 0x31E26Cu) {
        ctx->pc = 0x31E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E268u;
        // 0x31e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E270u;
        goto label_31e270;
    }
    ctx->pc = 0x31E268u;
    {
        const bool branch_taken_0x31e268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E268u;
        // 0x31e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e268) {
            ctx->pc = 0x31E2A0u;
            goto label_31e2a0;
        }
    }
    ctx->pc = 0x31E270u;
label_31e270:
    // 0x31e270: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31e274:
    // 0x31e274: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31e274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31e278:
    // 0x31e278: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31e278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31e27c:
    // 0x31e27c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e280:
    // 0x31e280: 0xc1035f6  jal         func_40D7D8
label_31e284:
    if (ctx->pc == 0x31E284u) {
        ctx->pc = 0x31E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E280u;
        // 0x31e284: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E288u;
        goto label_31e288;
    }
    ctx->pc = 0x31E280u;
    SET_GPR_U32(ctx, 31, 0x31E288u);
    ctx->pc = 0x31E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E280u;
    // 0x31e284: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31E280u, 0x31E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E288u;
label_31e288:
    // 0x31e288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31e28c:
    // 0x31e28c: 0xc103628  jal         func_40D8A0
label_31e290:
    if (ctx->pc == 0x31E290u) {
        ctx->pc = 0x31E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E28Cu;
        // 0x31e290: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E294u;
        goto label_31e294;
    }
    ctx->pc = 0x31E28Cu;
    SET_GPR_U32(ctx, 31, 0x31E294u);
    ctx->pc = 0x31E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E28Cu;
    // 0x31e290: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31E28Cu, 0x31E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E294u;
label_31e294:
    // 0x31e294: 0x1000000e  b           . + 4 + (0xE << 2)
label_31e298:
    if (ctx->pc == 0x31E298u) {
        ctx->pc = 0x31E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E294u;
        // 0x31e298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E29Cu;
        goto label_31e29c;
    }
    ctx->pc = 0x31E294u;
    {
        const bool branch_taken_0x31e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E294u;
        // 0x31e298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e294) {
            ctx->pc = 0x31E2D0u;
            goto label_31e2d0;
        }
    }
    ctx->pc = 0x31E29Cu;
label_31e29c:
    // 0x31e29c: 0x0  nop
    ctx->pc = 0x31e29cu;
    // NOP
label_31e2a0:
    // 0x31e2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e2a4:
    // 0x31e2a4: 0xc0bb7e6  jal         func_2EDF98
label_31e2a8:
    if (ctx->pc == 0x31E2A8u) {
        ctx->pc = 0x31E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2A4u;
        // 0x31e2a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2ACu;
        goto label_31e2ac;
    }
    ctx->pc = 0x31E2A4u;
    SET_GPR_U32(ctx, 31, 0x31E2ACu);
    ctx->pc = 0x31E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2A4u;
    // 0x31e2a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31E2A4u, 0x31E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2ACu;
label_31e2ac:
    // 0x31e2ac: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e2b0:
    // 0x31e2b0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x31e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_31e2b4:
    // 0x31e2b4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x31e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_31e2b8:
    // 0x31e2b8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x31e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_31e2bc:
    // 0x31e2bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31e2c0:
    // 0x31e2c0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x31e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_31e2c4:
    // 0x31e2c4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x31e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_31e2c8:
    // 0x31e2c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31e2cc:
    // 0x31e2cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x31e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_31e2d0:
    // 0x31e2d0: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
label_31e2d4:
    if (ctx->pc == 0x31E2D4u) {
        ctx->pc = 0x31E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2D0u;
        // 0x31e2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2D8u;
        goto label_31e2d8;
    }
    ctx->pc = 0x31E2D0u;
    {
        const bool branch_taken_0x31e2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2D0u;
        // 0x31e2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2d0) {
            ctx->pc = 0x31E418u;
            goto label_31e418;
        }
    }
    ctx->pc = 0x31E2D8u;
label_31e2d8:
    // 0x31e2d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31e2dc:
    // 0x31e2dc: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_31e2e0:
    if (ctx->pc == 0x31E2E0u) {
        ctx->pc = 0x31E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2DCu;
        // 0x31e2e0: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2E4u;
        goto label_31e2e4;
    }
    ctx->pc = 0x31E2DCu;
    {
        const bool branch_taken_0x31e2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e2dc) {
            ctx->pc = 0x31E2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E2DCu;
            // 0x31e2e0: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E36Cu;
            goto label_31e36c;
        }
    }
    ctx->pc = 0x31E2E4u;
label_31e2e4:
    // 0x31e2e4: 0x8f90a5cc  lw          $s0, -0x5A34($gp)
    ctx->pc = 0x31e2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e2e8:
    // 0x31e2e8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x31e2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31e2ec:
    // 0x31e2ec: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x31e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_31e2f0:
    // 0x31e2f0: 0xc0c7620  jal         func_31D880
label_31e2f4:
    if (ctx->pc == 0x31E2F4u) {
        ctx->pc = 0x31E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2F0u;
        // 0x31e2f4: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2F8u;
        goto label_31e2f8;
    }
    ctx->pc = 0x31E2F0u;
    SET_GPR_U32(ctx, 31, 0x31E2F8u);
    ctx->pc = 0x31E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2F0u;
    // 0x31e2f4: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E2F0u, 0x31E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2F8u;
label_31e2f8:
    // 0x31e2f8: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x31e2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31e2fc:
    // 0x31e2fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31e300:
    // 0x31e300: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31e304:
    // 0x31e304: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31e304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31e308:
    // 0x31e308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e30c:
    // 0x31e30c: 0x40f809  jalr        $v0
label_31e310:
    if (ctx->pc == 0x31E310u) {
        ctx->pc = 0x31E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E30Cu;
        // 0x31e310: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E314u;
        goto label_31e314;
    }
    ctx->pc = 0x31E30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E314u);
        ctx->pc = 0x31E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E30Cu;
        // 0x31e310: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E30Cu, 0x31E314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E314u;
label_31e314:
    // 0x31e314: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31e318:
    if (ctx->pc == 0x31E318u) {
        ctx->pc = 0x31E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E314u;
        // 0x31e318: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E31Cu;
        goto label_31e31c;
    }
    ctx->pc = 0x31E314u;
    {
        const bool branch_taken_0x31e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E314u;
        // 0x31e318: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e314) {
            ctx->pc = 0x31E348u;
            goto label_31e348;
        }
    }
    ctx->pc = 0x31E31Cu;
label_31e31c:
    // 0x31e31c: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31e320:
    // 0x31e320: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31e320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31e324:
    // 0x31e324: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x31e324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_31e328:
    // 0x31e328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e32c:
    // 0x31e32c: 0xc1035f6  jal         func_40D7D8
label_31e330:
    if (ctx->pc == 0x31E330u) {
        ctx->pc = 0x31E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E32Cu;
        // 0x31e330: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E334u;
        goto label_31e334;
    }
    ctx->pc = 0x31E32Cu;
    SET_GPR_U32(ctx, 31, 0x31E334u);
    ctx->pc = 0x31E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E32Cu;
    // 0x31e330: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31E32Cu, 0x31E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E334u;
label_31e334:
    // 0x31e334: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x31e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_31e338:
    // 0x31e338: 0xc103628  jal         func_40D8A0
label_31e33c:
    if (ctx->pc == 0x31E33Cu) {
        ctx->pc = 0x31E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E338u;
        // 0x31e33c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E340u;
        goto label_31e340;
    }
    ctx->pc = 0x31E338u;
    SET_GPR_U32(ctx, 31, 0x31E340u);
    ctx->pc = 0x31E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E338u;
    // 0x31e33c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31E338u, 0x31E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E340u;
label_31e340:
    // 0x31e340: 0x10000006  b           . + 4 + (0x6 << 2)
label_31e344:
    if (ctx->pc == 0x31E344u) {
        ctx->pc = 0x31E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E340u;
        // 0x31e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E348u;
        goto label_31e348;
    }
    ctx->pc = 0x31E340u;
    {
        const bool branch_taken_0x31e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E340u;
        // 0x31e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e340) {
            ctx->pc = 0x31E35Cu;
            goto label_31e35c;
        }
    }
    ctx->pc = 0x31E348u;
label_31e348:
    // 0x31e348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e34c:
    // 0x31e34c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31e34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e350:
    // 0x31e350: 0xc0bb7e6  jal         func_2EDF98
label_31e354:
    if (ctx->pc == 0x31E354u) {
        ctx->pc = 0x31E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E350u;
        // 0x31e354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E358u;
        goto label_31e358;
    }
    ctx->pc = 0x31E350u;
    SET_GPR_U32(ctx, 31, 0x31E358u);
    ctx->pc = 0x31E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E350u;
    // 0x31e354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31E350u, 0x31E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E358u;
label_31e358:
    // 0x31e358: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31e358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31e35c:
    // 0x31e35c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_31e360:
    if (ctx->pc == 0x31E360u) {
        ctx->pc = 0x31E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E35Cu;
        // 0x31e360: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E364u;
        goto label_31e364;
    }
    ctx->pc = 0x31E35Cu;
    {
        const bool branch_taken_0x31e35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e35c) {
            ctx->pc = 0x31E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E35Cu;
            // 0x31e360: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E36Cu;
            goto label_31e36c;
        }
    }
    ctx->pc = 0x31E364u;
label_31e364:
    // 0x31e364: 0x1000002c  b           . + 4 + (0x2C << 2)
label_31e368:
    if (ctx->pc == 0x31E368u) {
        ctx->pc = 0x31E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E364u;
        // 0x31e368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E36Cu;
        goto label_31e36c;
    }
    ctx->pc = 0x31E364u;
    {
        const bool branch_taken_0x31e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E364u;
        // 0x31e368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e364) {
            ctx->pc = 0x31E418u;
            goto label_31e418;
        }
    }
    ctx->pc = 0x31E36Cu;
label_31e36c:
    // 0x31e36c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31e36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e370:
    // 0x31e370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31e374:
    // 0x31e374: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31e374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e378:
    // 0x31e378: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31e378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e37c:
    // 0x31e37c: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x31e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_31e380:
    // 0x31e380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e384:
    // 0x31e384: 0x1000001e  b           . + 4 + (0x1E << 2)
label_31e388:
    if (ctx->pc == 0x31E388u) {
        ctx->pc = 0x31E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E384u;
        // 0x31e388: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E38Cu;
        goto label_31e38c;
    }
    ctx->pc = 0x31E384u;
    {
        const bool branch_taken_0x31e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E384u;
        // 0x31e388: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e384) {
            ctx->pc = 0x31E400u;
            goto label_31e400;
        }
    }
    ctx->pc = 0x31E38Cu;
label_31e38c:
    // 0x31e38c: 0x0  nop
    ctx->pc = 0x31e38cu;
    // NOP
label_31e390:
    // 0x31e390: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31e390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31e394:
    // 0x31e394: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_31e398:
    if (ctx->pc == 0x31E398u) {
        ctx->pc = 0x31E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E394u;
        // 0x31e398: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E39Cu;
        goto label_31e39c;
    }
    ctx->pc = 0x31E394u;
    {
        const bool branch_taken_0x31e394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e394) {
            ctx->pc = 0x31E398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E394u;
            // 0x31e398: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E3D8u;
            goto label_31e3d8;
        }
    }
    ctx->pc = 0x31E39Cu;
label_31e39c:
    // 0x31e39c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x31e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_31e3a0:
    // 0x31e3a0: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x31e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_31e3a4:
    // 0x31e3a4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_31e3a8:
    // 0x31e3a8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_31e3ac:
    if (ctx->pc == 0x31E3ACu) {
        ctx->pc = 0x31E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3A8u;
        // 0x31e3ac: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E3B0u;
        goto label_31e3b0;
    }
    ctx->pc = 0x31E3A8u;
    {
        const bool branch_taken_0x31e3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e3a8) {
            ctx->pc = 0x31E3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E3A8u;
            // 0x31e3ac: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E3D8u;
            goto label_31e3d8;
        }
    }
    ctx->pc = 0x31E3B0u;
label_31e3b0:
    // 0x31e3b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31e3b4:
    // 0x31e3b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31e3b8:
    // 0x31e3b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31e3bc:
    // 0x31e3bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_31e3c0:
    // 0x31e3c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x31e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_31e3c4:
    // 0x31e3c4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31e3c8:
    // 0x31e3c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x31e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_31e3cc:
    // 0x31e3cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e3d0:
    // 0x31e3d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e3d4:
    if (ctx->pc == 0x31E3D4u) {
        ctx->pc = 0x31E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3D0u;
        // 0x31e3d4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E3D8u;
        goto label_31e3d8;
    }
    ctx->pc = 0x31E3D0u;
    {
        const bool branch_taken_0x31e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3D0u;
        // 0x31e3d4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3d0) {
            ctx->pc = 0x31E3F0u;
            goto label_31e3f0;
        }
    }
    ctx->pc = 0x31E3D8u;
label_31e3d8:
    // 0x31e3d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31e3dc:
    // 0x31e3dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31e3e0:
    // 0x31e3e0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x31e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_31e3e4:
    // 0x31e3e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_31e3e8:
    // 0x31e3e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31e3ec:
    // 0x31e3ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x31e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_31e3f0:
    // 0x31e3f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_31e3f4:
    // 0x31e3f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x31e3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_31e3f8:
    // 0x31e3f8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_31e3fc:
    // 0x31e3fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31e3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31e400:
    // 0x31e400: 0xc0c7620  jal         func_31D880
label_31e404:
    if (ctx->pc == 0x31E404u) {
        ctx->pc = 0x31E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E400u;
        // 0x31e404: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E408u;
        goto label_31e408;
    }
    ctx->pc = 0x31E400u;
    SET_GPR_U32(ctx, 31, 0x31E408u);
    ctx->pc = 0x31E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E400u;
    // 0x31e404: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E400u, 0x31E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E408u;
label_31e408:
    // 0x31e408: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31e408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31e40c:
    // 0x31e40c: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_31e410:
    if (ctx->pc == 0x31E410u) {
        ctx->pc = 0x31E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E40Cu;
        // 0x31e410: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E414u;
        goto label_31e414;
    }
    ctx->pc = 0x31E40Cu;
    {
        const bool branch_taken_0x31e40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e40c) {
            ctx->pc = 0x31E410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E40Cu;
            // 0x31e410: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e390;
        }
    }
    ctx->pc = 0x31E414u;
label_31e414:
    // 0x31e414: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31e414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31e418:
    // 0x31e418: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31e418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31e41c:
    // 0x31e41c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31e41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31e420:
    // 0x31e420: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31e420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31e424:
    // 0x31e424: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31e424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e428:
    // 0x31e428: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e42c:
    // 0x31e42c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31e42cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e430:
    // 0x31e430: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31e430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e434:
    // 0x31e434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31e438:
    // 0x31e438: 0x3e00008  jr          $ra
label_31e43c:
    if (ctx->pc == 0x31E43Cu) {
        ctx->pc = 0x31E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E438u;
        // 0x31e43c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E440u;
        goto label_fallthrough_0x31e438;
    }
    ctx->pc = 0x31E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E438u;
        // 0x31e43c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e438:
    ctx->pc = 0x31E440u;
}
