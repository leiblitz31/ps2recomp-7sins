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

// Function: sub_001BF7C0
// Address: 0x1bf7c0 - 0x1bf900
void sub_001BF7C0_0x1bf7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF7C0_0x1bf7c0");
#endif

    switch (ctx->pc) {
        case 0x1bf7f0u: goto label_1bf7f0;
        case 0x1bf808u: goto label_1bf808;
        case 0x1bf814u: goto label_1bf814;
        case 0x1bf878u: goto label_1bf878;
        case 0x1bf8b0u: goto label_1bf8b0;
        default: break;
    }

    ctx->pc = 0x1bf7c0u;

    // 0x1bf7c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bf7c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bf7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bf7c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf7cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf7d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf7dc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1bf7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1bf7e0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1bf7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1bf7e4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf7e8: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BF7E8u;
    SET_GPR_U32(ctx, 31, 0x1BF7F0u);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BF7E8u, 0x1BF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7F0u;
label_1bf7f0:
    // 0x1bf7f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bf7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7f4: 0x8e540008  lw          $s4, 0x8($s2)
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf7f8: 0x8e53000c  lw          $s3, 0xC($s2)
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf7fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf800: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF800u;
    {
        const bool branch_taken_0x1bf800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf800) {
            ctx->pc = 0x1BF8C4u;
            goto label_1bf8c4;
        }
    }
    ctx->pc = 0x1BF808u;
label_1bf808:
    // 0x1bf808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf80c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1BF80Cu;
    {
        const bool branch_taken_0x1bf80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf80c) {
            ctx->pc = 0x1BF8B4u;
            goto label_1bf8b4;
        }
    }
    ctx->pc = 0x1BF814u;
label_1bf814:
    // 0x1bf814: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x1bf814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bf818: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BF818u;
    {
        const bool branch_taken_0x1bf818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf818) {
            ctx->pc = 0x1BF8B0u;
            goto label_1bf8b0;
        }
    }
    ctx->pc = 0x1BF820u;
    // 0x1bf820: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1bf824: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bf828: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bf82c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1bf82cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bf830: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF830u;
    {
        const bool branch_taken_0x1bf830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf830) {
            ctx->pc = 0x1BF8B0u;
            goto label_1bf8b0;
        }
    }
    ctx->pc = 0x1BF838u;
    // 0x1bf838: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bf83c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bf840: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bf844: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bf844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf848: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bf848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf84c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bf850: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf854: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bf854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf858: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf85c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf864: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF864u;
    {
        const bool branch_taken_0x1bf864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bf864) {
            ctx->pc = 0x1BF8B0u;
            goto label_1bf8b0;
        }
    }
    ctx->pc = 0x1BF86Cu;
    // 0x1bf86c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bf870: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BF870u;
    SET_GPR_U32(ctx, 31, 0x1BF878u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BF870u, 0x1BF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF878u;
label_1bf878:
    // 0x1bf878: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf87c: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x1bf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1bf880: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bf880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf884: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x1bf884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1bf888: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1bf888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf88c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x1bf88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1bf890: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bf894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf898: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bf898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf89c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf8a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8a8: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BF8A8u;
    SET_GPR_U32(ctx, 31, 0x1BF8B0u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BF8A8u, 0x1BF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8B0u;
label_1bf8b0:
    // 0x1bf8b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bf8b4:
    // 0x1bf8b4: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bf8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf8b8: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BF8B8u;
    {
        const bool branch_taken_0x1bf8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8b8) {
            ctx->pc = 0x1BF814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf814;
        }
    }
    ctx->pc = 0x1BF8C0u;
    // 0x1bf8c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf8c4:
    // 0x1bf8c4: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bf8c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf8c8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1BF8C8u;
    {
        const bool branch_taken_0x1bf8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8c8) {
            ctx->pc = 0x1BF808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf808;
        }
    }
    ctx->pc = 0x1BF8D0u;
    // 0x1bf8d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bf8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf8d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bf8d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf8d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf8dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf8e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1bf8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bf8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF8F4u;
    // 0x1bf8f4: 0x0  nop
    ctx->pc = 0x1bf8f4u;
    // NOP
    // 0x1bf8f8: 0x0  nop
    ctx->pc = 0x1bf8f8u;
    // NOP
    // 0x1bf8fc: 0x0  nop
    ctx->pc = 0x1bf8fcu;
    // NOP
    ctx->pc = 0x1bf900u;
}
