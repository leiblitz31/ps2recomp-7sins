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

// Function: sub_00411D30
// Address: 0x411d30 - 0x411db0
void sub_00411D30_0x411d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411D30_0x411d30");
#endif

    switch (ctx->pc) {
        case 0x411d30u: goto label_411d30;
        case 0x411d34u: goto label_411d34;
        case 0x411d38u: goto label_411d38;
        case 0x411d3cu: goto label_411d3c;
        case 0x411d40u: goto label_411d40;
        case 0x411d44u: goto label_411d44;
        case 0x411d48u: goto label_411d48;
        case 0x411d4cu: goto label_411d4c;
        case 0x411d50u: goto label_411d50;
        case 0x411d54u: goto label_411d54;
        case 0x411d58u: goto label_411d58;
        case 0x411d5cu: goto label_411d5c;
        case 0x411d60u: goto label_411d60;
        case 0x411d64u: goto label_411d64;
        case 0x411d68u: goto label_411d68;
        case 0x411d6cu: goto label_411d6c;
        case 0x411d70u: goto label_411d70;
        case 0x411d74u: goto label_411d74;
        case 0x411d78u: goto label_411d78;
        case 0x411d7cu: goto label_411d7c;
        case 0x411d80u: goto label_411d80;
        case 0x411d84u: goto label_411d84;
        case 0x411d88u: goto label_411d88;
        case 0x411d8cu: goto label_411d8c;
        case 0x411d90u: goto label_411d90;
        case 0x411d94u: goto label_411d94;
        case 0x411d98u: goto label_411d98;
        case 0x411d9cu: goto label_411d9c;
        case 0x411da0u: goto label_411da0;
        case 0x411da4u: goto label_411da4;
        case 0x411da8u: goto label_411da8;
        case 0x411dacu: goto label_411dac;
        default: break;
    }

    ctx->pc = 0x411d30u;

label_411d30:
    // 0x411d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411d34:
    // 0x411d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_411d38:
    // 0x411d38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x411d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_411d3c:
    // 0x411d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_411d40:
    // 0x411d40: 0xc1046a0  jal         func_411A80
label_411d44:
    if (ctx->pc == 0x411D44u) {
        ctx->pc = 0x411D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D40u;
        // 0x411d44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411D48u;
        goto label_411d48;
    }
    ctx->pc = 0x411D40u;
    SET_GPR_U32(ctx, 31, 0x411D48u);
    ctx->pc = 0x411D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411D40u;
    // 0x411d44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411A80u, 0x411D40u, 0x411D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411D48u;
label_411d48:
    // 0x411d48: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411d4c:
    // 0x411d4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411d50:
    // 0x411d50: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x411d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411d54:
    // 0x411d54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x411d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_411d58:
    // 0x411d58: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x411d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_411d5c:
    // 0x411d5c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_411d60:
    if (ctx->pc == 0x411D60u) {
        ctx->pc = 0x411D64u;
        goto label_411d64;
    }
    ctx->pc = 0x411D5Cu;
    {
        const bool branch_taken_0x411d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x411d5c) {
            ctx->pc = 0x411D8Cu;
            goto label_411d8c;
        }
    }
    ctx->pc = 0x411D64u;
label_411d64:
    // 0x411d64: 0xc105072  jal         func_4141C8
label_411d68:
    if (ctx->pc == 0x411D68u) {
        ctx->pc = 0x411D6Cu;
        goto label_411d6c;
    }
    ctx->pc = 0x411D64u;
    SET_GPR_U32(ctx, 31, 0x411D6Cu);
    ctx->pc = 0x4141C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4141C8u, 0x411D64u, 0x411D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411D6Cu;
label_411d6c:
    // 0x411d6c: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411d70:
    // 0x411d70: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x411d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_411d74:
    // 0x411d74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x411d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_411d78:
    // 0x411d78: 0xa0f809  jalr        $a1
label_411d7c:
    if (ctx->pc == 0x411D7Cu) {
        ctx->pc = 0x411D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D78u;
        // 0x411d7c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411D80u;
        goto label_411d80;
    }
    ctx->pc = 0x411D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x411D80u);
        ctx->pc = 0x411D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D78u;
        // 0x411d7c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411D78u, 0x411D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411D80u;
label_411d80:
    // 0x411d80: 0x8f82bdd0  lw          $v0, -0x4230($gp)
    ctx->pc = 0x411d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411d84:
    // 0x411d84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x411d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_411d88:
    // 0x411d88: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x411d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_411d8c:
    // 0x411d8c: 0x8f83bdd4  lw          $v1, -0x422C($gp)
    ctx->pc = 0x411d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950356)));
label_411d90:
    // 0x411d90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x411d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411d94:
    // 0x411d94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x411d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_411d98:
    // 0x411d98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x411d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_411d9c:
    // 0x411d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411da0:
    // 0x411da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_411da4:
    // 0x411da4: 0xaf83bdd4  sw          $v1, -0x422C($gp)
    ctx->pc = 0x411da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950356), GPR_U32(ctx, 3));
label_411da8:
    // 0x411da8: 0x3e00008  jr          $ra
label_411dac:
    if (ctx->pc == 0x411DACu) {
        ctx->pc = 0x411DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DA8u;
        // 0x411dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411DB0u;
        goto label_fallthrough_0x411da8;
    }
    ctx->pc = 0x411DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DA8u;
        // 0x411dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x411da8:
    ctx->pc = 0x411DB0u;
}
