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

// Function: sub_0041CEA0
// Address: 0x41cea0 - 0x41cf08
void sub_0041CEA0_0x41cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CEA0_0x41cea0");
#endif

    switch (ctx->pc) {
        case 0x41cea0u: goto label_41cea0;
        case 0x41cea4u: goto label_41cea4;
        case 0x41cea8u: goto label_41cea8;
        case 0x41ceacu: goto label_41ceac;
        case 0x41ceb0u: goto label_41ceb0;
        case 0x41ceb4u: goto label_41ceb4;
        case 0x41ceb8u: goto label_41ceb8;
        case 0x41cebcu: goto label_41cebc;
        case 0x41cec0u: goto label_41cec0;
        case 0x41cec4u: goto label_41cec4;
        case 0x41cec8u: goto label_41cec8;
        case 0x41ceccu: goto label_41cecc;
        case 0x41ced0u: goto label_41ced0;
        case 0x41ced4u: goto label_41ced4;
        case 0x41ced8u: goto label_41ced8;
        case 0x41cedcu: goto label_41cedc;
        case 0x41cee0u: goto label_41cee0;
        case 0x41cee4u: goto label_41cee4;
        case 0x41cee8u: goto label_41cee8;
        case 0x41ceecu: goto label_41ceec;
        case 0x41cef0u: goto label_41cef0;
        case 0x41cef4u: goto label_41cef4;
        case 0x41cef8u: goto label_41cef8;
        case 0x41cefcu: goto label_41cefc;
        case 0x41cf00u: goto label_41cf00;
        case 0x41cf04u: goto label_41cf04;
        default: break;
    }

    ctx->pc = 0x41cea0u;

label_41cea0:
    // 0x41cea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41cea4:
    // 0x41cea4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41cea8:
    // 0x41cea8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41ceac:
    // 0x41ceac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41ceacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ceb0:
    // 0x41ceb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41ceb4:
    // 0x41ceb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41ceb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ceb8:
    // 0x41ceb8: 0x8c62e8e0  lw          $v0, -0x1720($v1)
    ctx->pc = 0x41ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961376)));
label_41cebc:
    // 0x41cebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cec0:
    // 0x41cec0: 0x40f809  jalr        $v0
label_41cec4:
    if (ctx->pc == 0x41CEC4u) {
        ctx->pc = 0x41CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEC0u;
        // 0x41cec4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CEC8u;
        goto label_41cec8;
    }
    ctx->pc = 0x41CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CEC8u);
        ctx->pc = 0x41CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEC0u;
        // 0x41cec4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CEC0u, 0x41CEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CEC8u;
label_41cec8:
    // 0x41cec8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_41cecc:
    if (ctx->pc == 0x41CECCu) {
        ctx->pc = 0x41CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEC8u;
        // 0x41cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CED0u;
        goto label_41ced0;
    }
    ctx->pc = 0x41CEC8u;
    {
        const bool branch_taken_0x41cec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEC8u;
        // 0x41cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cec8) {
            ctx->pc = 0x41CEF0u;
            goto label_41cef0;
        }
    }
    ctx->pc = 0x41CED0u;
label_41ced0:
    // 0x41ced0: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x41ced0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_41ced4:
    // 0x41ced4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41ced8:
    // 0x41ced8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_41cedc:
    if (ctx->pc == 0x41CEDCu) {
        ctx->pc = 0x41CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CED8u;
        // 0x41cedc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CEE0u;
        goto label_41cee0;
    }
    ctx->pc = 0x41CED8u;
    {
        const bool branch_taken_0x41ced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ced8) {
            ctx->pc = 0x41CEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CED8u;
            // 0x41cedc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CEF0u;
            goto label_41cef0;
        }
    }
    ctx->pc = 0x41CEE0u;
label_41cee0:
    // 0x41cee0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41cee4:
    // 0x41cee4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x41cee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_41cee8:
    // 0x41cee8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41ceec:
    // 0x41ceec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41ceecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cef0:
    // 0x41cef0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41cef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41cef4:
    // 0x41cef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41cef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41cef8:
    // 0x41cef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41cefc:
    // 0x41cefc: 0x3e00008  jr          $ra
label_41cf00:
    if (ctx->pc == 0x41CF00u) {
        ctx->pc = 0x41CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEFCu;
        // 0x41cf00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF04u;
        goto label_41cf04;
    }
    ctx->pc = 0x41CEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEFCu;
        // 0x41cf00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF04u;
label_41cf04:
    // 0x41cf04: 0x0  nop
    ctx->pc = 0x41cf04u;
    // NOP
    ctx->pc = 0x41cf08u;
}
