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

// Function: sub_002E7F50
// Address: 0x2e7f50 - 0x2e7fd0
void sub_002E7F50_0x2e7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F50_0x2e7f50");
#endif

    switch (ctx->pc) {
        case 0x2e7f50u: goto label_2e7f50;
        case 0x2e7f54u: goto label_2e7f54;
        case 0x2e7f58u: goto label_2e7f58;
        case 0x2e7f5cu: goto label_2e7f5c;
        case 0x2e7f60u: goto label_2e7f60;
        case 0x2e7f64u: goto label_2e7f64;
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f6cu: goto label_2e7f6c;
        case 0x2e7f70u: goto label_2e7f70;
        case 0x2e7f74u: goto label_2e7f74;
        case 0x2e7f78u: goto label_2e7f78;
        case 0x2e7f7cu: goto label_2e7f7c;
        case 0x2e7f80u: goto label_2e7f80;
        case 0x2e7f84u: goto label_2e7f84;
        case 0x2e7f88u: goto label_2e7f88;
        case 0x2e7f8cu: goto label_2e7f8c;
        case 0x2e7f90u: goto label_2e7f90;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7f98u: goto label_2e7f98;
        case 0x2e7f9cu: goto label_2e7f9c;
        case 0x2e7fa0u: goto label_2e7fa0;
        case 0x2e7fa4u: goto label_2e7fa4;
        case 0x2e7fa8u: goto label_2e7fa8;
        case 0x2e7facu: goto label_2e7fac;
        case 0x2e7fb0u: goto label_2e7fb0;
        case 0x2e7fb4u: goto label_2e7fb4;
        case 0x2e7fb8u: goto label_2e7fb8;
        case 0x2e7fbcu: goto label_2e7fbc;
        case 0x2e7fc0u: goto label_2e7fc0;
        case 0x2e7fc4u: goto label_2e7fc4;
        case 0x2e7fc8u: goto label_2e7fc8;
        case 0x2e7fccu: goto label_2e7fcc;
        default: break;
    }

    ctx->pc = 0x2e7f50u;

label_2e7f50:
    // 0x2e7f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e7f54:
    // 0x2e7f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e7f58:
    // 0x2e7f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e7f5c:
    // 0x2e7f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e7f60:
    // 0x2e7f60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e7f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f64:
    // 0x2e7f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e7f68:
    // 0x2e7f68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e7f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f6c:
    // 0x2e7f6c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e7f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f70:
    // 0x2e7f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e7f74:
    // 0x2e7f74: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x2e7f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e7f78:
    // 0x2e7f78: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2e7f7c:
    if (ctx->pc == 0x2E7F7Cu) {
        ctx->pc = 0x2E7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F78u;
        // 0x2e7f7c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F80u;
        goto label_2e7f80;
    }
    ctx->pc = 0x2E7F78u;
    {
        const bool branch_taken_0x2e7f78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F78u;
        // 0x2e7f7c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f78) {
            ctx->pc = 0x2E7F88u;
            goto label_2e7f88;
        }
    }
    ctx->pc = 0x2E7F80u;
label_2e7f80:
    // 0x2e7f80: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e7f84:
    if (ctx->pc == 0x2E7F84u) {
        ctx->pc = 0x2E7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F80u;
        // 0x2e7f84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F88u;
        goto label_2e7f88;
    }
    ctx->pc = 0x2E7F80u;
    {
        const bool branch_taken_0x2e7f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F80u;
        // 0x2e7f84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f80) {
            ctx->pc = 0x2E7FACu;
            goto label_2e7fac;
        }
    }
    ctx->pc = 0x2E7F88u;
label_2e7f88:
    // 0x2e7f88: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2e7f88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2e7f8c:
    // 0x2e7f8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7f90:
    // 0x2e7f90: 0x260f809  jalr        $s3
label_2e7f94:
    if (ctx->pc == 0x2E7F94u) {
        ctx->pc = 0x2E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F90u;
        // 0x2e7f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F98u;
        goto label_2e7f98;
    }
    ctx->pc = 0x2E7F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2E7F98u);
        ctx->pc = 0x2E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F90u;
        // 0x2e7f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F90u, 0x2E7F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7F98u;
label_2e7f98:
    // 0x2e7f98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e7f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e7f9c:
    // 0x2e7f9c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_2e7fa0:
    if (ctx->pc == 0x2E7FA0u) {
        ctx->pc = 0x2E7FA4u;
        goto label_2e7fa4;
    }
    ctx->pc = 0x2E7F9Cu;
    {
        const bool branch_taken_0x2e7f9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f9c) {
            ctx->pc = 0x2E7F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7f88;
        }
    }
    ctx->pc = 0x2E7FA4u;
label_2e7fa4:
    // 0x2e7fa4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_2e7fa8:
    if (ctx->pc == 0x2E7FA8u) {
        ctx->pc = 0x2E7FACu;
        goto label_2e7fac;
    }
    ctx->pc = 0x2E7FA4u;
    {
        const bool branch_taken_0x2e7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fa4) {
            ctx->pc = 0x2E7F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7f80;
        }
    }
    ctx->pc = 0x2E7FACu;
label_2e7fac:
    // 0x2e7fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7fb0:
    // 0x2e7fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7fb4:
    // 0x2e7fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7fb8:
    // 0x2e7fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7fbc:
    // 0x2e7fbc: 0x3e00008  jr          $ra
label_2e7fc0:
    if (ctx->pc == 0x2E7FC0u) {
        ctx->pc = 0x2E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FBCu;
        // 0x2e7fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FC4u;
        goto label_2e7fc4;
    }
    ctx->pc = 0x2E7FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FBCu;
        // 0x2e7fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7FC4u;
label_2e7fc4:
    // 0x2e7fc4: 0x0  nop
    ctx->pc = 0x2e7fc4u;
    // NOP
label_2e7fc8:
    // 0x2e7fc8: 0x0  nop
    ctx->pc = 0x2e7fc8u;
    // NOP
label_2e7fcc:
    // 0x2e7fcc: 0x0  nop
    ctx->pc = 0x2e7fccu;
    // NOP
    ctx->pc = 0x2e7fd0u;
}
