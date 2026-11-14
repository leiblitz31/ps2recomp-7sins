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

// Function: sub_0041D388
// Address: 0x41d388 - 0x41d4a8
void sub_0041D388_0x41d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D388_0x41d388");
#endif

    switch (ctx->pc) {
        case 0x41d388u: goto label_41d388;
        case 0x41d38cu: goto label_41d38c;
        case 0x41d390u: goto label_41d390;
        case 0x41d394u: goto label_41d394;
        case 0x41d398u: goto label_41d398;
        case 0x41d39cu: goto label_41d39c;
        case 0x41d3a0u: goto label_41d3a0;
        case 0x41d3a4u: goto label_41d3a4;
        case 0x41d3a8u: goto label_41d3a8;
        case 0x41d3acu: goto label_41d3ac;
        case 0x41d3b0u: goto label_41d3b0;
        case 0x41d3b4u: goto label_41d3b4;
        case 0x41d3b8u: goto label_41d3b8;
        case 0x41d3bcu: goto label_41d3bc;
        case 0x41d3c0u: goto label_41d3c0;
        case 0x41d3c4u: goto label_41d3c4;
        case 0x41d3c8u: goto label_41d3c8;
        case 0x41d3ccu: goto label_41d3cc;
        case 0x41d3d0u: goto label_41d3d0;
        case 0x41d3d4u: goto label_41d3d4;
        case 0x41d3d8u: goto label_41d3d8;
        case 0x41d3dcu: goto label_41d3dc;
        case 0x41d3e0u: goto label_41d3e0;
        case 0x41d3e4u: goto label_41d3e4;
        case 0x41d3e8u: goto label_41d3e8;
        case 0x41d3ecu: goto label_41d3ec;
        case 0x41d3f0u: goto label_41d3f0;
        case 0x41d3f4u: goto label_41d3f4;
        case 0x41d3f8u: goto label_41d3f8;
        case 0x41d3fcu: goto label_41d3fc;
        case 0x41d400u: goto label_41d400;
        case 0x41d404u: goto label_41d404;
        case 0x41d408u: goto label_41d408;
        case 0x41d40cu: goto label_41d40c;
        case 0x41d410u: goto label_41d410;
        case 0x41d414u: goto label_41d414;
        case 0x41d418u: goto label_41d418;
        case 0x41d41cu: goto label_41d41c;
        case 0x41d420u: goto label_41d420;
        case 0x41d424u: goto label_41d424;
        case 0x41d428u: goto label_41d428;
        case 0x41d42cu: goto label_41d42c;
        case 0x41d430u: goto label_41d430;
        case 0x41d434u: goto label_41d434;
        case 0x41d438u: goto label_41d438;
        case 0x41d43cu: goto label_41d43c;
        case 0x41d440u: goto label_41d440;
        case 0x41d444u: goto label_41d444;
        case 0x41d448u: goto label_41d448;
        case 0x41d44cu: goto label_41d44c;
        case 0x41d450u: goto label_41d450;
        case 0x41d454u: goto label_41d454;
        case 0x41d458u: goto label_41d458;
        case 0x41d45cu: goto label_41d45c;
        case 0x41d460u: goto label_41d460;
        case 0x41d464u: goto label_41d464;
        case 0x41d468u: goto label_41d468;
        case 0x41d46cu: goto label_41d46c;
        case 0x41d470u: goto label_41d470;
        case 0x41d474u: goto label_41d474;
        case 0x41d478u: goto label_41d478;
        case 0x41d47cu: goto label_41d47c;
        case 0x41d480u: goto label_41d480;
        case 0x41d484u: goto label_41d484;
        case 0x41d488u: goto label_41d488;
        case 0x41d48cu: goto label_41d48c;
        case 0x41d490u: goto label_41d490;
        case 0x41d494u: goto label_41d494;
        case 0x41d498u: goto label_41d498;
        case 0x41d49cu: goto label_41d49c;
        case 0x41d4a0u: goto label_41d4a0;
        case 0x41d4a4u: goto label_41d4a4;
        default: break;
    }

    ctx->pc = 0x41d388u;

label_41d388:
    // 0x41d388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d38c:
    // 0x41d38c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x41d38cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41d390:
    // 0x41d390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d394:
    // 0x41d394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d398:
    // 0x41d398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d39c:
    // 0x41d39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d3a0:
    // 0x41d3a0: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x41d3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_41d3a4:
    // 0x41d3a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x41d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_41d3a8:
    // 0x41d3a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_41d3ac:
    if (ctx->pc == 0x41D3ACu) {
        ctx->pc = 0x41D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3A8u;
        // 0x41d3ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D3B0u;
        goto label_41d3b0;
    }
    ctx->pc = 0x41D3A8u;
    {
        const bool branch_taken_0x41d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3A8u;
        // 0x41d3ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d3a8) {
            ctx->pc = 0x41D400u;
            goto label_41d400;
        }
    }
    ctx->pc = 0x41D3B0u;
label_41d3b0:
    // 0x41d3b0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x41d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_41d3b4:
    // 0x41d3b4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d3b8:
    // 0x41d3b8: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x41d3b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_41d3bc:
    // 0x41d3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d3c0:
    // 0x41d3c0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x41d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_41d3c4:
    // 0x41d3c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d3c8:
    // 0x41d3c8: 0x8c62e8f8  lw          $v0, -0x1708($v1)
    ctx->pc = 0x41d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961400)));
label_41d3cc:
    // 0x41d3cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d3d0:
    // 0x41d3d0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x41d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_41d3d4:
    // 0x41d3d4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x41d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_41d3d8:
    // 0x41d3d8: 0x95270000  lhu         $a3, 0x0($t1)
    ctx->pc = 0x41d3d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_41d3dc:
    // 0x41d3dc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x41d3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_41d3e0:
    // 0x41d3e0: 0xa608001c  sh          $t0, 0x1C($s0)
    ctx->pc = 0x41d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 8));
label_41d3e4:
    // 0x41d3e4: 0x95270004  lhu         $a3, 0x4($t1)
    ctx->pc = 0x41d3e4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_41d3e8:
    // 0x41d3e8: 0x9623001e  lhu         $v1, 0x1E($s1)
    ctx->pc = 0x41d3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_41d3ec:
    // 0x41d3ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x41d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_41d3f0:
    // 0x41d3f0: 0x40f809  jalr        $v0
label_41d3f4:
    if (ctx->pc == 0x41D3F4u) {
        ctx->pc = 0x41D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3F0u;
        // 0x41d3f4: 0xa603001e  sh          $v1, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D3F8u;
        goto label_41d3f8;
    }
    ctx->pc = 0x41D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D3F8u);
        ctx->pc = 0x41D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3F0u;
        // 0x41d3f4: 0xa603001e  sh          $v1, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D3F0u, 0x41D3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D3F8u;
label_41d3f8:
    // 0x41d3f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_41d3fc:
    if (ctx->pc == 0x41D3FCu) {
        ctx->pc = 0x41D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3F8u;
        // 0x41d3fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D400u;
        goto label_41d400;
    }
    ctx->pc = 0x41D3F8u;
    {
        const bool branch_taken_0x41d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41d3f8) {
            ctx->pc = 0x41D3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41D3F8u;
            // 0x41d3fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41D408u;
            goto label_41d408;
        }
    }
    ctx->pc = 0x41D400u;
label_41d400:
    // 0x41d400: 0x10000003  b           . + 4 + (0x3 << 2)
label_41d404:
    if (ctx->pc == 0x41D404u) {
        ctx->pc = 0x41D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D400u;
        // 0x41d404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D408u;
        goto label_41d408;
    }
    ctx->pc = 0x41D400u;
    {
        const bool branch_taken_0x41d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D400u;
        // 0x41d404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d400) {
            ctx->pc = 0x41D410u;
            goto label_41d410;
        }
    }
    ctx->pc = 0x41D408u;
label_41d408:
    // 0x41d408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d40c:
    // 0x41d40c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41d410:
    // 0x41d410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d414:
    // 0x41d414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d418:
    // 0x41d418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d41c:
    // 0x41d41c: 0x3e00008  jr          $ra
label_41d420:
    if (ctx->pc == 0x41D420u) {
        ctx->pc = 0x41D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D41Cu;
        // 0x41d420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D424u;
        goto label_41d424;
    }
    ctx->pc = 0x41D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D41Cu;
        // 0x41d420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D424u;
label_41d424:
    // 0x41d424: 0x0  nop
    ctx->pc = 0x41d424u;
    // NOP
label_41d428:
    // 0x41d428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d42c:
    // 0x41d42c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d430:
    // 0x41d430: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d434:
    // 0x41d434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d438:
    // 0x41d438: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x41d438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_41d43c:
    // 0x41d43c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x41d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_41d440:
    // 0x41d440: 0x8c62e914  lw          $v0, -0x16EC($v1)
    ctx->pc = 0x41d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961428)));
label_41d444:
    // 0x41d444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41d444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d448:
    // 0x41d448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d44c:
    // 0x41d44c: 0x40f809  jalr        $v0
label_41d450:
    if (ctx->pc == 0x41D450u) {
        ctx->pc = 0x41D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D44Cu;
        // 0x41d450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D454u;
        goto label_41d454;
    }
    ctx->pc = 0x41D44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D454u);
        ctx->pc = 0x41D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D44Cu;
        // 0x41d450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D44Cu, 0x41D454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D454u;
label_41d454:
    // 0x41d454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d458:
    // 0x41d458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d45c:
    // 0x41d45c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d460:
    // 0x41d460: 0x3e00008  jr          $ra
label_41d464:
    if (ctx->pc == 0x41D464u) {
        ctx->pc = 0x41D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D460u;
        // 0x41d464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D468u;
        goto label_41d468;
    }
    ctx->pc = 0x41D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D460u;
        // 0x41d464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D468u;
label_41d468:
    // 0x41d468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d46c:
    // 0x41d46c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d470:
    // 0x41d470: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d474:
    // 0x41d474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d478:
    // 0x41d478: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x41d478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_41d47c:
    // 0x41d47c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x41d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_41d480:
    // 0x41d480: 0x8c62e90c  lw          $v0, -0x16F4($v1)
    ctx->pc = 0x41d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961420)));
label_41d484:
    // 0x41d484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41d484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d488:
    // 0x41d488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d48c:
    // 0x41d48c: 0x40f809  jalr        $v0
label_41d490:
    if (ctx->pc == 0x41D490u) {
        ctx->pc = 0x41D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D48Cu;
        // 0x41d490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D494u;
        goto label_41d494;
    }
    ctx->pc = 0x41D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D494u);
        ctx->pc = 0x41D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D48Cu;
        // 0x41d490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D48Cu, 0x41D494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D494u;
label_41d494:
    // 0x41d494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d498:
    // 0x41d498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d49c:
    // 0x41d49c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d4a0:
    // 0x41d4a0: 0x3e00008  jr          $ra
label_41d4a4:
    if (ctx->pc == 0x41D4A4u) {
        ctx->pc = 0x41D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4A0u;
        // 0x41d4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D4A8u;
        goto label_fallthrough_0x41d4a0;
    }
    ctx->pc = 0x41D4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4A0u;
        // 0x41d4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d4a0:
    ctx->pc = 0x41D4A8u;
}
