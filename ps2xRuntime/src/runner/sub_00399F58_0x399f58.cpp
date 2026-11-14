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

// Function: sub_00399F58
// Address: 0x399f58 - 0x399fd8
void sub_00399F58_0x399f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399F58_0x399f58");
#endif

    switch (ctx->pc) {
        case 0x399f58u: goto label_399f58;
        case 0x399f5cu: goto label_399f5c;
        case 0x399f60u: goto label_399f60;
        case 0x399f64u: goto label_399f64;
        case 0x399f68u: goto label_399f68;
        case 0x399f6cu: goto label_399f6c;
        case 0x399f70u: goto label_399f70;
        case 0x399f74u: goto label_399f74;
        case 0x399f78u: goto label_399f78;
        case 0x399f7cu: goto label_399f7c;
        case 0x399f80u: goto label_399f80;
        case 0x399f84u: goto label_399f84;
        case 0x399f88u: goto label_399f88;
        case 0x399f8cu: goto label_399f8c;
        case 0x399f90u: goto label_399f90;
        case 0x399f94u: goto label_399f94;
        case 0x399f98u: goto label_399f98;
        case 0x399f9cu: goto label_399f9c;
        case 0x399fa0u: goto label_399fa0;
        case 0x399fa4u: goto label_399fa4;
        case 0x399fa8u: goto label_399fa8;
        case 0x399facu: goto label_399fac;
        case 0x399fb0u: goto label_399fb0;
        case 0x399fb4u: goto label_399fb4;
        case 0x399fb8u: goto label_399fb8;
        case 0x399fbcu: goto label_399fbc;
        case 0x399fc0u: goto label_399fc0;
        case 0x399fc4u: goto label_399fc4;
        case 0x399fc8u: goto label_399fc8;
        case 0x399fccu: goto label_399fcc;
        case 0x399fd0u: goto label_399fd0;
        case 0x399fd4u: goto label_399fd4;
        default: break;
    }

    ctx->pc = 0x399f58u;

label_399f58:
    // 0x399f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_399f5c:
    // 0x399f5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x399f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_399f60:
    // 0x399f60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x399f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_399f64:
    // 0x399f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_399f68:
    // 0x399f68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x399f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_399f6c:
    // 0x399f6c: 0x8c43e884  lw          $v1, -0x177C($v0)
    ctx->pc = 0x399f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961284)));
label_399f70:
    // 0x399f70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399f74:
    // 0x399f74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x399f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_399f78:
    // 0x399f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_399f7c:
    // 0x399f7c: 0x2471003c  addiu       $s1, $v1, 0x3C
    ctx->pc = 0x399f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_399f80:
    // 0x399f80: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x399f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_399f84:
    // 0x399f84: 0x1091000c  beq         $a0, $s1, . + 4 + (0xC << 2)
label_399f88:
    if (ctx->pc == 0x399F88u) {
        ctx->pc = 0x399F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F84u;
        // 0x399f88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F8Cu;
        goto label_399f8c;
    }
    ctx->pc = 0x399F84u;
    {
        const bool branch_taken_0x399f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x399F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F84u;
        // 0x399f88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f84) {
            ctx->pc = 0x399FB8u;
            goto label_399fb8;
        }
    }
    ctx->pc = 0x399F8Cu;
label_399f8c:
    // 0x399f8c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x399f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_399f90:
    // 0x399f90: 0x2484ffcc  addiu       $a0, $a0, -0x34
    ctx->pc = 0x399f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967244));
label_399f94:
    // 0x399f94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_399f98:
    if (ctx->pc == 0x399F98u) {
        ctx->pc = 0x399F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F94u;
        // 0x399f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F9Cu;
        goto label_399f9c;
    }
    ctx->pc = 0x399F94u;
    {
        const bool branch_taken_0x399f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399f94) {
            ctx->pc = 0x399F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399F94u;
            // 0x399f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399FB0u;
            goto label_399fb0;
        }
    }
    ctx->pc = 0x399F9Cu;
label_399f9c:
    // 0x399f9c: 0x260f809  jalr        $s3
label_399fa0:
    if (ctx->pc == 0x399FA0u) {
        ctx->pc = 0x399FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F9Cu;
        // 0x399fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FA4u;
        goto label_399fa4;
    }
    ctx->pc = 0x399F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x399FA4u);
        ctx->pc = 0x399FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F9Cu;
        // 0x399fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399F9Cu, 0x399FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399FA4u;
label_399fa4:
    // 0x399fa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_399fa8:
    if (ctx->pc == 0x399FA8u) {
        ctx->pc = 0x399FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FA4u;
        // 0x399fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FACu;
        goto label_399fac;
    }
    ctx->pc = 0x399FA4u;
    {
        const bool branch_taken_0x399fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FA4u;
        // 0x399fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fa4) {
            ctx->pc = 0x399FBCu;
            goto label_399fbc;
        }
    }
    ctx->pc = 0x399FACu;
label_399fac:
    // 0x399fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399fb0:
    // 0x399fb0: 0x5491fff7  bnel        $a0, $s1, . + 4 + (-0x9 << 2)
label_399fb4:
    if (ctx->pc == 0x399FB4u) {
        ctx->pc = 0x399FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FB0u;
        // 0x399fb4: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FB8u;
        goto label_399fb8;
    }
    ctx->pc = 0x399FB0u;
    {
        const bool branch_taken_0x399fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x399fb0) {
            ctx->pc = 0x399FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FB0u;
            // 0x399fb4: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399f90;
        }
    }
    ctx->pc = 0x399FB8u;
label_399fb8:
    // 0x399fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399fbc:
    // 0x399fbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x399fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399fc0:
    // 0x399fc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x399fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399fc4:
    // 0x399fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x399fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399fc8:
    // 0x399fc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x399fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399fcc:
    // 0x399fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399fd0:
    // 0x399fd0: 0x3e00008  jr          $ra
label_399fd4:
    if (ctx->pc == 0x399FD4u) {
        ctx->pc = 0x399FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FD0u;
        // 0x399fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FD8u;
        goto label_fallthrough_0x399fd0;
    }
    ctx->pc = 0x399FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FD0u;
        // 0x399fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399fd0:
    ctx->pc = 0x399FD8u;
}
