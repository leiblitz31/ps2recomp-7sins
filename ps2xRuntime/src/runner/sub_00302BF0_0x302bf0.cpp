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

// Function: sub_00302BF0
// Address: 0x302bf0 - 0x302c80
void sub_00302BF0_0x302bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BF0_0x302bf0");
#endif

    switch (ctx->pc) {
        case 0x302c2cu: goto label_302c2c;
        case 0x302c44u: goto label_302c44;
        case 0x302c58u: goto label_302c58;
        default: break;
    }

    ctx->pc = 0x302bf0u;

    // 0x302bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x302bf4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x302bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x302bf8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x302bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302bfc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x302bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x302c00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x302c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302c04: 0x24530b6c  addiu       $s3, $v0, 0xB6C
    ctx->pc = 0x302c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2924));
    // 0x302c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x302c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302c0c: 0x24712a68  addiu       $s1, $v1, 0x2A68
    ctx->pc = 0x302c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10856));
    // 0x302c10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302c14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x302c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302c1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c24: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x302C24u;
    SET_GPR_U32(ctx, 31, 0x302C2Cu);
    ctx->pc = 0x302C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C24u;
    // 0x302c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x302C24u, 0x302C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C2Cu;
label_302c2c:
    // 0x302c2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x302C2Cu;
    {
        const bool branch_taken_0x302c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C2Cu;
        // 0x302c30: 0x3c10004f  lui         $s0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c2c) {
            ctx->pc = 0x302C5Cu;
            goto label_302c5c;
        }
    }
    ctx->pc = 0x302C34u;
    // 0x302c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c38: 0x8e050c30  lw          $a1, 0xC30($s0)
    ctx->pc = 0x302c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3120)));
    // 0x302c3c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x302C3Cu;
    SET_GPR_U32(ctx, 31, 0x302C44u);
    ctx->pc = 0x302C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C3Cu;
    // 0x302c40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x302C3Cu, 0x302C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C44u;
label_302c44:
    // 0x302c44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302C44u;
    {
        const bool branch_taken_0x302c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C44u;
        // 0x302c48: 0x8e050c30  lw          $a1, 0xC30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c44) {
            ctx->pc = 0x302C5Cu;
            goto label_302c5c;
        }
    }
    ctx->pc = 0x302C4Cu;
    // 0x302c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c50: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x302C50u;
    SET_GPR_U32(ctx, 31, 0x302C58u);
    ctx->pc = 0x302C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C50u;
    // 0x302c54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x302C50u, 0x302C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C58u;
label_302c58:
    // 0x302c58: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x302c58u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_302c5c:
    // 0x302c5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x302c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302c64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x302c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302c68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x302c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302c6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x302c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302c74: 0x3e00008  jr          $ra
    ctx->pc = 0x302C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C74u;
        // 0x302c78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302C7Cu;
    // 0x302c7c: 0x0  nop
    ctx->pc = 0x302c7cu;
    // NOP
    ctx->pc = 0x302c80u;
}
