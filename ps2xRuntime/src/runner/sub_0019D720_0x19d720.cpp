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

// Function: sub_0019D720
// Address: 0x19d720 - 0x19d880
void sub_0019D720_0x19d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D720_0x19d720");
#endif

    switch (ctx->pc) {
        case 0x19d754u: goto label_19d754;
        case 0x19d768u: goto label_19d768;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d7b4u: goto label_19d7b4;
        case 0x19d7d8u: goto label_19d7d8;
        case 0x19d800u: goto label_19d800;
        case 0x19d830u: goto label_19d830;
        case 0x19d840u: goto label_19d840;
        case 0x19d864u: goto label_19d864;
        default: break;
    }

    ctx->pc = 0x19d720u;

    // 0x19d720: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19d724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d734: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19d734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19d738: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x19d73c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x19d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x19d740: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x19d740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x19d744: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x19d744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x19d748: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d74c: 0xc06610c  jal         func_198430
    ctx->pc = 0x19D74Cu;
    SET_GPR_U32(ctx, 31, 0x19D754u);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x19D74Cu, 0x19D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D754u;
label_19d754:
    // 0x19d754: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x19d754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x19d758: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x19d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19d75c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19d760: 0xc041954  jal         func_106550
    ctx->pc = 0x19D760u;
    SET_GPR_U32(ctx, 31, 0x19D768u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x19D760u, 0x19D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D768u;
label_19d768:
    // 0x19d768: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x19d768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19d76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d770: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x19d770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d774: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d778: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x19d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19d77c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d784: 0xc067958  jal         func_19E560
    ctx->pc = 0x19D784u;
    SET_GPR_U32(ctx, 31, 0x19D78Cu);
    ctx->pc = 0x19E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E560u, 0x19D784u, 0x19D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D78Cu;
label_19d78c:
    // 0x19d78c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19d78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d790: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x19d790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d794: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d798: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x19d798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d79c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d7a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d7a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19d7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7a8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19d7ac: 0xc0676e0  jal         func_19DB80
    ctx->pc = 0x19D7ACu;
    SET_GPR_U32(ctx, 31, 0x19D7B4u);
    ctx->pc = 0x19DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB80u, 0x19D7ACu, 0x19D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7B4u;
label_19d7b4:
    // 0x19d7b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7b8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d7c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D7C0u;
    {
        const bool branch_taken_0x19d7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d7c0) {
            ctx->pc = 0x19D7E4u;
            goto label_19d7e4;
        }
    }
    ctx->pc = 0x19D7C8u;
    // 0x19d7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7cc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x19d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d7d0: 0xc067670  jal         func_19D9C0
    ctx->pc = 0x19D7D0u;
    SET_GPR_U32(ctx, 31, 0x19D7D8u);
    ctx->pc = 0x19D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9C0u, 0x19D7D0u, 0x19D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7D8u;
label_19d7d8:
    // 0x19d7d8: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x19d7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19d7dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D7DCu;
    {
        const bool branch_taken_0x19d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d7dc) {
            ctx->pc = 0x19D804u;
            goto label_19d804;
        }
    }
    ctx->pc = 0x19D7E4u;
label_19d7e4:
    // 0x19d7e4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x19d7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7ec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x19d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d7f0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x19d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d7f4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19d7f8: 0xc067650  jal         func_19D940
    ctx->pc = 0x19D7F8u;
    SET_GPR_U32(ctx, 31, 0x19D800u);
    ctx->pc = 0x19D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D940u, 0x19D7F8u, 0x19D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D800u;
label_19d800:
    // 0x19d800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d804:
    // 0x19d804: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x19d804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d808: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19D808u;
    {
        const bool branch_taken_0x19d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d808) {
            ctx->pc = 0x19D834u;
            goto label_19d834;
        }
    }
    ctx->pc = 0x19D810u;
    // 0x19d810: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d814: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x19d814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d818: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d81c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d824: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19d824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19d828: 0xc0676e0  jal         func_19DB80
    ctx->pc = 0x19D828u;
    SET_GPR_U32(ctx, 31, 0x19D830u);
    ctx->pc = 0x19DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB80u, 0x19D828u, 0x19D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D830u;
label_19d830:
    // 0x19d830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d834:
    // 0x19d834: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d838: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x19D838u;
    SET_GPR_U32(ctx, 31, 0x19D840u);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x19D838u, 0x19D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D840u;
label_19d840:
    // 0x19d840: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x19d844: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x19d844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19d848: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d84c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x19d84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19d850: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d85c: 0xc067620  jal         func_19D880
    ctx->pc = 0x19D85Cu;
    SET_GPR_U32(ctx, 31, 0x19D864u);
    ctx->pc = 0x19D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D880u, 0x19D85Cu, 0x19D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D864u;
label_19d864:
    // 0x19d864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d874: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x19d874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19d878: 0x3e00008  jr          $ra
    ctx->pc = 0x19D878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D880u;
}
