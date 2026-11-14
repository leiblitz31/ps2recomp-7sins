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

// Function: sub_003C3EB8
// Address: 0x3c3eb8 - 0x3c3f78
void sub_003C3EB8_0x3c3eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3EB8_0x3c3eb8");
#endif

    switch (ctx->pc) {
        case 0x3c3f00u: goto label_3c3f00;
        case 0x3c3f5cu: goto label_3c3f5c;
        default: break;
    }

    ctx->pc = 0x3c3eb8u;

    // 0x3c3eb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c3eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c3ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3ec0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c3ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c3ec4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c3ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c3ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3ecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c3eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c3ed0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c3ed4: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C3ED4u;
    {
        const bool branch_taken_0x3c3ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3ED4u;
        // 0x3c3ed8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ed4) {
            ctx->pc = 0x3C3F5Cu;
            goto label_3c3f5c;
        }
    }
    ctx->pc = 0x3C3EDCu;
    // 0x3c3edc: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C3EDCu;
    {
        const bool branch_taken_0x3c3edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EDCu;
        // 0x3c3ee0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3edc) {
            ctx->pc = 0x3C3F5Cu;
            goto label_3c3f5c;
        }
    }
    ctx->pc = 0x3C3EE4u;
    // 0x3c3ee4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3c3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3c3ee8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c3eec: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3EECu;
    {
        const bool branch_taken_0x3c3eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EECu;
        // 0x3c3ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3eec) {
            ctx->pc = 0x3C3F40u;
            goto label_3c3f40;
        }
    }
    ctx->pc = 0x3C3EF4u;
    // 0x3c3ef4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c3ef8: 0xc0c0e98  jal         func_303A60
    ctx->pc = 0x3C3EF8u;
    SET_GPR_U32(ctx, 31, 0x3C3F00u);
    ctx->pc = 0x3C3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3EF8u;
    // 0x3c3efc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303A60u, 0x3C3EF8u, 0x3C3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3F00u;
label_3c3f00:
    // 0x3c3f00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3f04: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C3F04u;
    {
        const bool branch_taken_0x3c3f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F04u;
        // 0x3c3f08: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f04) {
            ctx->pc = 0x3C3F38u;
            goto label_3c3f38;
        }
    }
    ctx->pc = 0x3C3F0Cu;
    // 0x3c3f0c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3c3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3c3f10: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C3F10u;
    {
        const bool branch_taken_0x3c3f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F10u;
        // 0x3c3f14: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f10) {
            ctx->pc = 0x3C3F44u;
            goto label_3c3f44;
        }
    }
    ctx->pc = 0x3C3F18u;
    // 0x3c3f18: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3c3f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c3f1c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3c3f1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c3f20: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3c3f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3c3f24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c3f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c3f28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c3f28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c3f2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3F2Cu;
    {
        const bool branch_taken_0x3c3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F2Cu;
        // 0x3c3f30: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f2c) {
            ctx->pc = 0x3C3F44u;
            goto label_3c3f44;
        }
    }
    ctx->pc = 0x3C3F34u;
    // 0x3c3f34: 0x0  nop
    ctx->pc = 0x3c3f34u;
    // NOP
label_3c3f38:
    // 0x3c3f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3F38u;
    {
        const bool branch_taken_0x3c3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F38u;
        // 0x3c3f3c: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f38) {
            ctx->pc = 0x3C3F44u;
            goto label_3c3f44;
        }
    }
    ctx->pc = 0x3C3F40u;
label_3c3f40:
    // 0x3c3f40: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x3c3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_3c3f44:
    // 0x3c3f44: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c3f48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3f4c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3F4Cu;
    {
        const bool branch_taken_0x3c3f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c3f4c) {
            ctx->pc = 0x3C3F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3F4Cu;
            // 0x3c3f50: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F60u;
            goto label_3c3f60;
        }
    }
    ctx->pc = 0x3C3F54u;
    // 0x3c3f54: 0xc0f0930  jal         func_3C24C0
    ctx->pc = 0x3C3F54u;
    SET_GPR_U32(ctx, 31, 0x3C3F5Cu);
    ctx->pc = 0x3C3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3F54u;
    // 0x3c3f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C3F54u, 0x3C3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3F5Cu;
label_3c3f5c:
    // 0x3c3f5c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3c3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3c3f60:
    // 0x3c3f60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c3f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3f64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c3f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F6Cu;
        // 0x3c3f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3F74u;
    // 0x3c3f74: 0x0  nop
    ctx->pc = 0x3c3f74u;
    // NOP
    ctx->pc = 0x3c3f78u;
}
