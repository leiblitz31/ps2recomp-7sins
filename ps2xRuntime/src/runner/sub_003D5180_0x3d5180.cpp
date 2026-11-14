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

// Function: sub_003D5180
// Address: 0x3d5180 - 0x3d5260
void sub_003D5180_0x3d5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5180_0x3d5180");
#endif

    switch (ctx->pc) {
        case 0x3d51c4u: goto label_3d51c4;
        case 0x3d51f8u: goto label_3d51f8;
        case 0x3d5238u: goto label_3d5238;
        default: break;
    }

    ctx->pc = 0x3d5180u;

    // 0x3d5180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d5184: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3d5188: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3d518c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d5194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5198: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3d519c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d51a0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3d51a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d51a4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d51a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3d51ac: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D51ACu;
    {
        const bool branch_taken_0x3d51ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3D51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51ACu;
        // 0x3d51b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51ac) {
            ctx->pc = 0x3D51C4u;
            goto label_3d51c4;
        }
    }
    ctx->pc = 0x3D51B4u;
    // 0x3d51b4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d51b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d51b8: 0x24a552f8  addiu       $a1, $a1, 0x52F8
    ctx->pc = 0x3d51b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21240));
    // 0x3d51bc: 0xc0e70c2  jal         func_39C308
    ctx->pc = 0x3D51BCu;
    SET_GPR_U32(ctx, 31, 0x3D51C4u);
    ctx->pc = 0x3D51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D51BCu;
    // 0x3d51c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C308u, 0x3D51BCu, 0x3D51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D51C4u;
label_3d51c4:
    // 0x3d51c4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d51c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3d51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d51cc: 0x1073001b  beq         $v1, $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D51CCu;
    {
        const bool branch_taken_0x3d51cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x3D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51CCu;
        // 0x3d51d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51cc) {
            ctx->pc = 0x3D523Cu;
            goto label_3d523c;
        }
    }
    ctx->pc = 0x3D51D4u;
    // 0x3d51d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d51d8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D51D8u;
    {
        const bool branch_taken_0x3d51d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d51d8) {
            ctx->pc = 0x3D51DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51D8u;
            // 0x3d51dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D522Cu;
            goto label_3d522c;
        }
    }
    ctx->pc = 0x3D51E0u;
    // 0x3d51e0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3D51E0u;
    {
        const bool branch_taken_0x3d51e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51E0u;
        // 0x3d51e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51e0) {
            ctx->pc = 0x3D5220u;
            goto label_3d5220;
        }
    }
    ctx->pc = 0x3D51E8u;
    // 0x3d51e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d51ec: 0x5202000c  beql        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D51ECu;
    {
        const bool branch_taken_0x3d51ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d51ec) {
            ctx->pc = 0x3D51F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51ECu;
            // 0x3d51f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5220u;
            goto label_3d5220;
        }
    }
    ctx->pc = 0x3D51F4u;
    // 0x3d51f4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3d51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3d51f8:
    // 0x3d51f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d51fc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3d51fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d5200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5200u;
    {
        const bool branch_taken_0x3d5200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5200u;
        // 0x3d5204: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5200) {
            ctx->pc = 0x3D5220u;
            goto label_3d5220;
        }
    }
    ctx->pc = 0x3D5208u;
    // 0x3d5208: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d5208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d520c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d5210: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d5210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d5214: 0x5604fff8  bnel        $s0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D5214u;
    {
        const bool branch_taken_0x3d5214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d5214) {
            ctx->pc = 0x3D5218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5214u;
            // 0x3d5218: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d51f8;
        }
    }
    ctx->pc = 0x3D521Cu;
    // 0x3d521c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3d521cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d5220:
    // 0x3d5220: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5220u;
    {
        const bool branch_taken_0x3d5220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5220u;
        // 0x3d5224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5220) {
            ctx->pc = 0x3D5240u;
            goto label_3d5240;
        }
    }
    ctx->pc = 0x3D5228u;
    // 0x3d5228: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d522c:
    // 0x3d522c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d522cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d5230: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D5230u;
    SET_GPR_U32(ctx, 31, 0x3D5238u);
    ctx->pc = 0x3D5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5230u;
    // 0x3d5234: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D5230u, 0x3D5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5238u;
label_3d5238:
    // 0x3d5238: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3d5238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3d523c:
    // 0x3d523c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d523cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5240:
    // 0x3d5240: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d5240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d5244: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d5244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d5248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d524c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d524cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5254: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5254u;
        // 0x3d5258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D525Cu;
    // 0x3d525c: 0x0  nop
    ctx->pc = 0x3d525cu;
    // NOP
    ctx->pc = 0x3d5260u;
}
