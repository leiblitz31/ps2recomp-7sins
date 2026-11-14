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

// Function: sub_00309850
// Address: 0x309850 - 0x3098b0
void sub_00309850_0x309850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309850_0x309850");
#endif

    switch (ctx->pc) {
        case 0x309850u: goto label_309850;
        case 0x309854u: goto label_309854;
        case 0x309858u: goto label_309858;
        case 0x30985cu: goto label_30985c;
        case 0x309860u: goto label_309860;
        case 0x309864u: goto label_309864;
        case 0x309868u: goto label_309868;
        case 0x30986cu: goto label_30986c;
        case 0x309870u: goto label_309870;
        case 0x309874u: goto label_309874;
        case 0x309878u: goto label_309878;
        case 0x30987cu: goto label_30987c;
        case 0x309880u: goto label_309880;
        case 0x309884u: goto label_309884;
        case 0x309888u: goto label_309888;
        case 0x30988cu: goto label_30988c;
        case 0x309890u: goto label_309890;
        case 0x309894u: goto label_309894;
        case 0x309898u: goto label_309898;
        case 0x30989cu: goto label_30989c;
        case 0x3098a0u: goto label_3098a0;
        case 0x3098a4u: goto label_3098a4;
        case 0x3098a8u: goto label_3098a8;
        case 0x3098acu: goto label_3098ac;
        default: break;
    }

    ctx->pc = 0x309850u;

label_309850:
    // 0x309850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_309854:
    // 0x309854: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x309854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_309858:
    // 0x309858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30985c:
    // 0x30985c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x30985cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_309860:
    // 0x309860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x309860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_309864:
    // 0x309864: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x309864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_309868:
    // 0x309868: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x309868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_30986c:
    // 0x30986c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_309870:
    // 0x309870: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x309870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_309874:
    // 0x309874: 0x40f809  jalr        $v0
label_309878:
    if (ctx->pc == 0x309878u) {
        ctx->pc = 0x309878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309874u;
        // 0x309878: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30987Cu;
        goto label_30987c;
    }
    ctx->pc = 0x309874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30987Cu);
        ctx->pc = 0x309878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309874u;
        // 0x309878: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309874u, 0x30987Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30987Cu;
label_30987c:
    // 0x30987c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_309880:
    if (ctx->pc == 0x309880u) {
        ctx->pc = 0x309880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30987Cu;
        // 0x309880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309884u;
        goto label_309884;
    }
    ctx->pc = 0x30987Cu;
    {
        const bool branch_taken_0x30987c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30987Cu;
        // 0x309880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30987c) {
            ctx->pc = 0x3098A0u;
            goto label_3098a0;
        }
    }
    ctx->pc = 0x309884u;
label_309884:
    // 0x309884: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x309884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_309888:
    // 0x309888: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x309888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30988c:
    // 0x30988c: 0x8c646600  lw          $a0, 0x6600($v1)
    ctx->pc = 0x30988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26112)));
label_309890:
    // 0x309890: 0xac706600  sw          $s0, 0x6600($v1)
    ctx->pc = 0x309890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26112), GPR_U32(ctx, 16));
label_309894:
    // 0x309894: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x309894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_309898:
    // 0x309898: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_30989c:
    // 0x30989c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3098a0:
    // 0x3098a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3098a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3098a4:
    // 0x3098a4: 0x3e00008  jr          $ra
label_3098a8:
    if (ctx->pc == 0x3098A8u) {
        ctx->pc = 0x3098A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098A4u;
        // 0x3098a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3098ACu;
        goto label_3098ac;
    }
    ctx->pc = 0x3098A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3098A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098A4u;
        // 0x3098a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3098A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3098ACu;
label_3098ac:
    // 0x3098ac: 0x0  nop
    ctx->pc = 0x3098acu;
    // NOP
    ctx->pc = 0x3098b0u;
}
