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

// Function: sub_0039C308
// Address: 0x39c308 - 0x39c498
void sub_0039C308_0x39c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C308_0x39c308");
#endif

    switch (ctx->pc) {
        case 0x39c308u: goto label_39c308;
        case 0x39c30cu: goto label_39c30c;
        case 0x39c310u: goto label_39c310;
        case 0x39c314u: goto label_39c314;
        case 0x39c318u: goto label_39c318;
        case 0x39c31cu: goto label_39c31c;
        case 0x39c320u: goto label_39c320;
        case 0x39c324u: goto label_39c324;
        case 0x39c328u: goto label_39c328;
        case 0x39c32cu: goto label_39c32c;
        case 0x39c330u: goto label_39c330;
        case 0x39c334u: goto label_39c334;
        case 0x39c338u: goto label_39c338;
        case 0x39c33cu: goto label_39c33c;
        case 0x39c340u: goto label_39c340;
        case 0x39c344u: goto label_39c344;
        case 0x39c348u: goto label_39c348;
        case 0x39c34cu: goto label_39c34c;
        case 0x39c350u: goto label_39c350;
        case 0x39c354u: goto label_39c354;
        case 0x39c358u: goto label_39c358;
        case 0x39c35cu: goto label_39c35c;
        case 0x39c360u: goto label_39c360;
        case 0x39c364u: goto label_39c364;
        case 0x39c368u: goto label_39c368;
        case 0x39c36cu: goto label_39c36c;
        case 0x39c370u: goto label_39c370;
        case 0x39c374u: goto label_39c374;
        case 0x39c378u: goto label_39c378;
        case 0x39c37cu: goto label_39c37c;
        case 0x39c380u: goto label_39c380;
        case 0x39c384u: goto label_39c384;
        case 0x39c388u: goto label_39c388;
        case 0x39c38cu: goto label_39c38c;
        case 0x39c390u: goto label_39c390;
        case 0x39c394u: goto label_39c394;
        case 0x39c398u: goto label_39c398;
        case 0x39c39cu: goto label_39c39c;
        case 0x39c3a0u: goto label_39c3a0;
        case 0x39c3a4u: goto label_39c3a4;
        case 0x39c3a8u: goto label_39c3a8;
        case 0x39c3acu: goto label_39c3ac;
        case 0x39c3b0u: goto label_39c3b0;
        case 0x39c3b4u: goto label_39c3b4;
        case 0x39c3b8u: goto label_39c3b8;
        case 0x39c3bcu: goto label_39c3bc;
        case 0x39c3c0u: goto label_39c3c0;
        case 0x39c3c4u: goto label_39c3c4;
        case 0x39c3c8u: goto label_39c3c8;
        case 0x39c3ccu: goto label_39c3cc;
        case 0x39c3d0u: goto label_39c3d0;
        case 0x39c3d4u: goto label_39c3d4;
        case 0x39c3d8u: goto label_39c3d8;
        case 0x39c3dcu: goto label_39c3dc;
        case 0x39c3e0u: goto label_39c3e0;
        case 0x39c3e4u: goto label_39c3e4;
        case 0x39c3e8u: goto label_39c3e8;
        case 0x39c3ecu: goto label_39c3ec;
        case 0x39c3f0u: goto label_39c3f0;
        case 0x39c3f4u: goto label_39c3f4;
        case 0x39c3f8u: goto label_39c3f8;
        case 0x39c3fcu: goto label_39c3fc;
        case 0x39c400u: goto label_39c400;
        case 0x39c404u: goto label_39c404;
        case 0x39c408u: goto label_39c408;
        case 0x39c40cu: goto label_39c40c;
        case 0x39c410u: goto label_39c410;
        case 0x39c414u: goto label_39c414;
        case 0x39c418u: goto label_39c418;
        case 0x39c41cu: goto label_39c41c;
        case 0x39c420u: goto label_39c420;
        case 0x39c424u: goto label_39c424;
        case 0x39c428u: goto label_39c428;
        case 0x39c42cu: goto label_39c42c;
        case 0x39c430u: goto label_39c430;
        case 0x39c434u: goto label_39c434;
        case 0x39c438u: goto label_39c438;
        case 0x39c43cu: goto label_39c43c;
        case 0x39c440u: goto label_39c440;
        case 0x39c444u: goto label_39c444;
        case 0x39c448u: goto label_39c448;
        case 0x39c44cu: goto label_39c44c;
        case 0x39c450u: goto label_39c450;
        case 0x39c454u: goto label_39c454;
        case 0x39c458u: goto label_39c458;
        case 0x39c45cu: goto label_39c45c;
        case 0x39c460u: goto label_39c460;
        case 0x39c464u: goto label_39c464;
        case 0x39c468u: goto label_39c468;
        case 0x39c46cu: goto label_39c46c;
        case 0x39c470u: goto label_39c470;
        case 0x39c474u: goto label_39c474;
        case 0x39c478u: goto label_39c478;
        case 0x39c47cu: goto label_39c47c;
        case 0x39c480u: goto label_39c480;
        case 0x39c484u: goto label_39c484;
        case 0x39c488u: goto label_39c488;
        case 0x39c48cu: goto label_39c48c;
        case 0x39c490u: goto label_39c490;
        case 0x39c494u: goto label_39c494;
        default: break;
    }

    ctx->pc = 0x39c308u;

label_39c308:
    // 0x39c308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39c30c:
    // 0x39c30c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39c310:
    // 0x39c310: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39c314:
    // 0x39c314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c318:
    // 0x39c318: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39c31c:
    // 0x39c31c: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x39c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_39c320:
    // 0x39c320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c324:
    // 0x39c324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c328:
    // 0x39c328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c32c:
    // 0x39c32c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39c32cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c330:
    // 0x39c330: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x39c330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39c334:
    // 0x39c334: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39c338:
    // 0x39c338: 0x10b1001c  beq         $a1, $s1, . + 4 + (0x1C << 2)
label_39c33c:
    if (ctx->pc == 0x39C33Cu) {
        ctx->pc = 0x39C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C338u;
        // 0x39c33c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C340u;
        goto label_39c340;
    }
    ctx->pc = 0x39C338u;
    {
        const bool branch_taken_0x39c338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x39C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C338u;
        // 0x39c33c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c338) {
            ctx->pc = 0x39C3ACu;
            goto label_39c3ac;
        }
    }
    ctx->pc = 0x39C340u;
label_39c340:
    // 0x39c340: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c344:
    // 0x39c344: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_39c348:
    // 0x39c348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39c34c:
    // 0x39c34c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c350:
    // 0x39c350: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x39c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_39c354:
    // 0x39c354: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39c354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39c358:
    // 0x39c358: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_39c35c:
    if (ctx->pc == 0x39C35Cu) {
        ctx->pc = 0x39C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C358u;
        // 0x39c35c: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C360u;
        goto label_39c360;
    }
    ctx->pc = 0x39C358u;
    {
        const bool branch_taken_0x39c358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C358u;
        // 0x39c35c: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c358) {
            ctx->pc = 0x39C390u;
            goto label_39c390;
        }
    }
    ctx->pc = 0x39C360u;
label_39c360:
    // 0x39c360: 0x260f809  jalr        $s3
label_39c364:
    if (ctx->pc == 0x39C364u) {
        ctx->pc = 0x39C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C360u;
        // 0x39c364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C368u;
        goto label_39c368;
    }
    ctx->pc = 0x39C360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C368u);
        ctx->pc = 0x39C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C360u;
        // 0x39c364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C360u, 0x39C368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C368u;
label_39c368:
    // 0x39c368: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39c36c:
    if (ctx->pc == 0x39C36Cu) {
        ctx->pc = 0x39C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C368u;
        // 0x39c36c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C370u;
        goto label_39c370;
    }
    ctx->pc = 0x39C368u;
    {
        const bool branch_taken_0x39c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C368u;
        // 0x39c36c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c368) {
            ctx->pc = 0x39C394u;
            goto label_39c394;
        }
    }
    ctx->pc = 0x39C370u;
label_39c370:
    // 0x39c370: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c374:
    // 0x39c374: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c378:
    // 0x39c378: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39c378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c37c:
    // 0x39c37c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39c380:
    // 0x39c380: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39c380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c384:
    // 0x39c384: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c388:
    // 0x39c388: 0x10000009  b           . + 4 + (0x9 << 2)
label_39c38c:
    if (ctx->pc == 0x39C38Cu) {
        ctx->pc = 0x39C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C388u;
        // 0x39c38c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C390u;
        goto label_39c390;
    }
    ctx->pc = 0x39C388u;
    {
        const bool branch_taken_0x39c388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C388u;
        // 0x39c38c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c388) {
            ctx->pc = 0x39C3B0u;
            goto label_39c3b0;
        }
    }
    ctx->pc = 0x39C390u;
label_39c390:
    // 0x39c390: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c394:
    // 0x39c394: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c398:
    // 0x39c398: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39c398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39c39c:
    // 0x39c39c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c3a0:
    // 0x39c3a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c3a4:
    // 0x39c3a4: 0x14b1ffe6  bne         $a1, $s1, . + 4 + (-0x1A << 2)
label_39c3a8:
    if (ctx->pc == 0x39C3A8u) {
        ctx->pc = 0x39C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3A4u;
        // 0x39c3a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3ACu;
        goto label_39c3ac;
    }
    ctx->pc = 0x39C3A4u;
    {
        const bool branch_taken_0x39c3a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x39C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3A4u;
        // 0x39c3a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3a4) {
            ctx->pc = 0x39C340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c340;
        }
    }
    ctx->pc = 0x39C3ACu;
label_39c3ac:
    // 0x39c3ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c3b0:
    // 0x39c3b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c3b4:
    // 0x39c3b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39c3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c3b8:
    // 0x39c3b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39c3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c3bc:
    // 0x39c3bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c3bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c3c0:
    // 0x39c3c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c3c4:
    // 0x39c3c4: 0x3e00008  jr          $ra
label_39c3c8:
    if (ctx->pc == 0x39C3C8u) {
        ctx->pc = 0x39C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C4u;
        // 0x39c3c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3CCu;
        goto label_39c3cc;
    }
    ctx->pc = 0x39C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C4u;
        // 0x39c3c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C3CCu;
label_39c3cc:
    // 0x39c3cc: 0x0  nop
    ctx->pc = 0x39c3ccu;
    // NOP
label_39c3d0:
    // 0x39c3d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39c3d4:
    // 0x39c3d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39c3d8:
    // 0x39c3d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39c3dc:
    // 0x39c3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c3e0:
    // 0x39c3e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39c3e4:
    // 0x39c3e4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x39c3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_39c3e8:
    // 0x39c3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c3ec:
    // 0x39c3ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c3f0:
    // 0x39c3f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c3f4:
    // 0x39c3f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39c3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c3f8:
    // 0x39c3f8: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x39c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39c3fc:
    // 0x39c3fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39c400:
    // 0x39c400: 0x10b1001c  beq         $a1, $s1, . + 4 + (0x1C << 2)
label_39c404:
    if (ctx->pc == 0x39C404u) {
        ctx->pc = 0x39C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C400u;
        // 0x39c404: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C408u;
        goto label_39c408;
    }
    ctx->pc = 0x39C400u;
    {
        const bool branch_taken_0x39c400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x39C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C400u;
        // 0x39c404: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c400) {
            ctx->pc = 0x39C474u;
            goto label_39c474;
        }
    }
    ctx->pc = 0x39C408u;
label_39c408:
    // 0x39c408: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c40c:
    // 0x39c40c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_39c410:
    // 0x39c410: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39c414:
    // 0x39c414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c418:
    // 0x39c418: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x39c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_39c41c:
    // 0x39c41c: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39c420:
    // 0x39c420: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_39c424:
    if (ctx->pc == 0x39C424u) {
        ctx->pc = 0x39C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C420u;
        // 0x39c424: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C428u;
        goto label_39c428;
    }
    ctx->pc = 0x39C420u;
    {
        const bool branch_taken_0x39c420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C420u;
        // 0x39c424: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c420) {
            ctx->pc = 0x39C458u;
            goto label_39c458;
        }
    }
    ctx->pc = 0x39C428u;
label_39c428:
    // 0x39c428: 0x260f809  jalr        $s3
label_39c42c:
    if (ctx->pc == 0x39C42Cu) {
        ctx->pc = 0x39C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C428u;
        // 0x39c42c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C430u;
        goto label_39c430;
    }
    ctx->pc = 0x39C428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C430u);
        ctx->pc = 0x39C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C428u;
        // 0x39c42c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C428u, 0x39C430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C430u;
label_39c430:
    // 0x39c430: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39c434:
    if (ctx->pc == 0x39C434u) {
        ctx->pc = 0x39C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C430u;
        // 0x39c434: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C438u;
        goto label_39c438;
    }
    ctx->pc = 0x39C430u;
    {
        const bool branch_taken_0x39c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C430u;
        // 0x39c434: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c430) {
            ctx->pc = 0x39C45Cu;
            goto label_39c45c;
        }
    }
    ctx->pc = 0x39C438u;
label_39c438:
    // 0x39c438: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c43c:
    // 0x39c43c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c440:
    // 0x39c440: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39c440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c444:
    // 0x39c444: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39c444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39c448:
    // 0x39c448: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39c448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c44c:
    // 0x39c44c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c450:
    // 0x39c450: 0x10000009  b           . + 4 + (0x9 << 2)
label_39c454:
    if (ctx->pc == 0x39C454u) {
        ctx->pc = 0x39C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C450u;
        // 0x39c454: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C458u;
        goto label_39c458;
    }
    ctx->pc = 0x39C450u;
    {
        const bool branch_taken_0x39c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C450u;
        // 0x39c454: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c450) {
            ctx->pc = 0x39C478u;
            goto label_39c478;
        }
    }
    ctx->pc = 0x39C458u;
label_39c458:
    // 0x39c458: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c45c:
    // 0x39c45c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c460:
    // 0x39c460: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39c460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39c464:
    // 0x39c464: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c468:
    // 0x39c468: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c46c:
    // 0x39c46c: 0x14b1ffe6  bne         $a1, $s1, . + 4 + (-0x1A << 2)
label_39c470:
    if (ctx->pc == 0x39C470u) {
        ctx->pc = 0x39C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C46Cu;
        // 0x39c470: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C474u;
        goto label_39c474;
    }
    ctx->pc = 0x39C46Cu;
    {
        const bool branch_taken_0x39c46c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x39C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C46Cu;
        // 0x39c470: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c46c) {
            ctx->pc = 0x39C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c408;
        }
    }
    ctx->pc = 0x39C474u;
label_39c474:
    // 0x39c474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c478:
    // 0x39c478: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39c478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c47c:
    // 0x39c47c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39c47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c480:
    // 0x39c480: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39c480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c484:
    // 0x39c484: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c488:
    // 0x39c488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c48c:
    // 0x39c48c: 0x3e00008  jr          $ra
label_39c490:
    if (ctx->pc == 0x39C490u) {
        ctx->pc = 0x39C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C48Cu;
        // 0x39c490: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C494u;
        goto label_39c494;
    }
    ctx->pc = 0x39C48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C48Cu;
        // 0x39c490: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C494u;
label_39c494:
    // 0x39c494: 0x0  nop
    ctx->pc = 0x39c494u;
    // NOP
    ctx->pc = 0x39c498u;
}
