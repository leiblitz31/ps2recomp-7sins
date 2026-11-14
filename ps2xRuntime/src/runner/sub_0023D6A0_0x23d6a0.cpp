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

// Function: sub_0023D6A0
// Address: 0x23d6a0 - 0x23d800
void sub_0023D6A0_0x23d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D6A0_0x23d6a0");
#endif

    switch (ctx->pc) {
        case 0x23d6d4u: goto label_23d6d4;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d70cu: goto label_23d70c;
        case 0x23d734u: goto label_23d734;
        case 0x23d758u: goto label_23d758;
        case 0x23d780u: goto label_23d780;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7e4u: goto label_23d7e4;
        default: break;
    }

    ctx->pc = 0x23d6a0u;

    // 0x23d6a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23d6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23d6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23d6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d6b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x23d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x23d6b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x23d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x23d6bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x23d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x23d6c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x23d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x23d6c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x23d6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x23d6c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d6cc: 0xc08f670  jal         func_23D9C0
    ctx->pc = 0x23D6CCu;
    SET_GPR_U32(ctx, 31, 0x23D6D4u);
    ctx->pc = 0x23D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C0u, 0x23D6CCu, 0x23D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6D4u;
label_23d6d4:
    // 0x23d6d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x23d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x23d6d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x23d6dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23d6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23d6e0: 0xc041954  jal         func_106550
    ctx->pc = 0x23D6E0u;
    SET_GPR_U32(ctx, 31, 0x23D6E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x23D6E0u, 0x23D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6E8u;
label_23d6e8:
    // 0x23d6e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x23d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23d6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d6f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d6f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d6f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23d6fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d704: 0xc08f8ac  jal         func_23E2B0
    ctx->pc = 0x23D704u;
    SET_GPR_U32(ctx, 31, 0x23D70Cu);
    ctx->pc = 0x23E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E2B0u, 0x23D704u, 0x23D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D70Cu;
label_23d70c:
    // 0x23d70c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d710: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23d710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d714: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d718: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x23d718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d71c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d720: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23d720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23d724: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d728: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x23d728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23d72c: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23D72Cu;
    SET_GPR_U32(ctx, 31, 0x23D734u);
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23D72Cu, 0x23D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D734u;
label_23d734:
    // 0x23d734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d738: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d740: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D740u;
    {
        const bool branch_taken_0x23d740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d740) {
            ctx->pc = 0x23D764u;
            goto label_23d764;
        }
    }
    ctx->pc = 0x23D748u;
    // 0x23d748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d74c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23d750: 0xc08f680  jal         func_23DA00
    ctx->pc = 0x23D750u;
    SET_GPR_U32(ctx, 31, 0x23D758u);
    ctx->pc = 0x23DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA00u, 0x23D750u, 0x23D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D758u;
label_23d758:
    // 0x23d758: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x23d758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x23d75c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23D75Cu;
    {
        const bool branch_taken_0x23d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d75c) {
            ctx->pc = 0x23D784u;
            goto label_23d784;
        }
    }
    ctx->pc = 0x23D764u;
label_23d764:
    // 0x23d764: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x23d764u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d76c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d770: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23d774: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x23d774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x23d778: 0xc08f630  jal         func_23D8C0
    ctx->pc = 0x23D778u;
    SET_GPR_U32(ctx, 31, 0x23D780u);
    ctx->pc = 0x23D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D8C0u, 0x23D778u, 0x23D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D780u;
label_23d780:
    // 0x23d780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d784:
    // 0x23d784: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x23d784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23d788: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D788u;
    {
        const bool branch_taken_0x23d788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d788) {
            ctx->pc = 0x23D7B4u;
            goto label_23d7b4;
        }
    }
    ctx->pc = 0x23D790u;
    // 0x23d790: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d794: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x23d794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d798: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x23d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23d79c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d7a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23d7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23d7a8: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23D7A8u;
    SET_GPR_U32(ctx, 31, 0x23D7B0u);
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23D7A8u, 0x23D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7B0u;
label_23d7b0:
    // 0x23d7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d7b4:
    // 0x23d7b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d7b8: 0xc08f614  jal         func_23D850
    ctx->pc = 0x23D7B8u;
    SET_GPR_U32(ctx, 31, 0x23D7C0u);
    ctx->pc = 0x23D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D850u, 0x23D7B8u, 0x23D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7C0u;
label_23d7c0:
    // 0x23d7c0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x23d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x23d7c4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x23d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d7c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23d7cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x23d7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23d7d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d7d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23d7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7dc: 0xc08f600  jal         func_23D800
    ctx->pc = 0x23D7DCu;
    SET_GPR_U32(ctx, 31, 0x23D7E4u);
    ctx->pc = 0x23D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D800u, 0x23D7DCu, 0x23D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7E4u;
label_23d7e4:
    // 0x23d7e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d7e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d7f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D800u;
}
