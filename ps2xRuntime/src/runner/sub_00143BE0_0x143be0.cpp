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

// Function: sub_00143BE0
// Address: 0x143be0 - 0x143c80
void sub_00143BE0_0x143be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143BE0_0x143be0");
#endif

    switch (ctx->pc) {
        case 0x143be0u: goto label_143be0;
        case 0x143be4u: goto label_143be4;
        case 0x143be8u: goto label_143be8;
        case 0x143becu: goto label_143bec;
        case 0x143bf0u: goto label_143bf0;
        case 0x143bf4u: goto label_143bf4;
        case 0x143bf8u: goto label_143bf8;
        case 0x143bfcu: goto label_143bfc;
        case 0x143c00u: goto label_143c00;
        case 0x143c04u: goto label_143c04;
        case 0x143c08u: goto label_143c08;
        case 0x143c0cu: goto label_143c0c;
        case 0x143c10u: goto label_143c10;
        case 0x143c14u: goto label_143c14;
        case 0x143c18u: goto label_143c18;
        case 0x143c1cu: goto label_143c1c;
        case 0x143c20u: goto label_143c20;
        case 0x143c24u: goto label_143c24;
        case 0x143c28u: goto label_143c28;
        case 0x143c2cu: goto label_143c2c;
        case 0x143c30u: goto label_143c30;
        case 0x143c34u: goto label_143c34;
        case 0x143c38u: goto label_143c38;
        case 0x143c3cu: goto label_143c3c;
        case 0x143c40u: goto label_143c40;
        case 0x143c44u: goto label_143c44;
        case 0x143c48u: goto label_143c48;
        case 0x143c4cu: goto label_143c4c;
        case 0x143c50u: goto label_143c50;
        case 0x143c54u: goto label_143c54;
        case 0x143c58u: goto label_143c58;
        case 0x143c5cu: goto label_143c5c;
        case 0x143c60u: goto label_143c60;
        case 0x143c64u: goto label_143c64;
        case 0x143c68u: goto label_143c68;
        case 0x143c6cu: goto label_143c6c;
        case 0x143c70u: goto label_143c70;
        case 0x143c74u: goto label_143c74;
        case 0x143c78u: goto label_143c78;
        case 0x143c7cu: goto label_143c7c;
        default: break;
    }

    ctx->pc = 0x143be0u;

label_143be0:
    // 0x143be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143be4:
    // 0x143be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_143be8:
    // 0x143be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143bec:
    // 0x143bec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x143becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_143bf0:
    // 0x143bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143bf4:
    // 0x143bf4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143bf8:
    // 0x143bf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143bfc:
    // 0x143bfc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x143bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_143c00:
    // 0x143c00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143c04:
    // 0x143c04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x143c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_143c08:
    // 0x143c08: 0x320f809  jalr        $t9
label_143c0c:
    if (ctx->pc == 0x143C0Cu) {
        ctx->pc = 0x143C10u;
        goto label_143c10;
    }
    ctx->pc = 0x143C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143C10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C08u, 0x143C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C10u;
label_143c10:
    // 0x143c10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x143c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143c14:
    // 0x143c14: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x143c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_143c18:
    // 0x143c18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_143c1c:
    // 0x143c1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x143c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143c20:
    // 0x143c20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143c24:
    // 0x143c24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143c28:
    // 0x143c28: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143c28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143c2c:
    // 0x143c2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143c30:
    // 0x143c30: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x143c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_143c34:
    // 0x143c34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143c38:
    // 0x143c38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_143c3c:
    // 0x143c3c: 0x320f809  jalr        $t9
label_143c40:
    if (ctx->pc == 0x143C40u) {
        ctx->pc = 0x143C44u;
        goto label_143c44;
    }
    ctx->pc = 0x143C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C3Cu, 0x143C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C44u;
label_143c44:
    // 0x143c44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x143c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143c48:
    // 0x143c48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x143c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_143c4c:
    // 0x143c4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_143c50:
    // 0x143c50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x143c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143c54:
    // 0x143c54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143c58:
    // 0x143c58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143c5c:
    // 0x143c5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143c60:
    // 0x143c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143c64:
    // 0x143c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143c68:
    // 0x143c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_143c6c:
    // 0x143c6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x143c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143c70:
    // 0x143c70: 0x3e00008  jr          $ra
label_143c74:
    if (ctx->pc == 0x143C74u) {
        ctx->pc = 0x143C78u;
        goto label_143c78;
    }
    ctx->pc = 0x143C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143C78u;
label_143c78:
    // 0x143c78: 0x0  nop
    ctx->pc = 0x143c78u;
    // NOP
label_143c7c:
    // 0x143c7c: 0x0  nop
    ctx->pc = 0x143c7cu;
    // NOP
    ctx->pc = 0x143c80u;
}
