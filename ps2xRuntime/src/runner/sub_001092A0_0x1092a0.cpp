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

// Function: sub_001092A0
// Address: 0x1092a0 - 0x109370
void sub_001092A0_0x1092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001092A0_0x1092a0");
#endif

    switch (ctx->pc) {
        case 0x10931cu: goto label_10931c;
        case 0x10933cu: goto label_10933c;
        default: break;
    }

    ctx->pc = 0x1092a0u;

    // 0x1092a0: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x1092a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1092a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1092a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1092a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1092ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1092acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1092b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1092b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1092b4: 0xafa40440  sw          $a0, 0x440($sp)
    ctx->pc = 0x1092b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 4));
    // 0x1092b8: 0xafa50450  sw          $a1, 0x450($sp)
    ctx->pc = 0x1092b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 5));
    // 0x1092bc: 0xffa60460  sd          $a2, 0x460($sp)
    ctx->pc = 0x1092bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 6));
    // 0x1092c0: 0xffa70468  sd          $a3, 0x468($sp)
    ctx->pc = 0x1092c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 7));
    // 0x1092c4: 0xffa80470  sd          $t0, 0x470($sp)
    ctx->pc = 0x1092c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 8));
    // 0x1092c8: 0xffa90478  sd          $t1, 0x478($sp)
    ctx->pc = 0x1092c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 9));
    // 0x1092cc: 0xffaa0480  sd          $t2, 0x480($sp)
    ctx->pc = 0x1092ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 10));
    // 0x1092d0: 0xffab0488  sd          $t3, 0x488($sp)
    ctx->pc = 0x1092d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 11));
    // 0x1092d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1092d8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1092d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1092dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x1092F0u;
            goto label_1092f0;
        }
    }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1092e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1092E8u;
    {
        const bool branch_taken_0x1092e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1092e8) {
            ctx->pc = 0x109300u;
            goto label_109300;
        }
    }
    ctx->pc = 0x1092F0u;
label_1092f0:
    // 0x1092f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1092f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1092f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1092f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1092f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1092fc: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1092fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_109300:
    // 0x109300: 0x27a20490  addiu       $v0, $sp, 0x490
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x109304: 0x509023  subu        $s2, $v0, $s0
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x109308: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x109308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10930c: 0x8fa50450  lw          $a1, 0x450($sp)
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x109310: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x109310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109314: 0xc119328  jal         func_464CA0
    ctx->pc = 0x109314u;
    SET_GPR_U32(ctx, 31, 0x10931Cu);
    ctx->pc = 0x464CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464CA0u, 0x109314u, 0x10931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10931Cu;
label_10931c:
    // 0x10931c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10931cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109320: 0x2e210401  sltiu       $at, $s1, 0x401
    ctx->pc = 0x109320u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x109324: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x109324u;
    {
        const bool branch_taken_0x109324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x109324) {
            ctx->pc = 0x109344u;
            goto label_109344;
        }
    }
    ctx->pc = 0x10932Cu;
    // 0x10932c: 0x8fa40440  lw          $a0, 0x440($sp)
    ctx->pc = 0x10932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x109330: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x109334: 0xc040488  jal         func_101220
    ctx->pc = 0x109334u;
    SET_GPR_U32(ctx, 31, 0x10933Cu);
    ctx->pc = 0x101220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101220u, 0x109334u, 0x10933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10933Cu;
label_10933c:
    // 0x10933c: 0x14400001  bnez        $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10933Cu;
    {
        const bool branch_taken_0x10933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10933c) {
            ctx->pc = 0x109344u;
            goto label_109344;
        }
    }
    ctx->pc = 0x109344u;
label_109344:
    // 0x109344: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x109344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109348: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x109348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10934c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10934cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109358: 0x27bd0490  addiu       $sp, $sp, 0x490
    ctx->pc = 0x109358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x10935c: 0x3e00008  jr          $ra
    ctx->pc = 0x10935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109364u;
    // 0x109364: 0x0  nop
    ctx->pc = 0x109364u;
    // NOP
    // 0x109368: 0x0  nop
    ctx->pc = 0x109368u;
    // NOP
    // 0x10936c: 0x0  nop
    ctx->pc = 0x10936cu;
    // NOP
    ctx->pc = 0x109370u;
}
