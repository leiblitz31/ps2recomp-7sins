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

// Function: sub_003FE6C0
// Address: 0x3fe6c0 - 0x3fe8b8
void sub_003FE6C0_0x3fe6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE6C0_0x3fe6c0");
#endif

    switch (ctx->pc) {
        case 0x3fe6f8u: goto label_3fe6f8;
        case 0x3fe700u: goto label_3fe700;
        case 0x3fe71cu: goto label_3fe71c;
        case 0x3fe72cu: goto label_3fe72c;
        case 0x3fe748u: goto label_3fe748;
        case 0x3fe77cu: goto label_3fe77c;
        case 0x3fe798u: goto label_3fe798;
        case 0x3fe824u: goto label_3fe824;
        case 0x3fe838u: goto label_3fe838;
        case 0x3fe850u: goto label_3fe850;
        case 0x3fe85cu: goto label_3fe85c;
        case 0x3fe868u: goto label_3fe868;
        case 0x3fe874u: goto label_3fe874;
        case 0x3fe888u: goto label_3fe888;
        default: break;
    }

    ctx->pc = 0x3fe6c0u;

    // 0x3fe6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3fe6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3fe6c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3fe6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3fe6c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3fe6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3fe6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fe6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fe6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3fe6d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3fe6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3fe6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fe6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fe6dc: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x3fe6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3fe6e0: 0xde030188  ld          $v1, 0x188($s0)
    ctx->pc = 0x3fe6e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x3fe6e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3fe6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3fe6e8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3FE6E8u;
    {
        const bool branch_taken_0x3fe6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6E8u;
        // 0x3fe6ec: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe6e8) {
            ctx->pc = 0x3FE798u;
            goto label_3fe798;
        }
    }
    ctx->pc = 0x3FE6F0u;
    // 0x3fe6f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3fe6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fe6f4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x3fe6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_3fe6f8:
    // 0x3fe6f8: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x3FE6F8u;
    SET_GPR_U32(ctx, 31, 0x3FE700u);
    ctx->pc = 0x3FE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE6F8u;
    // 0x3fe6fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x3FE6F8u, 0x3FE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE700u;
label_3fe700:
    // 0x3fe700: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FE700u;
    {
        const bool branch_taken_0x3fe700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE700u;
        // 0x3fe704: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe700) {
            ctx->pc = 0x3FE72Cu;
            goto label_3fe72c;
        }
    }
    ctx->pc = 0x3FE708u;
    // 0x3fe708: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x3fe708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3fe70c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FE70Cu;
    {
        const bool branch_taken_0x3fe70c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE70Cu;
        // 0x3fe710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe70c) {
            ctx->pc = 0x3FE724u;
            goto label_3fe724;
        }
    }
    ctx->pc = 0x3FE714u;
    // 0x3fe714: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FE714u;
    SET_GPR_U32(ctx, 31, 0x3FE71Cu);
    ctx->pc = 0x3FE718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE714u;
    // 0x3fe718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FE714u, 0x3FE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE71Cu;
label_3fe71c:
    // 0x3fe71c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3FE71Cu;
    {
        const bool branch_taken_0x3fe71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE71Cu;
        // 0x3fe720: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe71c) {
            ctx->pc = 0x3FE730u;
            goto label_3fe730;
        }
    }
    ctx->pc = 0x3FE724u;
label_3fe724:
    // 0x3fe724: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FE724u;
    SET_GPR_U32(ctx, 31, 0x3FE72Cu);
    ctx->pc = 0x3FE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE724u;
    // 0x3fe728: 0x2665fc10  addiu       $a1, $s3, -0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FE724u, 0x3FE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE72Cu;
label_3fe72c:
    // 0x3fe72c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3fe72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_3fe730:
    // 0x3fe730: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FE730u;
    {
        const bool branch_taken_0x3fe730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE730u;
        // 0x3fe734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe730) {
            ctx->pc = 0x3FE758u;
            goto label_3fe758;
        }
    }
    ctx->pc = 0x3FE738u;
    // 0x3fe738: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x3fe738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3fe73c: 0x8e06015c  lw          $a2, 0x15C($s0)
    ctx->pc = 0x3fe73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3fe740: 0xc101c30  jal         func_4070C0
    ctx->pc = 0x3FE740u;
    SET_GPR_U32(ctx, 31, 0x3FE748u);
    ctx->pc = 0x3FE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE740u;
    // 0x3fe744: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4070C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4070C0u, 0x3FE740u, 0x3FE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE748u;
label_3fe748:
    // 0x3fe748: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x3fe748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3fe74c: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x3fe74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3fe750: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x3fe750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x3fe754: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3fe754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3fe758:
    // 0x3fe758: 0x1232ffe7  beq         $s1, $s2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3FE758u;
    {
        const bool branch_taken_0x3fe758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3FE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE758u;
        // 0x3fe75c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe758) {
            ctx->pc = 0x3FE6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe6f8;
        }
    }
    ctx->pc = 0x3FE760u;
    // 0x3fe760: 0x8e06015c  lw          $a2, 0x15C($s0)
    ctx->pc = 0x3fe760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3fe764: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3fe764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3fe768: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FE768u;
    {
        const bool branch_taken_0x3fe768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE768u;
        // 0x3fe76c: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe768) {
            ctx->pc = 0x3FE78Cu;
            goto label_3fe78c;
        }
    }
    ctx->pc = 0x3FE770u;
    // 0x3fe770: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x3fe770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3fe774: 0xc101c30  jal         func_4070C0
    ctx->pc = 0x3FE774u;
    SET_GPR_U32(ctx, 31, 0x3FE77Cu);
    ctx->pc = 0x3FE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE774u;
    // 0x3fe778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4070C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4070C0u, 0x3FE774u, 0x3FE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE77Cu;
label_3fe77c:
    // 0x3fe77c: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x3fe77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3fe780: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x3fe780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3fe784: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x3fe784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x3fe788: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3fe788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3fe78c:
    // 0x3fe78c: 0xfe000240  sd          $zero, 0x240($s0)
    ctx->pc = 0x3fe78cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 576), GPR_U64(ctx, 0));
    // 0x3fe790: 0xc0ff4c6  jal         func_3FD318
    ctx->pc = 0x3FE790u;
    SET_GPR_U32(ctx, 31, 0x3FE798u);
    ctx->pc = 0x3FE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE790u;
    // 0x3fe794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD318u, 0x3FE790u, 0x3FE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE798u;
label_3fe798:
    // 0x3fe798: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3fe798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fe79c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3fe79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fe7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fe7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fe7a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3fe7a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fe7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fe7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7ACu;
        // 0x3fe7b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE7B4u;
    // 0x3fe7b4: 0x0  nop
    ctx->pc = 0x3fe7b4u;
    // NOP
    // 0x3fe7b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fe7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3fe7bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3fe7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3fe7c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fe7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3fe7c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fe7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe7c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3fe7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3fe7cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fe7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe7d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3fe7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3fe7d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3fe7d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe7d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3fe7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3fe7dc: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x3FE7DCu;
    {
        const bool branch_taken_0x3fe7dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7DCu;
        // 0x3fe7e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe7dc) {
            ctx->pc = 0x3FE894u;
            goto label_3fe894;
        }
    }
    ctx->pc = 0x3FE7E4u;
    // 0x3fe7e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fe7e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe7e8: 0x32830003  andi        $v1, $s4, 0x3
    ctx->pc = 0x3fe7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x3fe7ec: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FE7ECu;
    {
        const bool branch_taken_0x3fe7ec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3FE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7ECu;
        // 0x3fe7f0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe7ec) {
            ctx->pc = 0x3FE838u;
            goto label_3fe838;
        }
    }
    ctx->pc = 0x3FE7F4u;
    // 0x3fe7f4: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FE7F4u;
    {
        const bool branch_taken_0x3fe7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe7f4) {
            ctx->pc = 0x3FE7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE7F4u;
            // 0x3fe7f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE850u;
            goto label_3fe850;
        }
    }
    ctx->pc = 0x3FE7FCu;
    // 0x3fe7fc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3fe7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fe800: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3FE800u;
    {
        const bool branch_taken_0x3fe800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe800) {
            ctx->pc = 0x3FE804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE800u;
            // 0x3fe804: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE83Cu;
            goto label_3fe83c;
        }
    }
    ctx->pc = 0x3FE808u;
    // 0x3fe808: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fe808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fe80c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FE80Cu;
    {
        const bool branch_taken_0x3fe80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe80c) {
            ctx->pc = 0x3FE810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE80Cu;
            // 0x3fe810: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE828u;
            goto label_3fe828;
        }
    }
    ctx->pc = 0x3FE814u;
    // 0x3fe814: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3fe814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fe818: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x3fe818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3fe81c: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE81Cu;
    SET_GPR_U32(ctx, 31, 0x3FE824u);
    ctx->pc = 0x3FE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE81Cu;
    // 0x3fe820: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE81Cu, 0x3FE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE824u;
label_3fe824:
    // 0x3fe824: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fe824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fe828:
    // 0x3fe828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe82c: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3fe82cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x3fe830: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE830u;
    SET_GPR_U32(ctx, 31, 0x3FE838u);
    ctx->pc = 0x3FE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE830u;
    // 0x3fe834: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE830u, 0x3FE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE838u;
label_3fe838:
    // 0x3fe838: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fe838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fe83c:
    // 0x3fe83c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe840: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3fe840u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x3fe844: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3FE844u;
    {
        const bool branch_taken_0x3fe844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE844u;
        // 0x3fe848: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe844) {
            ctx->pc = 0x3FE880u;
            goto label_3fe880;
        }
    }
    ctx->pc = 0x3FE84Cu;
    // 0x3fe84c: 0x0  nop
    ctx->pc = 0x3fe84cu;
    // NOP
label_3fe850:
    // 0x3fe850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe854: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE854u;
    SET_GPR_U32(ctx, 31, 0x3FE85Cu);
    ctx->pc = 0x3FE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE854u;
    // 0x3fe858: 0x66310004  daddiu      $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE854u, 0x3FE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE85Cu;
label_3fe85c:
    // 0x3fe85c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3fe85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3fe860: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE860u;
    SET_GPR_U32(ctx, 31, 0x3FE868u);
    ctx->pc = 0x3FE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE860u;
    // 0x3fe864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE860u, 0x3FE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE868u;
label_3fe868:
    // 0x3fe868: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3fe868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3fe86c: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE86Cu;
    SET_GPR_U32(ctx, 31, 0x3FE874u);
    ctx->pc = 0x3FE870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE86Cu;
    // 0x3fe870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE86Cu, 0x3FE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE874u;
label_3fe874:
    // 0x3fe874: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3fe874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3fe878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe87c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3fe87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3fe880:
    // 0x3fe880: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE880u;
    SET_GPR_U32(ctx, 31, 0x3FE888u);
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE880u, 0x3FE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE888u;
label_3fe888:
    // 0x3fe888: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3fe888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3fe88c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3FE88Cu;
    {
        const bool branch_taken_0x3fe88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe88c) {
            ctx->pc = 0x3FE890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE88Cu;
            // 0x3fe890: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe850;
        }
    }
    ctx->pc = 0x3FE894u;
label_3fe894:
    // 0x3fe894: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3fe894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fe898: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3fe898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fe89c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fe89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fe8a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3fe8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fe8a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3fe8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fe8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fe8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8ACu;
        // 0x3fe8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE8B4u;
    // 0x3fe8b4: 0x0  nop
    ctx->pc = 0x3fe8b4u;
    // NOP
    ctx->pc = 0x3fe8b8u;
}
