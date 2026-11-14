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

// Function: sub_00323CD0
// Address: 0x323cd0 - 0x323d50
void sub_00323CD0_0x323cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323CD0_0x323cd0");
#endif

    switch (ctx->pc) {
        case 0x323cd0u: goto label_323cd0;
        case 0x323cd4u: goto label_323cd4;
        case 0x323cd8u: goto label_323cd8;
        case 0x323cdcu: goto label_323cdc;
        case 0x323ce0u: goto label_323ce0;
        case 0x323ce4u: goto label_323ce4;
        case 0x323ce8u: goto label_323ce8;
        case 0x323cecu: goto label_323cec;
        case 0x323cf0u: goto label_323cf0;
        case 0x323cf4u: goto label_323cf4;
        case 0x323cf8u: goto label_323cf8;
        case 0x323cfcu: goto label_323cfc;
        case 0x323d00u: goto label_323d00;
        case 0x323d04u: goto label_323d04;
        case 0x323d08u: goto label_323d08;
        case 0x323d0cu: goto label_323d0c;
        case 0x323d10u: goto label_323d10;
        case 0x323d14u: goto label_323d14;
        case 0x323d18u: goto label_323d18;
        case 0x323d1cu: goto label_323d1c;
        case 0x323d20u: goto label_323d20;
        case 0x323d24u: goto label_323d24;
        case 0x323d28u: goto label_323d28;
        case 0x323d2cu: goto label_323d2c;
        case 0x323d30u: goto label_323d30;
        case 0x323d34u: goto label_323d34;
        case 0x323d38u: goto label_323d38;
        case 0x323d3cu: goto label_323d3c;
        case 0x323d40u: goto label_323d40;
        case 0x323d44u: goto label_323d44;
        case 0x323d48u: goto label_323d48;
        case 0x323d4cu: goto label_323d4c;
        default: break;
    }

    ctx->pc = 0x323cd0u;

label_323cd0:
    // 0x323cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323cd4:
    // 0x323cd4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323cd8:
    // 0x323cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_323cdc:
    // 0x323cdc: 0x8c62b1e4  lw          $v0, -0x4E1C($v1)
    ctx->pc = 0x323cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947300)));
label_323ce0:
    // 0x323ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323ce4:
    // 0x323ce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_323ce8:
    // 0x323ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323cec:
    // 0x323cec: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x323cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_323cf0:
    // 0x323cf0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_323cf4:
    // 0x323cf4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_323cf8:
    if (ctx->pc == 0x323CF8u) {
        ctx->pc = 0x323CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CF4u;
        // 0x323cf8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323CFCu;
        goto label_323cfc;
    }
    ctx->pc = 0x323CF4u;
    {
        const bool branch_taken_0x323cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323cf4) {
            ctx->pc = 0x323CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323CF4u;
            // 0x323cf8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323D08u;
            goto label_323d08;
        }
    }
    ctx->pc = 0x323CFCu;
label_323cfc:
    // 0x323cfc: 0xc10822c  jal         func_4208B0
label_323d00:
    if (ctx->pc == 0x323D00u) {
        ctx->pc = 0x323D04u;
        goto label_323d04;
    }
    ctx->pc = 0x323CFCu;
    SET_GPR_U32(ctx, 31, 0x323D04u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x323CFCu, 0x323D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D04u;
label_323d04:
    // 0x323d04: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x323d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_323d08:
    // 0x323d08: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_323d0c:
    if (ctx->pc == 0x323D0Cu) {
        ctx->pc = 0x323D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D08u;
        // 0x323d0c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D10u;
        goto label_323d10;
    }
    ctx->pc = 0x323D08u;
    {
        const bool branch_taken_0x323d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323d08) {
            ctx->pc = 0x323D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323D08u;
            // 0x323d0c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323D34u;
            goto label_323d34;
        }
    }
    ctx->pc = 0x323D10u;
label_323d10:
    // 0x323d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x323d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323d14:
    // 0x323d14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_323d18:
    // 0x323d18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_323d1c:
    if (ctx->pc == 0x323D1Cu) {
        ctx->pc = 0x323D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D18u;
        // 0x323d1c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D20u;
        goto label_323d20;
    }
    ctx->pc = 0x323D18u;
    {
        const bool branch_taken_0x323d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D18u;
        // 0x323d1c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d18) {
            ctx->pc = 0x323D30u;
            goto label_323d30;
        }
    }
    ctx->pc = 0x323D20u;
label_323d20:
    // 0x323d20: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323d24:
    // 0x323d24: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x323d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_323d28:
    // 0x323d28: 0x40f809  jalr        $v0
label_323d2c:
    if (ctx->pc == 0x323D2Cu) {
        ctx->pc = 0x323D30u;
        goto label_323d30;
    }
    ctx->pc = 0x323D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323D30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D28u, 0x323D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323D30u;
label_323d30:
    // 0x323d30: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x323d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_323d34:
    // 0x323d34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323d38:
    // 0x323d38: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x323d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_323d3c:
    // 0x323d3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_323d40:
    // 0x323d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323d44:
    // 0x323d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323d48:
    // 0x323d48: 0x3e00008  jr          $ra
label_323d4c:
    if (ctx->pc == 0x323D4Cu) {
        ctx->pc = 0x323D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D48u;
        // 0x323d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D50u;
        goto label_fallthrough_0x323d48;
    }
    ctx->pc = 0x323D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D48u;
        // 0x323d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323d48:
    ctx->pc = 0x323D50u;
}
