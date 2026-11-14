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

// Function: sub_00498F00
// Address: 0x498f00 - 0x498f58
void sub_00498F00_0x498f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498F00_0x498f00");
#endif

    switch (ctx->pc) {
        case 0x498f00u: goto label_498f00;
        case 0x498f04u: goto label_498f04;
        case 0x498f08u: goto label_498f08;
        case 0x498f0cu: goto label_498f0c;
        case 0x498f10u: goto label_498f10;
        case 0x498f14u: goto label_498f14;
        case 0x498f18u: goto label_498f18;
        case 0x498f1cu: goto label_498f1c;
        case 0x498f20u: goto label_498f20;
        case 0x498f24u: goto label_498f24;
        case 0x498f28u: goto label_498f28;
        case 0x498f2cu: goto label_498f2c;
        case 0x498f30u: goto label_498f30;
        case 0x498f34u: goto label_498f34;
        case 0x498f38u: goto label_498f38;
        case 0x498f3cu: goto label_498f3c;
        case 0x498f40u: goto label_498f40;
        case 0x498f44u: goto label_498f44;
        case 0x498f48u: goto label_498f48;
        case 0x498f4cu: goto label_498f4c;
        case 0x498f50u: goto label_498f50;
        case 0x498f54u: goto label_498f54;
        default: break;
    }

    ctx->pc = 0x498f00u;

label_498f00:
    // 0x498f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_498f04:
    // 0x498f04: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x498f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_498f08:
    // 0x498f08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_498f0c:
    // 0x498f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_498f10:
    // 0x498f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498f14:
    // 0x498f14: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498f18:
    if (ctx->pc == 0x498F18u) {
        ctx->pc = 0x498F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F14u;
        // 0x498f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F1Cu;
        goto label_498f1c;
    }
    ctx->pc = 0x498F14u;
    {
        const bool branch_taken_0x498f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F14u;
        // 0x498f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f14) {
            ctx->pc = 0x498F48u;
            goto label_498f48;
        }
    }
    ctx->pc = 0x498F1Cu;
label_498f1c:
    // 0x498f1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498f20:
    // 0x498f20: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498f24:
    // 0x498f24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498f28:
    // 0x498f28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498f2c:
    // 0x498f2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498f30:
    // 0x498f30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498f34:
    // 0x498f34: 0x40f809  jalr        $v0
label_498f38:
    if (ctx->pc == 0x498F38u) {
        ctx->pc = 0x498F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F34u;
        // 0x498f38: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F3Cu;
        goto label_498f3c;
    }
    ctx->pc = 0x498F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498F3Cu);
        ctx->pc = 0x498F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F34u;
        // 0x498f38: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498F34u, 0x498F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498F3Cu;
label_498f3c:
    // 0x498f3c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498f3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498f40:
    // 0x498f40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498f44:
    // 0x498f44: 0x0  nop
    ctx->pc = 0x498f44u;
    // NOP
label_498f48:
    // 0x498f48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498f4c:
    // 0x498f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498f50:
    // 0x498f50: 0x3e00008  jr          $ra
label_498f54:
    if (ctx->pc == 0x498F54u) {
        ctx->pc = 0x498F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F50u;
        // 0x498f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F58u;
        goto label_fallthrough_0x498f50;
    }
    ctx->pc = 0x498F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F50u;
        // 0x498f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498f50:
    ctx->pc = 0x498F58u;
}
