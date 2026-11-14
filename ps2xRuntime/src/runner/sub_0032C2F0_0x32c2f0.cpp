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

// Function: sub_0032C2F0
// Address: 0x32c2f0 - 0x32c538
void sub_0032C2F0_0x32c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C2F0_0x32c2f0");
#endif

    switch (ctx->pc) {
        case 0x32c2f0u: goto label_32c2f0;
        case 0x32c2f4u: goto label_32c2f4;
        case 0x32c2f8u: goto label_32c2f8;
        case 0x32c2fcu: goto label_32c2fc;
        case 0x32c300u: goto label_32c300;
        case 0x32c304u: goto label_32c304;
        case 0x32c308u: goto label_32c308;
        case 0x32c30cu: goto label_32c30c;
        case 0x32c310u: goto label_32c310;
        case 0x32c314u: goto label_32c314;
        case 0x32c318u: goto label_32c318;
        case 0x32c31cu: goto label_32c31c;
        case 0x32c320u: goto label_32c320;
        case 0x32c324u: goto label_32c324;
        case 0x32c328u: goto label_32c328;
        case 0x32c32cu: goto label_32c32c;
        case 0x32c330u: goto label_32c330;
        case 0x32c334u: goto label_32c334;
        case 0x32c338u: goto label_32c338;
        case 0x32c33cu: goto label_32c33c;
        case 0x32c340u: goto label_32c340;
        case 0x32c344u: goto label_32c344;
        case 0x32c348u: goto label_32c348;
        case 0x32c34cu: goto label_32c34c;
        case 0x32c350u: goto label_32c350;
        case 0x32c354u: goto label_32c354;
        case 0x32c358u: goto label_32c358;
        case 0x32c35cu: goto label_32c35c;
        case 0x32c360u: goto label_32c360;
        case 0x32c364u: goto label_32c364;
        case 0x32c368u: goto label_32c368;
        case 0x32c36cu: goto label_32c36c;
        case 0x32c370u: goto label_32c370;
        case 0x32c374u: goto label_32c374;
        case 0x32c378u: goto label_32c378;
        case 0x32c37cu: goto label_32c37c;
        case 0x32c380u: goto label_32c380;
        case 0x32c384u: goto label_32c384;
        case 0x32c388u: goto label_32c388;
        case 0x32c38cu: goto label_32c38c;
        case 0x32c390u: goto label_32c390;
        case 0x32c394u: goto label_32c394;
        case 0x32c398u: goto label_32c398;
        case 0x32c39cu: goto label_32c39c;
        case 0x32c3a0u: goto label_32c3a0;
        case 0x32c3a4u: goto label_32c3a4;
        case 0x32c3a8u: goto label_32c3a8;
        case 0x32c3acu: goto label_32c3ac;
        case 0x32c3b0u: goto label_32c3b0;
        case 0x32c3b4u: goto label_32c3b4;
        case 0x32c3b8u: goto label_32c3b8;
        case 0x32c3bcu: goto label_32c3bc;
        case 0x32c3c0u: goto label_32c3c0;
        case 0x32c3c4u: goto label_32c3c4;
        case 0x32c3c8u: goto label_32c3c8;
        case 0x32c3ccu: goto label_32c3cc;
        case 0x32c3d0u: goto label_32c3d0;
        case 0x32c3d4u: goto label_32c3d4;
        case 0x32c3d8u: goto label_32c3d8;
        case 0x32c3dcu: goto label_32c3dc;
        case 0x32c3e0u: goto label_32c3e0;
        case 0x32c3e4u: goto label_32c3e4;
        case 0x32c3e8u: goto label_32c3e8;
        case 0x32c3ecu: goto label_32c3ec;
        case 0x32c3f0u: goto label_32c3f0;
        case 0x32c3f4u: goto label_32c3f4;
        case 0x32c3f8u: goto label_32c3f8;
        case 0x32c3fcu: goto label_32c3fc;
        case 0x32c400u: goto label_32c400;
        case 0x32c404u: goto label_32c404;
        case 0x32c408u: goto label_32c408;
        case 0x32c40cu: goto label_32c40c;
        case 0x32c410u: goto label_32c410;
        case 0x32c414u: goto label_32c414;
        case 0x32c418u: goto label_32c418;
        case 0x32c41cu: goto label_32c41c;
        case 0x32c420u: goto label_32c420;
        case 0x32c424u: goto label_32c424;
        case 0x32c428u: goto label_32c428;
        case 0x32c42cu: goto label_32c42c;
        case 0x32c430u: goto label_32c430;
        case 0x32c434u: goto label_32c434;
        case 0x32c438u: goto label_32c438;
        case 0x32c43cu: goto label_32c43c;
        case 0x32c440u: goto label_32c440;
        case 0x32c444u: goto label_32c444;
        case 0x32c448u: goto label_32c448;
        case 0x32c44cu: goto label_32c44c;
        case 0x32c450u: goto label_32c450;
        case 0x32c454u: goto label_32c454;
        case 0x32c458u: goto label_32c458;
        case 0x32c45cu: goto label_32c45c;
        case 0x32c460u: goto label_32c460;
        case 0x32c464u: goto label_32c464;
        case 0x32c468u: goto label_32c468;
        case 0x32c46cu: goto label_32c46c;
        case 0x32c470u: goto label_32c470;
        case 0x32c474u: goto label_32c474;
        case 0x32c478u: goto label_32c478;
        case 0x32c47cu: goto label_32c47c;
        case 0x32c480u: goto label_32c480;
        case 0x32c484u: goto label_32c484;
        case 0x32c488u: goto label_32c488;
        case 0x32c48cu: goto label_32c48c;
        case 0x32c490u: goto label_32c490;
        case 0x32c494u: goto label_32c494;
        case 0x32c498u: goto label_32c498;
        case 0x32c49cu: goto label_32c49c;
        case 0x32c4a0u: goto label_32c4a0;
        case 0x32c4a4u: goto label_32c4a4;
        case 0x32c4a8u: goto label_32c4a8;
        case 0x32c4acu: goto label_32c4ac;
        case 0x32c4b0u: goto label_32c4b0;
        case 0x32c4b4u: goto label_32c4b4;
        case 0x32c4b8u: goto label_32c4b8;
        case 0x32c4bcu: goto label_32c4bc;
        case 0x32c4c0u: goto label_32c4c0;
        case 0x32c4c4u: goto label_32c4c4;
        case 0x32c4c8u: goto label_32c4c8;
        case 0x32c4ccu: goto label_32c4cc;
        case 0x32c4d0u: goto label_32c4d0;
        case 0x32c4d4u: goto label_32c4d4;
        case 0x32c4d8u: goto label_32c4d8;
        case 0x32c4dcu: goto label_32c4dc;
        case 0x32c4e0u: goto label_32c4e0;
        case 0x32c4e4u: goto label_32c4e4;
        case 0x32c4e8u: goto label_32c4e8;
        case 0x32c4ecu: goto label_32c4ec;
        case 0x32c4f0u: goto label_32c4f0;
        case 0x32c4f4u: goto label_32c4f4;
        case 0x32c4f8u: goto label_32c4f8;
        case 0x32c4fcu: goto label_32c4fc;
        case 0x32c500u: goto label_32c500;
        case 0x32c504u: goto label_32c504;
        case 0x32c508u: goto label_32c508;
        case 0x32c50cu: goto label_32c50c;
        case 0x32c510u: goto label_32c510;
        case 0x32c514u: goto label_32c514;
        case 0x32c518u: goto label_32c518;
        case 0x32c51cu: goto label_32c51c;
        case 0x32c520u: goto label_32c520;
        case 0x32c524u: goto label_32c524;
        case 0x32c528u: goto label_32c528;
        case 0x32c52cu: goto label_32c52c;
        case 0x32c530u: goto label_32c530;
        case 0x32c534u: goto label_32c534;
        default: break;
    }

    ctx->pc = 0x32c2f0u;

label_32c2f0:
    // 0x32c2f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_32c2f4:
    // 0x32c2f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32c2f8:
    // 0x32c2f8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x32c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_32c2fc:
    // 0x32c2fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32c2fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c300:
    // 0x32c300: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x32c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_32c304:
    // 0x32c304: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x32c304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c308:
    // 0x32c308: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_32c30c:
    // 0x32c30c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x32c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_32c310:
    // 0x32c310: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x32c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_32c314:
    // 0x32c314: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_32c318:
    // 0x32c318: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x32c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_32c31c:
    // 0x32c31c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x32c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_32c320:
    // 0x32c320: 0x12a00077  beqz        $s5, . + 4 + (0x77 << 2)
label_32c324:
    if (ctx->pc == 0x32C324u) {
        ctx->pc = 0x32C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C320u;
        // 0x32c324: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C328u;
        goto label_32c328;
    }
    ctx->pc = 0x32C320u;
    {
        const bool branch_taken_0x32c320 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C320u;
        // 0x32c324: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c320) {
            ctx->pc = 0x32C500u;
            goto label_32c500;
        }
    }
    ctx->pc = 0x32C328u;
label_32c328:
    // 0x32c328: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x32c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_32c32c:
    // 0x32c32c: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
label_32c330:
    if (ctx->pc == 0x32C330u) {
        ctx->pc = 0x32C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C32Cu;
        // 0x32c330: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C334u;
        goto label_32c334;
    }
    ctx->pc = 0x32C32Cu;
    {
        const bool branch_taken_0x32c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c32c) {
            ctx->pc = 0x32C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C32Cu;
            // 0x32c330: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C4F8u;
            goto label_32c4f8;
        }
    }
    ctx->pc = 0x32C334u;
label_32c334:
    // 0x32c334: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x32c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_32c338:
    // 0x32c338: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_32c33c:
    if (ctx->pc == 0x32C33Cu) {
        ctx->pc = 0x32C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C338u;
        // 0x32c33c: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C340u;
        goto label_32c340;
    }
    ctx->pc = 0x32C338u;
    {
        const bool branch_taken_0x32c338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C338u;
        // 0x32c33c: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c338) {
            ctx->pc = 0x32C358u;
            goto label_32c358;
        }
    }
    ctx->pc = 0x32C340u;
label_32c340:
    // 0x32c340: 0xc0ec7e8  jal         func_3B1FA0
label_32c344:
    if (ctx->pc == 0x32C344u) {
        ctx->pc = 0x32C348u;
        goto label_32c348;
    }
    ctx->pc = 0x32C340u;
    SET_GPR_U32(ctx, 31, 0x32C348u);
    ctx->pc = 0x3B1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA0u, 0x32C340u, 0x32C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C348u;
label_32c348:
    // 0x32c348: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32c348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c34c:
    // 0x32c34c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c350:
    // 0x32c350: 0xc0ebf52  jal         func_3AFD48
label_32c354:
    if (ctx->pc == 0x32C354u) {
        ctx->pc = 0x32C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C350u;
        // 0x32c354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C358u;
        goto label_32c358;
    }
    ctx->pc = 0x32C350u;
    SET_GPR_U32(ctx, 31, 0x32C358u);
    ctx->pc = 0x32C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C350u;
    // 0x32c354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x32C350u, 0x32C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C358u;
label_32c358:
    // 0x32c358: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32c35c:
    // 0x32c35c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32c360:
    // 0x32c360: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_32c364:
    if (ctx->pc == 0x32C364u) {
        ctx->pc = 0x32C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C360u;
        // 0x32c364: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C368u;
        goto label_32c368;
    }
    ctx->pc = 0x32C360u;
    {
        const bool branch_taken_0x32c360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c360) {
            ctx->pc = 0x32C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C360u;
            // 0x32c364: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C37Cu;
            goto label_32c37c;
        }
    }
    ctx->pc = 0x32C368u;
label_32c368:
    // 0x32c368: 0xc1036d2  jal         func_40DB48
label_32c36c:
    if (ctx->pc == 0x32C36Cu) {
        ctx->pc = 0x32C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C368u;
        // 0x32c36c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C370u;
        goto label_32c370;
    }
    ctx->pc = 0x32C368u;
    SET_GPR_U32(ctx, 31, 0x32C370u);
    ctx->pc = 0x32C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C368u;
    // 0x32c36c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x32C368u, 0x32C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C370u;
label_32c370:
    // 0x32c370: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32c370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c374:
    // 0x32c374: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32c378:
    // 0x32c378: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32c37c:
    // 0x32c37c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_32c380:
    if (ctx->pc == 0x32C380u) {
        ctx->pc = 0x32C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C37Cu;
        // 0x32c380: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C384u;
        goto label_32c384;
    }
    ctx->pc = 0x32C37Cu;
    {
        const bool branch_taken_0x32c37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C37Cu;
        // 0x32c380: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c37c) {
            ctx->pc = 0x32C390u;
            goto label_32c390;
        }
    }
    ctx->pc = 0x32C384u;
label_32c384:
    // 0x32c384: 0xc10376a  jal         func_40DDA8
label_32c388:
    if (ctx->pc == 0x32C388u) {
        ctx->pc = 0x32C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C384u;
        // 0x32c388: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C38Cu;
        goto label_32c38c;
    }
    ctx->pc = 0x32C384u;
    SET_GPR_U32(ctx, 31, 0x32C38Cu);
    ctx->pc = 0x32C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C384u;
    // 0x32c388: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x32C384u, 0x32C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C38Cu;
label_32c38c:
    // 0x32c38c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x32c38cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32c390:
    // 0x32c390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c394:
    // 0x32c394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32c398:
    // 0x32c398: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x32c398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_32c39c:
    // 0x32c39c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x32c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_32c3a0:
    // 0x32c3a0: 0x83a00a  movz        $s4, $a0, $v1
    ctx->pc = 0x32c3a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_32c3a4:
    // 0x32c3a4: 0x8ee50068  lw          $a1, 0x68($s7)
    ctx->pc = 0x32c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_32c3a8:
    // 0x32c3a8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x32c3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_32c3ac:
    // 0x32c3ac: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x32c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_32c3b0:
    // 0x32c3b0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_32c3b4:
    if (ctx->pc == 0x32C3B4u) {
        ctx->pc = 0x32C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3B0u;
        // 0x32c3b4: 0x2c2f021  addu        $fp, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3B8u;
        goto label_32c3b8;
    }
    ctx->pc = 0x32C3B0u;
    {
        const bool branch_taken_0x32c3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3B0u;
        // 0x32c3b4: 0x2c2f021  addu        $fp, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c3b0) {
            ctx->pc = 0x32C418u;
            goto label_32c418;
        }
    }
    ctx->pc = 0x32C3B8u;
label_32c3b8:
    // 0x32c3b8: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x32c3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_32c3bc:
    // 0x32c3bc: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x32c3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_32c3c0:
    // 0x32c3c0: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_32c3c4:
    // 0x32c3c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x32c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32c3c8:
    // 0x32c3c8: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x32c3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_32c3cc:
    // 0x32c3cc: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x32c3ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_32c3d0:
    // 0x32c3d0: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x32c3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_32c3d4:
    // 0x32c3d4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x32c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_32c3d8:
    // 0x32c3d8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x32c3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_32c3dc:
    // 0x32c3dc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c3e0:
    // 0x32c3e0: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x32c3e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_32c3e4:
    // 0x32c3e4: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x32c3e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_32c3e8:
    // 0x32c3e8: 0x40f809  jalr        $v0
label_32c3ec:
    if (ctx->pc == 0x32C3ECu) {
        ctx->pc = 0x32C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3E8u;
        // 0x32c3ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3F0u;
        goto label_32c3f0;
    }
    ctx->pc = 0x32C3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C3F0u);
        ctx->pc = 0x32C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3E8u;
        // 0x32c3ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C3E8u, 0x32C3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C3F0u;
label_32c3f0:
    // 0x32c3f0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c3f4:
    // 0x32c3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c3f8:
    // 0x32c3f8: 0x40f809  jalr        $v0
label_32c3fc:
    if (ctx->pc == 0x32C3FCu) {
        ctx->pc = 0x32C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3F8u;
        // 0x32c3fc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C400u;
        goto label_32c400;
    }
    ctx->pc = 0x32C3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C400u);
        ctx->pc = 0x32C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3F8u;
        // 0x32c3fc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C3F8u, 0x32C400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C400u;
label_32c400:
    // 0x32c400: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c404:
    // 0x32c404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c408:
    // 0x32c408: 0x40f809  jalr        $v0
label_32c40c:
    if (ctx->pc == 0x32C40Cu) {
        ctx->pc = 0x32C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C408u;
        // 0x32c40c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C410u;
        goto label_32c410;
    }
    ctx->pc = 0x32C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C410u);
        ctx->pc = 0x32C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C408u;
        // 0x32c40c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C408u, 0x32C410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C410u;
label_32c410:
    // 0x32c410: 0x10000007  b           . + 4 + (0x7 << 2)
label_32c414:
    if (ctx->pc == 0x32C414u) {
        ctx->pc = 0x32C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C410u;
        // 0x32c414: 0xc6c10004  lwc1        $f1, 0x4($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C418u;
        goto label_32c418;
    }
    ctx->pc = 0x32C410u;
    {
        const bool branch_taken_0x32c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C410u;
        // 0x32c414: 0xc6c10004  lwc1        $f1, 0x4($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c410) {
            ctx->pc = 0x32C430u;
            goto label_32c430;
        }
    }
    ctx->pc = 0x32C418u;
label_32c418:
    // 0x32c418: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32c41c:
    // 0x32c41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c420:
    // 0x32c420: 0x8c62e8a0  lw          $v0, -0x1760($v1)
    ctx->pc = 0x32c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961312)));
label_32c424:
    // 0x32c424: 0x40f809  jalr        $v0
label_32c428:
    if (ctx->pc == 0x32C428u) {
        ctx->pc = 0x32C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C424u;
        // 0x32c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C42Cu;
        goto label_32c42c;
    }
    ctx->pc = 0x32C424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C42Cu);
        ctx->pc = 0x32C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C424u;
        // 0x32c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C424u, 0x32C42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C42Cu;
label_32c42c:
    // 0x32c42c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x32c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c430:
    // 0x32c430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c434:
    // 0x32c434: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32c434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c438:
    // 0x32c438: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x32c438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_32c43c:
    // 0x32c43c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x32c43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_32c440:
    // 0x32c440: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x32c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c444:
    // 0x32c444: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x32c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_32c448:
    // 0x32c448: 0xc0ec7fe  jal         func_3B1FF8
label_32c44c:
    if (ctx->pc == 0x32C44Cu) {
        ctx->pc = 0x32C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C448u;
        // 0x32c44c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C450u;
        goto label_32c450;
    }
    ctx->pc = 0x32C448u;
    SET_GPR_U32(ctx, 31, 0x32C450u);
    ctx->pc = 0x32C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C448u;
    // 0x32c44c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FF8u, 0x32C448u, 0x32C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C450u;
label_32c450:
    // 0x32c450: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x32c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32c454:
    // 0x32c454: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x32c454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_32c458:
    // 0x32c458: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x32c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32c45c:
    // 0x32c45c: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_32c460:
    // 0x32c460: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x32c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c464:
    // 0x32c464: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x32c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c468:
    // 0x32c468: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x32c468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_32c46c:
    // 0x32c46c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32c46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32c470:
    // 0x32c470: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32c470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32c474:
    // 0x32c474: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x32c474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_32c478:
    // 0x32c478: 0xe604074c  swc1        $f4, 0x74C($s0)
    ctx->pc = 0x32c478u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1868), bits); }
label_32c47c:
    // 0x32c47c: 0xe6030750  swc1        $f3, 0x750($s0)
    ctx->pc = 0x32c47cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1872), bits); }
label_32c480:
    // 0x32c480: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x32c480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_32c484:
    // 0x32c484: 0xae170728  sw          $s7, 0x728($s0)
    ctx->pc = 0x32c484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 23));
label_32c488:
    // 0x32c488: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x32c488u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_32c48c:
    // 0x32c48c: 0xe600075c  swc1        $f0, 0x75C($s0)
    ctx->pc = 0x32c48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1884), bits); }
label_32c490:
    // 0x32c490: 0xe6010760  swc1        $f1, 0x760($s0)
    ctx->pc = 0x32c490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1888), bits); }
label_32c494:
    // 0x32c494: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x32c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c498:
    // 0x32c498: 0xe6000740  swc1        $f0, 0x740($s0)
    ctx->pc = 0x32c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
label_32c49c:
    // 0x32c49c: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x32c49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c4a0:
    // 0x32c4a0: 0xe6020744  swc1        $f2, 0x744($s0)
    ctx->pc = 0x32c4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1860), bits); }
label_32c4a4:
    // 0x32c4a4: 0xc1111f8  jal         func_4447E0
label_32c4a8:
    if (ctx->pc == 0x32C4A8u) {
        ctx->pc = 0x32C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4A4u;
        // 0x32c4a8: 0xe6010740  swc1        $f1, 0x740($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4ACu;
        goto label_32c4ac;
    }
    ctx->pc = 0x32C4A4u;
    SET_GPR_U32(ctx, 31, 0x32C4ACu);
    ctx->pc = 0x32C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4A4u;
    // 0x32c4a8: 0xe6010740  swc1        $f1, 0x740($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447E0u, 0x32C4A4u, 0x32C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4ACu;
label_32c4ac:
    // 0x32c4ac: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x32c4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_32c4b0:
    // 0x32c4b0: 0x8e080504  lw          $t0, 0x504($s0)
    ctx->pc = 0x32c4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_32c4b4:
    // 0x32c4b4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x32c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_32c4b8:
    // 0x32c4b8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x32c4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32c4bc:
    // 0x32c4bc: 0xae030764  sw          $v1, 0x764($s0)
    ctx->pc = 0x32c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 3));
label_32c4c0:
    // 0x32c4c0: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_32c4c4:
    // 0x32c4c4: 0x8e0407f0  lw          $a0, 0x7F0($s0)
    ctx->pc = 0x32c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2032)));
label_32c4c8:
    // 0x32c4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c4cc:
    // 0x32c4cc: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x32c4ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1892)));
label_32c4d0:
    // 0x32c4d0: 0xae160738  sw          $s6, 0x738($s0)
    ctx->pc = 0x32c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 22));
label_32c4d4:
    // 0x32c4d4: 0xae1e073c  sw          $fp, 0x73C($s0)
    ctx->pc = 0x32c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 30));
label_32c4d8:
    // 0x32c4d8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x32c4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_32c4dc:
    // 0x32c4dc: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x32c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
label_32c4e0:
    // 0x32c4e0: 0xc111718  jal         func_445C60
label_32c4e4:
    if (ctx->pc == 0x32C4E4u) {
        ctx->pc = 0x32C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4E0u;
        // 0x32c4e4: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4E8u;
        goto label_32c4e8;
    }
    ctx->pc = 0x32C4E0u;
    SET_GPR_U32(ctx, 31, 0x32C4E8u);
    ctx->pc = 0x32C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4E0u;
    // 0x32c4e4: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x32C4E0u, 0x32C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4E8u;
label_32c4e8:
    // 0x32c4e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_32c4ec:
    if (ctx->pc == 0x32C4ECu) {
        ctx->pc = 0x32C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4E8u;
        // 0x32c4ec: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4F0u;
        goto label_32c4f0;
    }
    ctx->pc = 0x32C4E8u;
    {
        const bool branch_taken_0x32c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c4e8) {
            ctx->pc = 0x32C4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C4E8u;
            // 0x32c4ec: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C4F8u;
            goto label_32c4f8;
        }
    }
    ctx->pc = 0x32C4F0u;
label_32c4f0:
    // 0x32c4f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_32c4f4:
    if (ctx->pc == 0x32C4F4u) {
        ctx->pc = 0x32C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4F0u;
        // 0x32c4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4F8u;
        goto label_32c4f8;
    }
    ctx->pc = 0x32C4F0u;
    {
        const bool branch_taken_0x32c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4F0u;
        // 0x32c4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4f0) {
            ctx->pc = 0x32C504u;
            goto label_32c504;
        }
    }
    ctx->pc = 0x32C4F8u;
label_32c4f8:
    // 0x32c4f8: 0xc0cb0bc  jal         func_32C2F0
label_32c4fc:
    if (ctx->pc == 0x32C4FCu) {
        ctx->pc = 0x32C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4F8u;
        // 0x32c4fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C500u;
        goto label_32c500;
    }
    ctx->pc = 0x32C4F8u;
    SET_GPR_U32(ctx, 31, 0x32C500u);
    ctx->pc = 0x32C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4F8u;
    // 0x32c4fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C2F0u;
    goto label_32c2f0;
    ctx->pc = 0x32C500u;
label_32c500:
    // 0x32c500: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x32c500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c504:
    // 0x32c504: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32c504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32c508:
    // 0x32c508: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x32c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32c50c:
    // 0x32c50c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x32c50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32c510:
    // 0x32c510: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x32c510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32c514:
    // 0x32c514: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32c514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32c518:
    // 0x32c518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32c518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32c51c:
    // 0x32c51c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x32c51cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c520:
    // 0x32c520: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x32c520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c524:
    // 0x32c524: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x32c524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c528:
    // 0x32c528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c52c:
    // 0x32c52c: 0x3e00008  jr          $ra
label_32c530:
    if (ctx->pc == 0x32C530u) {
        ctx->pc = 0x32C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C52Cu;
        // 0x32c530: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C534u;
        goto label_32c534;
    }
    ctx->pc = 0x32C52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C52Cu;
        // 0x32c530: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C534u;
label_32c534:
    // 0x32c534: 0x0  nop
    ctx->pc = 0x32c534u;
    // NOP
    ctx->pc = 0x32c538u;
}
