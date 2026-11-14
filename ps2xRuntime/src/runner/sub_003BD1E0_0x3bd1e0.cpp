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

// Function: sub_003BD1E0
// Address: 0x3bd1e0 - 0x3bd378
void sub_003BD1E0_0x3bd1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD1E0_0x3bd1e0");
#endif

    switch (ctx->pc) {
        case 0x3bd1e0u: goto label_3bd1e0;
        case 0x3bd1e4u: goto label_3bd1e4;
        case 0x3bd1e8u: goto label_3bd1e8;
        case 0x3bd1ecu: goto label_3bd1ec;
        case 0x3bd1f0u: goto label_3bd1f0;
        case 0x3bd1f4u: goto label_3bd1f4;
        case 0x3bd1f8u: goto label_3bd1f8;
        case 0x3bd1fcu: goto label_3bd1fc;
        case 0x3bd200u: goto label_3bd200;
        case 0x3bd204u: goto label_3bd204;
        case 0x3bd208u: goto label_3bd208;
        case 0x3bd20cu: goto label_3bd20c;
        case 0x3bd210u: goto label_3bd210;
        case 0x3bd214u: goto label_3bd214;
        case 0x3bd218u: goto label_3bd218;
        case 0x3bd21cu: goto label_3bd21c;
        case 0x3bd220u: goto label_3bd220;
        case 0x3bd224u: goto label_3bd224;
        case 0x3bd228u: goto label_3bd228;
        case 0x3bd22cu: goto label_3bd22c;
        case 0x3bd230u: goto label_3bd230;
        case 0x3bd234u: goto label_3bd234;
        case 0x3bd238u: goto label_3bd238;
        case 0x3bd23cu: goto label_3bd23c;
        case 0x3bd240u: goto label_3bd240;
        case 0x3bd244u: goto label_3bd244;
        case 0x3bd248u: goto label_3bd248;
        case 0x3bd24cu: goto label_3bd24c;
        case 0x3bd250u: goto label_3bd250;
        case 0x3bd254u: goto label_3bd254;
        case 0x3bd258u: goto label_3bd258;
        case 0x3bd25cu: goto label_3bd25c;
        case 0x3bd260u: goto label_3bd260;
        case 0x3bd264u: goto label_3bd264;
        case 0x3bd268u: goto label_3bd268;
        case 0x3bd26cu: goto label_3bd26c;
        case 0x3bd270u: goto label_3bd270;
        case 0x3bd274u: goto label_3bd274;
        case 0x3bd278u: goto label_3bd278;
        case 0x3bd27cu: goto label_3bd27c;
        case 0x3bd280u: goto label_3bd280;
        case 0x3bd284u: goto label_3bd284;
        case 0x3bd288u: goto label_3bd288;
        case 0x3bd28cu: goto label_3bd28c;
        case 0x3bd290u: goto label_3bd290;
        case 0x3bd294u: goto label_3bd294;
        case 0x3bd298u: goto label_3bd298;
        case 0x3bd29cu: goto label_3bd29c;
        case 0x3bd2a0u: goto label_3bd2a0;
        case 0x3bd2a4u: goto label_3bd2a4;
        case 0x3bd2a8u: goto label_3bd2a8;
        case 0x3bd2acu: goto label_3bd2ac;
        case 0x3bd2b0u: goto label_3bd2b0;
        case 0x3bd2b4u: goto label_3bd2b4;
        case 0x3bd2b8u: goto label_3bd2b8;
        case 0x3bd2bcu: goto label_3bd2bc;
        case 0x3bd2c0u: goto label_3bd2c0;
        case 0x3bd2c4u: goto label_3bd2c4;
        case 0x3bd2c8u: goto label_3bd2c8;
        case 0x3bd2ccu: goto label_3bd2cc;
        case 0x3bd2d0u: goto label_3bd2d0;
        case 0x3bd2d4u: goto label_3bd2d4;
        case 0x3bd2d8u: goto label_3bd2d8;
        case 0x3bd2dcu: goto label_3bd2dc;
        case 0x3bd2e0u: goto label_3bd2e0;
        case 0x3bd2e4u: goto label_3bd2e4;
        case 0x3bd2e8u: goto label_3bd2e8;
        case 0x3bd2ecu: goto label_3bd2ec;
        case 0x3bd2f0u: goto label_3bd2f0;
        case 0x3bd2f4u: goto label_3bd2f4;
        case 0x3bd2f8u: goto label_3bd2f8;
        case 0x3bd2fcu: goto label_3bd2fc;
        case 0x3bd300u: goto label_3bd300;
        case 0x3bd304u: goto label_3bd304;
        case 0x3bd308u: goto label_3bd308;
        case 0x3bd30cu: goto label_3bd30c;
        case 0x3bd310u: goto label_3bd310;
        case 0x3bd314u: goto label_3bd314;
        case 0x3bd318u: goto label_3bd318;
        case 0x3bd31cu: goto label_3bd31c;
        case 0x3bd320u: goto label_3bd320;
        case 0x3bd324u: goto label_3bd324;
        case 0x3bd328u: goto label_3bd328;
        case 0x3bd32cu: goto label_3bd32c;
        case 0x3bd330u: goto label_3bd330;
        case 0x3bd334u: goto label_3bd334;
        case 0x3bd338u: goto label_3bd338;
        case 0x3bd33cu: goto label_3bd33c;
        case 0x3bd340u: goto label_3bd340;
        case 0x3bd344u: goto label_3bd344;
        case 0x3bd348u: goto label_3bd348;
        case 0x3bd34cu: goto label_3bd34c;
        case 0x3bd350u: goto label_3bd350;
        case 0x3bd354u: goto label_3bd354;
        case 0x3bd358u: goto label_3bd358;
        case 0x3bd35cu: goto label_3bd35c;
        case 0x3bd360u: goto label_3bd360;
        case 0x3bd364u: goto label_3bd364;
        case 0x3bd368u: goto label_3bd368;
        case 0x3bd36cu: goto label_3bd36c;
        case 0x3bd370u: goto label_3bd370;
        case 0x3bd374u: goto label_3bd374;
        default: break;
    }

    ctx->pc = 0x3bd1e0u;

label_3bd1e0:
    // 0x3bd1e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bd1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3bd1e4:
    // 0x3bd1e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3bd1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3bd1e8:
    // 0x3bd1e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3bd1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3bd1ec:
    // 0x3bd1ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3bd1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3bd1f0:
    // 0x3bd1f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bd1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3bd1f4:
    // 0x3bd1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3bd1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bd1f8:
    // 0x3bd1f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3bd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3bd1fc:
    // 0x3bd1fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bd1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd200:
    // 0x3bd200: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3bd200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3bd204:
    // 0x3bd204: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3bd204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bd208:
    // 0x3bd208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bd20c:
    // 0x3bd20c: 0x16130002  bne         $s0, $s3, . + 4 + (0x2 << 2)
label_3bd210:
    if (ctx->pc == 0x3BD210u) {
        ctx->pc = 0x3BD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD20Cu;
        // 0x3bd210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD214u;
        goto label_3bd214;
    }
    ctx->pc = 0x3BD20Cu;
    {
        const bool branch_taken_0x3bd20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x3BD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD20Cu;
        // 0x3bd210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd20c) {
            ctx->pc = 0x3BD218u;
            goto label_3bd218;
        }
    }
    ctx->pc = 0x3BD214u;
label_3bd214:
    // 0x3bd214: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x3bd214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3bd218:
    // 0x3bd218: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x3bd218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bd21c:
    // 0x3bd21c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bd220:
    // 0x3bd220: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3bd224:
    // 0x3bd224: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bd224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bd228:
    // 0x3bd228: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x3bd228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_3bd22c:
    // 0x3bd22c: 0x40f809  jalr        $v0
label_3bd230:
    if (ctx->pc == 0x3BD230u) {
        ctx->pc = 0x3BD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD22Cu;
        // 0x3bd230: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD234u;
        goto label_3bd234;
    }
    ctx->pc = 0x3BD22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BD234u);
        ctx->pc = 0x3BD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD22Cu;
        // 0x3bd230: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD22Cu, 0x3BD234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BD234u;
label_3bd234:
    // 0x3bd234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bd234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bd238:
    // 0x3bd238: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3bd238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3bd23c:
    // 0x3bd23c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bd23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bd240:
    // 0x3bd240: 0xac71002c  sw          $s1, 0x2C($v1)
    ctx->pc = 0x3bd240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 17));
label_3bd244:
    // 0x3bd244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bd244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bd248:
    // 0x3bd248: 0xac730028  sw          $s3, 0x28($v1)
    ctx->pc = 0x3bd248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 19));
label_3bd24c:
    // 0x3bd24c: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x3bd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_3bd250:
    // 0x3bd250: 0xac720038  sw          $s2, 0x38($v1)
    ctx->pc = 0x3bd250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 18));
label_3bd254:
    // 0x3bd254: 0xac740034  sw          $s4, 0x34($v1)
    ctx->pc = 0x3bd254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 20));
label_3bd258:
    // 0x3bd258: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x3bd258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
label_3bd25c:
    // 0x3bd25c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3bd25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bd260:
    // 0x3bd260: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3bd260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bd264:
    // 0x3bd264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bd264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd268:
    // 0x3bd268: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3bd268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd26c:
    // 0x3bd26c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3bd26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd270:
    // 0x3bd270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd274:
    // 0x3bd274: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3bd274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3bd278:
    // 0x3bd278: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x3bd278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_3bd27c:
    // 0x3bd27c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bd27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bd280:
    // 0x3bd280: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3bd280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_3bd284:
    // 0x3bd284: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3bd284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3bd288:
    // 0x3bd288: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3bd288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3bd28c:
    // 0x3bd28c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3bd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_3bd290:
    // 0x3bd290: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x3bd290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_3bd294:
    // 0x3bd294: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3bd294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_3bd298:
    // 0x3bd298: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x3bd298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_3bd29c:
    // 0x3bd29c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x3bd29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_3bd2a0:
    // 0x3bd2a0: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x3bd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_3bd2a4:
    // 0x3bd2a4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x3bd2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_3bd2a8:
    // 0x3bd2a8: 0x3e00008  jr          $ra
label_3bd2ac:
    if (ctx->pc == 0x3BD2ACu) {
        ctx->pc = 0x3BD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2A8u;
        // 0x3bd2ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD2B0u;
        goto label_3bd2b0;
    }
    ctx->pc = 0x3BD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2A8u;
        // 0x3bd2ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD2B0u;
label_3bd2b0:
    // 0x3bd2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3bd2b4:
    // 0x3bd2b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3bd2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3bd2b8:
    // 0x3bd2b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bd2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3bd2bc:
    // 0x3bd2bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bd2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd2c0:
    // 0x3bd2c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3bd2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3bd2c4:
    // 0x3bd2c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bd2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bd2c8:
    // 0x3bd2c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3bd2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3bd2cc:
    // 0x3bd2cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3bd2ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bd2d0:
    // 0x3bd2d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3bd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3bd2d4:
    // 0x3bd2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bd2d8:
    // 0x3bd2d8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3bd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3bd2dc:
    // 0x3bd2dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bd2e0:
    if (ctx->pc == 0x3BD2E0u) {
        ctx->pc = 0x3BD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2DCu;
        // 0x3bd2e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD2E4u;
        goto label_3bd2e4;
    }
    ctx->pc = 0x3BD2DCu;
    {
        const bool branch_taken_0x3bd2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2DCu;
        // 0x3bd2e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd2dc) {
            ctx->pc = 0x3BD2E8u;
            goto label_3bd2e8;
        }
    }
    ctx->pc = 0x3BD2E4u;
label_3bd2e4:
    // 0x3bd2e4: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x3bd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bd2e8:
    // 0x3bd2e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd2ec:
    // 0x3bd2ec: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_3bd2f0:
    if (ctx->pc == 0x3BD2F0u) {
        ctx->pc = 0x3BD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2ECu;
        // 0x3bd2f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD2F4u;
        goto label_3bd2f4;
    }
    ctx->pc = 0x3BD2ECu;
    {
        const bool branch_taken_0x3bd2ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2ECu;
        // 0x3bd2f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd2ec) {
            ctx->pc = 0x3BD350u;
            goto label_3bd350;
        }
    }
    ctx->pc = 0x3BD2F4u;
label_3bd2f4:
    // 0x3bd2f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bd2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd2f8:
    // 0x3bd2f8: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3bd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bd2fc:
    // 0x3bd2fc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bd300:
    // 0x3bd300: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3bd300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3bd304:
    // 0x3bd304: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x3bd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3bd308:
    // 0x3bd308: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3bd308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bd30c:
    // 0x3bd30c: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x3bd30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bd310:
    // 0x3bd310: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3bd310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bd314:
    // 0x3bd314: 0x8e2c0048  lw          $t4, 0x48($s1)
    ctx->pc = 0x3bd314u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3bd318:
    // 0x3bd318: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x3bd318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bd31c:
    // 0x3bd31c: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bd320:
    // 0x3bd320: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bd320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bd324:
    // 0x3bd324: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bd324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bd328:
    // 0x3bd328: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bd328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bd32c:
    // 0x3bd32c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x3bd32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_3bd330:
    // 0x3bd330: 0x180f809  jalr        $t4
label_3bd334:
    if (ctx->pc == 0x3BD334u) {
        ctx->pc = 0x3BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD330u;
        // 0x3bd334: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD338u;
        goto label_3bd338;
    }
    ctx->pc = 0x3BD330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x3BD338u);
        ctx->pc = 0x3BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD330u;
        // 0x3bd334: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD330u, 0x3BD338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BD338u;
label_3bd338:
    // 0x3bd338: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd33c:
    // 0x3bd33c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bd33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bd340:
    // 0x3bd340: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bd340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bd344:
    // 0x3bd344: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3bd348:
    if (ctx->pc == 0x3BD348u) {
        ctx->pc = 0x3BD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD344u;
        // 0x3bd348: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD34Cu;
        goto label_3bd34c;
    }
    ctx->pc = 0x3BD344u;
    {
        const bool branch_taken_0x3bd344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD344u;
        // 0x3bd348: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd344) {
            ctx->pc = 0x3BD2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd2f8;
        }
    }
    ctx->pc = 0x3BD34Cu;
label_3bd34c:
    // 0x3bd34c: 0x0  nop
    ctx->pc = 0x3bd34cu;
    // NOP
label_3bd350:
    // 0x3bd350: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3bd350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bd354:
    // 0x3bd354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bd358:
    // 0x3bd358: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3bd358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bd35c:
    // 0x3bd35c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bd35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd360:
    // 0x3bd360: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3bd360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd364:
    // 0x3bd364: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3bd364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd368:
    // 0x3bd368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd36c:
    // 0x3bd36c: 0x3e00008  jr          $ra
label_3bd370:
    if (ctx->pc == 0x3BD370u) {
        ctx->pc = 0x3BD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD36Cu;
        // 0x3bd370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD374u;
        goto label_3bd374;
    }
    ctx->pc = 0x3BD36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD36Cu;
        // 0x3bd370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD374u;
label_3bd374:
    // 0x3bd374: 0x0  nop
    ctx->pc = 0x3bd374u;
    // NOP
    ctx->pc = 0x3bd378u;
}
