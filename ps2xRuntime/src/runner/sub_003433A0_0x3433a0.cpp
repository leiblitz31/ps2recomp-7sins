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

// Function: sub_003433A0
// Address: 0x3433a0 - 0x3434a8
void sub_003433A0_0x3433a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003433A0_0x3433a0");
#endif

    switch (ctx->pc) {
        case 0x3433a0u: goto label_3433a0;
        case 0x3433a4u: goto label_3433a4;
        case 0x3433a8u: goto label_3433a8;
        case 0x3433acu: goto label_3433ac;
        case 0x3433b0u: goto label_3433b0;
        case 0x3433b4u: goto label_3433b4;
        case 0x3433b8u: goto label_3433b8;
        case 0x3433bcu: goto label_3433bc;
        case 0x3433c0u: goto label_3433c0;
        case 0x3433c4u: goto label_3433c4;
        case 0x3433c8u: goto label_3433c8;
        case 0x3433ccu: goto label_3433cc;
        case 0x3433d0u: goto label_3433d0;
        case 0x3433d4u: goto label_3433d4;
        case 0x3433d8u: goto label_3433d8;
        case 0x3433dcu: goto label_3433dc;
        case 0x3433e0u: goto label_3433e0;
        case 0x3433e4u: goto label_3433e4;
        case 0x3433e8u: goto label_3433e8;
        case 0x3433ecu: goto label_3433ec;
        case 0x3433f0u: goto label_3433f0;
        case 0x3433f4u: goto label_3433f4;
        case 0x3433f8u: goto label_3433f8;
        case 0x3433fcu: goto label_3433fc;
        case 0x343400u: goto label_343400;
        case 0x343404u: goto label_343404;
        case 0x343408u: goto label_343408;
        case 0x34340cu: goto label_34340c;
        case 0x343410u: goto label_343410;
        case 0x343414u: goto label_343414;
        case 0x343418u: goto label_343418;
        case 0x34341cu: goto label_34341c;
        case 0x343420u: goto label_343420;
        case 0x343424u: goto label_343424;
        case 0x343428u: goto label_343428;
        case 0x34342cu: goto label_34342c;
        case 0x343430u: goto label_343430;
        case 0x343434u: goto label_343434;
        case 0x343438u: goto label_343438;
        case 0x34343cu: goto label_34343c;
        case 0x343440u: goto label_343440;
        case 0x343444u: goto label_343444;
        case 0x343448u: goto label_343448;
        case 0x34344cu: goto label_34344c;
        case 0x343450u: goto label_343450;
        case 0x343454u: goto label_343454;
        case 0x343458u: goto label_343458;
        case 0x34345cu: goto label_34345c;
        case 0x343460u: goto label_343460;
        case 0x343464u: goto label_343464;
        case 0x343468u: goto label_343468;
        case 0x34346cu: goto label_34346c;
        case 0x343470u: goto label_343470;
        case 0x343474u: goto label_343474;
        case 0x343478u: goto label_343478;
        case 0x34347cu: goto label_34347c;
        case 0x343480u: goto label_343480;
        case 0x343484u: goto label_343484;
        case 0x343488u: goto label_343488;
        case 0x34348cu: goto label_34348c;
        case 0x343490u: goto label_343490;
        case 0x343494u: goto label_343494;
        case 0x343498u: goto label_343498;
        case 0x34349cu: goto label_34349c;
        case 0x3434a0u: goto label_3434a0;
        case 0x3434a4u: goto label_3434a4;
        default: break;
    }

    ctx->pc = 0x3433a0u;

label_3433a0:
    // 0x3433a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3433a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3433a4:
    // 0x3433a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3433a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3433a8:
    // 0x3433a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3433a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3433ac:
    // 0x3433ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3433acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3433b0:
    // 0x3433b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3433b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3433b4:
    // 0x3433b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3433b8:
    // 0x3433b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3433b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3433bc:
    // 0x3433bc: 0x1c400033  bgtz        $v0, . + 4 + (0x33 << 2)
label_3433c0:
    if (ctx->pc == 0x3433C0u) {
        ctx->pc = 0x3433C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433BCu;
        // 0x3433c0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3433C4u;
        goto label_3433c4;
    }
    ctx->pc = 0x3433BCu;
    {
        const bool branch_taken_0x3433bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3433C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433BCu;
        // 0x3433c0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433bc) {
            ctx->pc = 0x34348Cu;
            goto label_34348c;
        }
    }
    ctx->pc = 0x3433C4u;
label_3433c4:
    // 0x3433c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3433c8:
    // 0x3433c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3433c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3433cc:
    // 0x3433cc: 0x2443c2c8  addiu       $v1, $v0, -0x3D38
    ctx->pc = 0x3433ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_3433d0:
    // 0x3433d0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x3433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_3433d4:
    // 0x3433d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3433d8:
    if (ctx->pc == 0x3433D8u) {
        ctx->pc = 0x3433D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433D4u;
        // 0x3433d8: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3433DCu;
        goto label_3433dc;
    }
    ctx->pc = 0x3433D4u;
    {
        const bool branch_taken_0x3433d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3433D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433D4u;
        // 0x3433d8: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433d4) {
            ctx->pc = 0x343440u;
            goto label_343440;
        }
    }
    ctx->pc = 0x3433DCu;
label_3433dc:
    // 0x3433dc: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_3433e0:
    if (ctx->pc == 0x3433E0u) {
        ctx->pc = 0x3433E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433DCu;
        // 0x3433e0: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3433E4u;
        goto label_3433e4;
    }
    ctx->pc = 0x3433DCu;
    {
        const bool branch_taken_0x3433dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3433dc) {
            ctx->pc = 0x3433E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3433DCu;
            // 0x3433e0: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343404u;
            goto label_343404;
        }
    }
    ctx->pc = 0x3433E4u;
label_3433e4:
    // 0x3433e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3433e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3433e8:
    // 0x3433e8: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
label_3433ec:
    if (ctx->pc == 0x3433ECu) {
        ctx->pc = 0x3433ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433E8u;
        // 0x3433ec: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3433F0u;
        goto label_3433f0;
    }
    ctx->pc = 0x3433E8u;
    {
        const bool branch_taken_0x3433e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3433e8) {
            ctx->pc = 0x3433ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3433E8u;
            // 0x3433ec: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343404u;
            goto label_343404;
        }
    }
    ctx->pc = 0x3433F0u;
label_3433f0:
    // 0x3433f0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3433f4:
    if (ctx->pc == 0x3433F4u) {
        ctx->pc = 0x3433F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433F0u;
        // 0x3433f4: 0xac600064  sw          $zero, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3433F8u;
        goto label_3433f8;
    }
    ctx->pc = 0x3433F0u;
    {
        const bool branch_taken_0x3433f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3433F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433F0u;
        // 0x3433f4: 0xac600064  sw          $zero, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433f0) {
            ctx->pc = 0x343440u;
            goto label_343440;
        }
    }
    ctx->pc = 0x3433F8u;
label_3433f8:
    // 0x3433f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3433f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3433fc:
    // 0x3433fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_343400:
    if (ctx->pc == 0x343400u) {
        ctx->pc = 0x343400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433FCu;
        // 0x343400: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343404u;
        goto label_343404;
    }
    ctx->pc = 0x3433FCu;
    {
        const bool branch_taken_0x3433fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433FCu;
        // 0x343400: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433fc) {
            ctx->pc = 0x343430u;
            goto label_343430;
        }
    }
    ctx->pc = 0x343404u;
label_343404:
    // 0x343404: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x343404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_343408:
    // 0x343408: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x343408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34340c:
    // 0x34340c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343410:
    // 0x343410: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x343410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_343414:
    // 0x343414: 0x0  nop
    ctx->pc = 0x343414u;
    // NOP
label_343418:
    // 0x343418: 0x5050fff7  beql        $v0, $s0, . + 4 + (-0x9 << 2)
label_34341c:
    if (ctx->pc == 0x34341Cu) {
        ctx->pc = 0x34341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343418u;
        // 0x34341c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343420u;
        goto label_343420;
    }
    ctx->pc = 0x343418u;
    {
        const bool branch_taken_0x343418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x343418) {
            ctx->pc = 0x34341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343418u;
            // 0x34341c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3433F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3433f8;
        }
    }
    ctx->pc = 0x343420u;
label_343420:
    // 0x343420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x343420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343424:
    // 0x343424: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x343424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_343428:
    // 0x343428: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_34342c:
    if (ctx->pc == 0x34342Cu) {
        ctx->pc = 0x343430u;
        goto label_343430;
    }
    ctx->pc = 0x343428u;
    {
        const bool branch_taken_0x343428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x343428) {
            ctx->pc = 0x343418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343418;
        }
    }
    ctx->pc = 0x343430u;
label_343430:
    // 0x343430: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38
    ctx->pc = 0x343430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_343434:
    // 0x343434: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x343434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_343438:
    // 0x343438: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_34343c:
    if (ctx->pc == 0x34343Cu) {
        ctx->pc = 0x34343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343438u;
        // 0x34343c: 0xac640064  sw          $a0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343440u;
        goto label_343440;
    }
    ctx->pc = 0x343438u;
    {
        const bool branch_taken_0x343438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x343438) {
            ctx->pc = 0x34343Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343438u;
            // 0x34343c: 0xac640064  sw          $a0, 0x64($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343440u;
            goto label_343440;
        }
    }
    ctx->pc = 0x343440u;
label_343440:
    // 0x343440: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_343444:
    // 0x343444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_343448:
    if (ctx->pc == 0x343448u) {
        ctx->pc = 0x343448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343444u;
        // 0x343448: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34344Cu;
        goto label_34344c;
    }
    ctx->pc = 0x343444u;
    {
        const bool branch_taken_0x343444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343444u;
        // 0x343448: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343444) {
            ctx->pc = 0x343458u;
            goto label_343458;
        }
    }
    ctx->pc = 0x34344Cu;
label_34344c:
    // 0x34344c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x34344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_343450:
    // 0x343450: 0x40f809  jalr        $v0
label_343454:
    if (ctx->pc == 0x343454u) {
        ctx->pc = 0x343458u;
        goto label_343458;
    }
    ctx->pc = 0x343450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343450u, 0x343458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343458u;
label_343458:
    // 0x343458: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x343458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_34345c:
    // 0x34345c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_343460:
    if (ctx->pc == 0x343460u) {
        ctx->pc = 0x343460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34345Cu;
        // 0x343460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343464u;
        goto label_343464;
    }
    ctx->pc = 0x34345Cu;
    {
        const bool branch_taken_0x34345c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34345c) {
            ctx->pc = 0x343460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34345Cu;
            // 0x343460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343470u;
            goto label_343470;
        }
    }
    ctx->pc = 0x343464u;
label_343464:
    // 0x343464: 0xc0d1054  jal         func_344150
label_343468:
    if (ctx->pc == 0x343468u) {
        ctx->pc = 0x34346Cu;
        goto label_34346c;
    }
    ctx->pc = 0x343464u;
    SET_GPR_U32(ctx, 31, 0x34346Cu);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x343464u, 0x34346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34346Cu;
label_34346c:
    // 0x34346c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343470:
    // 0x343470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343474:
    // 0x343474: 0xc0bb7e6  jal         func_2EDF98
label_343478:
    if (ctx->pc == 0x343478u) {
        ctx->pc = 0x343478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343474u;
        // 0x343478: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34347Cu;
        goto label_34347c;
    }
    ctx->pc = 0x343474u;
    SET_GPR_U32(ctx, 31, 0x34347Cu);
    ctx->pc = 0x343478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343474u;
    // 0x343478: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x343474u, 0x34347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34347Cu;
label_34347c:
    // 0x34347c: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x34347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_343480:
    // 0x343480: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x343480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_343484:
    // 0x343484: 0x40f809  jalr        $v0
label_343488:
    if (ctx->pc == 0x343488u) {
        ctx->pc = 0x343488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343484u;
        // 0x343488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34348Cu;
        goto label_34348c;
    }
    ctx->pc = 0x343484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34348Cu);
        ctx->pc = 0x343488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343484u;
        // 0x343488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343484u, 0x34348Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34348Cu;
label_34348c:
    // 0x34348c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343490:
    // 0x343490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x343490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343494:
    // 0x343494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343498:
    // 0x343498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34349c:
    // 0x34349c: 0x3e00008  jr          $ra
label_3434a0:
    if (ctx->pc == 0x3434A0u) {
        ctx->pc = 0x3434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34349Cu;
        // 0x3434a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3434A4u;
        goto label_3434a4;
    }
    ctx->pc = 0x34349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34349Cu;
        // 0x3434a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3434A4u;
label_3434a4:
    // 0x3434a4: 0x0  nop
    ctx->pc = 0x3434a4u;
    // NOP
    ctx->pc = 0x3434a8u;
}
