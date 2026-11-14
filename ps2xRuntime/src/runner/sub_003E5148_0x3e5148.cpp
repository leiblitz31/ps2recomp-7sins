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

// Function: sub_003E5148
// Address: 0x3e5148 - 0x3e5288
void sub_003E5148_0x3e5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5148_0x3e5148");
#endif

    switch (ctx->pc) {
        case 0x3e51b8u: goto label_3e51b8;
        case 0x3e51d0u: goto label_3e51d0;
        case 0x3e51e0u: goto label_3e51e0;
        case 0x3e51fcu: goto label_3e51fc;
        case 0x3e520cu: goto label_3e520c;
        case 0x3e5224u: goto label_3e5224;
        case 0x3e527cu: goto label_3e527c;
        default: break;
    }

    ctx->pc = 0x3e5148u;

    // 0x3e5148: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e5148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e514c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3e5150: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e5150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3e5154: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e5154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5158: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e5158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3e515c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e515cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5160: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3e5160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3e5164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e5164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5168: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3e5168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3e516c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3e516cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5170: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3e5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3e5174: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3e5174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5178: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3e517c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3e517cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5180: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e5180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e5184: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5184u;
    {
        const bool branch_taken_0x3e5184 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5184u;
        // 0x3e5188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5184) {
            ctx->pc = 0x3E5190u;
            goto label_3e5190;
        }
    }
    ctx->pc = 0x3E518Cu;
    // 0x3e518c: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x3e518cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e5190:
    // 0x3e5190: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E5190u;
    {
        const bool branch_taken_0x3e5190 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5190) {
            ctx->pc = 0x3E5194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5190u;
            // 0x3e5194: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5198u;
            goto label_3e5198;
        }
    }
    ctx->pc = 0x3E5198u;
label_3e5198:
    // 0x3e5198: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E5198u;
    {
        const bool branch_taken_0x3e5198 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5198) {
            ctx->pc = 0x3E519Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5198u;
            // 0x3e519c: 0x8eb60000  lw          $s6, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E51A0u;
            goto label_3e51a0;
        }
    }
    ctx->pc = 0x3E51A0u;
label_3e51a0:
    // 0x3e51a0: 0x8e1402f0  lw          $s4, 0x2F0($s0)
    ctx->pc = 0x3e51a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x3e51a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e51a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51a8: 0x8e1302e8  lw          $s3, 0x2E8($s0)
    ctx->pc = 0x3e51a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x3e51ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e51acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51b0: 0xc0f90e2  jal         func_3E4388
    ctx->pc = 0x3E51B0u;
    SET_GPR_U32(ctx, 31, 0x3E51B8u);
    ctx->pc = 0x3E51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51B0u;
    // 0x3e51b4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4388u, 0x3E51B0u, 0x3E51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51B8u;
label_3e51b8:
    // 0x3e51b8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3E51B8u;
    {
        const bool branch_taken_0x3e51b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51B8u;
        // 0x3e51bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51b8) {
            ctx->pc = 0x3E51E4u;
            goto label_3e51e4;
        }
    }
    ctx->pc = 0x3E51C0u;
    // 0x3e51c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e51c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51c4: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x3e51c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3e51c8: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E51C8u;
    SET_GPR_U32(ctx, 31, 0x3E51D0u);
    ctx->pc = 0x3E51CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51C8u;
    // 0x3e51cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3E51C8u, 0x3E51D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51D0u;
label_3e51d0:
    // 0x3e51d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e51d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51d8: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3E51D8u;
    SET_GPR_U32(ctx, 31, 0x3E51E0u);
    ctx->pc = 0x3E51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51D8u;
    // 0x3e51dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3E51D8u, 0x3E51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51E0u;
label_3e51e0:
    // 0x3e51e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e51e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3e51e4:
    // 0x3e51e4: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x3E51E4u;
    {
        const bool branch_taken_0x3e51e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51E4u;
        // 0x3e51e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51e4) {
            ctx->pc = 0x3E5210u;
            goto label_3e5210;
        }
    }
    ctx->pc = 0x3E51ECu;
    // 0x3e51ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3e51ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51f0: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x3e51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3e51f4: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E51F4u;
    SET_GPR_U32(ctx, 31, 0x3E51FCu);
    ctx->pc = 0x3E51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51F4u;
    // 0x3e51f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3E51F4u, 0x3E51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51FCu;
label_3e51fc:
    // 0x3e51fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5200: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e5200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5204: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3E5204u;
    SET_GPR_U32(ctx, 31, 0x3E520Cu);
    ctx->pc = 0x3E5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5204u;
    // 0x3e5208: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3E5204u, 0x3E520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E520Cu;
label_3e520c:
    // 0x3e520c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3e520cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3e5210:
    // 0x3e5210: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E5210u;
    {
        const bool branch_taken_0x3e5210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5210u;
        // 0x3e5214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5210) {
            ctx->pc = 0x3E5228u;
            goto label_3e5228;
        }
    }
    ctx->pc = 0x3E5218u;
    // 0x3e5218: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e5218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e521c: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3E521Cu;
    SET_GPR_U32(ctx, 31, 0x3E5224u);
    ctx->pc = 0x3E5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E521Cu;
    // 0x3e5220: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3E521Cu, 0x3E5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5224u;
label_3e5224:
    // 0x3e5224: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x3e5224u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_3e5228:
    // 0x3e5228: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e5228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e522c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e522cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e5230: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e5230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e5234: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e5234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e5238: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e5238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e523c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e523cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5240: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3e5240u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5244: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3e5244u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e524c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E524Cu;
        // 0x3e5250: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5254u;
    // 0x3e5254: 0x0  nop
    ctx->pc = 0x3e5254u;
    // NOP
    // 0x3e5258: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5258u;
        // 0x3e525c: 0xac850288  sw          $a1, 0x288($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5260u;
    // 0x3e5260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e5260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e5264: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e5264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e5268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e526c: 0x24a5e438  addiu       $a1, $a1, -0x1BC8
    ctx->pc = 0x3e526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960184));
    // 0x3e5270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5274: 0xc0f94a2  jal         func_3E5288
    ctx->pc = 0x3E5274u;
    SET_GPR_U32(ctx, 31, 0x3E527Cu);
    ctx->pc = 0x3E5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5274u;
    // 0x3e5278: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5288u, 0x3E5274u, 0x3E527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E527Cu;
label_3e527c:
    // 0x3e527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5280: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5280u;
        // 0x3e5284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5288u;
}
