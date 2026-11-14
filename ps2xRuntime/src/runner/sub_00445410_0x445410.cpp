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

// Function: sub_00445410
// Address: 0x445410 - 0x4454c8
void sub_00445410_0x445410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445410_0x445410");
#endif

    switch (ctx->pc) {
        case 0x44542cu: goto label_44542c;
        case 0x445458u: goto label_445458;
        case 0x445478u: goto label_445478;
        case 0x445494u: goto label_445494;
        default: break;
    }

    ctx->pc = 0x445410u;

    // 0x445410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x445410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x445414: 0x8f82af1c  lw          $v0, -0x50E4($gp)
    ctx->pc = 0x445414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946588)));
    // 0x445418: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x445418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x44541c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x44541Cu;
    {
        const bool branch_taken_0x44541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44541Cu;
        // 0x445420: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44541c) {
            ctx->pc = 0x4454B0u;
            goto label_4454b0;
        }
    }
    ctx->pc = 0x445424u;
    // 0x445424: 0xc113196  jal         func_44C658
    ctx->pc = 0x445424u;
    SET_GPR_U32(ctx, 31, 0x44542Cu);
    ctx->pc = 0x445428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445424u;
    // 0x445428: 0x8f84af14  lw          $a0, -0x50EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C658u, 0x445424u, 0x44542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44542Cu;
label_44542c:
    // 0x44542c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x44542Cu;
    {
        const bool branch_taken_0x44542c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44542Cu;
        // 0x445430: 0xaf82af20  sw          $v0, -0x50E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44542c) {
            ctx->pc = 0x4454B0u;
            goto label_4454b0;
        }
    }
    ctx->pc = 0x445434u;
    // 0x445434: 0x8f85af24  lw          $a1, -0x50DC($gp)
    ctx->pc = 0x445434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946596)));
    // 0x445438: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x445438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x44543c: 0x8f87af28  lw          $a3, -0x50D8($gp)
    ctx->pc = 0x44543cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946600)));
    // 0x445440: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x445440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x445444: 0x25084098  addiu       $t0, $t0, 0x4098
    ctx->pc = 0x445444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16536));
    // 0x445448: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x445448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x44544c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x44544cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x445450: 0xc10408c  jal         func_410230
    ctx->pc = 0x445450u;
    SET_GPR_U32(ctx, 31, 0x445458u);
    ctx->pc = 0x445454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445450u;
    // 0x445454: 0x35290409  ori         $t1, $t1, 0x409 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1033);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x445450u, 0x445458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445458u;
label_445458:
    // 0x445458: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x445458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x44545c: 0x8f85bf20  lw          $a1, -0x40E0($gp)
    ctx->pc = 0x44545cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x445460: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x445460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x445464: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x445464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x445468: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x445468u;
    {
        const bool branch_taken_0x445468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445468u;
        // 0x44546c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445468) {
            ctx->pc = 0x445480u;
            goto label_445480;
        }
    }
    ctx->pc = 0x445470u;
    // 0x445470: 0xc1131fc  jal         func_44C7F0
    ctx->pc = 0x445470u;
    SET_GPR_U32(ctx, 31, 0x445478u);
    ctx->pc = 0x445474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445470u;
    // 0x445474: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C7F0u, 0x445470u, 0x445478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445478u;
label_445478:
    // 0x445478: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x445478u;
    {
        const bool branch_taken_0x445478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445478u;
        // 0x44547c: 0xaf80af20  sw          $zero, -0x50E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445478) {
            ctx->pc = 0x4454B0u;
            goto label_4454b0;
        }
    }
    ctx->pc = 0x445480u;
label_445480:
    // 0x445480: 0x8f82af18  lw          $v0, -0x50E8($gp)
    ctx->pc = 0x445480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946584)));
    // 0x445484: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x445484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x445488: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x445488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x44548c: 0xc113258  jal         func_44C960
    ctx->pc = 0x44548Cu;
    SET_GPR_U32(ctx, 31, 0x445494u);
    ctx->pc = 0x445490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44548Cu;
    // 0x445490: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C960u, 0x44548Cu, 0x445494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445494u;
label_445494:
    // 0x445494: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x445494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x445498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44549c: 0xaf82af1c  sw          $v0, -0x50E4($gp)
    ctx->pc = 0x44549cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946588), GPR_U32(ctx, 2));
    // 0x4454a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4454a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4454a4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x4454a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x4454a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4454A8u;
    {
        const bool branch_taken_0x4454a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4454ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4454A8u;
        // 0x4454ac: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4454a8) {
            ctx->pc = 0x4454B4u;
            goto label_4454b4;
        }
    }
    ctx->pc = 0x4454B0u;
label_4454b0:
    // 0x4454b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4454b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4454b4:
    // 0x4454b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4454b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4454b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4454b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4454bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4454BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4454C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4454BCu;
        // 0x4454c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4454BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4454C4u;
    // 0x4454c4: 0x0  nop
    ctx->pc = 0x4454c4u;
    // NOP
    ctx->pc = 0x4454c8u;
}
