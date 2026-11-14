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

// Function: sub_0039A368
// Address: 0x39a368 - 0x39a550
void sub_0039A368_0x39a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A368_0x39a368");
#endif

    switch (ctx->pc) {
        case 0x39a368u: goto label_39a368;
        case 0x39a36cu: goto label_39a36c;
        case 0x39a370u: goto label_39a370;
        case 0x39a374u: goto label_39a374;
        case 0x39a378u: goto label_39a378;
        case 0x39a37cu: goto label_39a37c;
        case 0x39a380u: goto label_39a380;
        case 0x39a384u: goto label_39a384;
        case 0x39a388u: goto label_39a388;
        case 0x39a38cu: goto label_39a38c;
        case 0x39a390u: goto label_39a390;
        case 0x39a394u: goto label_39a394;
        case 0x39a398u: goto label_39a398;
        case 0x39a39cu: goto label_39a39c;
        case 0x39a3a0u: goto label_39a3a0;
        case 0x39a3a4u: goto label_39a3a4;
        case 0x39a3a8u: goto label_39a3a8;
        case 0x39a3acu: goto label_39a3ac;
        case 0x39a3b0u: goto label_39a3b0;
        case 0x39a3b4u: goto label_39a3b4;
        case 0x39a3b8u: goto label_39a3b8;
        case 0x39a3bcu: goto label_39a3bc;
        case 0x39a3c0u: goto label_39a3c0;
        case 0x39a3c4u: goto label_39a3c4;
        case 0x39a3c8u: goto label_39a3c8;
        case 0x39a3ccu: goto label_39a3cc;
        case 0x39a3d0u: goto label_39a3d0;
        case 0x39a3d4u: goto label_39a3d4;
        case 0x39a3d8u: goto label_39a3d8;
        case 0x39a3dcu: goto label_39a3dc;
        case 0x39a3e0u: goto label_39a3e0;
        case 0x39a3e4u: goto label_39a3e4;
        case 0x39a3e8u: goto label_39a3e8;
        case 0x39a3ecu: goto label_39a3ec;
        case 0x39a3f0u: goto label_39a3f0;
        case 0x39a3f4u: goto label_39a3f4;
        case 0x39a3f8u: goto label_39a3f8;
        case 0x39a3fcu: goto label_39a3fc;
        case 0x39a400u: goto label_39a400;
        case 0x39a404u: goto label_39a404;
        case 0x39a408u: goto label_39a408;
        case 0x39a40cu: goto label_39a40c;
        case 0x39a410u: goto label_39a410;
        case 0x39a414u: goto label_39a414;
        case 0x39a418u: goto label_39a418;
        case 0x39a41cu: goto label_39a41c;
        case 0x39a420u: goto label_39a420;
        case 0x39a424u: goto label_39a424;
        case 0x39a428u: goto label_39a428;
        case 0x39a42cu: goto label_39a42c;
        case 0x39a430u: goto label_39a430;
        case 0x39a434u: goto label_39a434;
        case 0x39a438u: goto label_39a438;
        case 0x39a43cu: goto label_39a43c;
        case 0x39a440u: goto label_39a440;
        case 0x39a444u: goto label_39a444;
        case 0x39a448u: goto label_39a448;
        case 0x39a44cu: goto label_39a44c;
        case 0x39a450u: goto label_39a450;
        case 0x39a454u: goto label_39a454;
        case 0x39a458u: goto label_39a458;
        case 0x39a45cu: goto label_39a45c;
        case 0x39a460u: goto label_39a460;
        case 0x39a464u: goto label_39a464;
        case 0x39a468u: goto label_39a468;
        case 0x39a46cu: goto label_39a46c;
        case 0x39a470u: goto label_39a470;
        case 0x39a474u: goto label_39a474;
        case 0x39a478u: goto label_39a478;
        case 0x39a47cu: goto label_39a47c;
        case 0x39a480u: goto label_39a480;
        case 0x39a484u: goto label_39a484;
        case 0x39a488u: goto label_39a488;
        case 0x39a48cu: goto label_39a48c;
        case 0x39a490u: goto label_39a490;
        case 0x39a494u: goto label_39a494;
        case 0x39a498u: goto label_39a498;
        case 0x39a49cu: goto label_39a49c;
        case 0x39a4a0u: goto label_39a4a0;
        case 0x39a4a4u: goto label_39a4a4;
        case 0x39a4a8u: goto label_39a4a8;
        case 0x39a4acu: goto label_39a4ac;
        case 0x39a4b0u: goto label_39a4b0;
        case 0x39a4b4u: goto label_39a4b4;
        case 0x39a4b8u: goto label_39a4b8;
        case 0x39a4bcu: goto label_39a4bc;
        case 0x39a4c0u: goto label_39a4c0;
        case 0x39a4c4u: goto label_39a4c4;
        case 0x39a4c8u: goto label_39a4c8;
        case 0x39a4ccu: goto label_39a4cc;
        case 0x39a4d0u: goto label_39a4d0;
        case 0x39a4d4u: goto label_39a4d4;
        case 0x39a4d8u: goto label_39a4d8;
        case 0x39a4dcu: goto label_39a4dc;
        case 0x39a4e0u: goto label_39a4e0;
        case 0x39a4e4u: goto label_39a4e4;
        case 0x39a4e8u: goto label_39a4e8;
        case 0x39a4ecu: goto label_39a4ec;
        case 0x39a4f0u: goto label_39a4f0;
        case 0x39a4f4u: goto label_39a4f4;
        case 0x39a4f8u: goto label_39a4f8;
        case 0x39a4fcu: goto label_39a4fc;
        case 0x39a500u: goto label_39a500;
        case 0x39a504u: goto label_39a504;
        case 0x39a508u: goto label_39a508;
        case 0x39a50cu: goto label_39a50c;
        case 0x39a510u: goto label_39a510;
        case 0x39a514u: goto label_39a514;
        case 0x39a518u: goto label_39a518;
        case 0x39a51cu: goto label_39a51c;
        case 0x39a520u: goto label_39a520;
        case 0x39a524u: goto label_39a524;
        case 0x39a528u: goto label_39a528;
        case 0x39a52cu: goto label_39a52c;
        case 0x39a530u: goto label_39a530;
        case 0x39a534u: goto label_39a534;
        case 0x39a538u: goto label_39a538;
        case 0x39a53cu: goto label_39a53c;
        case 0x39a540u: goto label_39a540;
        case 0x39a544u: goto label_39a544;
        case 0x39a548u: goto label_39a548;
        case 0x39a54cu: goto label_39a54c;
        default: break;
    }

    ctx->pc = 0x39a368u;

label_39a368:
    // 0x39a368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39a36c:
    // 0x39a36c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39a370:
    // 0x39a370: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39a374:
    // 0x39a374: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39a378:
    // 0x39a378: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a37c:
    // 0x39a37c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39a380:
    // 0x39a380: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x39a380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_39a384:
    // 0x39a384: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39a388:
    // 0x39a388: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39a388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a38c:
    // 0x39a38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a390:
    // 0x39a390: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x39a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39a394:
    // 0x39a394: 0x1091000d  beq         $a0, $s1, . + 4 + (0xD << 2)
label_39a398:
    if (ctx->pc == 0x39A398u) {
        ctx->pc = 0x39A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A394u;
        // 0x39a398: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A39Cu;
        goto label_39a39c;
    }
    ctx->pc = 0x39A394u;
    {
        const bool branch_taken_0x39a394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x39A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A394u;
        // 0x39a398: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a394) {
            ctx->pc = 0x39A3CCu;
            goto label_39a3cc;
        }
    }
    ctx->pc = 0x39A39Cu;
label_39a39c:
    // 0x39a39c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39a39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a3a0:
    // 0x39a3a0: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
label_39a3a4:
    if (ctx->pc == 0x39A3A4u) {
        ctx->pc = 0x39A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3A0u;
        // 0x39a3a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3A8u;
        goto label_39a3a8;
    }
    ctx->pc = 0x39A3A0u;
    {
        const bool branch_taken_0x39a3a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a3a0) {
            ctx->pc = 0x39A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3A0u;
            // 0x39a3a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A3D0u;
            goto label_39a3d0;
        }
    }
    ctx->pc = 0x39A3A8u;
label_39a3a8:
    // 0x39a3a8: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x39a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_39a3ac:
    // 0x39a3ac: 0x0  nop
    ctx->pc = 0x39a3acu;
    // NOP
label_39a3b0:
    // 0x39a3b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39a3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a3b4:
    // 0x39a3b4: 0x280f809  jalr        $s4
label_39a3b8:
    if (ctx->pc == 0x39A3B8u) {
        ctx->pc = 0x39A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B4u;
        // 0x39a3b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3BCu;
        goto label_39a3bc;
    }
    ctx->pc = 0x39A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A3BCu);
        ctx->pc = 0x39A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B4u;
        // 0x39a3b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A3B4u, 0x39A3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A3BCu;
label_39a3bc:
    // 0x39a3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39a3c0:
    if (ctx->pc == 0x39A3C0u) {
        ctx->pc = 0x39A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3BCu;
        // 0x39a3c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3C4u;
        goto label_39a3c4;
    }
    ctx->pc = 0x39A3BCu;
    {
        const bool branch_taken_0x39a3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3BCu;
        // 0x39a3c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3bc) {
            ctx->pc = 0x39A3CCu;
            goto label_39a3cc;
        }
    }
    ctx->pc = 0x39A3C4u;
label_39a3c4:
    // 0x39a3c4: 0x1622fffa  bne         $s1, $v0, . + 4 + (-0x6 << 2)
label_39a3c8:
    if (ctx->pc == 0x39A3C8u) {
        ctx->pc = 0x39A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3C4u;
        // 0x39a3c8: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3CCu;
        goto label_39a3cc;
    }
    ctx->pc = 0x39A3C4u;
    {
        const bool branch_taken_0x39a3c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3C4u;
        // 0x39a3c8: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3c4) {
            ctx->pc = 0x39A3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a3b0;
        }
    }
    ctx->pc = 0x39A3CCu;
label_39a3cc:
    // 0x39a3cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39a3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a3d0:
    // 0x39a3d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39a3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a3d4:
    // 0x39a3d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39a3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a3d8:
    // 0x39a3d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39a3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a3dc:
    // 0x39a3dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39a3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a3e0:
    // 0x39a3e0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39a3e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a3e4:
    // 0x39a3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a3e8:
    // 0x39a3e8: 0x3e00008  jr          $ra
label_39a3ec:
    if (ctx->pc == 0x39A3ECu) {
        ctx->pc = 0x39A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3E8u;
        // 0x39a3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3F0u;
        goto label_39a3f0;
    }
    ctx->pc = 0x39A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3E8u;
        // 0x39a3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A3F0u;
label_39a3f0:
    // 0x39a3f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39a3f4:
    // 0x39a3f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39a3f8:
    // 0x39a3f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39a3fc:
    // 0x39a3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a400:
    // 0x39a400: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39a404:
    // 0x39a404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39a404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a408:
    // 0x39a408: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_39a40c:
    // 0x39a40c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39a40cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a410:
    // 0x39a410: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39a414:
    // 0x39a414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a418:
    // 0x39a418: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x39a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_39a41c:
    // 0x39a41c: 0x8e150014  lw          $s5, 0x14($s0)
    ctx->pc = 0x39a41cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39a420:
    // 0x39a420: 0x1aa00041  blez        $s5, . + 4 + (0x41 << 2)
label_39a424:
    if (ctx->pc == 0x39A424u) {
        ctx->pc = 0x39A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A420u;
        // 0x39a424: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A428u;
        goto label_39a428;
    }
    ctx->pc = 0x39A420u;
    {
        const bool branch_taken_0x39a420 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x39A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A420u;
        // 0x39a424: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a420) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A428u;
label_39a428:
    // 0x39a428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a42c:
    // 0x39a42c: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
label_39a430:
    if (ctx->pc == 0x39A430u) {
        ctx->pc = 0x39A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A42Cu;
        // 0x39a430: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A434u;
        goto label_39a434;
    }
    ctx->pc = 0x39A42Cu;
    {
        const bool branch_taken_0x39a42c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x39A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A42Cu;
        // 0x39a430: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a42c) {
            ctx->pc = 0x39A48Cu;
            goto label_39a48c;
        }
    }
    ctx->pc = 0x39A434u;
label_39a434:
    // 0x39a434: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
label_39a438:
    if (ctx->pc == 0x39A438u) {
        ctx->pc = 0x39A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A434u;
        // 0x39a438: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A43Cu;
        goto label_39a43c;
    }
    ctx->pc = 0x39A434u;
    {
        const bool branch_taken_0x39a434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a434) {
            ctx->pc = 0x39A438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A434u;
            // 0x39a438: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4BCu;
            goto label_39a4bc;
        }
    }
    ctx->pc = 0x39A43Cu;
label_39a43c:
    // 0x39a43c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x39a43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_39a440:
    // 0x39a440: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_39a444:
    if (ctx->pc == 0x39A444u) {
        ctx->pc = 0x39A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A440u;
        // 0x39a444: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A448u;
        goto label_39a448;
    }
    ctx->pc = 0x39A440u;
    {
        const bool branch_taken_0x39a440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a440) {
            ctx->pc = 0x39A444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A440u;
            // 0x39a444: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A490u;
            goto label_39a490;
        }
    }
    ctx->pc = 0x39A448u;
label_39a448:
    // 0x39a448: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39a448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39a44c:
    // 0x39a44c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_39a450:
    if (ctx->pc == 0x39A450u) {
        ctx->pc = 0x39A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A44Cu;
        // 0x39a450: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A454u;
        goto label_39a454;
    }
    ctx->pc = 0x39A44Cu;
    {
        const bool branch_taken_0x39a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A44Cu;
        // 0x39a450: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a44c) {
            ctx->pc = 0x39A470u;
            goto label_39a470;
        }
    }
    ctx->pc = 0x39A454u;
label_39a454:
    // 0x39a454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a458:
    // 0x39a458: 0x280f809  jalr        $s4
label_39a45c:
    if (ctx->pc == 0x39A45Cu) {
        ctx->pc = 0x39A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A458u;
        // 0x39a45c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A460u;
        goto label_39a460;
    }
    ctx->pc = 0x39A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A460u);
        ctx->pc = 0x39A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A458u;
        // 0x39a45c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A458u, 0x39A460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A460u;
label_39a460:
    // 0x39a460: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_39a464:
    if (ctx->pc == 0x39A464u) {
        ctx->pc = 0x39A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A460u;
        // 0x39a464: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A468u;
        goto label_39a468;
    }
    ctx->pc = 0x39A460u;
    {
        const bool branch_taken_0x39a460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A460u;
        // 0x39a464: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a460) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A468u;
label_39a468:
    // 0x39a468: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39a468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a46c:
    // 0x39a46c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a470:
    // 0x39a470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a474:
    // 0x39a474: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a478:
    // 0x39a478: 0x280f809  jalr        $s4
label_39a47c:
    if (ctx->pc == 0x39A47Cu) {
        ctx->pc = 0x39A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A478u;
        // 0x39a47c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A480u;
        goto label_39a480;
    }
    ctx->pc = 0x39A478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A480u);
        ctx->pc = 0x39A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A478u;
        // 0x39a47c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A478u, 0x39A480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A480u;
label_39a480:
    // 0x39a480: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_39a484:
    if (ctx->pc == 0x39A484u) {
        ctx->pc = 0x39A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A480u;
        // 0x39a484: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A488u;
        goto label_39a488;
    }
    ctx->pc = 0x39A480u;
    {
        const bool branch_taken_0x39a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A480u;
        // 0x39a484: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a480) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A488u;
label_39a488:
    // 0x39a488: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39a488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39a48c:
    // 0x39a48c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a490:
    // 0x39a490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a494:
    // 0x39a494: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a498:
    // 0x39a498: 0x280f809  jalr        $s4
label_39a49c:
    if (ctx->pc == 0x39A49Cu) {
        ctx->pc = 0x39A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A498u;
        // 0x39a49c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4A0u;
        goto label_39a4a0;
    }
    ctx->pc = 0x39A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A4A0u);
        ctx->pc = 0x39A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A498u;
        // 0x39a49c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A498u, 0x39A4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A4A0u;
label_39a4a0:
    // 0x39a4a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_39a4a4:
    if (ctx->pc == 0x39A4A4u) {
        ctx->pc = 0x39A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4A0u;
        // 0x39a4a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4A8u;
        goto label_39a4a8;
    }
    ctx->pc = 0x39A4A0u;
    {
        const bool branch_taken_0x39a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4A0u;
        // 0x39a4a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4a0) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A4A8u;
label_39a4a8:
    // 0x39a4a8: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x39a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_39a4ac:
    // 0x39a4ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_39a4b0:
    if (ctx->pc == 0x39A4B0u) {
        ctx->pc = 0x39A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4ACu;
        // 0x39a4b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4B4u;
        goto label_39a4b4;
    }
    ctx->pc = 0x39A4ACu;
    {
        const bool branch_taken_0x39a4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4ACu;
        // 0x39a4b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4ac) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A4B4u;
label_39a4b4:
    // 0x39a4b4: 0x0  nop
    ctx->pc = 0x39a4b4u;
    // NOP
label_39a4b8:
    // 0x39a4b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a4bc:
    // 0x39a4bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39a4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a4c0:
    // 0x39a4c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a4c4:
    // 0x39a4c4: 0x280f809  jalr        $s4
label_39a4c8:
    if (ctx->pc == 0x39A4C8u) {
        ctx->pc = 0x39A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4C4u;
        // 0x39a4c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4CCu;
        goto label_39a4cc;
    }
    ctx->pc = 0x39A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A4CCu);
        ctx->pc = 0x39A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4C4u;
        // 0x39a4c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A4C4u, 0x39A4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A4CCu;
label_39a4cc:
    // 0x39a4cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_39a4d0:
    if (ctx->pc == 0x39A4D0u) {
        ctx->pc = 0x39A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4CCu;
        // 0x39a4d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4D4u;
        goto label_39a4d4;
    }
    ctx->pc = 0x39A4CCu;
    {
        const bool branch_taken_0x39a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4CCu;
        // 0x39a4d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4cc) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A4D4u;
label_39a4d4:
    // 0x39a4d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a4d8:
    // 0x39a4d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a4dc:
    // 0x39a4dc: 0x280f809  jalr        $s4
label_39a4e0:
    if (ctx->pc == 0x39A4E0u) {
        ctx->pc = 0x39A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4DCu;
        // 0x39a4e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4E4u;
        goto label_39a4e4;
    }
    ctx->pc = 0x39A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A4E4u);
        ctx->pc = 0x39A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4DCu;
        // 0x39a4e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A4DCu, 0x39A4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A4E4u;
label_39a4e4:
    // 0x39a4e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_39a4e8:
    if (ctx->pc == 0x39A4E8u) {
        ctx->pc = 0x39A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4E4u;
        // 0x39a4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4ECu;
        goto label_39a4ec;
    }
    ctx->pc = 0x39A4E4u;
    {
        const bool branch_taken_0x39a4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4E4u;
        // 0x39a4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4e4) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A4ECu;
label_39a4ec:
    // 0x39a4ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a4f0:
    // 0x39a4f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a4f4:
    // 0x39a4f4: 0x280f809  jalr        $s4
label_39a4f8:
    if (ctx->pc == 0x39A4F8u) {
        ctx->pc = 0x39A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4F4u;
        // 0x39a4f8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4FCu;
        goto label_39a4fc;
    }
    ctx->pc = 0x39A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A4FCu);
        ctx->pc = 0x39A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4F4u;
        // 0x39a4f8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A4F4u, 0x39A4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A4FCu;
label_39a4fc:
    // 0x39a4fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39a500:
    if (ctx->pc == 0x39A500u) {
        ctx->pc = 0x39A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4FCu;
        // 0x39a500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A504u;
        goto label_39a504;
    }
    ctx->pc = 0x39A4FCu;
    {
        const bool branch_taken_0x39a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4FCu;
        // 0x39a500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4fc) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A504u;
label_39a504:
    // 0x39a504: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39a508:
    // 0x39a508: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a50c:
    // 0x39a50c: 0x280f809  jalr        $s4
label_39a510:
    if (ctx->pc == 0x39A510u) {
        ctx->pc = 0x39A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A50Cu;
        // 0x39a510: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A514u;
        goto label_39a514;
    }
    ctx->pc = 0x39A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A514u);
        ctx->pc = 0x39A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A50Cu;
        // 0x39a510: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A50Cu, 0x39A514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A514u;
label_39a514:
    // 0x39a514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39a518:
    if (ctx->pc == 0x39A518u) {
        ctx->pc = 0x39A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A514u;
        // 0x39a518: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A51Cu;
        goto label_39a51c;
    }
    ctx->pc = 0x39A514u;
    {
        const bool branch_taken_0x39a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A514u;
        // 0x39a518: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a514) {
            ctx->pc = 0x39A528u;
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A51Cu;
label_39a51c:
    // 0x39a51c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x39a51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_39a520:
    // 0x39a520: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_39a524:
    if (ctx->pc == 0x39A524u) {
        ctx->pc = 0x39A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A520u;
        // 0x39a524: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A528u;
        goto label_39a528;
    }
    ctx->pc = 0x39A520u;
    {
        const bool branch_taken_0x39a520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A520u;
        // 0x39a524: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a520) {
            ctx->pc = 0x39A4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a4b8;
        }
    }
    ctx->pc = 0x39A528u;
label_39a528:
    // 0x39a528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a52c:
    // 0x39a52c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39a52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a530:
    // 0x39a530: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39a530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a534:
    // 0x39a534: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39a534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a538:
    // 0x39a538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a53c:
    // 0x39a53c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39a53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a540:
    // 0x39a540: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x39a540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a544:
    // 0x39a544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a548:
    // 0x39a548: 0x3e00008  jr          $ra
label_39a54c:
    if (ctx->pc == 0x39A54Cu) {
        ctx->pc = 0x39A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A548u;
        // 0x39a54c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A550u;
        goto label_fallthrough_0x39a548;
    }
    ctx->pc = 0x39A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A548u;
        // 0x39a54c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a548:
    ctx->pc = 0x39A550u;
}
