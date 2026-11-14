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

// Function: sub_00377A20
// Address: 0x377a20 - 0x377a88
void sub_00377A20_0x377a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A20_0x377a20");
#endif

    switch (ctx->pc) {
        case 0x377a20u: goto label_377a20;
        case 0x377a24u: goto label_377a24;
        case 0x377a28u: goto label_377a28;
        case 0x377a2cu: goto label_377a2c;
        case 0x377a30u: goto label_377a30;
        case 0x377a34u: goto label_377a34;
        case 0x377a38u: goto label_377a38;
        case 0x377a3cu: goto label_377a3c;
        case 0x377a40u: goto label_377a40;
        case 0x377a44u: goto label_377a44;
        case 0x377a48u: goto label_377a48;
        case 0x377a4cu: goto label_377a4c;
        case 0x377a50u: goto label_377a50;
        case 0x377a54u: goto label_377a54;
        case 0x377a58u: goto label_377a58;
        case 0x377a5cu: goto label_377a5c;
        case 0x377a60u: goto label_377a60;
        case 0x377a64u: goto label_377a64;
        case 0x377a68u: goto label_377a68;
        case 0x377a6cu: goto label_377a6c;
        case 0x377a70u: goto label_377a70;
        case 0x377a74u: goto label_377a74;
        case 0x377a78u: goto label_377a78;
        case 0x377a7cu: goto label_377a7c;
        case 0x377a80u: goto label_377a80;
        case 0x377a84u: goto label_377a84;
        default: break;
    }

    ctx->pc = 0x377a20u;

label_377a20:
    // 0x377a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377a24:
    // 0x377a24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377a28:
    // 0x377a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377a2c:
    // 0x377a2c: 0x8c43c438  lw          $v1, -0x3BC8($v0)
    ctx->pc = 0x377a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951992)));
label_377a30:
    // 0x377a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377a34:
    // 0x377a34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377a38:
    // 0x377a38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x377a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_377a3c:
    // 0x377a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377a40:
    // 0x377a40: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x377a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_377a44:
    // 0x377a44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x377a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_377a48:
    // 0x377a48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x377a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_377a4c:
    // 0x377a4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_377a50:
    if (ctx->pc == 0x377A50u) {
        ctx->pc = 0x377A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A4Cu;
        // 0x377a50: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377A54u;
        goto label_377a54;
    }
    ctx->pc = 0x377A4Cu;
    {
        const bool branch_taken_0x377a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A4Cu;
        // 0x377a50: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377a4c) {
            ctx->pc = 0x377A6Cu;
            goto label_377a6c;
        }
    }
    ctx->pc = 0x377A54u;
label_377a54:
    // 0x377a54: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_377a58:
    // 0x377a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x377a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377a5c:
    // 0x377a5c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x377a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_377a60:
    // 0x377a60: 0x40f809  jalr        $v0
label_377a64:
    if (ctx->pc == 0x377A64u) {
        ctx->pc = 0x377A68u;
        goto label_377a68;
    }
    ctx->pc = 0x377A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A60u, 0x377A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377A68u;
label_377a68:
    // 0x377a68: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x377a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_377a6c:
    // 0x377a6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377a70:
    // 0x377a70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377a74:
    // 0x377a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377a78:
    // 0x377a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377a7c:
    // 0x377a7c: 0x3e00008  jr          $ra
label_377a80:
    if (ctx->pc == 0x377A80u) {
        ctx->pc = 0x377A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A7Cu;
        // 0x377a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377A84u;
        goto label_377a84;
    }
    ctx->pc = 0x377A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A7Cu;
        // 0x377a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A84u;
label_377a84:
    // 0x377a84: 0x0  nop
    ctx->pc = 0x377a84u;
    // NOP
    ctx->pc = 0x377a88u;
}
