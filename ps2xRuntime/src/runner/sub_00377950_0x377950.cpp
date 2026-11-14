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

// Function: sub_00377950
// Address: 0x377950 - 0x3779e8
void sub_00377950_0x377950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377950_0x377950");
#endif

    switch (ctx->pc) {
        case 0x377974u: goto label_377974;
        case 0x3779a0u: goto label_3779a0;
        case 0x3779a8u: goto label_3779a8;
        case 0x3779bcu: goto label_3779bc;
        default: break;
    }

    ctx->pc = 0x377950u;

    // 0x377950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x377950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x377954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x377954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x377958: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x377958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37795c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x377960: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x377960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x377964: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x377964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x377968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37796c: 0xc0ddcba  jal         func_3772E8
    ctx->pc = 0x37796Cu;
    SET_GPR_U32(ctx, 31, 0x377974u);
    ctx->pc = 0x377970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37796Cu;
    // 0x377970: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3772E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3772E8u, 0x37796Cu, 0x377974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377974u;
label_377974:
    // 0x377974: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x377978: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x377978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37797c: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x37797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x377980: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x377980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C434u));
    // 0x377984: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x377984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377988: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x377988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37798c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37798Cu;
    {
        const bool branch_taken_0x37798c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x377990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37798Cu;
        // 0x377990: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37798c) {
            ctx->pc = 0x3779C0u;
            goto label_3779c0;
        }
    }
    ctx->pc = 0x377994u;
    // 0x377994: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x377994u;
    {
        const bool branch_taken_0x377994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377994u;
        // 0x377998: 0x26330024  addiu       $s3, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377994) {
            ctx->pc = 0x3779B4u;
            goto label_3779b4;
        }
    }
    ctx->pc = 0x37799Cu;
    // 0x37799c: 0x0  nop
    ctx->pc = 0x37799cu;
    // NOP
label_3779a0:
    // 0x3779a0: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x3779A0u;
    SET_GPR_U32(ctx, 31, 0x3779A8u);
    ctx->pc = 0x3779A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779A0u;
    // 0x3779a4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x3779A0u, 0x3779A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3779A8u;
label_3779a8:
    // 0x3779a8: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x3779a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3779ac: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3779ACu;
    {
        const bool branch_taken_0x3779ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3779ac) {
            ctx->pc = 0x3779A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3779a0;
        }
    }
    ctx->pc = 0x3779B4u;
label_3779b4:
    // 0x3779b4: 0xc0de08c  jal         func_378230
    ctx->pc = 0x3779B4u;
    SET_GPR_U32(ctx, 31, 0x3779BCu);
    ctx->pc = 0x3779B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779B4u;
    // 0x3779b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378230u, 0x3779B4u, 0x3779BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3779BCu;
label_3779bc:
    // 0x3779bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3779bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3779c0:
    // 0x3779c0: 0xae80c430  sw          $zero, -0x3BD0($s4)
    ctx->pc = 0x3779c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294951984), GPR_U32(ctx, 0));
    // 0x3779c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3779c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3779c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3779cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3779ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3779d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3779d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3779d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3779d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3779d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3779d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3779dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3779dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3779e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3779E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3779E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3779E0u;
        // 0x3779e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3779E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3779E8u;
}
